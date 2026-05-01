/*
 * XREFs of ?remove_StateChanged@?$produce@UGameBarWindowControlImpl@implementation@GamingOverlay@Internal@Windows@winrt@@UIGameBarWindowControl@3456@@impl@winrt@@UEAAHUevent_token@3@@Z @ 0x180208250
 * Callers:
 *     <none>
 * Callees:
 *     ?StateChanged@GameBarWindowControlImpl@implementation@GamingOverlay@Internal@Windows@winrt@@QEAAXAEBUevent_token@6@@Z @ 0x180208280 (-StateChanged@GameBarWindowControlImpl@implementation@GamingOverlay@Internal@Windows@winrt@@QEAA.c)
 */

__int64 __fastcall winrt::impl::produce<winrt::Windows::Internal::GamingOverlay::implementation::GameBarWindowControlImpl,winrt::Windows::Internal::GamingOverlay::IGameBarWindowControl>::remove_StateChanged(
        __int64 a1,
        __int64 a2)
{
  __int64 v3; // [rsp+38h] [rbp+10h] BYREF

  v3 = a2;
  winrt::Windows::Internal::GamingOverlay::implementation::GameBarWindowControlImpl::StateChanged(
    (winrt::Windows::Internal::GamingOverlay::implementation::GameBarWindowControlImpl *)((a1 - 16) & -(__int64)(a1 != 0)),
    (const struct winrt::event_token *)&v3);
  return 0LL;
}
