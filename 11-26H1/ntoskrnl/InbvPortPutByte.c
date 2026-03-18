/*
 * XREFs of InbvPortPutByte @ 0x14071E9C8
 * Callers:
 *     HdlspDispatch @ 0x140C4C320 (HdlspDispatch.c)
 *     HdlspSendStringAtBaud @ 0x140C4D5CC (HdlspSendStringAtBaud.c)
 * Callees:
 *     KeStallExecutionProcessor @ 0x14037BEF0 (KeStallExecutionProcessor.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1407311E0 (_guard_dispatch_icall_no_overrides.c)
 */

void __fastcall InbvPortPutByte(unsigned int a1, __int64 a2)
{
  char v2; // si
  struct _LIST_ENTRY **v3; // rdi
  unsigned int i; // ebx

  if ( a1 < 4 )
  {
    v2 = a2;
    v3 = &WheapPfaLock.GlobalUpdateVpThreadPriorityListEntry.Flink + 5 * a1;
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
