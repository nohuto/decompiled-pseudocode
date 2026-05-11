/*
 * XREFs of USBParseFeatureUnit @ 0x1400375B0
 * Callers:
 *     USBParseConvertControlUnits @ 0x140036B74 (USBParseConvertControlUnits.c)
 * Callees:
 *     memset @ 0x14001CAC0 (memset.c)
 *     BusApiBuildFeatureFunctionUnit @ 0x140034620 (BusApiBuildFeatureFunctionUnit.c)
 *     USBParseGetUnitString @ 0x1400381A0 (USBParseGetUnitString.c)
 *     USBParseCountOutputChannelsForUnit @ 0x140042250 (USBParseCountOutputChannelsForUnit.c)
 *     USBParseGetChannelConfigForUnit @ 0x140042388 (USBParseGetChannelConfigForUnit.c)
 */

__int64 __fastcall USBParseFeatureUnit(__int64 a1, unsigned __int8 *a2)
{
  __int64 v4; // rdx
  __int64 v5; // rbx
  __int64 v6; // r8
  __int64 v7; // rdx
  __int64 v8; // rcx
  int v9; // esi
  __int64 result; // rax
  int v11; // r15d
  unsigned __int64 v12; // rbp
  unsigned int UnitString; // ebx
  unsigned int v14; // r14d
  _DWORD *Pool2; // rsi
  __int64 v16; // rdx
  int v17; // ecx
  __int16 v18; // r8
  int v19; // r9d
  int v20; // [rsp+80h] [rbp+8h] BYREF
  int v21; // [rsp+88h] [rbp+10h] BYREF
  const WCHAR *v22; // [rsp+90h] [rbp+18h] BYREF

  v4 = *a2;
  if ( (unsigned __int8)v4 < 6u )
    return 3221225473LL;
  v5 = *(_QWORD *)(*(_QWORD *)(a1 + 16) + 72LL);
  if ( (unsigned __int64)&a2[v4] > *(_QWORD *)(v5 + 40)
                                 + (unsigned __int64)*(unsigned __int16 *)(*(_QWORD *)(v5 + 40) + 2LL) )
    return 3221225473LL;
  v6 = a2[3];
  v7 = *(_QWORD *)(v5 + 48);
  v8 = *(_QWORD *)(v5 + 40);
  v21 = 0;
  v9 = 0;
  v20 = 0;
  v22 = 0LL;
  result = USBParseCountOutputChannelsForUnit(v8, v7, v6, &v21);
  if ( (int)result >= 0 )
  {
    result = USBParseGetChannelConfigForUnit(*(_QWORD *)(v5 + 40), *(_QWORD *)(v5 + 48), a2[3], &v20);
    if ( (int)result >= 0 )
    {
      v11 = v21;
      v12 = ((unsigned __int64)*a2 - 7) / a2[5];
      if ( (_DWORD)v12 != v21 + 1 )
      {
        if ( v20 )
        {
          if ( (unsigned int)v12 >= v21 + 1 )
            return (unsigned int)-1073741438;
          v9 = v21 - v12 + 1;
        }
        else
        {
          if ( (_DWORD)v12 != v21 )
            return (unsigned int)-1073741438;
          v9 = 1;
        }
      }
      UnitString = USBParseGetUnitString(a1, a2, &v22);
      if ( (UnitString & 0x80000000) != 0 )
        return UnitString;
      v14 = v9 + v12;
      Pool2 = (_DWORD *)ExAllocatePool2(256LL, 4LL * (unsigned int)(v9 + v12), 1096972357LL);
      if ( !Pool2 )
        return UnitString;
      v16 = 0LL;
      v21 = a2[4];
      if ( !(_DWORD)v12 )
      {
LABEL_20:
        if ( (unsigned int)v16 < v14 )
          memset(&Pool2[v16], 0, 4LL * (v14 - (unsigned int)v16));
        UnitString = BusApiBuildFeatureFunctionUnit(a1, a2[3], v11, v20, &v21, v22, Pool2);
        ExFreePool(Pool2);
        return UnitString;
      }
      while ( 1 )
      {
        v17 = a2[5];
        v18 = 0;
        if ( a2[5] )
          break;
LABEL_19:
        Pool2[v16] = v18 & 3 | (4 * (v18 & 0xFFFC));
        v16 = (unsigned int)(v16 + 1);
        if ( (unsigned int)v16 >= (unsigned int)v12 )
          goto LABEL_20;
      }
      v19 = v17 + v16 * v17;
      while ( *a2 >= (unsigned __int64)(unsigned int)--v19 + 6 )
      {
        v18 = a2[v19 + 6] | (unsigned __int16)(v18 << 8);
        if ( !--v17 )
          goto LABEL_19;
      }
      ExFreePool(Pool2);
      return 3221225473LL;
    }
  }
  return result;
}
