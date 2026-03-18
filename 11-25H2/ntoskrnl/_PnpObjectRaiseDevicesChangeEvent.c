/*
 * XREFs of _PnpObjectRaiseDevicesChangeEvent @ 0x140AAC538
 * Callers:
 *     _CmRemoveDeviceFromContainer @ 0x14080A720 (_CmRemoveDeviceFromContainer.c)
 *     _CmAddPanelDevice @ 0x14080C5CC (_CmAddPanelDevice.c)
 *     _CmRemovePanelDevice @ 0x14080DB0C (_CmRemovePanelDevice.c)
 *     _CmAddDeviceToContainer @ 0x14094F2F0 (_CmAddDeviceToContainer.c)
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x1406A8B20 (_guard_dispatch_icall_no_overrides.c)
 *     _PnpContainerRaiseDevicesChangeEvent @ 0x140A7E738 (_PnpContainerRaiseDevicesChangeEvent.c)
 */

void __fastcall PnpObjectRaiseDevicesChangeEvent(__int64 a1, __int64 a2, int a3)
{
  if ( *(_QWORD *)(a1 + 496) )
  {
    if ( a3 == 5 )
      PnpContainerRaiseDevicesChangeEvent(a1);
    else
      guard_dispatch_icall_no_overrides(a1);
  }
}
