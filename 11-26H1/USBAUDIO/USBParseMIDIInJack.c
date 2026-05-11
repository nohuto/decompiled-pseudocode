/*
 * XREFs of USBParseMIDIInJack @ 0x1400384E0
 * Callers:
 *     USBParseConvertMIDIJacksAndElements @ 0x14002DAB4 (USBParseConvertMIDIJacksAndElements.c)
 * Callees:
 *     BusApiBuildTerminalFunctionUnit @ 0x14003492C (BusApiBuildTerminalFunctionUnit.c)
 *     USBParseGetMIDIJackStringFromDeviceID @ 0x14003799C (USBParseGetMIDIJackStringFromDeviceID.c)
 *     USBParseGetPinIndexForStreamingTerminal @ 0x140037F88 (USBParseGetPinIndexForStreamingTerminal.c)
 *     USBParseGetUnitString @ 0x1400381A0 (USBParseGetUnitString.c)
 */

__int64 __fastcall USBParseMIDIInJack(__int64 a1, __int64 a2, unsigned __int8 *a3)
{
  bool v3; // cf
  __int64 v5; // rax
  __int64 v8; // rcx
  unsigned int PinIndexForStreamingTerminal; // edi
  __int64 result; // rax
  const WCHAR *v11; // r8
  int v12; // ecx
  const WCHAR *v13; // [rsp+70h] [rbp+8h] BYREF

  v3 = *a3 < 6u;
  v5 = *(_QWORD *)(a1 + 16);
  v13 = 0LL;
  v8 = *(_QWORD *)(v5 + 72);
  if ( v3
    || (unsigned __int64)(a3 + 6) > *(_QWORD *)(v8 + 40)
                                  + (unsigned __int64)*(unsigned __int16 *)(*(_QWORD *)(v8 + 40) + 2LL) )
  {
    return 3221225858LL;
  }
  if ( a3[3] == 1 )
    PinIndexForStreamingTerminal = USBParseGetPinIndexForStreamingTerminal(v8, a3, 1);
  else
    PinIndexForStreamingTerminal = -1;
  result = USBParseGetUnitString(a1, a3, &v13);
  if ( (int)result >= 0 )
  {
    v11 = v13;
    if ( !v13 && PinIndexForStreamingTerminal != -1 )
    {
      result = USBParseGetMIDIJackStringFromDeviceID(a1, PinIndexForStreamingTerminal, &v13);
      if ( (int)result < 0 )
        return result;
      v11 = v13;
    }
    v12 = 257;
    if ( a3[3] != 1 )
      v12 = 2305;
    return BusApiBuildTerminalFunctionUnit(
             a1,
             a3[4] | (*(unsigned __int8 *)(a2 + 2) << 8),
             0,
             0,
             0,
             0,
             0LL,
             v11,
             0LL,
             v12,
             2,
             PinIndexForStreamingTerminal);
  }
  return result;
}
