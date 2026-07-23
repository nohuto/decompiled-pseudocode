/*
 * XREFs of _PnpObjectRaiseDevicesChangeEvent @ 0x140B274B0
 * Callers:
 *     _CmRemoveDeviceFromContainer @ 0x14089E454 (_CmRemoveDeviceFromContainer.c)
 *     _CmAddPanelDevice @ 0x14089FF94 (_CmAddPanelDevice.c)
 *     _CmRemovePanelDevice @ 0x1408A1124 (_CmRemovePanelDevice.c)
 *     _CmAddDeviceToContainer @ 0x140AE600C (_CmAddDeviceToContainer.c)
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 *     _PnpContainerRaiseDevicesChangeEvent @ 0x140B2752C (_PnpContainerRaiseDevicesChangeEvent.c)
 */

void __fastcall PnpObjectRaiseDevicesChangeEvent(__int64 a1, __int64 a2, int a3)
{
  __int64 v3; // r11

  v3 = *(_QWORD *)(a1 + 496);
  if ( v3 )
  {
    if ( a3 == 5 )
      PnpContainerRaiseDevicesChangeEvent(a1, a2, v3);
    else
      guard_dispatch_icall_no_overrides(a1, a2);
  }
}
