/*
 * XREFs of ?ApplyPendingValues@GameBarWindowControlImpl@implementation@GamingOverlay@Internal@Windows@winrt@@AEAAXUwrite_lock_required@wil@@@Z @ 0x18035AE30
 * Callers:
 *     ?OnViewCreated@GameBarWindowControlImpl@implementation@GamingOverlay@Internal@Windows@winrt@@QEAAJPEAPEAUIApplicationFrameWrapper@@@Z @ 0x1802375C0 (-OnViewCreated@GameBarWindowControlImpl@implementation@GamingOverlay@Internal@Windows@winrt@@QEA.c)
 *     ?ShowInternal@GameBarWindowControlImpl@implementation@GamingOverlay@Internal@Windows@winrt@@AEAAXUwrite_lock_required@wil@@@Z @ 0x18035C7F0 (-ShowInternal@GameBarWindowControlImpl@implementation@GamingOverlay@Internal@Windows@winrt@@AEAA.c)
 * Callees:
 *     ?value@?$optional@I@std@@QEGAAAEAIXZ @ 0x1802157D0 (-value@-$optional@I@std@@QEGAAAEAIXZ.c)
 *     ?SetBounds@GameBarWindowControlImpl@implementation@GamingOverlay@Internal@Windows@winrt@@AEAAXUwrite_lock_required@wil@@AEBURect@Foundation@56@@Z @ 0x1802206E0 (-SetBounds@GameBarWindowControlImpl@implementation@GamingOverlay@Internal@Windows@winrt@@AEAAXUw.c)
 *     ?SetIsTitleBarEnabled@GameBarWindowControlImpl@implementation@GamingOverlay@Internal@Windows@winrt@@AEAAXUwrite_lock_required@wil@@AEB_N@Z @ 0x18029CC44 (-SetIsTitleBarEnabled@GameBarWindowControlImpl@implementation@GamingOverlay@Internal@Windows@win.c)
 *     ?value@?$optional@Uhstring@winrt@@@std@@QEGAAAEAUhstring@winrt@@XZ @ 0x1802B2A6C (-value@-$optional@Uhstring@winrt@@@std@@QEGAAAEAUhstring@winrt@@XZ.c)
 *     ?value@?$optional@_N@std@@QEGAAAEA_NXZ @ 0x1802C6A08 (-value@-$optional@_N@std@@QEGAAAEA_NXZ.c)
 *     ?SetAllowPointerActivation@GameBarWindowControlImpl@implementation@GamingOverlay@Internal@Windows@winrt@@AEAAXUwrite_lock_required@wil@@AEB_N@Z @ 0x18035C060 (-SetAllowPointerActivation@GameBarWindowControlImpl@implementation@GamingOverlay@Internal@Window.c)
 *     ?SetIsResizingEnabled@GameBarWindowControlImpl@implementation@GamingOverlay@Internal@Windows@winrt@@AEAAXUwrite_lock_required@wil@@AEB_N@Z @ 0x18035C2F0 (-SetIsResizingEnabled@GameBarWindowControlImpl@implementation@GamingOverlay@Internal@Windows@win.c)
 *     ?SetMaximumSize@GameBarWindowControlImpl@implementation@GamingOverlay@Internal@Windows@winrt@@AEAAXUwrite_lock_required@wil@@AEBUSize@Foundation@56@@Z @ 0x18035C410 (-SetMaximumSize@GameBarWindowControlImpl@implementation@GamingOverlay@Internal@Windows@winrt@@AE.c)
 *     ?SetMinimumSize@GameBarWindowControlImpl@implementation@GamingOverlay@Internal@Windows@winrt@@AEAAXUwrite_lock_required@wil@@AEBUSize@Foundation@56@@Z @ 0x18035C548 (-SetMinimumSize@GameBarWindowControlImpl@implementation@GamingOverlay@Internal@Windows@winrt@@AE.c)
 *     ?SetWindowBand@GameBarWindowControlImpl@implementation@GamingOverlay@Internal@Windows@winrt@@AEAAXUwrite_lock_required@wil@@AEBI@Z @ 0x18035C680 (-SetWindowBand@GameBarWindowControlImpl@implementation@GamingOverlay@Internal@Windows@winrt@@AEA.c)
 */

void __fastcall winrt::Windows::Internal::GamingOverlay::implementation::GameBarWindowControlImpl::ApplyPendingValues(
        __int64 a1,
        __int64 a2)
{
  __int64 v3; // rcx
  __int64 v4; // rax
  __int64 v5; // rdx
  _BYTE *v6; // rax
  __int64 v7; // rdx
  __int64 v8; // rax
  __int64 v9; // rdx
  __int64 v10; // rax
  __int64 v11; // rdx
  __int64 v12; // rax
  __int64 v13; // rdx
  __int64 v14; // rax
  __int64 v15; // rdx

  v3 = a1 + 154;
  if ( *(_BYTE *)(v3 + 1) )
  {
    v4 = std::optional<bool>::value(v3);
    winrt::Windows::Internal::GamingOverlay::implementation::GameBarWindowControlImpl::SetIsResizingEnabled(a1, v5, v4);
  }
  if ( *(_BYTE *)(a1 + 157) )
  {
    v6 = (_BYTE *)std::optional<bool>::value(a1 + 156);
    winrt::Windows::Internal::GamingOverlay::implementation::GameBarWindowControlImpl::SetIsTitleBarEnabled(a1, v7, v6);
  }
  if ( *(_BYTE *)(a1 + 136) )
  {
    v8 = std::optional<winrt::hstring>::value(a1 + 128);
    winrt::Windows::Internal::GamingOverlay::implementation::GameBarWindowControlImpl::SetMinimumSize(a1, v9, v8);
  }
  if ( *(_BYTE *)(a1 + 148) )
  {
    v10 = std::optional<winrt::hstring>::value(a1 + 140);
    winrt::Windows::Internal::GamingOverlay::implementation::GameBarWindowControlImpl::SetMaximumSize(a1, v11, v10);
  }
  if ( *(_BYTE *)(a1 + 124) )
    winrt::Windows::Internal::GamingOverlay::implementation::GameBarWindowControlImpl::SetBounds(
      a1,
      a2,
      (float *)(a1 + 108));
  if ( *(_BYTE *)(a1 + 153) )
  {
    v12 = std::optional<bool>::value(a1 + 152);
    winrt::Windows::Internal::GamingOverlay::implementation::GameBarWindowControlImpl::SetAllowPointerActivation(
      a1,
      v13,
      v12);
  }
  if ( *(_BYTE *)(a1 + 164) )
  {
    v14 = std::optional<unsigned int>::value(a1 + 160);
    winrt::Windows::Internal::GamingOverlay::implementation::GameBarWindowControlImpl::SetWindowBand(a1, v15, v14);
  }
}
