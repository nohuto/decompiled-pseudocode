/*
 * XREFs of IovExpandIrpStackTracker @ 0x140C3098C
 * Callers:
 *     ViIovInitialization @ 0x140C30C7C (ViIovInitialization.c)
 *     VfBeforeCallDriver @ 0x140C322E8 (VfBeforeCallDriver.c)
 * Callees:
 *     RtlpInterlockedPushEntrySList @ 0x1407358A0 (RtlpInterlockedPushEntrySList.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 */

char IovExpandIrpStackTracker()
{
  _SLIST_ENTRY *Pool2; // rax
  _SLIST_ENTRY *v1; // rbx
  __int64 v2; // rdi

  Pool2 = (_SLIST_ENTRY *)ExAllocatePool2(576LL, 0x10000uLL, 0x53766F49u);
  v1 = Pool2;
  if ( Pool2 )
  {
    RtlpInterlockedPushEntrySList((PSLIST_HEADER)&stru_140E27C48.LastXStateSaveDebugInfo, Pool2);
    v2 = 2047LL;
    do
    {
      v1 += 2;
      RtlpInterlockedPushEntrySList((PSLIST_HEADER)&stru_140E27C48.QueueListEntry, v1);
      --v2;
    }
    while ( v2 );
    LOBYTE(Pool2) = 1;
  }
  return (char)Pool2;
}
