/*
 * XREFs of ?IsPinAllowed@?$produce@UPinManager@implementation@Shell@Internal@Windows@winrt@@UIPinManager@3456@@impl@winrt@@UEAAHPEAXPEA_N@Z @ 0x1805E71C0
 * Callers:
 *     <none>
 * Callees:
 *     ?IsPinAllowed@PinManager@implementation@Shell@Internal@Windows@winrt@@QEAA_NAEBUhstring@6@@Z @ 0x1800F545C (-IsPinAllowed@PinManager@implementation@Shell@Internal@Windows@winrt@@QEAA_NAEBUhstring@6@@Z.c)
 *     __security_check_cookie @ 0x1802C8E90 (__security_check_cookie.c)
 */

__int64 __fastcall winrt::impl::produce<winrt::Windows::Internal::Shell::implementation::PinManager,winrt::Windows::Internal::Shell::IPinManager>::IsPinAllowed(
        __int64 a1,
        __int64 a2,
        char *a3)
{
  __int64 result; // rax
  __int64 v4; // [rsp+20h] [rbp-18h] BYREF

  try
  {
    v4 = a2;
    *a3 = winrt::Windows::Internal::Shell::implementation::PinManager::IsPinAllowed(
            (winrt::Windows::Internal::Shell::implementation::PinManager *)((a1 - 8) & -(__int64)(a1 != 0)),
            (const struct winrt::hstring *)&v4);
    result = 0LL;
  }
  catch ( ... )
  {
    return (unsigned int)*winrt::to_hresult(&v4);
  }
  return result;
}
