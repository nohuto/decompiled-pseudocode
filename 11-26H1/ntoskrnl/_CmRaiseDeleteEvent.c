/*
 * XREFs of _CmRaiseDeleteEvent @ 0x140777BCC
 * Callers:
 *     _CmDeleteInstallerClassWorker @ 0x140781680 (_CmDeleteInstallerClassWorker.c)
 *     _CmDeleteInterfaceClassWorker @ 0x14089D38C (_CmDeleteInterfaceClassWorker.c)
 *     _CmDeleteDevicePanelWorker @ 0x1408A05DC (_CmDeleteDevicePanelWorker.c)
 *     _CmDeleteDeviceWorker @ 0x1409B70E4 (_CmDeleteDeviceWorker.c)
 *     _CmDeleteDeviceContainerWorker @ 0x140B1FE00 (_CmDeleteDeviceContainerWorker.c)
 *     _CmDeleteDeviceInterfaceWorker @ 0x140B4572C (_CmDeleteDeviceInterfaceWorker.c)
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 *     _PnpObjectRaiseDeleteEvent @ 0x140777C4C (_PnpObjectRaiseDeleteEvent.c)
 *     _CmMapCmObjectTypeToPnpObjectType @ 0x140964970 (_CmMapCmObjectTypeToPnpObjectType.c)
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
