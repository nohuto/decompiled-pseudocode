/*
 * XREFs of _CmRaiseDeleteEvent @ 0x140774BCC
 * Callers:
 *     _CmDeleteInstallerClassWorker @ 0x14077EB80 (_CmDeleteInstallerClassWorker.c)
 *     _CmDeleteInterfaceClassWorker @ 0x140896F8C (_CmDeleteInterfaceClassWorker.c)
 *     _CmDeleteDevicePanelWorker @ 0x14089A1DC (_CmDeleteDevicePanelWorker.c)
 *     _CmDeleteDeviceWorker @ 0x140A8A2C4 (_CmDeleteDeviceWorker.c)
 *     _CmDeleteDeviceContainerWorker @ 0x140B1DD7C (_CmDeleteDeviceContainerWorker.c)
 *     _CmDeleteDeviceInterfaceWorker @ 0x140B4383C (_CmDeleteDeviceInterfaceWorker.c)
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x1407311E0 (_guard_dispatch_icall_no_overrides.c)
 *     _PnpObjectRaiseDeleteEvent @ 0x140774C4C (_PnpObjectRaiseDeleteEvent.c)
 *     _CmMapCmObjectTypeToPnpObjectType @ 0x1409A3F10 (_CmMapCmObjectTypeToPnpObjectType.c)
 */

__int64 __fastcall CmRaiseDeleteEvent(__int64 a1, __int64 a2, unsigned int a3)
{
  unsigned int v5; // eax
  __int64 v6; // rdx
  __int64 result; // rax

  v5 = CmMapCmObjectTypeToPnpObjectType(a3);
  PnpObjectRaiseDeleteEvent(a1, v6, v5);
  result = *(_QWORD *)(a1 + 512);
  if ( result )
    return guard_dispatch_icall_no_overrides(a1, a2);
  return result;
}
