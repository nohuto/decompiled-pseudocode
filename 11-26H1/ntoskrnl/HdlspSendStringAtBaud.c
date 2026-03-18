/*
 * XREFs of HdlspSendStringAtBaud @ 0x140C4D5CC
 * Callers:
 *     HdlspBugCheckProcessing @ 0x140C4C1F8 (HdlspBugCheckProcessing.c)
 *     HdlspDispatch @ 0x140C4C320 (HdlspDispatch.c)
 *     HdlspEnableTerminal @ 0x140C4C9D4 (HdlspEnableTerminal.c)
 *     HdlspGetLine @ 0x140C4CAA8 (HdlspGetLine.c)
 *     HdlspPutString @ 0x140C4D304 (HdlspPutString.c)
 *     HdlspPutWideString @ 0x140C4D474 (HdlspPutWideString.c)
 *     HdlspSendBlueScreenInfo @ 0x140C4D528 (HdlspSendBlueScreenInfo.c)
 * Callees:
 *     InbvPortPutByte @ 0x14071E9C8 (InbvPortPutByte.c)
 */

char __fastcall HdlspSendStringAtBaud(_BYTE *a1, __int64 a2)
{
  char result; // al
  _BYTE *v3; // rbx

  result = *a1;
  v3 = a1;
  while ( result )
  {
    LOBYTE(a2) = result;
    InbvPortPutByte(*((_DWORD *)HeadlessGlobals + 14), a2);
    result = *++v3;
  }
  return result;
}
