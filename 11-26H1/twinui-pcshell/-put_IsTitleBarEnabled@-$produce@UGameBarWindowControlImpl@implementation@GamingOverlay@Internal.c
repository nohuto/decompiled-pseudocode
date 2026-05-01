/*
 * XREFs of ?put_IsTitleBarEnabled@?$produce@UGameBarWindowControlImpl@implementation@GamingOverlay@Internal@Windows@winrt@@UIGameBarWindowControl@3456@@impl@winrt@@UEAAH_N@Z @ 0x18035D200
 * Callers:
 *     <none>
 * Callees:
 *     ?IsTitleBarEnabled@GameBarWindowControlImpl@implementation@GamingOverlay@Internal@Windows@winrt@@QEAAX_N@Z @ 0x18035BA80 (-IsTitleBarEnabled@GameBarWindowControlImpl@implementation@GamingOverlay@Internal@Windows@winrt@.c)
 */

__int64 __fastcall winrt::impl::produce<winrt::Windows::Internal::GamingOverlay::implementation::GameBarWindowControlImpl,winrt::Windows::Internal::GamingOverlay::IGameBarWindowControl>::put_IsTitleBarEnabled(
        __int64 a1,
        char a2)
{
  winrt::Windows::Internal::GamingOverlay::implementation::GameBarWindowControlImpl::IsTitleBarEnabled(
    (RTL_SRWLOCK *)((a1 - 16) & -(__int64)(a1 != 0)),
    a2);
  return 0LL;
}
