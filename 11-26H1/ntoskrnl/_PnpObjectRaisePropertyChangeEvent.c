/*
 * XREFs of _PnpObjectRaisePropertyChangeEvent @ 0x1409AF740
 * Callers:
 *     _CmRemovePanelDeviceWorker @ 0x1408A1268 (_CmRemovePanelDeviceWorker.c)
 *     _CmSetInterfaceClassMappedProperty @ 0x1408A2814 (_CmSetInterfaceClassMappedProperty.c)
 *     _CmRaisePropertyChangeEvent @ 0x1409ADAB8 (_CmRaisePropertyChangeEvent.c)
 *     _PnpSetObjectPropertyWorker @ 0x140A193D0 (_PnpSetObjectPropertyWorker.c)
 *     _CmSetDeviceMappedProperty @ 0x140AAD7DC (_CmSetDeviceMappedProperty.c)
 *     _CmAddPanelDeviceWorker @ 0x140B2D330 (_CmAddPanelDeviceWorker.c)
 *     _CmSetInstallerClassMappedProperty @ 0x140B40214 (_CmSetInstallerClassMappedProperty.c)
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 *     _PnpInterfaceClassRaisePropertyChangeEventWorker @ 0x14089FEF0 (_PnpInterfaceClassRaisePropertyChangeEventWorker.c)
 *     _PnpDeviceRaisePropertyChangeEventWorker @ 0x1409AF85C (_PnpDeviceRaisePropertyChangeEventWorker.c)
 *     _PnpInterfaceRaisePropertyChangeEventWorker @ 0x1409B1260 (_PnpInterfaceRaisePropertyChangeEventWorker.c)
 *     _PnpInstallerClassRaisePropertyChangeEventWorker @ 0x140B3D11C (_PnpInstallerClassRaisePropertyChangeEventWorker.c)
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
