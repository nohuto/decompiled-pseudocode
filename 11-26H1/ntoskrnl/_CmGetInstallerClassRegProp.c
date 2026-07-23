/*
 * XREFs of _CmGetInstallerClassRegProp @ 0x1409738BC
 * Callers:
 *     _CmServiceFilterCallback @ 0x14089FAC0 (_CmServiceFilterCallback.c)
 *     _CmGetDeviceRegPropWorker @ 0x140956E10 (_CmGetDeviceRegPropWorker.c)
 *     PiCMHandleIoctl @ 0x140958980 (PiCMHandleIoctl.c)
 *     PiPnpRtlCmActionCallback @ 0x140963A50 (PiPnpRtlCmActionCallback.c)
 *     PipGetRegistryDwordWithFallback @ 0x14096FD64 (PipGetRegistryDwordWithFallback.c)
 *     PipGetRegistrySecurityWithFallback @ 0x14096FE40 (PipGetRegistrySecurityWithFallback.c)
 *     PnpCallDriverQueryServiceHelper @ 0x140970C4C (PnpCallDriverQueryServiceHelper.c)
 *     _CmGetInstallerClassMappedPropertyFromRegProp @ 0x14097368C (_CmGetInstallerClassMappedPropertyFromRegProp.c)
 *     PpForEachDeviceInstanceDriver @ 0x1409B50C0 (PpForEachDeviceInstanceDriver.c)
 * Callees:
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 *     _CmGetInstallerClassRegPropWorker @ 0x140973A40 (_CmGetInstallerClassRegPropWorker.c)
 */

__int64 __fastcall CmGetInstallerClassRegProp(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        int a4,
        __int64 a5,
        __int64 a6,
        __int64 a7)
{
  __int64 v10; // r12
  int v11; // eax
  unsigned int InstallerClassRegPropWorker; // eax
  unsigned int v13; // ebx
  int v14; // eax
  int v15; // ecx
  unsigned int v16; // eax
  _DWORD v19[4]; // [rsp+50h] [rbp-71h] BYREF
  __int64 v20; // [rsp+60h] [rbp-61h]
  int v21; // [rsp+68h] [rbp-59h]
  __int64 v22; // [rsp+70h] [rbp-51h]
  __int64 v23; // [rsp+78h] [rbp-49h]
  __int64 v24; // [rsp+80h] [rbp-41h]
  int v25; // [rsp+88h] [rbp-39h]

  memset_0(v19, 0, 0x58uLL);
  v10 = *(_QWORD *)(a1 + 504);
  v21 = a4;
  v20 = a3;
  v23 = a6;
  v24 = a7;
  v22 = a5;
  v25 = 0;
  if ( v10 )
  {
    v11 = guard_dispatch_icall_no_overrides(a1, a2);
    if ( v11 == -1073741822 )
    {
      v10 = 0LL;
    }
    else
    {
      if ( v11 == -1073741536 )
        return v19[0];
      if ( v11 )
        return (unsigned int)-1073741595;
    }
  }
  InstallerClassRegPropWorker = CmGetInstallerClassRegPropWorker(a1, a2, v20, v21, v22, v23, v24, v25);
  v13 = InstallerClassRegPropWorker;
  if ( !v10 )
    return v13;
  v19[0] = InstallerClassRegPropWorker;
  v14 = guard_dispatch_icall_no_overrides(a1, a2);
  v15 = v14;
  if ( v14 == -1073741822 )
    return v13;
  if ( v14 == -1073741536 )
    return v19[0];
  v16 = v13;
  if ( v15 )
    return (unsigned int)-1073741595;
  return v16;
}
