/*
 * XREFs of IovExpandIrpStackTracker @ 0x140C2A97C
 * Callers:
 *     ViIovInitialization @ 0x140C2AC6C (ViIovInitialization.c)
 *     VfBeforeCallDriver @ 0x140C2C2D8 (VfBeforeCallDriver.c)
 * Callees:
 *     RtlpInterlockedPushEntrySList @ 0x140730CD0 (RtlpInterlockedPushEntrySList.c)
 *     ExAllocatePool2 @ 0x140C10430 (ExAllocatePool2.c)
 */

char IovExpandIrpStackTracker()
{
  struct _SLIST_ENTRY *Pool2; // rax
  struct _SLIST_ENTRY *v1; // rbx
  __int64 v2; // rdi

  Pool2 = (struct _SLIST_ENTRY *)ExAllocatePool2(576LL, 0x10000uLL, 0x53766F49u);
  v1 = Pool2;
  if ( Pool2 )
  {
    RtlpInterlockedPushEntrySList((PSLIST_HEADER)&stru_140E27B08.QueueListEntry, Pool2);
    v2 = 2047LL;
    do
    {
      v1 += 2;
      RtlpInterlockedPushEntrySList((PSLIST_HEADER)&stru_140E27B08.LastXStateSaveDebugInfo, v1);
      --v2;
    }
    while ( v2 );
    LOBYTE(Pool2) = 1;
  }
  return (char)Pool2;
}
