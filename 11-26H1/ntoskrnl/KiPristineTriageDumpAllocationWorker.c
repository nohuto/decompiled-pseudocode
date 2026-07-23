/*
 * XREFs of KiPristineTriageDumpAllocationWorker @ 0x1405FCEE0
 * Callers:
 *     <none>
 * Callees:
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

void KiPristineTriageDumpAllocationWorker()
{
  void *Pool2; // rax

  if ( KsepShimDbLock.UserTime )
  {
    Pool2 = (void *)ExAllocatePool2(0x40uLL);
    if ( Pool2 )
    {
      if ( _InterlockedCompareExchange64(
             (volatile signed __int64 *)&KsepShimDbLock.SuspendEvent.Header.Lock,
             (signed __int64)Pool2,
             0LL) )
      {
        ExFreePoolWithTag(Pool2, 0);
      }
    }
  }
}
