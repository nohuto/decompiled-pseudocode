/*
 * XREFs of ?HandlePackageServicingAsync@ThemeCoordinator@implementation@Themes@UI@Internal@Windows@winrt@@AEAAJXZ @ 0x180606A60
 * Callers:
 *     ?perform_delayed_initialization@ThemeCoordinator@implementation@Themes@UI@Internal@Windows@winrt@@UEAAXXZ @ 0x180607D60 (-perform_delayed_initialization@ThemeCoordinator@implementation@Themes@UI@Internal@Windows@winrt.c)
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIAppLayoutOperationItem@@@WRL@Microsoft@@IEBAXXZ @ 0x1800276DC (-InternalAddRef@-$ComPtr@UIAppLayoutOperationItem@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180048294 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     Windows::Internal::ComTaskPool::QueueTask__lambda_dcb5be991d2862ede33e1b093bd23459___ @ 0x180605008 (Windows--Internal--ComTaskPool--QueueTask__lambda_dcb5be991d2862ede33e1b093bd23459___.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall winrt::Windows::Internal::UI::Themes::implementation::ThemeCoordinator::HandlePackageServicingAsync(
        winrt::Windows::Internal::UI::Themes::implementation::ThemeCoordinator *this)
{
  __int64 v2; // rcx
  int v3; // edi
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  winrt::Windows::Internal::UI::Themes::implementation::ThemeCoordinator *v6; // [rsp+30h] [rbp+8h] BYREF

  v6 = this;
  Microsoft::WRL::ComPtr<IAppLayoutOperationItem>::InternalAddRef((__int64 *)&v6);
  v6 = this;
  Microsoft::WRL::ComPtr<IAppLayoutOperationItem>::InternalAddRef((__int64 *)&v6);
  v3 = Windows::Internal::ComTaskPool::QueueTask__lambda_dcb5be991d2862ede33e1b093bd23459___(
         v2,
         (volatile signed __int32 *)&v6);
  if ( v6 )
    (*(void (__fastcall **)(winrt::Windows::Internal::UI::Themes::implementation::ThemeCoordinator *))(*(_QWORD *)v6 + 16LL))(v6);
  if ( v3 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x20D,
      (int)"pcshell\\twinui\\themecoordinator\\lib\\themecoordinator.cpp",
      (const char *)(unsigned int)v3);
  if ( this )
    (*(void (__fastcall **)(winrt::Windows::Internal::UI::Themes::implementation::ThemeCoordinator *))(*(_QWORD *)this + 16LL))(this);
  return 0LL;
}
