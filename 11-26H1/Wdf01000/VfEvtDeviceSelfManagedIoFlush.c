/*
 * XREFs of VfEvtDeviceSelfManagedIoFlush @ 0x1400E3C40
 * Callers:
 *     <none>
 * Callees:
 *     VerifyCriticalRegionEntry @ 0x14009010C (VerifyCriticalRegionEntry.c)
 *     VerifyCriticalRegionExit @ 0x140090140 (VerifyCriticalRegionExit.c)
 *     VerifyIrqlExit @ 0x1400901A8 (VerifyIrqlExit.c)
 *     _guard_dispatch_icall @ 0x1400ACF10 (_guard_dispatch_icall.c)
 *     VfWdfObjectGetTypedContext @ 0x1400E3330 (VfWdfObjectGetTypedContext.c)
 */

void __fastcall VfEvtDeviceSelfManagedIoFlush(WDFDEVICE__ *Device)
{
  char *TypedContext; // rdi
  void (__fastcall *v3)(WDFDEVICE__ *); // rsi
  KIRQL CurrentIrql; // bl
  unsigned __int8 critRegion; // [rsp+38h] [rbp+10h] BYREF

  TypedContext = VfWdfObjectGetTypedContext((unsigned __int64)Device, &WDF_VF_WDFDEVICECREATE_CONTEXT_TYPE_INFO);
  v3 = (void (__fastcall *)(WDFDEVICE__ *))*((_QWORD *)TypedContext + 9);
  if ( v3 )
  {
    critRegion = 0;
    CurrentIrql = KeGetCurrentIrql();
    VerifyCriticalRegionEntry(&critRegion);
    v3(Device);
    VerifyIrqlExit(*(_WDF_DRIVER_GLOBALS **)TypedContext, CurrentIrql);
    VerifyCriticalRegionExit(*(_WDF_DRIVER_GLOBALS **)TypedContext, critRegion, (ULONG_PTR)v3);
  }
}
