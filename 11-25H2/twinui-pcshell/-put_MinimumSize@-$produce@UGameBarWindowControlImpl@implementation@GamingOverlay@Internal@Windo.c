/*
 * XREFs of ?put_MinimumSize@?$produce@UGameBarWindowControlImpl@implementation@GamingOverlay@Internal@Windows@winrt@@UIGameBarWindowControl@3456@@impl@winrt@@UEAAHUSize@Foundation@Windows@3@@Z @ 0x180356990
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x1802D2210 (__security_check_cookie.c)
 *     ?MinimumSize@GameBarWindowControlImpl@implementation@GamingOverlay@Internal@Windows@winrt@@QEAAXAEBUSize@Foundation@56@@Z @ 0x18035549C (-MinimumSize@GameBarWindowControlImpl@implementation@GamingOverlay@Internal@Windows@winrt@@QEAAX.c)
 */

__int64 __fastcall winrt::impl::produce<winrt::Windows::Internal::GamingOverlay::implementation::GameBarWindowControlImpl,winrt::Windows::Internal::GamingOverlay::IGameBarWindowControl>::put_MinimumSize(
        __int64 a1,
        __int64 a2)
{
  __int64 v3; // [rsp+28h] [rbp-20h] BYREF

  v3 = a2;
  winrt::Windows::Internal::GamingOverlay::implementation::GameBarWindowControlImpl::MinimumSize(
    (RTL_SRWLOCK *)((a1 - 16) & -(__int64)(a1 != 0)),
    (const struct winrt::Windows::Foundation::Size *)&v3);
  return 0LL;
}
