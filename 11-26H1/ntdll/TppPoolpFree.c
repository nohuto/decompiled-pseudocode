/*
 * XREFs of TppPoolpFree @ 0x18004ED88
 * Callers:
 *     TppWorkerThread @ 0x18003E5E0 (TppWorkerThread.c)
 *     TppCleanupGroupMemberDestroy @ 0x18004D650 (TppCleanupGroupMemberDestroy.c)
 *     TppCleanupGroupMemberInitialize @ 0x18004DA10 (TppCleanupGroupMemberInitialize.c)
 *     RtlQueueWorkItem @ 0x180066390 (RtlQueueWorkItem.c)
 *     RtlpTpWorkUnposted @ 0x180066FE0 (RtlpTpWorkUnposted.c)
 *     TpReleasePool @ 0x1800CB610 (TpReleasePool.c)
 *     TpUnreserveTaskPost @ 0x1800E06D8 (TpUnreserveTaskPost.c)
 * Callees:
 *     RtlAcquireSRWLockExclusive @ 0x18003F4D0 (RtlAcquireSRWLockExclusive.c)
 *     RtlReleaseSRWLockExclusive @ 0x18003FAA0 (RtlReleaseSRWLockExclusive.c)
 *     RtlFreeHeap_0 @ 0x18003FD10 (RtlFreeHeap_0.c)
 *     TppDestroyTimerSubQueue @ 0x1800FFBE4 (TppDestroyTimerSubQueue.c)
 *     NtClose @ 0x18015F120 (NtClose.c)
 */

__int64 __fastcall TppPoolpFree(__int64 a1)
{
  void *v2; // rcx
  __int64 v3; // rdx
  __int64 v4; // r8
  _QWORD *v5; // rdx

  v2 = *(void **)(a1 + 56);
  if ( v2 )
  {
    NtClose(v2);
    *(_QWORD *)(a1 + 56) = 0LL;
  }
  TppDestroyTimerSubQueue(a1 + 120);
  TppDestroyTimerSubQueue(a1 + 240);
  NtClose(*(HANDLE *)(a1 + 64));
  RtlFreeHeap_0();
  RtlFreeHeap_0();
  RtlFreeHeap_0();
  RtlAcquireSRWLockExclusive(&TppPoolpListLock, v3);
  v4 = *(_QWORD *)(a1 + 384);
  v5 = *(_QWORD **)(a1 + 392);
  if ( *(_QWORD *)(v4 + 8) != a1 + 384 || *v5 != a1 + 384 )
    __fastfail(3u);
  *v5 = v4;
  *(_QWORD *)(v4 + 8) = v5;
  RtlReleaseSRWLockExclusive(&TppPoolpListLock);
  return RtlFreeHeap_0();
}
