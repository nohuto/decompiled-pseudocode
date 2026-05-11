/*
 * XREFs of USBParseMixerUnit @ 0x1400387E0
 * Callers:
 *     USBParseConvertControlUnits @ 0x140036B74 (USBParseConvertControlUnits.c)
 * Callees:
 *     USBHwAllocateAndBag @ 0x14002D6A0 (USBHwAllocateAndBag.c)
 *     BusApiBuildMixerFunctionUnit @ 0x140034754 (BusApiBuildMixerFunctionUnit.c)
 *     USBParseBuildSourceIdArray @ 0x140036B04 (USBParseBuildSourceIdArray.c)
 *     USBParseGetUnitString @ 0x1400381A0 (USBParseGetUnitString.c)
 *     USBParseCountOutputChannelsForUnit @ 0x140042250 (USBParseCountOutputChannelsForUnit.c)
 *     USBParseGetChannelConfigForUnit @ 0x140042388 (USBParseGetChannelConfigForUnit.c)
 */

__int64 __fastcall USBParseMixerUnit(__int64 a1, unsigned __int8 *a2)
{
  __int64 v3; // rdx
  __int64 v5; // r15
  unsigned __int64 v6; // r14
  __int64 v7; // rcx
  unsigned __int8 *v8; // rsi
  int UnitString; // edi
  int v10; // ecx
  unsigned int i; // edx
  int v12; // r8d
  int v13; // eax
  int v14; // edx
  int v15; // r12d
  unsigned __int64 v16; // rcx
  __int64 v17; // r13
  unsigned __int64 v18; // rax
  __int64 v19; // r14
  __int64 result; // rax
  unsigned int v21; // r14d
  unsigned int v22; // r12d
  bool v23; // zf
  char *v24; // r14
  char *v25; // rcx
  signed __int64 v26; // rsi
  int *v27; // rsi
  __int64 v28; // r8
  __int64 v29; // rdx
  __int64 v30; // rcx
  const WCHAR *v31; // [rsp+50h] [rbp-18h] BYREF
  int v33; // [rsp+B8h] [rbp+50h] BYREF
  unsigned int v34; // [rsp+C0h] [rbp+58h] BYREF
  char *v35; // [rsp+C8h] [rbp+60h] BYREF

  v3 = *a2;
  v5 = *(_QWORD *)(*(_QWORD *)(a1 + 16) + 72LL);
  if ( (unsigned __int8)v3 < 5u )
    return 3221225473LL;
  v6 = *(_QWORD *)(v5 + 40) + *(unsigned __int16 *)(*(_QWORD *)(v5 + 40) + 2LL);
  if ( (unsigned __int64)&a2[v3] > v6 )
    return 3221225473LL;
  v7 = a2[4];
  if ( (unsigned __int64)&a2[v7 + 9] > v6 )
    return 3221225473LL;
  v8 = &a2[v7 + 5];
  v31 = 0LL;
  UnitString = USBParseGetUnitString(a1, a2, &v31);
  if ( UnitString < 0 )
    return (unsigned int)UnitString;
  if ( *(_WORD *)(v8 + 1) )
  {
    v10 = 0;
    for ( i = 0; i < 0x10; ++i )
    {
      v13 = v10 + 1;
      v12 = *(unsigned __int16 *)(v8 + 1);
      if ( !_bittest(&v12, i) )
        v13 = v10;
      v10 = v13;
    }
    if ( v13 != *v8 )
      return (unsigned int)-1073741438;
  }
  v14 = a2[4];
  v15 = 0;
  v16 = *a2;
  v33 = 0;
  v35 = 0LL;
  if ( v16 < (unsigned __int64)(unsigned int)(v14 + 1) + 9 )
    return 3221225473LL;
  v34 = v16 - (v14 + 1) - 9;
  v17 = v34;
  v18 = (unsigned __int64)&v8[v34 + 3];
  if ( v18 >= v6 || v18 <= (unsigned __int64)a2 || (__int64)v16 < (__int64)&v8[v34 - (_QWORD)a2 + 4] )
    return 3221225473LL;
  v19 = 0LL;
  if ( !v14 )
  {
LABEL_19:
    v21 = v34;
    v22 = ((((_BYTE)v15 * *v8) & 7) != 0) + ((v15 * (unsigned int)*v8) >> 3);
    if ( v22 <= v34 )
    {
      v24 = (char *)(v8 + 4);
    }
    else
    {
      UnitString = USBHwAllocateAndBag((PVOID *)&v35, v22, 256LL, *(void **)(a1 + 8));
      if ( UnitString < 0 )
        return (unsigned int)-1073741670;
      v23 = v21 == 0;
      v24 = v35;
      if ( !v23 )
      {
        v25 = v35;
        v26 = v8 - (unsigned __int8 *)v35;
        do
        {
          *v25 = v25[v26 + 4];
          ++v25;
          --v17;
        }
        while ( v17 );
      }
    }
    v27 = (int *)USBParseBuildSourceIdArray(a2[4], a2 + 5);
    if ( v27 )
    {
      v28 = a2[3];
      v29 = *(_QWORD *)(v5 + 48);
      v30 = *(_QWORD *)(v5 + 40);
      v34 = 0;
      v33 = 0;
      UnitString = USBParseCountOutputChannelsForUnit(v30, v29, v28, &v34);
      if ( UnitString >= 0 )
      {
        UnitString = USBParseGetChannelConfigForUnit(*(_QWORD *)(v5 + 40), *(_QWORD *)(v5 + 48), a2[3], &v33);
        if ( UnitString >= 0 )
          UnitString = BusApiBuildMixerFunctionUnit(a1, a2[3], v34, v33, a2[4], v27, v31, v22, v24);
      }
      ExFreePool(v27);
    }
    return (unsigned int)UnitString;
  }
  while ( 1 )
  {
    result = USBParseCountOutputChannelsForUnit(*(_QWORD *)(v5 + 40), *(_QWORD *)(v5 + 48), a2[v19 + 5], &v33);
    UnitString = result;
    if ( (int)result < 0 )
      return result;
    v15 += v33;
    v19 = (unsigned int)(v19 + 1);
    if ( (unsigned int)v19 >= a2[4] )
      goto LABEL_19;
  }
}
