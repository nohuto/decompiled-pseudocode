/*
 * XREFs of _CmRaiseDeleteEvent @ 0x14080C3C0
 * Callers:
 *     _CmDeleteDeviceInterfaceWorker @ 0x140808898 (_CmDeleteDeviceInterfaceWorker.c)
 *     _CmDeleteInstallerClassWorker @ 0x140808C70 (_CmDeleteInstallerClassWorker.c)
 *     _CmDeleteInterfaceClassWorker @ 0x140809018 (_CmDeleteInterfaceClassWorker.c)
 *     _CmDeleteDeviceContainerWorker @ 0x140809B5C (_CmDeleteDeviceContainerWorker.c)
 *     _CmDeleteDevicePanelWorker @ 0x14080CFCC (_CmDeleteDevicePanelWorker.c)
 *     _CmDeleteDeviceWorker @ 0x14099FA74 (_CmDeleteDeviceWorker.c)
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x1406A8B20 (_guard_dispatch_icall_no_overrides.c)
 *     _PnpObjectRaiseDeleteEvent @ 0x14080C4DC (_PnpObjectRaiseDeleteEvent.c)
 *     _CmMapCmObjectTypeToPnpObjectType @ 0x140950170 (_CmMapCmObjectTypeToPnpObjectType.c)
 */

__int64 __fastcall CmRaiseDeleteEvent(__int64 a1, __int64 a2, unsigned int a3)
{
  unsigned int v4; // eax
  __int64 v5; // rdx
  __int64 result; // rax

  v4 = CmMapCmObjectTypeToPnpObjectType(a3);
  PnpObjectRaiseDeleteEvent(a1, v5, v4);
  result = *(_QWORD *)(a1 + 512);
  if ( result )
    return guard_dispatch_icall_no_overrides(a1);
  return result;
}
