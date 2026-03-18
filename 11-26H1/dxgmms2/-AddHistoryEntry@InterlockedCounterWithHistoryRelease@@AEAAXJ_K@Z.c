/*
 * XREFs of ?AddHistoryEntry@InterlockedCounterWithHistoryRelease@@AEAAXJ_K@Z @ 0x140016110
 * Callers:
 *     ?VidSchiProcessCompletedQueuePacketInternal@@YAPEAU_VIDSCH_QUEUE_PACKET@@PEAU1@@Z @ 0x14000DF40 (-VidSchiProcessCompletedQueuePacketInternal@@YAPEAU_VIDSCH_QUEUE_PACKET@@PEAU1@@Z.c)
 *     ?VidSchiCompleteHwQueuePacket@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_QUEUE_PACKET@@_N@Z @ 0x140013A80 (-VidSchiCompleteHwQueuePacket@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_QUEUE_PACKET@@_N@Z.c)
 *     ?Decrement@InterlockedCounterWithHistoryRelease@@QEAAJPEAI_K@Z @ 0x140017F9C (-Decrement@InterlockedCounterWithHistoryRelease@@QEAAJPEAI_K@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall InterlockedCounterWithHistoryRelease::AddHistoryEntry(
        InterlockedCounterWithHistoryRelease *this,
        int a2)
{
  unsigned __int64 v2; // rbx

  v2 = (unsigned __int64)*((unsigned int *)this + 130) << 6;
  *((_DWORD *)this + 130) = ((unsigned __int8)*((_DWORD *)this + 130) + 1) & 7;
  *(_DWORD *)((char *)this + v2 + 64) = a2;
  *(_QWORD *)((char *)this + v2 + 8) = 0LL;
  *(_WORD *)((char *)this + v2 + 68) = RtlCaptureStackBackTrace(1u, 6u, (PVOID *)((char *)this + v2 + 16), 0LL);
}
