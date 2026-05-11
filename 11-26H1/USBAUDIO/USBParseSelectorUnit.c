/*
 * XREFs of USBParseSelectorUnit @ 0x140038D10
 * Callers:
 *     USBParseConvertControlUnits @ 0x140036B74 (USBParseConvertControlUnits.c)
 * Callees:
 *     BusApiBuildFunctionUnit @ 0x14002D1E0 (BusApiBuildFunctionUnit.c)
 *     USBParseBuildSourceIdArray @ 0x140036B04 (USBParseBuildSourceIdArray.c)
 *     USBParseGetUnitString @ 0x1400381A0 (USBParseGetUnitString.c)
 *     USBParseCountOutputChannelsForUnit @ 0x140042250 (USBParseCountOutputChannelsForUnit.c)
 *     USBParseGetChannelConfigForUnit @ 0x140042388 (USBParseGetChannelConfigForUnit.c)
 */

__int64 __fastcall USBParseSelectorUnit(__int64 a1, unsigned __int8 *a2)
{
  __int64 v4; // rdx
  __int64 v5; // r14
  unsigned __int64 v6; // r9
  __int64 v7; // rcx
  const WCHAR *SourceString; // rbp
  int UnitString; // edi
  int *v11; // rsi
  __int64 v12; // r8
  __int64 v13; // rdx
  __int64 v14; // rcx
  int v15; // edx
  unsigned int v16; // [rsp+28h] [rbp-50h]
  const WCHAR *v17; // [rsp+80h] [rbp+8h] BYREF
  int v18; // [rsp+88h] [rbp+10h] BYREF
  __int64 v19; // [rsp+90h] [rbp+18h] BYREF

  v4 = *a2;
  if ( (unsigned __int8)v4 >= 5u )
  {
    v5 = *(_QWORD *)(*(_QWORD *)(a1 + 16) + 72LL);
    v6 = *(_QWORD *)(v5 + 40) + *(unsigned __int16 *)(*(_QWORD *)(v5 + 40) + 2LL);
    if ( (unsigned __int64)&a2[v4] <= v6 )
    {
      v7 = a2[4];
      if ( (unsigned __int64)&a2[v7 + 5] <= v6 )
      {
        SourceString = 0LL;
        UnitString = 0;
        v17 = 0LL;
        if ( (_BYTE)v7 )
        {
          if ( (_DWORD)v4 - 6 == (_DWORD)v7 )
          {
            UnitString = USBParseGetUnitString(a1, a2, &v17);
            if ( UnitString < 0 )
              return (unsigned int)-1073741670;
            SourceString = v17;
          }
          else if ( (_DWORD)v4 - 6 + 1 != (_DWORD)v7 )
          {
            return (unsigned int)-1073741670;
          }
          v11 = (int *)USBParseBuildSourceIdArray(a2[4], a2 + 5);
          if ( v11 )
          {
            v12 = a2[3];
            v13 = *(_QWORD *)(v5 + 48);
            v14 = *(_QWORD *)(v5 + 40);
            v18 = 0;
            LODWORD(v17) = 0;
            UnitString = USBParseCountOutputChannelsForUnit(v14, v13, v12, &v18);
            if ( UnitString >= 0 )
            {
              UnitString = USBParseGetChannelConfigForUnit(*(_QWORD *)(v5 + 40), *(_QWORD *)(v5 + 48), a2[3], &v17);
              if ( UnitString >= 0 )
              {
                v15 = a2[3];
                v16 = a2[4];
                v19 = 0LL;
                UnitString = BusApiBuildFunctionUnit(a1, v15, 3, v18, (int)v17, v16, v11, SourceString, 0, &v19);
              }
            }
            ExFreePool(v11);
          }
          return (unsigned int)UnitString;
        }
        return (unsigned int)-1073741670;
      }
    }
  }
  return 3221225473LL;
}
