/*
 * XREFs of EtwpFreeApcPool @ 0x1404D2DE4
 * Callers:
 *     EtwpFreeLoggerContext @ 0x140A16604 (EtwpFreeLoggerContext.c)
 *     EtwpStartLogger @ 0x140AB0F2C (EtwpStartLogger.c)
 * Callees:
 *     KeBugCheck @ 0x140535E10 (KeBugCheck.c)
 *     RtlpInterlockedFlushSList @ 0x1407358E0 (RtlpInterlockedFlushSList.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

void __fastcall EtwpFreeApcPool(__int64 a1)
{
  PSLIST_ENTRY v2; // rdi
  _SLIST_ENTRY *v3; // rcx

  if ( *(int *)(a1 + 176) > 0 )
    KeBugCheck(0x11Du);
  v2 = RtlpInterlockedFlushSList((PSLIST_HEADER)(a1 + 16));
  while ( v2 )
  {
    v3 = v2 - 6;
    v2 = v2->Next;
    ExFreePoolWithTag(v3, 0);
    _InterlockedDecrement((volatile signed __int32 *)(a1 + 164));
  }
}
