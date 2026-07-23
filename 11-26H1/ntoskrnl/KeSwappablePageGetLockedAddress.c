/*
 * XREFs of KeSwappablePageGetLockedAddress @ 0x140230E2C
 * Callers:
 *     KeSwapProcessOrStack @ 0x1405FA6A0 (KeSwapProcessOrStack.c)
 *     PspSchedulerSharedDataRegionSlotAllocate @ 0x14094CB6C (PspSchedulerSharedDataRegionSlotAllocate.c)
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
