/*
 * XREFs of ?IsSameActivationId@GameBarWindowControlImpl@implementation@GamingOverlay@Internal@Windows@winrt@@QEAA_N_K@Z @ 0x18029E610
 * Callers:
 *     ?GetWindow@GamingOverlayExperienceManager@@UEAAJ_KPEAPEAUIGameBarWindowControl@GamingOverlay@Internal@Windows@@@Z @ 0x18034AB00 (-GetWindow@GamingOverlayExperienceManager@@UEAAJ_KPEAPEAUIGameBarWindowControl@GamingOverlay@Int.c)
 * Callees:
 *     ??1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ @ 0x18002633C (--1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1802C8E90 (__security_check_cookie.c)
 *     ?ActivationId@?$consume_Windows_Internal_Shell_Desktop_ViewManagerInterop_IViewWrapperDesktopExtension@UIViewWrapperDesktopExtension@ViewManagerInterop@Desktop@Shell@Internal@Windows@winrt@@@impl@winrt@@QEBA@XZ @ 0x18035AC88 (-ActivationId@-$consume_Windows_Internal_Shell_Desktop_ViewManagerInterop_IViewWrapperDesktopExt.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1 #try_helpers=1
bool __fastcall winrt::Windows::Internal::GamingOverlay::implementation::GameBarWindowControlImpl::IsSameActivationId(
        winrt::Windows::Internal::GamingOverlay::implementation::GameBarWindowControlImpl *this,
        __int64 a2)
{
  __int64 v3; // rax
  void (__fastcall ***v4)(_QWORD, void *, __int64 *); // rcx
  bool v5; // bl
  __int64 v7; // [rsp+28h] [rbp-20h] BYREF

  if ( a2 )
  {
    v4 = (void (__fastcall ***)(_QWORD, void *, __int64 *))*((_QWORD *)this + 3);
    v7 = 0LL;
    if ( v4 )
    {
      (**v4)(
        v4,
        &winrt::impl::guid_v<winrt::Windows::Internal::Shell::Desktop::ViewManagerInterop::IViewWrapperDesktopExtension>,
        &v7);
      v3 = v7;
    }
    else
    {
      v3 = 0LL;
    }
    if ( v3 )
    {
      v5 = winrt::impl::consume_Windows_Internal_Shell_Desktop_ViewManagerInterop_IViewWrapperDesktopExtension<winrt::Windows::Internal::Shell::Desktop::ViewManagerInterop::IViewWrapperDesktopExtension>::ActivationId(&v7) == a2;
      winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)&v7);
      LOBYTE(v3) = v5;
    }
  }
  else
  {
    LOBYTE(v3) = 0;
  }
  return v3;
}
