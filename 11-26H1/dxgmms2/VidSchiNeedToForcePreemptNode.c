/*
 * XREFs of VidSchiNeedToForcePreemptNode @ 0x1400268DC
 * Callers:
 *     VidSchiCheckHwProgress @ 0x1400C4FC0 (VidSchiCheckHwProgress.c)
 * Callees:
 *     VidSchiUpdateLastCompletedPresentTimestamp @ 0x14000B434 (VidSchiUpdateLastCompletedPresentTimestamp.c)
 *     VidSchiProfilePerformanceTick @ 0x140023500 (VidSchiProfilePerformanceTick.c)
 *     VidSchiIncrementContextReference @ 0x140025CE0 (VidSchiIncrementContextReference.c)
 */

char __fastcall VidSchiNeedToForcePreemptNode(__int64 a1)
{
  __int64 v1; // rbp
  char v3; // si
  __int64 v5; // rax
  __int64 v6; // rcx
  __int64 v7; // rbx
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+40h] [rbp-28h] BYREF

  v1 = *(_QWORD *)(a1 + 24);
  v3 = 0;
  memset(&LockHandle, 0, sizeof(LockHandle));
  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v1 + 2016), &LockHandle);
  if ( *(_DWORD *)(a1 + 3016) && !*(_DWORD *)(a1 + 3024) )
  {
    v5 = *(_QWORD *)(a1 + 96);
    if ( v5 == *(_QWORD *)(a1 + 136) )
    {
      v7 = *(_QWORD *)(a1 + 8LL * *(unsigned int *)(a1 + 1576) + 1584);
      *(_QWORD *)(a1 + 232) = v7;
      VidSchiIncrementContextReference(v7);
      v3 = 1;
      VidSchiProfilePerformanceTick(1LL, v1, a1, 0LL, v7, 0LL, 0LL, -18LL);
    }
    else if ( v5 == *(_QWORD *)(a1 + 144) )
    {
      v6 = *(_QWORD *)(a1 + 8LL * *(unsigned int *)(a1 + 1576) + 1584);
      if ( v6 )
        VidSchiUpdateLastCompletedPresentTimestamp(v6, 0LL, 1);
    }
  }
  KeReleaseInStackQueuedSpinLock(&LockHandle);
  return v3;
}
