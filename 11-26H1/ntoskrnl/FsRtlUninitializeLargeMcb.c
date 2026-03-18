/*
 * XREFs of FsRtlUninitializeLargeMcb @ 0x1403B5EB0
 * Callers:
 *     FsRtlUninitializeMcb @ 0x14078DF00 (FsRtlUninitializeMcb.c)
 * Callees:
 *     ExFreeToNPagedLookasideList @ 0x1403B5A60 (ExFreeToNPagedLookasideList.c)
 *     FsRtlUninitializeBaseMcb @ 0x1403B6010 (FsRtlUninitializeBaseMcb.c)
 */

void __stdcall FsRtlUninitializeLargeMcb(PLARGE_MCB Mcb)
{
  if ( Mcb->GuardedMutex )
  {
    ExFreeToNPagedLookasideList(&FsRtlFastMutexLookasideList, Mcb->GuardedMutex);
    Mcb->GuardedMutex = 0LL;
    FsRtlUninitializeBaseMcb(&Mcb->BaseMcb);
  }
}
