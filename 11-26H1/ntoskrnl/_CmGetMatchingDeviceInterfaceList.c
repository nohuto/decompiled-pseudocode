/*
 * XREFs of _CmGetMatchingDeviceInterfaceList @ 0x14089F744
 * Callers:
 *     _PnpDispatchDeviceInterface @ 0x14095F340 (_PnpDispatchDeviceInterface.c)
 * Callees:
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 *     _CmGetMatchingFilteredDeviceInterfaceList @ 0x1409B7DBC (_CmGetMatchingFilteredDeviceInterfaceList.c)
 */

__int64 __fastcall CmGetMatchingDeviceInterfaceList(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        int a5,
        __int64 a6,
        int a7)
{
  __int64 v11; // r15
  int v12; // eax
  unsigned int MatchingFilteredDeviceInterfaceList; // ebx
  int v14; // eax
  unsigned int v15; // ecx
  unsigned int v17[4]; // [rsp+50h] [rbp-61h] BYREF
  __int64 v18; // [rsp+60h] [rbp-51h]
  __int64 v19; // [rsp+68h] [rbp-49h]
  __int64 v20; // [rsp+70h] [rbp-41h]
  int v21; // [rsp+78h] [rbp-39h]
  __int64 v22; // [rsp+80h] [rbp-31h]
  int v23; // [rsp+88h] [rbp-29h]

  memset_0(v17, 0, 0x58uLL);
  v11 = *(_QWORD *)(a1 + 504);
  v19 = a3;
  v21 = a5;
  v18 = a2;
  v20 = a4;
  v22 = a6;
  v23 = a7;
  if ( v11 )
  {
    v12 = guard_dispatch_icall_no_overrides(a1, 0LL);
    if ( v12 == -1073741822 )
    {
      v11 = 0LL;
    }
    else
    {
      if ( v12 == -1073741536 )
        return v17[0];
      if ( v12 )
        return (unsigned int)-1073741595;
    }
  }
  if ( (_WORD)v23 )
    MatchingFilteredDeviceInterfaceList = -1073741811;
  else
    MatchingFilteredDeviceInterfaceList = CmGetMatchingFilteredDeviceInterfaceList(
                                            a1,
                                            0,
                                            0,
                                            0,
                                            v18,
                                            v19,
                                            v20,
                                            v21,
                                            v22,
                                            v23);
  if ( !v11 )
    return MatchingFilteredDeviceInterfaceList;
  v17[0] = MatchingFilteredDeviceInterfaceList;
  v14 = guard_dispatch_icall_no_overrides(a1, 0LL);
  if ( v14 == -1073741822 )
    return MatchingFilteredDeviceInterfaceList;
  if ( v14 == -1073741536 )
    return v17[0];
  v15 = MatchingFilteredDeviceInterfaceList;
  if ( v14 )
    return (unsigned int)-1073741595;
  return v15;
}
