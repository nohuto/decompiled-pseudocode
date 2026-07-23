/*
 * XREFs of _CmRaiseCreateEvent @ 0x140AF5644
 * Callers:
 *     _CmCreateDevicePanelWorker @ 0x140781ACC (_CmCreateDevicePanelWorker.c)
 *     _CmCreateInstallerClassWorker @ 0x14089C848 (_CmCreateInstallerClassWorker.c)
 *     _CmCreateDeviceContainerWorker @ 0x140AE6728 (_CmCreateDeviceContainerWorker.c)
 *     _CmCreateDeviceInterfaceWorker @ 0x140AF5078 (_CmCreateDeviceInterfaceWorker.c)
 *     _CmCreateInterfaceClassWorker @ 0x140AF5360 (_CmCreateInterfaceClassWorker.c)
 *     _CmCreateDeviceWorker @ 0x140AF558C (_CmCreateDeviceWorker.c)
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 *     _CmMapCmObjectTypeToPnpObjectType @ 0x140964970 (_CmMapCmObjectTypeToPnpObjectType.c)
 *     _PnpObjectRaiseCreateEvent @ 0x140AF56CC (_PnpObjectRaiseCreateEvent.c)
 */

__int64 __fastcall CmRaiseCreateEvent(__int64 a1, __int64 a2, int a3)
{
  unsigned int v5; // eax
  __int64 v6; // rdx
  __int64 v7; // r9
  __int64 result; // rax

  v5 = CmMapCmObjectTypeToPnpObjectType(a3);
  PnpObjectRaiseCreateEvent(a1, v6, v5, v7);
  result = *(_QWORD *)(a1 + 512);
  if ( result )
    return guard_dispatch_icall_no_overrides(a1, a2);
  return result;
}
