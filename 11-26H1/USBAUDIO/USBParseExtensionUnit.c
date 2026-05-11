/*
 * XREFs of USBParseExtensionUnit @ 0x1400373E0
 * Callers:
 *     USBParseConvertControlUnits @ 0x140036B74 (USBParseConvertControlUnits.c)
 * Callees:
 *     BusApiBuildExtensionFunctionUnit @ 0x14003459C (BusApiBuildExtensionFunctionUnit.c)
 *     USBParseBuildSourceIdArray @ 0x140036B04 (USBParseBuildSourceIdArray.c)
 *     USBParseGetUnitString @ 0x1400381A0 (USBParseGetUnitString.c)
 *     USBParseCountOutputChannelsForUnit @ 0x140042250 (USBParseCountOutputChannelsForUnit.c)
 *     USBParseGetChannelConfigForUnit @ 0x140042388 (USBParseGetChannelConfigForUnit.c)
 */

__int64 __fastcall USBParseExtensionUnit(__int64 a1, unsigned __int8 *a2)
{
  __int64 v4; // r9
  __int64 v5; // r15
  unsigned __int64 v6; // rcx
  __int64 v7; // rdx
  unsigned __int8 *v8; // rdx
  int v9; // esi
  __int64 v10; // r8
  unsigned __int64 v11; // rax
  int v12; // ecx
  unsigned __int8 *v13; // rdx
  int v14; // eax
  int UnitString; // edi
  int *v16; // rbp
  __int64 v17; // r8
  __int64 v18; // rdx
  __int64 v19; // rcx
  int v21; // [rsp+80h] [rbp+8h] BYREF
  int v22; // [rsp+88h] [rbp+10h] BYREF
  const WCHAR *v23; // [rsp+90h] [rbp+18h] BYREF

  if ( *a2 < 7u )
    return 3221225473LL;
  v4 = *a2;
  v5 = *(_QWORD *)(*(_QWORD *)(a1 + 16) + 72LL);
  v6 = *(_QWORD *)(v5 + 40) + *(unsigned __int16 *)(*(_QWORD *)(v5 + 40) + 2LL);
  if ( (unsigned __int64)&a2[v4] > v6 )
    return 3221225473LL;
  v7 = a2[6];
  if ( (unsigned __int64)&a2[v7 + 12] > v6 )
    return 3221225473LL;
  v23 = 0LL;
  v8 = &a2[v7 + 7];
  v9 = 0;
  v10 = v8[4];
  v11 = (unsigned __int64)&v8[v10 + 5];
  if ( v11 >= v6 || v11 <= (unsigned __int64)a2 || v4 < (__int64)&v8[v8[4] - (_QWORD)a2 + 6] )
    return 3221225473LL;
  v12 = v8[4];
  if ( (_BYTE)v10 )
  {
    v13 = &v8[v8[4] + 5];
    do
    {
      v14 = *v13--;
      v9 = v14 | (v9 << 8);
      --v12;
    }
    while ( v12 );
  }
  UnitString = USBParseGetUnitString(a1, a2, &v23);
  if ( UnitString >= 0 )
  {
    v16 = (int *)USBParseBuildSourceIdArray(a2[6], a2 + 7);
    if ( v16 )
    {
      v17 = a2[3];
      v18 = *(_QWORD *)(v5 + 48);
      v19 = *(_QWORD *)(v5 + 40);
      v22 = 0;
      v21 = 0;
      UnitString = USBParseCountOutputChannelsForUnit(v19, v18, v17, &v22);
      if ( UnitString >= 0 )
      {
        UnitString = USBParseGetChannelConfigForUnit(*(_QWORD *)(v5 + 40), *(_QWORD *)(v5 + 48), a2[3], &v21);
        if ( UnitString >= 0 )
          UnitString = BusApiBuildExtensionFunctionUnit(
                         a1,
                         a2[3],
                         v22,
                         v21,
                         a2[6],
                         v16,
                         v23,
                         *((unsigned __int16 *)a2 + 2),
                         v9);
      }
      ExFreePool(v16);
    }
    else
    {
      return (unsigned int)-1073741670;
    }
  }
  return (unsigned int)UnitString;
}
