/*
 * XREFs of IoCancelIrp @ 0x140495490
 * Callers:
 *     PopThermalUpdateTimerPolicy @ 0x140425390 (PopThermalUpdateTimerPolicy.c)
 *     IopCancelIrpsInCurrentThreadList @ 0x140495330 (IopCancelIrpsInCurrentThreadList.c)
 *     PopThermalZoneTimerCallback @ 0x140495470 (PopThermalZoneTimerCallback.c)
 *     FsRtlpWaitOnIrp @ 0x1404E5834 (FsRtlpWaitOnIrp.c)
 *     IopCancelIrpsInFileObjectList @ 0x140515BDC (IopCancelIrpsInFileObjectList.c)
 *     PopThermalSxExit @ 0x140516740 (PopThermalSxExit.c)
 *     PopThermalZoneDpc @ 0x14060A8D0 (PopThermalZoneDpc.c)
 *     IopCancelPendingEject @ 0x1407B57C0 (IopCancelPendingEject.c)
 *     PopThermalZoneRemove @ 0x1407D5000 (PopThermalZoneRemove.c)
 *     PopBatteryRemove @ 0x1407DB440 (PopBatteryRemove.c)
 *     PopBatteryUpdateTestExempt @ 0x1407DB65C (PopBatteryUpdateTestExempt.c)
 *     PopBatteryWorker @ 0x1407DB910 (PopBatteryWorker.c)
 *     PopPowerAdapterRemove @ 0x1407DDB70 (PopPowerAdapterRemove.c)
 *     PopFanRemove @ 0x1407DEED0 (PopFanRemove.c)
 *     IoCancelThreadIo @ 0x14094BAC8 (IoCancelThreadIo.c)
 *     FsRtlSetKernelEaFile @ 0x140A23020 (FsRtlSetKernelEaFile.c)
 *     FsRtlKernelFsControlFile @ 0x140A23830 (FsRtlKernelFsControlFile.c)
 *     FsRtlQueryKernelEaFile @ 0x140A23B80 (FsRtlQueryKernelEaFile.c)
 *     PopThermalReadCounters @ 0x140A766C8 (PopThermalReadCounters.c)
 *     FsRtlQueryInformationFile @ 0x140AB5E30 (FsRtlQueryInformationFile.c)
 *     NtCancelIoFile @ 0x140AD0240 (NtCancelIoFile.c)
 *     IopCancelAlertedRequest @ 0x140B21254 (IopCancelAlertedRequest.c)
 *     PopThermalZoneUpdateCoolingPolicy @ 0x140B418F8 (PopThermalZoneUpdateCoolingPolicy.c)
 * Callees:
 *     KeReleaseQueuedSpinLock @ 0x1402C4710 (KeReleaseQueuedSpinLock.c)
 *     KeAcquireQueuedSpinLock @ 0x1402FF360 (KeAcquireQueuedSpinLock.c)
 *     KeBugCheckEx @ 0x140535E30 (KeBugCheckEx.c)
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 *     IovCancelIrp @ 0x140C26E00 (IovCancelIrp.c)
 *     IovpCancelRoutine @ 0x140C31B20 (IovpCancelRoutine.c)
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
