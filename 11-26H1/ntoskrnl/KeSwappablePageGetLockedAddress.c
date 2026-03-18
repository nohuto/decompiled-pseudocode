/*
 * XREFs of KeSwappablePageGetLockedAddress @ 0x14022F49C
 * Callers:
 *     KeSwapProcessOrStack @ 0x1405F7C80 (KeSwapProcessOrStack.c)
 *     PspSchedulerSharedDataRegionSlotAllocate @ 0x140A83A6C (PspSchedulerSharedDataRegionSlotAllocate.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall KeSwappablePageGetLockedAddress(_QWORD *a1)
{
  if ( (a1[2] & 1) != 0 )
    return *a1;
  else
    return 0LL;
}
