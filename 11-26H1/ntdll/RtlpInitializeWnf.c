/*
 * XREFs of RtlpInitializeWnf @ 0x180090A74
 * Callers:
 *     RtlpSubscribeWnfStateChangeNotificationInternal @ 0x18008E48C (RtlpSubscribeWnfStateChangeNotificationInternal.c)
 * Callees:
 *     RtlFreeHeap_0 @ 0x18002A280 (RtlFreeHeap_0.c)
 *     RtlAllocateHeap_0 @ 0x18002DF50 (RtlAllocateHeap_0.c)
 *     TpAllocTimer @ 0x180039180 (TpAllocTimer.c)
 *     TpReleaseTimer @ 0x1800882C0 (TpReleaseTimer.c)
 *     RtlpWnfRegisterTpNotification @ 0x180090B64 (RtlpWnfRegisterTpNotification.c)
 *     memset$thunk$772440563353939046 @ 0x18016F030 (memset$thunk$772440563353939046.c)
 */

__int64 RtlpInitializeWnf()
{
  char *Heap_0; // rax
  char *v1; // rbx

  Heap_0 = (char *)RtlAllocateHeap_0(NtCurrentPeb()->ProcessHeap, 0, 0x58uLL);
  v1 = Heap_0;
  if ( Heap_0 )
  {
    memset_thunk_772440563353939046(Heap_0 + 4, 0, 0x54uLL);
    *(_DWORD *)v1 = 5769489;
    if ( TpAllocTimer((PTP_TIMER *)v1 + 9, RtlpWnfRetryTimerCallback, 0LL, 0LL) >= 0 )
    {
      *((_QWORD *)v1 + 2) = 0LL;
      *((_QWORD *)v1 + 3) = 0LL;
      *((_QWORD *)v1 + 1) = 0LL;
      *((_QWORD *)v1 + 5) = v1 + 32;
      *((_QWORD *)v1 + 4) = v1 + 32;
      *((_QWORD *)v1 + 6) = 0LL;
      *((_DWORD *)v1 + 14) = 500;
      *((_DWORD *)v1 + 15) = 1000;
      *((_DWORD *)v1 + 16) = 3600000;
      *((_DWORD *)v1 + 17) = 10;
      if ( (int)RtlpWnfRegisterTpNotification() >= 0 )
      {
        qword_1801C6200 = (__int64)v1;
        return 1LL;
      }
      TpReleaseTimer(*((PTP_TIMER *)v1 + 9));
    }
    RtlFreeHeap_0(NtCurrentPeb()->ProcessHeap, 0, v1);
  }
  return 0LL;
}
