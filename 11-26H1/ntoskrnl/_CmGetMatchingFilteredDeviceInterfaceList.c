/*
 * XREFs of _CmGetMatchingFilteredDeviceInterfaceList @ 0x1409B7DBC
 * Callers:
 *     _CmDeleteInterfaceClassWorker @ 0x14089D38C (_CmDeleteInterfaceClassWorker.c)
 *     _CmGetMatchingDeviceInterfaceList @ 0x14089F744 (_CmGetMatchingDeviceInterfaceList.c)
 *     _PnpDeviceRaisePropertyChangeEventWorker @ 0x1409AF85C (_PnpDeviceRaisePropertyChangeEventWorker.c)
 *     _CmDeleteDeviceWorker @ 0x1409B70E4 (_CmDeleteDeviceWorker.c)
 *     PnpDisableDeviceInterfaces @ 0x1409B7A10 (PnpDisableDeviceInterfaces.c)
 *     PiDevCfgConfigureDeviceInterfaces @ 0x140A47C2C (PiDevCfgConfigureDeviceInterfaces.c)
 *     PnpDeleteDeviceInterfaces @ 0x140B4C2E4 (PnpDeleteDeviceInterfaces.c)
 * Callees:
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 *     _CmGetMatchingFilteredDeviceInterfaceListWorker @ 0x1409B7F8C (_CmGetMatchingFilteredDeviceInterfaceListWorker.c)
 */

__int64 __fastcall CmGetMatchingFilteredDeviceInterfaceList(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        unsigned int a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        int a8,
        __int64 a9,
        int a10)
{
  __int64 v13; // r10
  int v14; // eax
  unsigned int v15; // ebx
  __int64 v17; // rdi
  unsigned int MatchingFilteredDeviceInterfaceListWorker; // eax
  int v19; // eax
  int v20; // ecx
  unsigned int v21; // eax
  __int64 v23; // [rsp+58h] [rbp-79h]
  _DWORD v24[4]; // [rsp+60h] [rbp-71h] BYREF
  __int64 v25; // [rsp+70h] [rbp-61h]
  __int64 v26; // [rsp+78h] [rbp-59h]
  unsigned int v27; // [rsp+80h] [rbp-51h]
  __int64 v28; // [rsp+88h] [rbp-49h]
  __int64 v29; // [rsp+90h] [rbp-41h]
  __int64 v30; // [rsp+98h] [rbp-39h]
  int v31; // [rsp+A0h] [rbp-31h]
  __int64 v32; // [rsp+A8h] [rbp-29h]
  int v33; // [rsp+B0h] [rbp-21h]

  memset_0(v24, 0, 0x58uLL);
  v25 = a2;
  v26 = a3;
  v27 = a4;
  v13 = *(_QWORD *)(a1 + 504);
  v31 = a8;
  v28 = a5;
  v32 = a9;
  v33 = a10;
  v23 = v13;
  v29 = a6;
  v30 = a7;
  if ( v13 )
  {
    v14 = guard_dispatch_icall_no_overrides(a1, 0LL);
    if ( v14 == -1073741822 )
    {
      v17 = 0LL;
    }
    else
    {
      if ( v14 == -1073741536 )
        return v24[0];
      if ( v14 )
        return (unsigned int)-1073741595;
      v17 = v23;
    }
  }
  else
  {
    v17 = 0LL;
  }
  MatchingFilteredDeviceInterfaceListWorker = CmGetMatchingFilteredDeviceInterfaceListWorker(
                                                a1,
                                                v25,
                                                v26,
                                                v27,
                                                v28,
                                                v29,
                                                v30,
                                                v31,
                                                v32,
                                                v33);
  v15 = MatchingFilteredDeviceInterfaceListWorker;
  if ( v17 )
  {
    v24[0] = MatchingFilteredDeviceInterfaceListWorker;
    v19 = guard_dispatch_icall_no_overrides(a1, 0LL);
    v20 = v19;
    if ( v19 != -1073741822 )
    {
      if ( v19 == -1073741536 )
        return v24[0];
      v21 = v15;
      if ( v20 )
        return (unsigned int)-1073741595;
      return v21;
    }
  }
  return v15;
}
