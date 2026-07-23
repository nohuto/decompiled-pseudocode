/*
 * XREFs of _CmOpenCommonClassRegKey @ 0x14095FB24
 * Callers:
 *     _CmGetDeviceSoftwareKeyPath @ 0x140956880 (_CmGetDeviceSoftwareKeyPath.c)
 *     _CmOpenInstallerClassRegKey @ 0x14095ED14 (_CmOpenInstallerClassRegKey.c)
 *     PipCallDriverAddDevice @ 0x140970138 (PipCallDriverAddDevice.c)
 *     PiCMOpenClassKey @ 0x140971868 (PiCMOpenClassKey.c)
 *     _CmGetInstallerClassCompoundFilters @ 0x1409734D8 (_CmGetInstallerClassCompoundFilters.c)
 *     _CmGetInstallerClassRegPropWorker @ 0x140973A40 (_CmGetInstallerClassRegPropWorker.c)
 *     _CmGetInstallerClassMappedPropertyFromRegValue @ 0x140973EE8 (_CmGetInstallerClassMappedPropertyFromRegValue.c)
 *     PpForEachDeviceInstanceDriver @ 0x1409B50C0 (PpForEachDeviceInstanceDriver.c)
 * Callees:
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 *     _CmOpenCommonClassRegKeyWorker @ 0x140960FE0 (_CmOpenCommonClassRegKeyWorker.c)
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
