/*
 * XREFs of _CmOpenCommonClassRegKey @ 0x14099F0C4
 * Callers:
 *     PpForEachDeviceInstanceDriver @ 0x140912FE0 (PpForEachDeviceInstanceDriver.c)
 *     PipCallDriverAddDevice @ 0x1409156CC (PipCallDriverAddDevice.c)
 *     PiCMOpenClassKey @ 0x140916DFC (PiCMOpenClassKey.c)
 *     _CmGetInstallerClassCompoundFilters @ 0x140918A78 (_CmGetInstallerClassCompoundFilters.c)
 *     _CmGetInstallerClassRegPropWorker @ 0x140918FE0 (_CmGetInstallerClassRegPropWorker.c)
 *     _CmGetInstallerClassMappedPropertyFromRegValue @ 0x140919488 (_CmGetInstallerClassMappedPropertyFromRegValue.c)
 *     _CmGetDeviceSoftwareKeyPath @ 0x140995E20 (_CmGetDeviceSoftwareKeyPath.c)
 *     _CmOpenInstallerClassRegKey @ 0x14099E2B4 (_CmOpenInstallerClassRegKey.c)
 * Callees:
 *     __security_check_cookie @ 0x140722910 (__security_check_cookie.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1407311E0 (_guard_dispatch_icall_no_overrides.c)
 *     memset_0 @ 0x14073D880 (memset_0.c)
 *     _CmOpenCommonClassRegKeyWorker @ 0x1409A0580 (_CmOpenCommonClassRegKeyWorker.c)
 */

__int64 __fastcall CmOpenCommonClassRegKey(
        __int64 a1,
        __int64 a2,
        int a3,
        int a4,
        int a5,
        char a6,
        __int64 a7,
        _DWORD *a8)
{
  __int64 v11; // rdi
  int v12; // eax
  int v13; // eax
  int v14; // ebx
  int v16; // eax
  int v18[4]; // [rsp+50h] [rbp-71h] BYREF
  int v19; // [rsp+60h] [rbp-61h]
  int v20; // [rsp+64h] [rbp-5Dh]
  int v21; // [rsp+68h] [rbp-59h]
  char v22; // [rsp+6Ch] [rbp-55h]
  __int64 v23; // [rsp+70h] [rbp-51h]
  _DWORD v24[14]; // [rsp+78h] [rbp-49h] BYREF

  memset_0(v18, 0, 0x58uLL);
  if ( (unsigned __int8)a3 != 32 && (unsigned __int8)a3 != 64 )
    return (unsigned int)-1073741811;
  v11 = *(_QWORD *)(a1 + 504);
  v21 = a5;
  v20 = a4;
  v23 = a7;
  v22 = a6;
  v19 = a3;
  if ( v11 )
  {
    v12 = guard_dispatch_icall_no_overrides(a1, a2);
    if ( v12 == -1073741822 )
    {
      v11 = 0LL;
    }
    else
    {
      if ( v12 == -1073741536 )
      {
LABEL_13:
        v14 = v18[0];
        goto LABEL_6;
      }
      if ( v12 )
        return (unsigned int)-1073741595;
    }
  }
  v13 = CmOpenCommonClassRegKeyWorker(a1, a2, v19, v20, v21, v22, v23, (__int64)v24);
  v14 = v13;
  if ( v11 )
  {
    v18[0] = v13;
    v16 = guard_dispatch_icall_no_overrides(a1, a2);
    if ( v16 != -1073741822 )
    {
      if ( v16 != -1073741536 )
      {
        if ( !v16 )
          goto LABEL_6;
        return (unsigned int)-1073741595;
      }
      goto LABEL_13;
    }
  }
LABEL_6:
  if ( v14 >= 0 && a8 )
    *a8 = v24[0];
  return (unsigned int)v14;
}
