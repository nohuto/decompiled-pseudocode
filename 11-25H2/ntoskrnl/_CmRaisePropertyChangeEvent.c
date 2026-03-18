/*
 * XREFs of _CmRaisePropertyChangeEvent @ 0x14094F9F8
 * Callers:
 *     _CmSetInstallerClassRegPropWorker @ 0x1408093D4 (_CmSetInstallerClassRegPropWorker.c)
 *     _PnpRaiseNtPlugPlayDevicePropertyChangeEvent @ 0x1408366A8 (_PnpRaiseNtPlugPlayDevicePropertyChangeEvent.c)
 *     _CmSetDeviceRegPropWorker @ 0x140951084 (_CmSetDeviceRegPropWorker.c)
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x1406A8B20 (_guard_dispatch_icall_no_overrides.c)
 *     _PnpObjectRaisePropertyChangeEvent @ 0x140836790 (_PnpObjectRaisePropertyChangeEvent.c)
 *     _CmMapRegPropToPropertyKey @ 0x14094FAB4 (_CmMapRegPropToPropertyKey.c)
 *     _CmMapCmObjectTypeToPnpObjectType @ 0x140950170 (_CmMapCmObjectTypeToPnpObjectType.c)
 */

__int64 __fastcall CmRaisePropertyChangeEvent(__int64 a1, int a2, unsigned int a3, __int64 a4, unsigned int a5)
{
  int v9; // eax
  __int64 v10; // r11
  __int64 result; // rax

  if ( CmMapRegPropToPropertyKey(a3, a5) )
  {
    v9 = CmMapCmObjectTypeToPnpObjectType(a3);
    PnpObjectRaisePropertyChangeEvent(a1, a2, v9, a4, 0LL, v10);
  }
  result = *(_QWORD *)(a1 + 512);
  if ( result )
    return guard_dispatch_icall_no_overrides(a1);
  return result;
}
