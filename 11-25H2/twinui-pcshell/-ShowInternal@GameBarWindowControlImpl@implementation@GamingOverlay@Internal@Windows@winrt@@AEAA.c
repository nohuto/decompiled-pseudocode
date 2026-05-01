/*
 * XREFs of ?ShowInternal@GameBarWindowControlImpl@implementation@GamingOverlay@Internal@Windows@winrt@@AEAAXUwrite_lock_required@wil@@@Z @ 0x180355F20
 * Callers:
 *     ?OnViewCreated@GameBarWindowControlImpl@implementation@GamingOverlay@Internal@Windows@winrt@@QEAAJPEAPEAUIApplicationFrameWrapper@@@Z @ 0x180246620 (-OnViewCreated@GameBarWindowControlImpl@implementation@GamingOverlay@Internal@Windows@winrt@@QEA.c)
 *     ?OnClientWindowReadyForPresentationChanged@GameBarWindowControlImpl@implementation@GamingOverlay@Internal@Windows@winrt@@AEAAXUIClientWindowState@ViewManagerInterop@Shell@456@UIClientWindowReadyForPresentationChangedEventArgs@89456@@Z @ 0x180355510 (-OnClientWindowReadyForPresentationChanged@GameBarWindowControlImpl@implementation@GamingOverlay.c)
 *     ?Show@GameBarWindowControlImpl@implementation@GamingOverlay@Internal@Windows@winrt@@QEAAXXZ @ 0x180355EBC (-Show@GameBarWindowControlImpl@implementation@GamingOverlay@Internal@Windows@winrt@@QEAAXXZ.c)
 * Callees:
 *     ??1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ @ 0x18005D244 (--1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800934E8 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Navigate@?$consume_Windows_Internal_Shell_ViewManagerInterop_IViewWrapper@UIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@winrt@@@impl@winrt@@QEBA@AEBW4NavigationLevel@ViewManagerInterop@Shell@Internal@Windows@3@@Z @ 0x18022B948 (-Navigate@-$consume_Windows_Internal_Shell_ViewManagerInterop_IViewWrapper@UIViewWrapper@ViewMan.c)
 *     ?UpdateWindowState@GameBarWindowControlImpl@implementation@GamingOverlay@Internal@Windows@winrt@@AEAAXUwrite_lock_required@wil@@W4GameBarWindowState@3456@@Z @ 0x18022EAD4 (-UpdateWindowState@GameBarWindowControlImpl@implementation@GamingOverlay@Internal@Windows@winrt@.c)
 *     ??$as@UIClientWindowState@ViewManagerInterop@Shell@Internal@Windows@winrt@@Utype@?$abi@UIUnknown@Foundation@Windows@winrt@@X@impl@6@$0A@@impl@winrt@@YA?AUIClientWindowState@ViewManagerInterop@Shell@Internal@Windows@1@PEAUtype@?$abi@UIUnknown@Foundation@Windows@winrt@@X@01@@Z @ 0x180237A44 (--$as@UIClientWindowState@ViewManagerInterop@Shell@Internal@Windows@winrt@@Utype@-$abi@UIUnknown.c)
 *     ?ApplyPendingValues@GameBarWindowControlImpl@implementation@GamingOverlay@Internal@Windows@winrt@@AEAAXUwrite_lock_required@wil@@@Z @ 0x180354590 (-ApplyPendingValues@GameBarWindowControlImpl@implementation@GamingOverlay@Internal@Windows@winrt.c)
 *     ?ClientWindowReadyForPresentation@?$consume_Windows_Internal_Shell_ViewManagerInterop_IClientWindowState@UIClientWindowState@ViewManagerInterop@Shell@Internal@Windows@winrt@@@impl@winrt@@QEBA@XZ @ 0x180354764 (-ClientWindowReadyForPresentation@-$consume_Windows_Internal_Shell_ViewManagerInterop_IClientWin.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall winrt::Windows::Internal::GamingOverlay::implementation::GameBarWindowControlImpl::ShowInternal(
        __int64 a1,
        __int64 a2)
{
  int v3; // eax
  __int64 v4; // rdx
  int v5; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  unsigned int v7; // [rsp+30h] [rbp+8h] BYREF
  __int64 v8; // [rsp+40h] [rbp+18h] BYREF

  if ( *(_QWORD *)(a1 + 40) )
  {
    winrt::Windows::Internal::GamingOverlay::implementation::GameBarWindowControlImpl::ApplyPendingValues(a1, a2);
    winrt::impl::as<winrt::Windows::Internal::Shell::ViewManagerInterop::IClientWindowState,winrt::impl::abi<winrt::Windows::Foundation::IUnknown,void>::type,0>(
      &v8,
      *(__int64 (__fastcall ****)(_QWORD, void *, _QWORD **))(a1 + 24));
    v7 = 4;
    winrt::impl::consume_Windows_Internal_Shell_ViewManagerInterop_IViewWrapper<winrt::Windows::Internal::Shell::ViewManagerInterop::IViewWrapper>::Navigate(
      (__int64 *)(a1 + 24),
      &v7);
    if ( winrt::impl::consume_Windows_Internal_Shell_ViewManagerInterop_IClientWindowState<winrt::Windows::Internal::Shell::ViewManagerInterop::IClientWindowState>::ClientWindowReadyForPresentation(&v8) )
    {
      v3 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(a1 + 40) + 40LL))(*(_QWORD *)(a1 + 40), 0LL);
      if ( v3 < 0 )
        wil::details::in1diag3::Throw_Hr(
          retaddr,
          (void *)0x185,
          (int)"pcshell\\twinui\\GamingOverlayExperienceManager\\lib\\GameBarWindowControl.cpp",
          (const char *)(unsigned int)v3,
          v5);
      *(_BYTE *)(a1 + 105) = 0;
      winrt::Windows::Internal::GamingOverlay::implementation::GameBarWindowControlImpl::UpdateWindowState(a1, v4, 2);
    }
    else
    {
      LOWORD(v7) = 257;
      *(_WORD *)(a1 + 104) = 257;
    }
    winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)&v8);
  }
  else
  {
    *(_WORD *)(a1 + 104) = 257;
  }
}
