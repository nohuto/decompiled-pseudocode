/*
 * XREFs of ?EnsureXamlApplication_WASDK@?$produce@UXamlApplication@factory_implementation@XamlExplorerHost@Shell@Internal@Windows@winrt@@UIXamlApplicationStatics@34567@@impl@winrt@@UEAAHXZ @ 0x18043EC60
 * Callers:
 *     <none>
 * Callees:
 *     ?EnsureXamlApplication_WASDK@XamlApplication@implementation@XamlExplorerHost@Shell@Internal@Windows@winrt@@SAXXZ @ 0x18043EC84 (-EnsureXamlApplication_WASDK@XamlApplication@implementation@XamlExplorerHost@Shell@Internal@Wind.c)
 */

__int64 __fastcall winrt::impl::produce<winrt::Windows::Internal::Shell::XamlExplorerHost::factory_implementation::XamlApplication,winrt::Windows::Internal::Shell::XamlExplorerHost::IXamlApplicationStatics>::EnsureXamlApplication_WASDK(
        __int64 a1)
{
  __int64 result; // rax
  __int64 v2; // [rsp+30h] [rbp+8h] BYREF

  v2 = a1;
  try
  {
    winrt::Windows::Internal::Shell::XamlExplorerHost::implementation::XamlApplication::EnsureXamlApplication_WASDK();
    result = 0LL;
  }
  catch ( ... )
  {
    return (unsigned int)*winrt::to_hresult(&v2);
  }
  return result;
}
