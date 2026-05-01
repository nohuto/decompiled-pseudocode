/*
 * XREFs of ?Uri@UriBuilder@implementation@Shell@Internal@Windows@winrt@@QEBA?AU0Foundation@56@XZ @ 0x180641DE0
 * Callers:
 *     ?GetLaunchUri@RemoteSystemDataModel@factory_implementation@Shell@Internal@Windows@winrt@@AEAA?AUUri@Foundation@56@AEBURemoteDesktopProviderInfo@3456@W4Mode@CloudPCHelpers@@@Z @ 0x180626FA4 (-GetLaunchUri@RemoteSystemDataModel@factory_implementation@Shell@Internal@Windows@winrt@@AEAA-AU.c)
 * Callees:
 *     ??0hstring@param@winrt@@QEAA@AEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@Z @ 0x1801C5FB4 (--0hstring@param@winrt@@QEAA@AEBV-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@@Z.c)
 *     ??0Uri@Foundation@Windows@winrt@@QEAA@AEBUhstring@param@3@@Z @ 0x1802C0138 (--0Uri@Foundation@Windows@winrt@@QEAA@AEBUhstring@param@3@@Z.c)
 */

winrt::Windows::Foundation::Uri *__fastcall winrt::Windows::Internal::Shell::implementation::UriBuilder::Uri(
        _QWORD *a1,
        winrt::Windows::Foundation::Uri *a2)
{
  _BYTE v4[48]; // [rsp+28h] [rbp-30h] BYREF

  winrt::param::hstring::hstring((__int64)v4, a1);
  winrt::Windows::Foundation::Uri::Uri(a2, (const struct winrt::param::hstring *)v4);
  return a2;
}
