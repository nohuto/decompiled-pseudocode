/*
 * XREFs of USBParseTerminalUnit @ 0x1400424C0
 * Callers:
 *     USBParseConvertControlUnits @ 0x140036B74 (USBParseConvertControlUnits.c)
 * Callees:
 *     BusApiBuildTerminalFunctionUnit @ 0x14003492C (BusApiBuildTerminalFunctionUnit.c)
 *     USBParseGetMicArrayDescriptor @ 0x140037E4C (USBParseGetMicArrayDescriptor.c)
 *     USBParseGetPinIndexForStreamingTerminal @ 0x140037F88 (USBParseGetPinIndexForStreamingTerminal.c)
 *     USBParseGetUnitString @ 0x1400381A0 (USBParseGetUnitString.c)
 *     USBParseCountOutputChannelsForUnit @ 0x140042250 (USBParseCountOutputChannelsForUnit.c)
 *     USBParseGetChannelConfigForUnit @ 0x140042388 (USBParseGetChannelConfigForUnit.c)
 */

__int64 __fastcall USBParseTerminalUnit(__int64 a1, unsigned __int8 *a2)
{
  __int64 v2; // rax
  __int64 v4; // r12
  int PinIndexForStreamingTerminal; // r14d
  __int64 v7; // rsi
  unsigned __int64 v8; // rdx
  __int64 v9; // rax
  unsigned int v10; // edi
  int MicArrayDescriptor; // eax
  int UnitString; // ecx
  int v13; // r8d
  __int64 v14; // rdx
  __int64 v15; // rcx
  int v17; // [rsp+A0h] [rbp+40h] BYREF
  __int64 v18; // [rsp+A8h] [rbp+48h] BYREF
  int v19; // [rsp+B0h] [rbp+50h] BYREF
  const WCHAR *v20; // [rsp+B8h] [rbp+58h] BYREF

  v2 = *(_QWORD *)(a1 + 16);
  v4 = 0LL;
  v20 = 0LL;
  PinIndexForStreamingTerminal = -1;
  v18 = 0LL;
  v7 = *(_QWORD *)(v2 + 72);
  v8 = *(_QWORD *)(v7 + 40) + *(unsigned __int16 *)(*(_QWORD *)(v7 + 40) + 2LL);
  v9 = *a2;
  if ( a2[2] == 2 )
  {
    if ( (unsigned __int8)v9 >= 0xCu && (unsigned __int64)&a2[v9] <= v8 )
    {
      v10 = 0;
      v17 = -1;
      if ( *((_WORD *)a2 + 2) == 517 )
      {
        MicArrayDescriptor = USBParseGetMicArrayDescriptor(a1, (__int64)a2, &v18);
        UnitString = 0;
        if ( MicArrayDescriptor != -1073741275 )
          UnitString = MicArrayDescriptor;
        if ( UnitString < 0 )
          return (unsigned int)UnitString;
        v4 = v18;
      }
LABEL_12:
      UnitString = USBParseGetUnitString(a1, a2, &v20);
      if ( UnitString >= 0 )
      {
        v13 = a2[3];
        v14 = *(_QWORD *)(v7 + 48);
        v15 = *(_QWORD *)(v7 + 40);
        v19 = 0;
        LODWORD(v18) = 0;
        UnitString = USBParseCountOutputChannelsForUnit(v15, v14, v13, &v19);
        if ( UnitString >= 0 )
        {
          UnitString = USBParseGetChannelConfigForUnit(*(_QWORD *)(v7 + 40), *(_QWORD *)(v7 + 48), a2[3], &v18);
          if ( UnitString >= 0 )
          {
            if ( *((_WORD *)a2 + 2) == 257 )
              PinIndexForStreamingTerminal = USBParseGetPinIndexForStreamingTerminal(v7, a2, 0);
            return (unsigned int)BusApiBuildTerminalFunctionUnit(
                                   a1,
                                   a2[3],
                                   v10,
                                   v19,
                                   v18,
                                   v10,
                                   &v17,
                                   v20,
                                   v4,
                                   *((unsigned __int16 *)a2 + 2),
                                   1,
                                   PinIndexForStreamingTerminal);
          }
        }
      }
      return (unsigned int)UnitString;
    }
  }
  else if ( (unsigned __int8)v9 >= 9u && (unsigned __int64)&a2[v9] <= v8 )
  {
    v10 = 1;
    v17 = a2[7];
    goto LABEL_12;
  }
  return 3221225473LL;
}
