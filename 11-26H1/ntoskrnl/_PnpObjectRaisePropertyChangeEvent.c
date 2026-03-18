/*
 * XREFs of _PnpObjectRaisePropertyChangeEvent @ 0x14090D610
 * Callers:
 *     _CmRemovePanelDeviceWorker @ 0x14089AE68 (_CmRemovePanelDeviceWorker.c)
 *     _CmSetInterfaceClassMappedProperty @ 0x14089C414 (_CmSetInterfaceClassMappedProperty.c)
 *     _CmRaisePropertyChangeEvent @ 0x14090B994 (_CmRaisePropertyChangeEvent.c)
 *     _PnpSetObjectPropertyWorker @ 0x1409DC180 (_PnpSetObjectPropertyWorker.c)
 *     _CmSetDeviceMappedProperty @ 0x140AAFB8C (_CmSetDeviceMappedProperty.c)
 *     _CmAddPanelDeviceWorker @ 0x140B2B2B0 (_CmAddPanelDeviceWorker.c)
 *     _CmSetInstallerClassMappedProperty @ 0x140B3E1DC (_CmSetInstallerClassMappedProperty.c)
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x1407311E0 (_guard_dispatch_icall_no_overrides.c)
 *     _PnpInterfaceClassRaisePropertyChangeEventWorker @ 0x140899AF0 (_PnpInterfaceClassRaisePropertyChangeEventWorker.c)
 *     _PnpDeviceRaisePropertyChangeEventWorker @ 0x14090D72C (_PnpDeviceRaisePropertyChangeEventWorker.c)
 *     _PnpInterfaceRaisePropertyChangeEventWorker @ 0x14090F130 (_PnpInterfaceRaisePropertyChangeEventWorker.c)
 *     _PnpInstallerClassRaisePropertyChangeEventWorker @ 0x140B3AE9C (_PnpInstallerClassRaisePropertyChangeEventWorker.c)
 */

__int64 __fastcall PnpObjectRaisePropertyChangeEvent(
        __int64 a1,
        __int64 a2,
        int a3,
        __int64 a4,
        __int64 a5,
        __int64 a6)
{
  __int64 result; // rax

  if ( *(_QWORD *)(a1 + 496) )
  {
    switch ( a3 )
    {
      case 1:
        return PnpDeviceRaisePropertyChangeEventWorker(a1, a2, a4, a5, a6, *(_QWORD *)(a1 + 496));
      case 2:
        return PnpInstallerClassRaisePropertyChangeEventWorker(a1, a2, a4, a5, a6, *(_QWORD *)(a1 + 496));
      case 3:
        return PnpInterfaceRaisePropertyChangeEventWorker(a1, a2, a4, a5, a6, *(_QWORD *)(a1 + 496));
      case 4:
        return PnpInterfaceClassRaisePropertyChangeEventWorker(a1, a2, a4, a5, a6, *(_QWORD *)(a1 + 496));
      default:
        return guard_dispatch_icall_no_overrides(a1, a2);
    }
  }
  return result;
}
