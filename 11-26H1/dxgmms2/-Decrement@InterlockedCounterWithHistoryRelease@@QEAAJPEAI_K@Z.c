/*
 * XREFs of ?Decrement@InterlockedCounterWithHistoryRelease@@QEAAJPEAI_K@Z @ 0x140017F9C
 * Callers:
 *     ?VidMmUnreferencePrimaryAllocation@@YAXPEAVHwQueueStagingList@@PEAUVIDMM_ALLOC@@_N2_K3PEAI@Z @ 0x140039F80 (-VidMmUnreferencePrimaryAllocation@@YAXPEAVHwQueueStagingList@@PEAUVIDMM_ALLOC@@_N2_K3PEAI@Z.c)
 *     VidMmUnreferencePrimaryAllocation @ 0x14004D960 (VidMmUnreferencePrimaryAllocation.c)
 * Callees:
 *     ?AddHistoryEntry@InterlockedCounterWithHistoryRelease@@AEAAXJ_K@Z @ 0x140016110 (-AddHistoryEntry@InterlockedCounterWithHistoryRelease@@AEAAXJ_K@Z.c)
 */

__int64 __fastcall InterlockedCounterWithHistoryRelease::Decrement(
        InterlockedCounterWithHistoryRelease *this,
        unsigned int *a2)
{
  signed __int32 v2; // ebx

  v2 = _InterlockedExchangeAdd((volatile signed __int32 *)this, 0xFFFFFFFF);
  if ( a2 )
    --*a2;
  InterlockedCounterWithHistoryRelease::AddHistoryEntry(this, v2 - 1);
  return (unsigned int)(v2 - 1);
}
