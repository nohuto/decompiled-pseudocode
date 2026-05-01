/*
 * XREFs of ?MicrosoftUIXamlMarkupXamlMetadataProvider@?$consume_WindowsUdk_ApplicationModel_AppExtensions_IXamlExtensions4@UXamlExtensions@AppExtensions@ApplicationModel@WindowsUdk@winrt@@@impl@winrt@@QEBA@XZ @ 0x180453154
 * Callers:
 *     ?LoadMetadata@XamlApplication_WASDK@implementation@WASDK@XamlExplorerHost@Shell@Internal@Windows@winrt@@AEAAXXZ @ 0x1800A1A68 (-LoadMetadata@XamlApplication_WASDK@implementation@WASDK@XamlExplorerHost@Shell@Internal@Windows.c)
 * Callees:
 *     ??1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ @ 0x18002633C (--1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1802C8E90 (__security_check_cookie.c)
 *     ?check_hresult@winrt@@YA?AUhresult@1@U21@AEBUslim_source_location@impl@1@@Z @ 0x1802D92D0 (-check_hresult@winrt@@YA-AUhresult@1@U21@AEBUslim_source_location@impl@1@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

_QWORD *__fastcall winrt::impl::consume_WindowsUdk_ApplicationModel_AppExtensions_IXamlExtensions4<winrt::WindowsUdk::ApplicationModel::AppExtensions::XamlExtensions>::MicrosoftUIXamlMarkupXamlMetadataProvider(
        __int64 (__fastcall ****a1)(_QWORD, void *, __int64 *),
        _QWORD *a2)
{
  __int64 (__fastcall ***v3)(_QWORD, void *, __int64 *); // rcx
  int v4; // eax
  __int64 v5; // rdi
  int v6; // eax
  __int64 v8; // [rsp+20h] [rbp-40h] BYREF
  int v9; // [rsp+30h] [rbp-30h] BYREF
  __int128 v10; // [rsp+38h] [rbp-28h]
  __int64 v11; // [rsp+48h] [rbp-18h] BYREF
  __int64 v12; // [rsp+50h] [rbp-10h] BYREF

  v12 = 0LL;
  v3 = *a1;
  if ( v3 )
  {
    v11 = 0LL;
    v4 = (**v3)(v3, &winrt::impl::guid_v<winrt::WindowsUdk::ApplicationModel::AppExtensions::IXamlExtensions4>, &v11);
    v5 = v11;
    v8 = v11;
  }
  else
  {
    v4 = 0;
    v8 = 0LL;
    v5 = 0LL;
  }
  v9 = 0;
  v10 = 0LL;
  winrt::check_hresult((int *)&v11, v4, (__int64)&v9);
  v9 = 0;
  v10 = 0LL;
  v6 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v5 + 48LL))(v5, &v12);
  winrt::check_hresult((int *)&v11, v6, (__int64)&v9);
  winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)&v8);
  *a2 = v12;
  return a2;
}
