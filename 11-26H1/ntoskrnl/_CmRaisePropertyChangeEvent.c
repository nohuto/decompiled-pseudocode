/*
 * XREFs of _CmRaisePropertyChangeEvent @ 0x14090B994
 * Callers:
 *     _CmSetInstallerClassRegPropWorker @ 0x140897348 (_CmSetInstallerClassRegPropWorker.c)
 *     _CmSetDeviceRegPropWorker @ 0x14090A2C0 (_CmSetDeviceRegPropWorker.c)
 *     _PnpRaiseNtPlugPlayDevicePropertyChangeEvent @ 0x14090D4E8 (_PnpRaiseNtPlugPlayDevicePropertyChangeEvent.c)
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x1407311E0 (_guard_dispatch_icall_no_overrides.c)
 *     _CmMapRegPropToPropertyKey @ 0x14090B93C (_CmMapRegPropToPropertyKey.c)
 *     _PnpObjectRaisePropertyChangeEvent @ 0x14090D610 (_PnpObjectRaisePropertyChangeEvent.c)
 *     _CmMapCmObjectTypeToPnpObjectType @ 0x1409A3F10 (_CmMapCmObjectTypeToPnpObjectType.c)
 */

__int64 __fastcall CmRaisePropertyChangeEvent(__int64 a1, __int64 a2, unsigned int a3, int a4, int a5)
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
    return guard_dispatch_icall_no_overrides(a1, a2);
  return result;
}
