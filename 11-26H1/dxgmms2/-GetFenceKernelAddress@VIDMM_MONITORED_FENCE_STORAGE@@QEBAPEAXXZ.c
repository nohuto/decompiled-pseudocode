/*
 * XREFs of ?GetFenceKernelAddress@VIDMM_MONITORED_FENCE_STORAGE@@QEBAPEAXXZ @ 0x140046CB0
 * Callers:
 *     VidSchSetHwQueueProgressFenceObject @ 0x1400995B0 (VidSchSetHwQueueProgressFenceObject.c)
 *     VidMmAllocateFenceStorageSlot @ 0x1400CAEF0 (VidMmAllocateFenceStorageSlot.c)
 * Callees:
 *     <none>
 */

void *__fastcall VIDMM_MONITORED_FENCE_STORAGE::GetFenceKernelAddress(VIDMM_MONITORED_FENCE_STORAGE *this)
{
  return (void *)(*(_QWORD *)(*(_QWORD *)this + 192LL) + *((unsigned int *)this + 4));
}
