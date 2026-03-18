/*
 * XREFs of VfEvtDeviceRelationsQuery @ 0x1400E39E0
 * Callers:
 *     <none>
 * Callees:
 *     VerifyCriticalRegionEntry @ 0x14009010C (VerifyCriticalRegionEntry.c)
 *     VerifyCriticalRegionExit @ 0x140090140 (VerifyCriticalRegionExit.c)
 *     VerifyIrqlExit @ 0x1400901A8 (VerifyIrqlExit.c)
 *     _guard_dispatch_icall @ 0x1400ACF10 (_guard_dispatch_icall.c)
 *     VfWdfObjectGetTypedContext @ 0x1400E3330 (VfWdfObjectGetTypedContext.c)
 */

void __fastcall VfEvtDeviceRelationsQuery(WDFDEVICE__ *Device, unsigned int RelationType)
{
  char *TypedContext; // rdi
  void (__fastcall *v5)(WDFDEVICE__ *, _QWORD); // rsi
  KIRQL CurrentIrql; // bl
  unsigned __int8 critRegion; // [rsp+50h] [rbp+18h] BYREF

  TypedContext = VfWdfObjectGetTypedContext((unsigned __int64)Device, &WDF_VF_WDFDEVICECREATE_CONTEXT_TYPE_INFO);
  v5 = (void (__fastcall *)(WDFDEVICE__ *, _QWORD))*((_QWORD *)TypedContext + 17);
  if ( v5 )
  {
    critRegion = 0;
    CurrentIrql = KeGetCurrentIrql();
    VerifyCriticalRegionEntry(&critRegion);
    v5(Device, RelationType);
    VerifyIrqlExit(*(_WDF_DRIVER_GLOBALS **)TypedContext, CurrentIrql);
    VerifyCriticalRegionExit(*(_WDF_DRIVER_GLOBALS **)TypedContext, critRegion, (ULONG_PTR)v5);
  }
}
