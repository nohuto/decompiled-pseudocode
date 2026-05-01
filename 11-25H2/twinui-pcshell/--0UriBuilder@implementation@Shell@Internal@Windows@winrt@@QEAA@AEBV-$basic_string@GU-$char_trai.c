/*
 * XREFs of ??0UriBuilder@implementation@Shell@Internal@Windows@winrt@@QEAA@AEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@Z @ 0x180641C40
 * Callers:
 *     ?GetLaunchUri@RemoteSystemDataModel@factory_implementation@Shell@Internal@Windows@winrt@@AEAA?AUUri@Foundation@56@AEBURemoteDesktopProviderInfo@3456@W4Mode@CloudPCHelpers@@@Z @ 0x180626FA4 (-GetLaunchUri@RemoteSystemDataModel@factory_implementation@Shell@Internal@Windows@winrt@@AEAA-AU.c)
 * Callees:
 *     ??1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ @ 0x18005D244 (--1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ.c)
 *     ??4?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAAEAV01@AEBV01@@Z @ 0x1800C40C8 (--4-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAAAEAV01@AEBV01@@Z.c)
 *     ??0hstring@param@winrt@@QEAA@AEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@Z @ 0x1801C5FB4 (--0hstring@param@winrt@@QEAA@AEBV-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@@Z.c)
 *     ?QueryParsed@?$consume_Windows_Foundation_IUriRuntimeClass@UIUriRuntimeClass@Foundation@Windows@winrt@@@impl@winrt@@QEBA@XZ @ 0x1802A85DC (-QueryParsed@-$consume_Windows_Foundation_IUriRuntimeClass@UIUriRuntimeClass@Foundation@Windows@.c)
 *     ??0Uri@Foundation@Windows@winrt@@QEAA@AEBUhstring@param@3@@Z @ 0x1802C0138 (--0Uri@Foundation@Windows@winrt@@QEAA@AEBUhstring@param@3@@Z.c)
 *     ?Size@?$consume_Windows_Foundation_Collections_IVectorView@UIWwwFormUrlDecoderRuntimeClass@Foundation@Windows@winrt@@UIWwwFormUrlDecoderEntry@234@@impl@winrt@@QEBA@XZ @ 0x180641864 (-Size@-$consume_Windows_Foundation_Collections_IVectorView@UIWwwFormUrlDecoderRuntimeClass@Found.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall winrt::Windows::Internal::Shell::implementation::UriBuilder::UriBuilder(
        __int64 a1,
        char *a2,
        __int64 a3)
{
  __int64 **v5; // rax
  _QWORD *v6; // rax
  _BYTE v8[56]; // [rsp+20h] [rbp-38h] BYREF
  __int64 v9; // [rsp+70h] [rbp+18h] BYREF
  char v10; // [rsp+78h] [rbp+20h] BYREF

  *(_OWORD *)a1 = 0LL;
  *(_QWORD *)(a1 + 16) = 0LL;
  *(_QWORD *)(a1 + 24) = 7LL;
  *(_WORD *)a1 = 0;
  *(_BYTE *)(a1 + 32) = 0;
  std::wstring::operator=((char *)a1, a2, a3);
  winrt::param::hstring::hstring((__int64)v8, a2);
  v5 = (__int64 **)winrt::Windows::Foundation::Uri::Uri(
                     (winrt::Windows::Foundation::Uri *)&v10,
                     (const struct winrt::param::hstring *)v8);
  v6 = winrt::impl::consume_Windows_Foundation_IUriRuntimeClass<winrt::Windows::Foundation::IUriRuntimeClass>::QueryParsed(
         v5,
         &v9);
  *(_BYTE *)(a1 + 32) = (unsigned int)winrt::impl::consume_Windows_Foundation_Collections_IVectorView<winrt::Windows::Foundation::IWwwFormUrlDecoderRuntimeClass,winrt::Windows::Foundation::IWwwFormUrlDecoderEntry>::Size((__int64 (__fastcall ****)(_QWORD, void *, __int64 *))v6) != 0;
  winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)&v9);
  winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)&v10);
  return a1;
}
