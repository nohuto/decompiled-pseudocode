/*
 * XREFs of FsRtlNotifySetCancelRoutine @ 0x1404A3ED0
 * Callers:
 *     FsRtlNotifyFilterChangeDirectory @ 0x140A85310 (FsRtlNotifyFilterChangeDirectory.c)
 *     FsRtlNotifyCompleteIrp @ 0x140A85F54 (FsRtlNotifyCompleteIrp.c)
 *     FsRtlNotifyFilterChangeDirectoryLite @ 0x140A860F0 (FsRtlNotifyFilterChangeDirectoryLite.c)
 * Callees:
 *     KeAcquireQueuedSpinLock @ 0x1402B4690 (KeAcquireQueuedSpinLock.c)
 *     KeReleaseQueuedSpinLock @ 0x1402E2650 (KeReleaseQueuedSpinLock.c)
 *     FsRtlCancelNotify @ 0x1404A3F80 (FsRtlCancelNotify.c)
 */

char __fastcall FsRtlNotifySetCancelRoutine(__int64 a1, __int64 a2)
{
  char v3; // si
  __int64 v5; // rbx
  KIRQL v6; // dl

  v3 = 0;
  *(_BYTE *)(a1 + 69) = KeAcquireQueuedSpinLock(7uLL);
  if ( a2 )
  {
    v5 = _InterlockedExchange64((volatile __int64 *)(a1 + 104), 0LL);
    v6 = *(_BYTE *)(a1 + 69);
    *(_QWORD *)(a1 + 56) = 0LL;
    KeReleaseQueuedSpinLock(7uLL, v6);
    if ( v5 )
    {
      _InterlockedDecrement((volatile signed __int32 *)(a2 + 112));
      return 1;
    }
  }
  else if ( *(_BYTE *)(a1 + 68) )
  {
    FsRtlCancelNotify(0LL, a1);
  }
  else
  {
    _InterlockedExchange64((volatile __int64 *)(a1 + 104), (__int64)FsRtlCancelNotify);
    KeReleaseQueuedSpinLock(7uLL, *(_BYTE *)(a1 + 69));
  }
  return v3;
}
