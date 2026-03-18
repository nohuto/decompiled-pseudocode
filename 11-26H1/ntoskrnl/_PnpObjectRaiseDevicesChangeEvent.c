/*
 * XREFs of _PnpObjectRaiseDevicesChangeEvent @ 0x140B25320
 * Callers:
 *     _CmRemoveDeviceFromContainer @ 0x140898054 (_CmRemoveDeviceFromContainer.c)
 *     _CmAddPanelDevice @ 0x140899B94 (_CmAddPanelDevice.c)
 *     _CmRemovePanelDevice @ 0x14089AD24 (_CmRemovePanelDevice.c)
 *     _CmAddDeviceToContainer @ 0x140AE815C (_CmAddDeviceToContainer.c)
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x1407311E0 (_guard_dispatch_icall_no_overrides.c)
 *     _PnpContainerRaiseDevicesChangeEvent @ 0x140B2539C (_PnpContainerRaiseDevicesChangeEvent.c)
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
