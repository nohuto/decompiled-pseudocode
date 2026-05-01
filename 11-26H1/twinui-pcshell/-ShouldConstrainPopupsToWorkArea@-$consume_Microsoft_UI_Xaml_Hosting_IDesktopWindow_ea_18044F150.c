/*
 * XREFs of ?ShouldConstrainPopupsToWorkArea@?$consume_Microsoft_UI_Xaml_Hosting_IDesktopWindowXamlSource2@UDesktopWindowXamlSource@Hosting@Xaml@UI@Microsoft@winrt@@@impl@winrt@@QEBA@_N@Z @ 0x18044F150
 * Callers:
 *     ?put_ShouldConstrainPopupsToWorkArea@?$produce@UXamlExplorerHostChildWindow_WASDK@implementation@XamlExplorerHost@Shell@Internal@Windows@winrt@@UIXamlExplorerHostChildWindow_WASDK3@34567@@impl@winrt@@UEAAH_N@Z @ 0x18044FA30 (-put_ShouldConstrainPopupsToWorkArea@-$produce@UXamlExplorerHostChildWindow_WASDK@implementation.c)
 * Callees:
 *     ??1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ @ 0x18002633C (--1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1802C8E90 (__security_check_cookie.c)
 *     ?check_hresult@winrt@@YA?AUhresult@1@U21@AEBUslim_source_location@impl@1@@Z @ 0x1802D92D0 (-check_hresult@winrt@@YA-AUhresult@1@U21@AEBUslim_source_location@impl@1@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall winrt::impl::consume_Microsoft_UI_Xaml_Hosting_IDesktopWindowXamlSource2<winrt::Microsoft::UI::Xaml::Hosting::DesktopWindowXamlSource>::ShouldConstrainPopupsToWorkArea(
        __int64 (__fastcall ****a1)(_QWORD, void *, __int64 *),
        char a2)
{
  __int64 (__fastcall ***v3)(_QWORD, void *, __int64 *); // rcx
  int v4; // eax
  __int64 v5; // rbx
  __int64 v6; // rdx
  int v7; // eax
  __int64 v8; // [rsp+20h] [rbp-30h] BYREF
  int v9; // [rsp+28h] [rbp-28h] BYREF
  __int128 v10; // [rsp+30h] [rbp-20h]
  __int64 v11; // [rsp+40h] [rbp-10h] BYREF

  v3 = *a1;
  if ( v3 )
  {
    v11 = 0LL;
    v4 = (**v3)(v3, &winrt::impl::guid_v<winrt::Microsoft::UI::Xaml::Hosting::IDesktopWindowXamlSource2>, &v11);
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
  LOBYTE(v6) = a2;
  v7 = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v5 + 56LL))(v5, v6);
  winrt::check_hresult((int *)&v11, v7, (__int64)&v9);
  winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)&v8);
}
