/*
 * XREFs of ?IsPinnable@CTaskbandPin@@AEAA_NPEAUIShellItem2@@@Z @ 0x180689060
 * Callers:
 *     ?v_IsAcceptableTarget@CTaskbandPin@@MEAAHPEFBU_ITEMIDLIST@@PEAUIShellLinkW@@W4PINNABLEFLAG@@PEAPEAUIShellItem@@PEAPEAG43@Z @ 0x18068A610 (-v_IsAcceptableTarget@CTaskbandPin@@MEAAHPEFBU_ITEMIDLIST@@PEAUIShellLinkW@@W4PINNABLEFLAG@@PEAP.c)
 * Callees:
 *     ?_Free@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ @ 0x1800714CC (-_Free@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ.c)
 *     __security_check_cookie @ 0x1802C8E90 (__security_check_cookie.c)
 *     ?_Log_Win32@in1diag3@details@wil@@YAXPEAXIPEBDK@Z @ 0x180358560 (-_Log_Win32@in1diag3@details@wil@@YAXPEAXIPEBDK@Z.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_HardenSetPackageStatus@@@details@wil@@QEAA_NXZ @ 0x18068A474 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_HardenSetPackageStatus@@@details@.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
char __fastcall CTaskbandPin::IsPinnable(CTaskbandPin *this, struct IShellItem2 *a2)
{
  char v3; // di
  HRESULT (__stdcall *GetString)(IShellItem2 *, const PROPERTYKEY *const, LPWSTR *); // rbx
  unsigned int EffectivePackageStatusForUser; // eax
  bool v6; // zf
  int v8; // [rsp+20h] [rbp-30h] BYREF
  int v9; // [rsp+24h] [rbp-2Ch] BYREF
  __int128 v10; // [rsp+28h] [rbp-28h] BYREF
  __int64 v11; // [rsp+38h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+18h]

  v3 = 1;
  v9 = 0;
  if ( ((int (__fastcall *)(struct IShellItem2 *, void *, int *))a2->lpVtbl->GetUInt32)(
         a2,
         &PKEY_Launcher_AppState,
         &v9) >= 0 )
  {
    v3 = 0;
    if ( v9 )
    {
      if ( v9 == 7 )
      {
        v10 = 0uLL;
        v11 = 0LL;
        GetString = a2->lpVtbl->GetString;
        Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free((__int64)&v10);
        *((_QWORD *)&v10 + 1) = -1LL;
        v11 = -1LL;
        if ( ((int (__fastcall *)(struct IShellItem2 *, __int128 *, __int128 *))GetString)(
               a2,
               &PKEY_AppUserModel_PackageFullName,
               &v10) >= 0
          && (_QWORD)v10
          && *(_WORD *)v10 )
        {
          v8 = 0;
          EffectivePackageStatusForUser = GetEffectivePackageStatusForUser(0LL, v10, &v8);
          if ( EffectivePackageStatusForUser )
          {
            wil::details::in1diag3::_Log_Win32(
              retaddr,
              952LL,
              (__int64)"pcshell\\shell\\pinninglib\\lib\\TaskbandPin.cpp",
              (const char *)EffectivePackageStatusForUser);
          }
          else
          {
            if ( (unsigned __int8)wil::details::FeatureImpl<__WilFeatureTraits_Feature_HardenSetPackageStatus>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_HardenSetPackageStatus>::GetImpl'::`2'::impl) )
              v6 = (v8 & 0x40013BF) == 0;
            else
              v6 = (v8 & 0x40033BF) == 0;
            v3 = v6;
          }
        }
        Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free((__int64)&v10);
      }
    }
    else
    {
      return 1;
    }
  }
  return v3;
}
