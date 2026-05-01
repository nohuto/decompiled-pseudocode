/*
 * XREFs of ?put_MaximumSize@?$produce@UGameBarWindowControlImpl@implementation@GamingOverlay@Internal@Windows@winrt@@UIGameBarWindowControl@3456@@impl@winrt@@UEAAHUSize@Foundation@Windows@3@@Z @ 0x180356940
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x1802D2210 (__security_check_cookie.c)
 *     ?MaximumSize@GameBarWindowControlImpl@implementation@GamingOverlay@Internal@Windows@winrt@@QEAAXAEBUSize@Foundation@56@@Z @ 0x1803553A0 (-MaximumSize@GameBarWindowControlImpl@implementation@GamingOverlay@Internal@Windows@winrt@@QEAAX.c)
 */

__int64 __fastcall winrt::impl::produce<winrt::Windows::Internal::GamingOverlay::implementation::GameBarWindowControlImpl,winrt::Windows::Internal::GamingOverlay::IGameBarWindowControl>::put_MaximumSize(
        __int64 a1,
        __int64 a2)
{
  __int64 result; // rax
  int v3; // [rsp+20h] [rbp-28h] BYREF
  __int64 v4; // [rsp+28h] [rbp-20h] BYREF

  try
  {
    v4 = a2;
    winrt::Windows::Internal::GamingOverlay::implementation::GameBarWindowControlImpl::MaximumSize(
      (RTL_SRWLOCK *)((a1 - 16) & -(__int64)(a1 != 0)),
      (const struct winrt::Windows::Foundation::Size *)&v4);
    result = 0LL;
  }
  catch ( ... )
  {
    return (unsigned int)*winrt::to_hresult(&v3);
  }
  return result;
}
