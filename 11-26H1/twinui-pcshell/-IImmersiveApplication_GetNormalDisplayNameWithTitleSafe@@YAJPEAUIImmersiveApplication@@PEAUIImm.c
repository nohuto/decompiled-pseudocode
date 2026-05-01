/*
 * XREFs of ?IImmersiveApplication_GetNormalDisplayNameWithTitleSafe@@YAJPEAUIImmersiveApplication@@PEAUIImmersiveApplicationManagerSafeForSyncCallouts@@PEAPEAG@Z @ 0x1801F1088
 * Callers:
 *     ?GetViewTitle@ApplicationViewHelpers@@YAJPEAUIApplicationView@@PEAPEAG@Z @ 0x180047744 (-GetViewTitle@ApplicationViewHelpers@@YAJPEAUIApplicationView@@PEAPEAG@Z.c)
 * Callees:
 *     ?ConcatFormat@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@QEAAJPEBGZZ @ 0x180070A64 (-ConcatFormat@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@QEAAJPEBG.c)
 *     ?_Free@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ @ 0x1800714CC (-_Free@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ.c)
 *     Mirror_IsThreadRTL @ 0x1800822EC (Mirror_IsThreadRTL.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall IImmersiveApplication_GetNormalDisplayNameWithTitleSafe(
        struct IImmersiveApplication *a1,
        struct IImmersiveApplicationManagerSafeForSyncCallouts *a2,
        unsigned __int16 **a3)
{
  __int64 v3; // rax
  int v6; // esi
  __int64 v7; // rcx
  int (__fastcall *v8)(struct IImmersiveApplication *, LPVOID *); // rbx
  LPVOID v9; // rbx
  int IsThreadRTL; // eax
  const wchar_t *v11; // rdx
  unsigned __int16 *v12; // rax
  void *v13; // rcx
  LPVOID pv; // [rsp+20h] [rbp-30h] BYREF
  __int64 v16; // [rsp+28h] [rbp-28h]
  __int64 v17; // [rsp+30h] [rbp-20h]
  LPVOID v18; // [rsp+38h] [rbp-18h] BYREF
  __int64 v19; // [rsp+40h] [rbp-10h]
  __int64 v20; // [rsp+48h] [rbp-8h]

  *a3 = 0LL;
  v3 = *(_QWORD *)a1;
  v19 = -1LL;
  v20 = -1LL;
  v18 = 0LL;
  v6 = (*(__int64 (__fastcall **)(struct IImmersiveApplication *, LPVOID *))(v3 + 376))(a1, &v18);
  if ( v6 >= 0 )
  {
    v7 = *(_QWORD *)a1;
    pv = 0LL;
    v16 = 0LL;
    v17 = 0LL;
    v8 = *(int (__fastcall **)(struct IImmersiveApplication *, LPVOID *))(v7 + 248);
    Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free((__int64)&pv);
    v16 = -1LL;
    v17 = -1LL;
    if ( v8(a1, &pv) < 0 )
      goto LABEL_7;
    v9 = v18;
    IsThreadRTL = Mirror_IsThreadRTL();
    v11 = asc_18077D200;
    if ( !IsThreadRTL )
      v11 = asc_18077D1F0;
    if ( (int)Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::ConcatFormat(
                &pv,
                (__int64)v11,
                v9) < 0 )
    {
LABEL_7:
      v12 = (unsigned __int16 *)v18;
      v13 = pv;
      v18 = 0LL;
      v20 = 0LL;
      v19 = 0LL;
    }
    else
    {
      v12 = (unsigned __int16 *)pv;
      v13 = 0LL;
      pv = 0LL;
      v17 = 0LL;
      v16 = 0LL;
    }
    *a3 = v12;
    if ( v13 )
      CoTaskMemFree(v13);
  }
  if ( v18 )
    CoTaskMemFree(v18);
  return (unsigned int)v6;
}
