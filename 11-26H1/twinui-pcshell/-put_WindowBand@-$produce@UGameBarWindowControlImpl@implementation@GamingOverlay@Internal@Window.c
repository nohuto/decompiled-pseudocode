/*
 * XREFs of ?put_WindowBand@?$produce@UGameBarWindowControlImpl@implementation@GamingOverlay@Internal@Windows@winrt@@UIGameBarWindowControl@3456@@impl@winrt@@UEAAHI@Z @ 0x18035D2D0
 * Callers:
 *     <none>
 * Callees:
 *     ?WindowBand@GameBarWindowControlImpl@implementation@GamingOverlay@Internal@Windows@winrt@@QEAAXI@Z @ 0x18035CAF8 (-WindowBand@GameBarWindowControlImpl@implementation@GamingOverlay@Internal@Windows@winrt@@QEAAXI.c)
 */

__int64 __fastcall winrt::impl::produce<winrt::Windows::Internal::GamingOverlay::implementation::GameBarWindowControlImpl,winrt::Windows::Internal::GamingOverlay::IGameBarWindowControl>::put_WindowBand(
        __int64 a1,
        int a2)
{
  winrt::Windows::Internal::GamingOverlay::implementation::GameBarWindowControlImpl::WindowBand(
    (RTL_SRWLOCK *)((a1 - 16) & -(__int64)(a1 != 0)),
    a2);
  return 0LL;
}
