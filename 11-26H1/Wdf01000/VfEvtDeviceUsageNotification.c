/*
 * XREFs of VfEvtDeviceUsageNotification @ 0x1400E3F10
 * Callers:
 *     <none>
 * Callees:
 *     VerifyCriticalRegionEntry @ 0x14009010C (VerifyCriticalRegionEntry.c)
 *     VerifyCriticalRegionExit @ 0x140090140 (VerifyCriticalRegionExit.c)
 *     VerifyIrqlExit @ 0x1400901A8 (VerifyIrqlExit.c)
 *     _guard_dispatch_icall @ 0x1400ACF10 (_guard_dispatch_icall.c)
 *     VfWdfObjectGetTypedContext @ 0x1400E3330 (VfWdfObjectGetTypedContext.c)
 */

void __fastcall VfEvtDeviceUsageNotification(
        WDFDEVICE__ *Device,
        unsigned int NotificationType,
        unsigned __int8 IsInNotificationPath)
{
  char *TypedContext; // rdi
  void (__fastcall *v7)(WDFDEVICE__ *, _QWORD, __int64); // rsi
  KIRQL CurrentIrql; // bl
  __int64 v9; // r8
  unsigned __int8 critRegion; // [rsp+58h] [rbp+20h] BYREF

  TypedContext = VfWdfObjectGetTypedContext((unsigned __int64)Device, &WDF_VF_WDFDEVICECREATE_CONTEXT_TYPE_INFO);
  v7 = (void (__fastcall *)(WDFDEVICE__ *, _QWORD, __int64))*((_QWORD *)TypedContext + 16);
  if ( v7 )
  {
    critRegion = 0;
    CurrentIrql = KeGetCurrentIrql();
    VerifyCriticalRegionEntry(&critRegion);
    LOBYTE(v9) = IsInNotificationPath;
    v7(Device, NotificationType, v9);
    VerifyIrqlExit(*(_WDF_DRIVER_GLOBALS **)TypedContext, CurrentIrql);
    VerifyCriticalRegionExit(*(_WDF_DRIVER_GLOBALS **)TypedContext, critRegion, (ULONG_PTR)v7);
  }
}
