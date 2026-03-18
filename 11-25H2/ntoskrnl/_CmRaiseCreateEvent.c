/*
 * XREFs of _CmRaiseCreateEvent @ 0x14094F02C
 * Callers:
 *     _CmCreateInstallerClassWorker @ 0x140807EE0 (_CmCreateInstallerClassWorker.c)
 *     _CmCreateDevicePanelWorker @ 0x14080CA20 (_CmCreateDevicePanelWorker.c)
 *     _CmCreateDeviceWorker @ 0x14094E998 (_CmCreateDeviceWorker.c)
 *     _CmCreateDeviceContainerWorker @ 0x14094F244 (_CmCreateDeviceContainerWorker.c)
 *     _CmCreateDeviceInterfaceWorker @ 0x140A714A0 (_CmCreateDeviceInterfaceWorker.c)
 *     _CmCreateInterfaceClassWorker @ 0x140A71788 (_CmCreateInterfaceClassWorker.c)
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x1406A8B20 (_guard_dispatch_icall_no_overrides.c)
 *     _PnpObjectRaiseCreateEvent @ 0x14094EFEC (_PnpObjectRaiseCreateEvent.c)
 *     _CmMapCmObjectTypeToPnpObjectType @ 0x140950170 (_CmMapCmObjectTypeToPnpObjectType.c)
 */

__int64 __fastcall CmRaiseCreateEvent(__int64 a1, __int64 a2, unsigned int a3)
{
  __int64 result; // rax

  CmMapCmObjectTypeToPnpObjectType(a3);
  PnpObjectRaiseCreateEvent(a1);
  result = *(_QWORD *)(a1 + 512);
  if ( result )
    return guard_dispatch_icall_no_overrides(a1);
  return result;
}
