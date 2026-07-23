/*
 * XREFs of _CmGetMatchingCommonClassList @ 0x14089F440
 * Callers:
 *     _PnpDispatchInterfaceClass @ 0x1409721D0 (_PnpDispatchInterfaceClass.c)
 *     _PnpDispatchInstallerClass @ 0x140972DA0 (_PnpDispatchInstallerClass.c)
 * Callees:
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 *     _CmGetMatchingCommonClassListWorker @ 0x14089F5AC (_CmGetMatchingCommonClassListWorker.c)
 */

__int64 __fastcall CmGetMatchingCommonClassList(
        __int64 a1,
        int a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        int a6,
        __int64 a7,
        int a8)
{
  __int64 v12; // r15
  int v13; // eax
  unsigned int MatchingCommonClassListWorker; // eax
  unsigned int v15; // ebx
  int v16; // eax
  int v17; // ecx
  unsigned int v18; // eax
  _DWORD v20[4]; // [rsp+40h] [rbp-71h] BYREF
  __int64 v21; // [rsp+50h] [rbp-61h]
  __int64 v22; // [rsp+58h] [rbp-59h]
  __int64 v23; // [rsp+60h] [rbp-51h]
  int v24; // [rsp+68h] [rbp-49h]
  __int64 v25; // [rsp+70h] [rbp-41h]
  int v26; // [rsp+78h] [rbp-39h]

  memset_0(v20, 0, 0x58uLL);
  v12 = *(_QWORD *)(a1 + 504);
  v24 = a6;
  v21 = a3;
  v22 = a4;
  v25 = a7;
  v26 = a8;
  v23 = a5;
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
        return v20[0];
      if ( v13 )
        return (unsigned int)-1073741595;
    }
  }
  MatchingCommonClassListWorker = CmGetMatchingCommonClassListWorker(a1, a2, v21, v22, v23, v24, v25);
  v15 = MatchingCommonClassListWorker;
  if ( !v12 )
    return v15;
  v20[0] = MatchingCommonClassListWorker;
  v16 = guard_dispatch_icall_no_overrides(a1, 0LL);
  v17 = v16;
  if ( v16 == -1073741822 )
    return v15;
  if ( v16 == -1073741536 )
    return v20[0];
  v18 = v15;
  if ( v17 )
    return (unsigned int)-1073741595;
  return v18;
}
