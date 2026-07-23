/*
 * XREFs of HdlspSendStringAtBaud @ 0x140C535CC
 * Callers:
 *     HdlspBugCheckProcessing @ 0x140C521F8 (HdlspBugCheckProcessing.c)
 *     HdlspDispatch @ 0x140C52320 (HdlspDispatch.c)
 *     HdlspEnableTerminal @ 0x140C529D4 (HdlspEnableTerminal.c)
 *     HdlspGetLine @ 0x140C52AA8 (HdlspGetLine.c)
 *     HdlspPutString @ 0x140C53304 (HdlspPutString.c)
 *     HdlspPutWideString @ 0x140C53474 (HdlspPutWideString.c)
 *     HdlspSendBlueScreenInfo @ 0x140C53528 (HdlspSendBlueScreenInfo.c)
 * Callees:
 *     InbvPortPutByte @ 0x140723658 (InbvPortPutByte.c)
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
