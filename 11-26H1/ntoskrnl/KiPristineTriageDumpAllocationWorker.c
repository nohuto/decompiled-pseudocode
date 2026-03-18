/*
 * XREFs of KiPristineTriageDumpAllocationWorker @ 0x1405FA4C0
 * Callers:
 *     <none>
 * Callees:
 *     ExAllocatePool2 @ 0x140C10430 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140C10E50 (ExFreePoolWithTag.c)
 */

void KiPristineTriageDumpAllocationWorker()
{
  void *Pool2; // rax

  if ( *(_DWORD *)&KsepShimDbLock.WaitBlockFill11[124] )
  {
    Pool2 = (void *)ExAllocatePool2(0x40uLL);
    if ( Pool2 )
    {
      if ( _InterlockedCompareExchange64(
             (volatile signed __int64 *)&KsepShimDbLock.WaitBlock[2].Object,
             (signed __int64)Pool2,
             0LL) )
      {
        ExFreePoolWithTag(Pool2, 0);
      }
    }
  }
}
