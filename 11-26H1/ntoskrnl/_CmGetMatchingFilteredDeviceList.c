/*
 * XREFs of _CmGetMatchingFilteredDeviceList @ 0x140AA2310
 * Callers:
 *     _CmDeleteInstallerClassWorker @ 0x140781680 (_CmDeleteInstallerClassWorker.c)
 *     PiDevCfgInitDriverDatabaseCallback @ 0x1407AC988 (PiDevCfgInitDriverDatabaseCallback.c)
 *     IopGetRootDevices @ 0x140AA1748 (IopGetRootDevices.c)
 *     PiCMGetDeviceIdList @ 0x140AA1B80 (PiCMGetDeviceIdList.c)
 *     PipResetMatchingFilteredDevices @ 0x140CC9240 (PipResetMatchingFilteredDevices.c)
 * Callees:
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 *     _CmGetMatchingFilteredDeviceListWorker @ 0x140AA24B4 (_CmGetMatchingFilteredDeviceListWorker.c)
 */

__int64 __fastcall CmGetMatchingFilteredDeviceList(
        __int64 a1,
        __int64 a2,
        int a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        int a7,
        __int64 a8)
{
  __int64 v12; // r13
  int v13; // eax
  unsigned int v14; // ebx
  unsigned int MatchingFilteredDeviceListWorker; // eax
  int v17; // eax
  int v18; // ecx
  unsigned int v19; // eax
  _DWORD v21[4]; // [rsp+60h] [rbp-71h] BYREF
  __int64 v22; // [rsp+70h] [rbp-61h]
  int v23; // [rsp+78h] [rbp-59h]
  __int64 v24; // [rsp+80h] [rbp-51h]
  __int64 v25; // [rsp+88h] [rbp-49h]
  __int64 v26; // [rsp+90h] [rbp-41h]
  int v27; // [rsp+98h] [rbp-39h]
  __int64 v28; // [rsp+A0h] [rbp-31h]
  int v29; // [rsp+A8h] [rbp-29h]

  memset_0(v21, 0, 0x58uLL);
  v12 = *(_QWORD *)(a1 + 504);
  v22 = a2;
  v23 = a3;
  v24 = a4;
  v26 = a6;
  v28 = a8;
  v25 = a5;
  v27 = a7;
  v29 = 0;
  if ( v12 )
  {
    v13 = guard_dispatch_icall_no_overrides(a1, 0LL);
    if ( v13 == -1073741822 )
    {
      v12 = 0LL;
    }
    else
    {
      if ( v13 == -1073741536 )
        return v21[0];
      if ( v13 )
        return (unsigned int)-1073741595;
    }
  }
  MatchingFilteredDeviceListWorker = CmGetMatchingFilteredDeviceListWorker(a1, v22, v23, v24, v25, v26, v27, v28, v29);
  v14 = MatchingFilteredDeviceListWorker;
  if ( v12 )
  {
    v21[0] = MatchingFilteredDeviceListWorker;
    v17 = guard_dispatch_icall_no_overrides(a1, 0LL);
    v18 = v17;
    if ( v17 != -1073741822 )
    {
      if ( v17 == -1073741536 )
        return v21[0];
      v19 = v14;
      if ( v18 )
        return (unsigned int)-1073741595;
      return v19;
    }
  }
  return v14;
}
