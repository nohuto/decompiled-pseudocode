/*
 * XREFs of IoCancelIrp @ 0x14049B940
 * Callers:
 *     PopThermalUpdateTimerPolicy @ 0x1404363F8 (PopThermalUpdateTimerPolicy.c)
 *     IopCancelIrpsInCurrentThreadList @ 0x14049B7E0 (IopCancelIrpsInCurrentThreadList.c)
 *     PopThermalZoneTimerCallback @ 0x14049B920 (PopThermalZoneTimerCallback.c)
 *     FsRtlpWaitOnIrp @ 0x1404EC254 (FsRtlpWaitOnIrp.c)
 *     IopCancelIrpsInFileObjectList @ 0x14051B53C (IopCancelIrpsInFileObjectList.c)
 *     PopThermalZoneDpc @ 0x140607D20 (PopThermalZoneDpc.c)
 *     IopCancelPendingEject @ 0x1407B2760 (IopCancelPendingEject.c)
 *     PopThermalZoneRemove @ 0x1407D1F60 (PopThermalZoneRemove.c)
 *     PopBatteryRemove @ 0x1407D7E20 (PopBatteryRemove.c)
 *     PopBatteryWorker @ 0x1407D7EF0 (PopBatteryWorker.c)
 *     PopPowerAdapterRemove @ 0x1407D9BD0 (PopPowerAdapterRemove.c)
 *     PopFanRemove @ 0x1407DAFE0 (PopFanRemove.c)
 *     IoCancelThreadIo @ 0x140955C20 (IoCancelThreadIo.c)
 *     FsRtlSetKernelEaFile @ 0x140A199F0 (FsRtlSetKernelEaFile.c)
 *     FsRtlKernelFsControlFile @ 0x140A1A200 (FsRtlKernelFsControlFile.c)
 *     FsRtlQueryKernelEaFile @ 0x140A1A550 (FsRtlQueryKernelEaFile.c)
 *     PopThermalReadCounters @ 0x140A696F8 (PopThermalReadCounters.c)
 *     FsRtlQueryInformationFile @ 0x140AB4A90 (FsRtlQueryInformationFile.c)
 *     NtCancelIoFile @ 0x140ACE000 (NtCancelIoFile.c)
 *     IopCancelAlertedRequest @ 0x140B1F1D4 (IopCancelAlertedRequest.c)
 *     PopThermalZoneUpdateCoolingPolicy @ 0x140B3F8C8 (PopThermalZoneUpdateCoolingPolicy.c)
 * Callees:
 *     KeAcquireQueuedSpinLock @ 0x1402B4690 (KeAcquireQueuedSpinLock.c)
 *     KeReleaseQueuedSpinLock @ 0x1402E2650 (KeReleaseQueuedSpinLock.c)
 *     KeBugCheckEx @ 0x1405339B0 (KeBugCheckEx.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1407311E0 (_guard_dispatch_icall_no_overrides.c)
 *     IovCancelIrp @ 0x140C20DF0 (IovCancelIrp.c)
 *     IovpCancelRoutine @ 0x140C2BB10 (IovpCancelRoutine.c)
 */

BOOLEAN __stdcall IoCancelIrp(PIRP Irp)
{
  KIRQL v2; // al
  ULONG_PTR v3; // rdi
  KIRQL v4; // si
  bool v5; // zf

  if ( (VfRuleClasses & 0x10) != 0 && (VfRuleClasses & 0x400) != 0 )
    IovCancelIrp();
  v2 = KeAcquireQueuedSpinLock(7uLL);
  Irp->Cancel = 1;
  v3 = _InterlockedExchange64((volatile __int64 *)&Irp->CancelRoutine, 0LL);
  v4 = v2;
  if ( v3 )
  {
    if ( Irp->CurrentLocation > (char)(Irp->StackCount + 1) )
      KeBugCheckEx(0x48u, (ULONG_PTR)Irp, v3, 0LL, 0LL);
    v5 = ViVerifierEnabled == 0;
    Irp->CancelIrql = v2;
    if ( v5 || !VfXdvEnabled )
      guard_dispatch_icall_no_overrides(Irp->Tail.Overlay.CurrentStackLocation->DeviceObject, Irp);
    else
      IovpCancelRoutine(Irp->Tail.Overlay.CurrentStackLocation->DeviceObject, Irp, v3);
    if ( KeGetCurrentIrql() == 2 && v4 != 2 )
      KeBugCheckEx(0x11Bu, (ULONG_PTR)Irp, v3, 0LL, 0LL);
    return 1;
  }
  else
  {
    KeReleaseQueuedSpinLock(7uLL, v2);
    return 0;
  }
}
