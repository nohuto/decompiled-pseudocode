/*
 * XREFs of USBParseMIDIOutJack @ 0x140038610
 * Callers:
 *     USBParseConvertMIDIJacksAndElements @ 0x14002DAB4 (USBParseConvertMIDIJacksAndElements.c)
 * Callees:
 *     BusApiBuildTerminalFunctionUnit @ 0x14003492C (BusApiBuildTerminalFunctionUnit.c)
 *     USBParseGetMIDIJackStringFromDeviceID @ 0x14003799C (USBParseGetMIDIJackStringFromDeviceID.c)
 *     USBParseGetPinIndexForStreamingTerminal @ 0x140037F88 (USBParseGetPinIndexForStreamingTerminal.c)
 *     USBParseGetUnitString @ 0x1400381A0 (USBParseGetUnitString.c)
 */

__int64 __fastcall USBParseMIDIOutJack(__int64 a1, __int64 a2, unsigned __int8 *a3)
{
  __int64 v3; // rax
  __int64 v7; // r9
  unsigned __int64 v8; // rax
  __int64 v9; // r8
  unsigned int PinIndexForStreamingTerminal; // esi
  int UnitString; // edi
  const WCHAR *v12; // rbp
  int v13; // r15d
  int *Pool2; // r12
  unsigned int v15; // ecx
  __int64 v16; // rdx
  int v17; // eax
  const WCHAR *v19; // [rsp+90h] [rbp+8h] BYREF

  v3 = *(_QWORD *)(a1 + 16);
  v19 = 0LL;
  v7 = *(_QWORD *)(v3 + 72);
  v8 = *a3;
  if ( (unsigned __int8)v8 >= 6u )
  {
    v9 = a3[5];
    if ( v8 >= 2 * v9 + 7
      && (unsigned __int64)&a3[2 * v9 + 7] <= *(_QWORD *)(v7 + 40)
                                            + (unsigned __int64)*(unsigned __int16 *)(*(_QWORD *)(v7 + 40) + 2LL) )
    {
      if ( a3[3] == 1 )
        PinIndexForStreamingTerminal = USBParseGetPinIndexForStreamingTerminal(v7, a3, 1);
      else
        PinIndexForStreamingTerminal = -1;
      UnitString = USBParseGetUnitString(a1, a3, &v19);
      if ( UnitString >= 0 )
      {
        v12 = v19;
        if ( v19 || PinIndexForStreamingTerminal == -1 )
        {
LABEL_12:
          v13 = *(unsigned __int8 *)(a2 + 2) << 8;
          Pool2 = (int *)ExAllocatePool2(256LL, 4LL * a3[5], 1096972357LL);
          UnitString = -1073741670;
          if ( Pool2 )
          {
            LOBYTE(v15) = a3[5];
            v16 = 0LL;
            if ( (_BYTE)v15 )
            {
              do
              {
                Pool2[v16] = v13 | a3[2 * v16 + 6];
                v16 = (unsigned int)(v16 + 1);
                v15 = a3[5];
              }
              while ( (unsigned int)v16 < v15 );
            }
            v17 = 257;
            if ( a3[3] != 1 )
              v17 = 2305;
            UnitString = BusApiBuildTerminalFunctionUnit(
                           a1,
                           v13 | (unsigned int)a3[4],
                           1,
                           0,
                           0,
                           (unsigned __int8)v15,
                           Pool2,
                           v12,
                           0LL,
                           v17,
                           2,
                           PinIndexForStreamingTerminal);
            ExFreePool(Pool2);
          }
          return (unsigned int)UnitString;
        }
        UnitString = USBParseGetMIDIJackStringFromDeviceID(a1, PinIndexForStreamingTerminal, &v19);
        if ( UnitString >= 0 )
        {
          v12 = v19;
          goto LABEL_12;
        }
      }
      return (unsigned int)UnitString;
    }
  }
  return 3221225858LL;
}
