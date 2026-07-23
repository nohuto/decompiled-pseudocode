/*
 * XREFs of InbvPortPutByte @ 0x140723658
 * Callers:
 *     HdlspDispatch @ 0x140C52320 (HdlspDispatch.c)
 *     HdlspSendStringAtBaud @ 0x140C535CC (HdlspSendStringAtBaud.c)
 * Callees:
 *     KeStallExecutionProcessor @ 0x14037DCA0 (KeStallExecutionProcessor.c)
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 */

void __fastcall InbvPortPutByte(unsigned int a1, __int64 a2)
{
  char v2; // si
  unsigned __int64 *v3; // rdi
  unsigned int i; // ebx

  if ( a1 < 4 )
  {
    v2 = a2;
    v3 = &WheapPfaLock.Spare35[5 * a1 + 2];
    if ( *v3 )
    {
      for ( i = 0; i < 0x80; ++i )
      {
        LOBYTE(a2) = v2;
        if ( !(unsigned int)guard_dispatch_icall_no_overrides(v3, a2) )
          break;
        KeStallExecutionProcessor(0xAu);
      }
    }
  }
}
