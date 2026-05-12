/*
 * XREFs of StorPortUnitPoFxD3Completion @ 0x140051CE0
 * Callers:
 *     <none>
 * Callees:
 *     RaidUnitCheckAndAcquirePoFx @ 0x140018BD0 (RaidUnitCheckAndAcquirePoFx.c)
 *     RaidAdapterPoFxIdleComponent @ 0x14002517C (RaidAdapterPoFxIdleComponent.c)
 *     RaidUnitDisablePendingTimer @ 0x14003ADE4 (RaidUnitDisablePendingTimer.c)
 *     RaidUnitCancelWaitWakeIrp @ 0x140049E5C (RaidUnitCancelWaitWakeIrp.c)
 */

void __fastcall StorPortUnitPoFxD3Completion(
        PDEVICE_OBJECT DeviceObject,
        UCHAR MinorFunction,
        POWER_STATE PowerState,
        __int64 Context,
        PIO_STATUS_BLOCK IoStatus)
{
  int Status; // edi
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  memset(&LockHandle, 0, sizeof(LockHandle));
  Status = IoStatus->Status;
  if ( RaidUnitCheckAndAcquirePoFx(Context) )
  {
    if ( Status >= 0 )
    {
      RaidUnitDisablePendingTimer(Context);
    }
    else
    {
      KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(Context + 48), &LockHandle);
      RaidUnitCancelWaitWakeIrp(Context);
      KeReleaseInStackQueuedSpinLock(&LockHandle);
    }
    ExReleaseRundownProtectionCacheAware(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(Context + 1864));
  }
  if ( *(_QWORD *)(*(_QWORD *)(Context + 24) + 5024LL)
    && _InterlockedCompareExchange((volatile signed __int32 *)(Context + 3616), 0, 1) == 1 )
  {
    RaidAdapterPoFxIdleComponent(*(_QWORD *)(Context + 24), 0LL, 0LL);
  }
  if ( *(_DWORD *)(Context + 3432) == 7 )
    _InterlockedIncrement((volatile signed __int32 *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(Context + 24) + 1024LL) + 48LL)
                                                    + 1060LL));
  *(_BYTE *)(Context + 505) &= ~1u;
}
