/*
 * XREFs of EtwpFreeApcPool @ 0x1404D9704
 * Callers:
 *     EtwpFreeLoggerContext @ 0x140A6CBB4 (EtwpFreeLoggerContext.c)
 *     EtwpStartLogger @ 0x140A6E1B4 (EtwpStartLogger.c)
 * Callees:
 *     KeBugCheck @ 0x140533990 (KeBugCheck.c)
 *     RtlpInterlockedFlushSList @ 0x140730D10 (RtlpInterlockedFlushSList.c)
 *     ExFreePoolWithTag @ 0x140C10E50 (ExFreePoolWithTag.c)
 */

void __fastcall EtwpFreeApcPool(__int64 a1)
{
  PSLIST_ENTRY v2; // rdi
  struct _SLIST_ENTRY *v3; // rcx

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
