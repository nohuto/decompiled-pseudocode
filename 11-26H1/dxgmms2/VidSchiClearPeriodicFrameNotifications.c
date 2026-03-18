/*
 * XREFs of VidSchiClearPeriodicFrameNotifications @ 0x1400037E8
 * Callers:
 *     VidSchiSetFlipDevice @ 0x1400051E8 (VidSchiSetFlipDevice.c)
 *     VidSchTerminateAdapter @ 0x1400C57F0 (VidSchTerminateAdapter.c)
 * Callees:
 *     VidSchDestroyPeriodicFrameNotification @ 0x14003CB00 (VidSchDestroyPeriodicFrameNotification.c)
 */

void __fastcall VidSchiClearPeriodicFrameNotifications(__int64 a1, unsigned int a2)
{
  __int64 v3; // rsi
  __int64 v4; // rbx
  __int64 v5; // rdi
  void *v6; // rcx
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  v3 = *(_QWORD *)(a1 + 8LL * a2 + 3448);
  if ( *(_QWORD *)(v3 + 78960) )
  {
    v4 = 0LL;
    v5 = 8LL;
    do
    {
      v6 = *(void **)(v4 + *(_QWORD *)(v3 + 78960));
      if ( v6 )
        VidSchDestroyPeriodicFrameNotification(v6);
      v4 += 8LL;
      --v5;
    }
    while ( v5 );
    memset(&LockHandle, 0, sizeof(LockHandle));
    KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(a1 + 2016), &LockHandle);
    ExFreePoolWithTag(*(PVOID *)(v3 + 78960), 0x62616956u);
    *(_QWORD *)(v3 + 78960) = 0LL;
    KeReleaseInStackQueuedSpinLock(&LockHandle);
  }
}
