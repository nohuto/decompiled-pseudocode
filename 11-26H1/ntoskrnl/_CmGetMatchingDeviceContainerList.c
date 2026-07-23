/*
 * XREFs of _CmGetMatchingDeviceContainerList @ 0x14089E1D4
 * Callers:
 *     _PnpDispatchDeviceContainer @ 0x140A3BF10 (_PnpDispatchDeviceContainer.c)
 * Callees:
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 *     _PnpGetGenericObjectList @ 0x1408A3638 (_PnpGetGenericObjectList.c)
 *     _PnpCtxGetCachedContextBaseKey @ 0x140957518 (_PnpCtxGetCachedContextBaseKey.c)
 */

__int64 __fastcall CmGetMatchingDeviceContainerList(
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
  __int64 v13; // rdi
  int v14; // esi
  __int64 v15; // r14
  __int64 v16; // r12
  int CachedContextBaseKey; // ebx
  int v18; // r8d
  int v19; // eax
  unsigned int v20; // ecx
  __int64 v22; // [rsp+40h] [rbp-91h] BYREF
  __int64 v23; // [rsp+48h] [rbp-89h]
  _QWORD v24[2]; // [rsp+50h] [rbp-81h] BYREF
  unsigned int v25[4]; // [rsp+60h] [rbp-71h] BYREF
  __int64 v26; // [rsp+70h] [rbp-61h]
  __int64 v27; // [rsp+78h] [rbp-59h]
  __int64 v28; // [rsp+80h] [rbp-51h]
  int v29; // [rsp+88h] [rbp-49h]
  __int64 v30; // [rsp+90h] [rbp-41h]
  int v31; // [rsp+98h] [rbp-39h]

  memset_0(v25, 0, 0x58uLL);
  v11 = *(_QWORD *)(a1 + 504);
  v29 = a5;
  v31 = a7;
  v26 = a2;
  v27 = a3;
  v28 = a4;
  v30 = a6;
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
        return v25[0];
      if ( v12 )
        return (unsigned int)-1073741595;
    }
  }
  v13 = v30;
  v14 = v29;
  v15 = v28;
  v16 = v27;
  v23 = v26;
  v22 = 0LL;
  CachedContextBaseKey = PnpCtxGetCachedContextBaseKey(a1, 10LL, &v22);
  if ( CachedContextBaseKey >= 0 )
  {
    v24[0] = v23;
    v24[1] = v16;
    CachedContextBaseKey = PnpGetGenericObjectList(a1, v22, v18, (unsigned int)v24, v15, v14, v13);
  }
  if ( v11 )
  {
    v25[0] = CachedContextBaseKey;
    v19 = guard_dispatch_icall_no_overrides(a1, 0LL);
    if ( v19 != -1073741822 )
    {
      if ( v19 != -1073741536 )
      {
        v20 = CachedContextBaseKey;
        if ( v19 )
          return (unsigned int)-1073741595;
        return v20;
      }
      return v25[0];
    }
  }
  return (unsigned int)CachedContextBaseKey;
}
