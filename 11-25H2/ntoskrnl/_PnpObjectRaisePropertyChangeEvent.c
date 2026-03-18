/*
 * XREFs of _PnpObjectRaisePropertyChangeEvent @ 0x140836790
 * Callers:
 *     _CmRemoveDeviceFromContainerWorker @ 0x14080A860 (_CmRemoveDeviceFromContainerWorker.c)
 *     _CmAddPanelDeviceWorker @ 0x14080C710 (_CmAddPanelDeviceWorker.c)
 *     _CmRemovePanelDeviceWorker @ 0x14080DC50 (_CmRemovePanelDeviceWorker.c)
 *     _CmSetInstallerClassMappedProperty @ 0x14080F8C4 (_CmSetInstallerClassMappedProperty.c)
 *     _CmSetInterfaceClassMappedProperty @ 0x14080FCDC (_CmSetInterfaceClassMappedProperty.c)
 *     _CmSetDeviceMappedProperty @ 0x14094EA4C (_CmSetDeviceMappedProperty.c)
 *     _CmRaisePropertyChangeEvent @ 0x14094F9F8 (_CmRaisePropertyChangeEvent.c)
 *     _PnpSetObjectPropertyWorker @ 0x140954B4C (_PnpSetObjectPropertyWorker.c)
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x1406A8B20 (_guard_dispatch_icall_no_overrides.c)
 *     _PnpInterfaceClassRaisePropertyChangeEventWorker @ 0x14080C438 (_PnpInterfaceClassRaisePropertyChangeEventWorker.c)
 *     _PnpDeviceRaisePropertyChangeEventWorker @ 0x1408369DC (_PnpDeviceRaisePropertyChangeEventWorker.c)
 *     _PnpInterfaceRaisePropertyChangeEventWorker @ 0x14096AF58 (_PnpInterfaceRaisePropertyChangeEventWorker.c)
 *     _PnpInstallerClassRaisePropertyChangeEventWorker @ 0x140AADE1C (_PnpInstallerClassRaisePropertyChangeEventWorker.c)
 */

__int64 __fastcall PnpObjectRaisePropertyChangeEvent(__int64 a1, int a2, int a3, __int64 a4, __int64 a5, __int64 a6)
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
        return guard_dispatch_icall_no_overrides(a1);
    }
  }
  return result;
}
