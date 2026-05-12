/*
 * XREFs of StorPortUnitPoFxD0Completion @ 0x14005B504
 * Callers:
 *     RaidUnitProcessSetDevicePowerIrpComplete @ 0x1400197D8 (RaidUnitProcessSetDevicePowerIrpComplete.c)
 * Callees:
 *     RaidUnitCheckAndAcquirePoFx @ 0x140018BD0 (RaidUnitCheckAndAcquirePoFx.c)
 *     RaidAdapterPoFxIdleComponent @ 0x14002517C (RaidAdapterPoFxIdleComponent.c)
 *     RaidUnitCancelWaitWakeIrp @ 0x140049E5C (RaidUnitCancelWaitWakeIrp.c)
 *     McTemplateK0pquuuq_EtwWriteTransfer @ 0x14005877C (McTemplateK0pquuuq_EtwWriteTransfer.c)
 */

void __fastcall StorPortUnitPoFxD0Completion(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v5; // rdi
  __int64 v6; // r8
  const EVENT_DESCRIPTOR *v7; // rdx
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+50h] [rbp-28h] BYREF

  memset(&LockHandle, 0, sizeof(LockHandle));
  if ( !RaidUnitCheckAndAcquirePoFx(a4) )
    goto LABEL_17;
  if ( _InterlockedCompareExchange((volatile signed __int32 *)(*(_QWORD *)(a4 + 1872) + 36LL), 0, 1) )
  {
    v5 = *(_QWORD *)(a4 + 24);
    if ( RaidUnitCheckAndAcquirePoFx(a4) )
    {
      PoFxIdleComponent(**(_QWORD **)(a4 + 1872), 0LL, 0LL);
      ExReleaseRundownProtectionCacheAware(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(a4 + 1864));
    }
    if ( *(_QWORD *)(v5 + 5024) )
      RaidAdapterPoFxIdleComponent(v5, 0LL, 0LL);
  }
  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(a4 + 48), &LockHandle);
  RaidUnitCancelWaitWakeIrp(a4);
  KeReleaseInStackQueuedSpinLock(&LockHandle);
  if ( (*(_DWORD *)(a4 + 512) & 0x20) == 0 )
    PoFxReportDevicePoweredOn(**(_QWORD **)(a4 + 1872));
  if ( StorEtwLoggingEnabled )
  {
    if ( (*(_BYTE *)(a4 + 507) & 2) != 0 )
    {
      if ( (byte_140173442 & 0x10) != 0 )
      {
        v7 = (const EVENT_DESCRIPTOR *)&EventUnitDirectedPowerUpStop;
LABEL_15:
        McTemplateK0pquuuq_EtwWriteTransfer(
          *(_QWORD *)(a4 + 24),
          v7,
          v6,
          **(_QWORD **)(a4 + 1872),
          *(_DWORD *)(*(_QWORD *)(a4 + 24) + 56LL),
          *(_BYTE *)(a4 + 104),
          *(_BYTE *)(a4 + 105),
          *(_BYTE *)(a4 + 106),
          1);
      }
    }
    else if ( (byte_140173442 & 0x10) != 0 )
    {
      v7 = (const EVENT_DESCRIPTOR *)&EventUnitPowerRequiredStop;
      goto LABEL_15;
    }
  }
  ExReleaseRundownProtectionCacheAware(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(a4 + 1864));
LABEL_17:
  if ( *(_DWORD *)(a4 + 3432) == 7 )
    _InterlockedDecrement((volatile signed __int32 *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a4 + 24) + 1024LL) + 48LL)
                                                    + 1060LL));
}
