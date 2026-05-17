/*
 * XREFs of RtlpInitializeWnf @ 0x180070624
 * Callers:
 *     RtlpSubscribeWnfStateChangeNotificationInternal @ 0x18006E03C (RtlpSubscribeWnfStateChangeNotificationInternal.c)
 * Callees:
 *     RtlFreeHeap_0 @ 0x18003FD10 (RtlFreeHeap_0.c)
 *     RtlAllocateHeap_0 @ 0x1800439E0 (RtlAllocateHeap_0.c)
 *     TpAllocTimer @ 0x18004EC00 (TpAllocTimer.c)
 *     TpReleaseTimer @ 0x180067E70 (TpReleaseTimer.c)
 *     RtlpWnfRegisterTpNotification @ 0x180070714 (RtlpWnfRegisterTpNotification.c)
 *     memset$thunk$772440563353939046 @ 0x180170030 (memset$thunk$772440563353939046.c)
 */

__int64 RtlpInitializeWnf()
{
  __int64 Heap_0; // rax
  __int64 v1; // rbx
  __int64 v2; // rdx
  __int64 v3; // r8

  Heap_0 = RtlAllocateHeap_0();
  v1 = Heap_0;
  if ( Heap_0 )
  {
    memset_thunk_772440563353939046((void *)(Heap_0 + 4), 0, 0x54uLL);
    *(_DWORD *)v1 = 5769489;
    if ( (int)TpAllocTimer((__int64 *)(v1 + 72), (__int64)RtlpWnfRetryTimerCallback, 0, 0LL) >= 0 )
    {
      *(_QWORD *)(v1 + 16) = 0LL;
      *(_QWORD *)(v1 + 24) = 0LL;
      *(_QWORD *)(v1 + 8) = 0LL;
      *(_QWORD *)(v1 + 40) = v1 + 32;
      *(_QWORD *)(v1 + 32) = v1 + 32;
      *(_QWORD *)(v1 + 48) = 0LL;
      *(_DWORD *)(v1 + 56) = 500;
      *(_DWORD *)(v1 + 60) = 1000;
      *(_DWORD *)(v1 + 64) = 3600000;
      *(_DWORD *)(v1 + 68) = 10;
      if ( (int)RtlpWnfRegisterTpNotification() >= 0 )
      {
        qword_1801C7200 = v1;
        return 1LL;
      }
      TpReleaseTimer(*(_QWORD *)(v1 + 72), v2, v3);
    }
    RtlFreeHeap_0();
  }
  return 0LL;
}
