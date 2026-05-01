/*
 * XREFs of ??0UriBuilder@implementation@Shell@Internal@Windows@winrt@@QEAA@AEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@Z @ 0x180667714
 * Callers:
 *     ?GetLaunchUri@RemoteSystemDataModel@factory_implementation@Shell@Internal@Windows@winrt@@AEAA?AUUri@Foundation@56@AEBURemoteDesktopProviderInfo@3456@W4Mode@CloudPCHelpers@@@Z @ 0x18064CA94 (-GetLaunchUri@RemoteSystemDataModel@factory_implementation@Shell@Internal@Windows@winrt@@AEAA-AU.c)
 * Callees:
 *     ??1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ @ 0x18002633C (--1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ.c)
 *     ??0?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@XZ @ 0x180034F0C (--0-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAA@XZ.c)
 *     ??4?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAAEAV01@AEBV01@@Z @ 0x18013D314 (--4-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAAAEAV01@AEBV01@@Z.c)
 *     ??0hstring@param@winrt@@QEAA@AEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@Z @ 0x1801BCD78 (--0hstring@param@winrt@@QEAA@AEBV-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@@Z.c)
 *     ?QueryParsed@?$consume_Windows_Foundation_IUriRuntimeClass@UIUriRuntimeClass@Foundation@Windows@winrt@@@impl@winrt@@QEBA@XZ @ 0x1802A0EEC (-QueryParsed@-$consume_Windows_Foundation_IUriRuntimeClass@UIUriRuntimeClass@Foundation@Windows@.c)
 *     ??0Uri@Foundation@Windows@winrt@@QEAA@AEBUhstring@param@3@@Z @ 0x1802B5A0C (--0Uri@Foundation@Windows@winrt@@QEAA@AEBUhstring@param@3@@Z.c)
 *     ?Size@?$consume_Windows_Foundation_Collections_IVectorView@UIWwwFormUrlDecoderRuntimeClass@Foundation@Windows@winrt@@UIWwwFormUrlDecoderEntry@234@@impl@winrt@@QEBA@XZ @ 0x180667348 (-Size@-$consume_Windows_Foundation_Collections_IVectorView@UIWwwFormUrlDecoderRuntimeClass@Found.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall winrt::Windows::Internal::Shell::implementation::UriBuilder::UriBuilder(__int64 a1, _QWORD *a2)
{
  char *v4; // rcx
  char *v5; // rdx
  __int64 v6; // r8
  __int64 **v7; // rax
  _QWORD *v8; // rax
  _BYTE v10[40]; // [rsp+20h] [rbp-28h] BYREF
  __int64 v11; // [rsp+60h] [rbp+18h] BYREF
  char v12; // [rsp+68h] [rbp+20h] BYREF

  std::wstring::wstring(a1);
  v4[32] = 0;
  std::wstring::operator=(v4, v5, v6);
  winrt::param::hstring::hstring((__int64)v10, a2);
  v7 = (__int64 **)winrt::Windows::Foundation::Uri::Uri(
                     (winrt::Windows::Foundation::Uri *)&v12,
                     (const struct winrt::param::hstring *)v10);
  v8 = winrt::impl::consume_Windows_Foundation_IUriRuntimeClass<winrt::Windows::Foundation::IUriRuntimeClass>::QueryParsed(
         v7,
         &v11);
  *(_BYTE *)(a1 + 32) = (unsigned int)winrt::impl::consume_Windows_Foundation_Collections_IVectorView<winrt::Windows::Foundation::IWwwFormUrlDecoderRuntimeClass,winrt::Windows::Foundation::IWwwFormUrlDecoderEntry>::Size((__int64 (__fastcall ****)(_QWORD, void *, __int64 *))v8) != 0;
  winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)&v11);
  winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)&v12);
  return a1;
}
