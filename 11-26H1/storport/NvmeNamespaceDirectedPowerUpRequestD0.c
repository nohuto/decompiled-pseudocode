/*
 * XREFs of NvmeNamespaceDirectedPowerUpRequestD0 @ 0x140127CA4
 * Callers:
 *     NvmeNamespaceDirectedPowerUp @ 0x140127C10 (NvmeNamespaceDirectedPowerUp.c)
 * Callees:
 *     NvmeNamespaceReleasePoFx @ 0x140031BE4 (NvmeNamespaceReleasePoFx.c)
 *     NvmeNamespaceCheckAndAcquirePoFx @ 0x140031C1C (NvmeNamespaceCheckAndAcquirePoFx.c)
 *     RaFlushDFxQueue @ 0x1400731D4 (RaFlushDFxQueue.c)
 */

void __fastcall NvmeNamespaceDirectedPowerUpRequestD0(__int64 Context)
{
  KSPIN_LOCK *v2; // rcx
  __int64 v3; // rax
  _DWORD *v4; // rcx
  __int64 v5; // rbp
  __int64 v6; // rcx
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+30h] [rbp-28h] BYREF

  v2 = (KSPIN_LOCK *)(*(_QWORD *)(Context + 128) + 88LL);
  memset(&LockHandle, 0, sizeof(LockHandle));
  KeAcquireInStackQueuedSpinLock(v2, &LockHandle);
  v3 = *(_QWORD *)(Context + 128);
  v4 = (_DWORD *)(v3 + 80);
  if ( *(_DWORD *)(v3 + 72) != 1 || (*v4 & 4) != 0 )
  {
    *v4 |= 2u;
    if ( PoRequestPowerIrp(
           *(PDEVICE_OBJECT *)(Context + 8),
           2u,
           (POWER_STATE)1,
           (PREQUEST_POWER_COMPLETE)NvmeNamespaceDirectedPowerUpCompletion,
           (PVOID)Context,
           0LL) == 259 )
    {
      KeReleaseInStackQueuedSpinLock(&LockHandle);
      _InterlockedExchange((volatile __int32 *)(*(_QWORD *)(Context + 128) + 180LL), 0);
      return;
    }
    *(_DWORD *)(*(_QWORD *)(Context + 128) + 80LL) &= ~2u;
    ++*(_DWORD *)(*(_QWORD *)(Context + 128) + 168LL);
    KeReleaseInStackQueuedSpinLock(&LockHandle);
    if ( _InterlockedCompareExchange(
           (volatile signed __int32 *)(*(_QWORD *)(*(_QWORD *)(Context + 128) + 8LL) + 36LL),
           0,
           1) )
    {
      v5 = *(_QWORD *)(*(_QWORD *)(Context + 16) + 128LL);
      if ( NvmeNamespaceCheckAndAcquirePoFx(Context) )
      {
        PoFxIdleComponent(**(_QWORD **)(*(_QWORD *)(Context + 128) + 8LL), 0LL, 0LL);
        NvmeNamespaceReleasePoFx(Context);
      }
      v6 = *(_QWORD *)(v5 + 160);
      if ( *(_BYTE *)v6 == 1 )
        PoFxIdleComponent(**(_QWORD **)(v6 + 8), 0LL, 0LL);
    }
  }
  else
  {
    KeReleaseInStackQueuedSpinLock(&LockHandle);
  }
  PoFxReportDevicePoweredOn(**(_QWORD **)(*(_QWORD *)(Context + 128) + 8LL));
  *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(Context + 128) + 8LL) + 41LL) = 0;
  if ( *(_QWORD *)(*(_QWORD *)(Context + 128) + 104LL) != *(_QWORD *)(Context + 128) + 104LL )
    RaFlushDFxQueue(*(struct _DEVICE_OBJECT **)(Context + 8));
}
