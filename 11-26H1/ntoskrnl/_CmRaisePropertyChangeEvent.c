/*
 * XREFs of _CmRaisePropertyChangeEvent @ 0x1409ADAB8
 * Callers:
 *     _CmSetInstallerClassRegPropWorker @ 0x14089D748 (_CmSetInstallerClassRegPropWorker.c)
 *     _CmSetDeviceRegPropWorker @ 0x1409AC878 (_CmSetDeviceRegPropWorker.c)
 *     _PnpRaiseNtPlugPlayDevicePropertyChangeEvent @ 0x1409AF618 (_PnpRaiseNtPlugPlayDevicePropertyChangeEvent.c)
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 *     _CmMapCmObjectTypeToPnpObjectType @ 0x140964970 (_CmMapCmObjectTypeToPnpObjectType.c)
 *     _CmMapRegPropToPropertyKey @ 0x1409ADA60 (_CmMapRegPropToPropertyKey.c)
 *     _PnpObjectRaisePropertyChangeEvent @ 0x1409AF740 (_PnpObjectRaisePropertyChangeEvent.c)
 */

__int64 __fastcall CmRaisePropertyChangeEvent(__int64 a1, __int64 a2, int a3, int a4, int a5)
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
