/*
 * XREFs of _anonymous_namespace_::TryGetPackagedAppDisplayName @ 0x1805EB170
 * Callers:
 *     _anonymous_namespace_::TryGetRequestorDisplayInformation @ 0x1805EB83C (_anonymous_namespace_--TryGetRequestorDisplayInformation.c)
 * Callees:
 *     ??1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ @ 0x18002633C (--1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ.c)
 *     ??0hstring@param@winrt@@QEAA@AEBV?$basic_string_view@GU?$char_traits@G@std@@@std@@@Z @ 0x1801C5810 (--0hstring@param@winrt@@QEAA@AEBV-$basic_string_view@GU-$char_traits@G@std@@@std@@@Z.c)
 *     ?GetFromAppUserModelId@AppInfo@ApplicationModel@Windows@winrt@@SA@AEBUhstring@param@4@@Z @ 0x1802B58B0 (-GetFromAppUserModelId@AppInfo@ApplicationModel@Windows@winrt@@SA@AEBUhstring@param@4@@Z.c)
 *     __security_check_cookie @ 0x1802C8E90 (__security_check_cookie.c)
 *     ?check_hresult@winrt@@YA?AUhresult@1@U21@AEBUslim_source_location@impl@1@@Z @ 0x1802D92D0 (-check_hresult@winrt@@YA-AUhresult@1@U21@AEBUslim_source_location@impl@1@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=2 #try_helpers=1
_QWORD *__fastcall anonymous_namespace_::TryGetPackagedAppDisplayName(_QWORD *a1, __int64 *a2)
{
  int v3; // eax
  __int64 v4; // rcx
  int v5; // eax
  int v7; // [rsp+20h] [rbp-78h] BYREF
  _QWORD v8[3]; // [rsp+28h] [rbp-70h] BYREF
  __int64 v9; // [rsp+40h] [rbp-58h] BYREF
  int v10; // [rsp+48h] [rbp-50h] BYREF
  __int128 v11; // [rsp+50h] [rbp-48h]
  _BYTE v12[32]; // [rsp+60h] [rbp-38h] BYREF
  __int64 v13; // [rsp+80h] [rbp-18h] BYREF

  v8[1] = a1;
  winrt::param::hstring::hstring((__int64)v12, a2);
  winrt::Windows::ApplicationModel::AppInfo::GetFromAppUserModelId(
    (const struct winrt::param::hstring *)v8,
    (__int64)v12);
  v13 = 0LL;
  v10 = 0;
  v11 = 0LL;
  v3 = (*(__int64 (__fastcall **)(_QWORD, __int64 *))(*(_QWORD *)v8[0] + 64LL))(v8[0], &v13);
  winrt::check_hresult(&v7, v3, (__int64)&v10);
  v4 = v13;
  v9 = v13;
  v13 = 0LL;
  v10 = 0;
  v11 = 0LL;
  v5 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v9 + 48LL))(v4, &v13);
  winrt::check_hresult(&v7, v5, (__int64)&v10);
  *a1 = v13;
  winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)&v9);
  winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)v8);
  return a1;
}
