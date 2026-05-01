/*
 * XREFs of _lambda_2b4736168c23780831e980beacfbaf99_::operator() @ 0x1805EE330
 * Callers:
 *     _anonymous_namespace_::CreateConsentToastXmlDocument @ 0x1805EE804 (_anonymous_namespace_--CreateConsentToastXmlDocument.c)
 * Callees:
 *     ??1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ @ 0x18002633C (--1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18006B898 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Free@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ @ 0x1800714CC (-_Free@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ.c)
 *     ??0hstring@param@winrt@@QEAA@QEBG@Z @ 0x1801AEAFC (--0hstring@param@winrt@@QEAA@QEBG@Z.c)
 *     ?Initialize@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@QEAAJPEAUHINSTANCE__@@IG@Z @ 0x1801DEDF4 (-Initialize@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@QEAAJPEAUHI.c)
 *     ?SetAttribute@?$consume_Windows_Data_Xml_Dom_IXmlElement@UIXmlElement@Dom@Xml@Data@Windows@winrt@@@impl@winrt@@QEBA@AEBUhstring@param@3@0@Z @ 0x180586A84 (-SetAttribute@-$consume_Windows_Data_Xml_Dom_IXmlElement@UIXmlElement@Dom@Xml@Data@Windows@winrt.c)
 *     ?CreateElement@?$consume_Windows_Data_Xml_Dom_IXmlDocument@UIXmlDocument@Dom@Xml@Data@Windows@winrt@@@impl@winrt@@QEBA@AEBUhstring@param@3@@Z @ 0x1805EEF78 (-CreateElement@-$consume_Windows_Data_Xml_Dom_IXmlDocument@UIXmlDocument@Dom@Xml@Data@Windows@wi.c)
 */

// Hidden C++ exception states: #wind=3
__int64 **__fastcall lambda_2b4736168c23780831e980beacfbaf99_::operator()(
        __int64 a1,
        __int64 **a2,
        winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *a3,
        unsigned int a4,
        unsigned __int16 *a5)
{
  int v7; // eax
  unsigned __int16 *v9[2]; // [rsp+28h] [rbp-29h] BYREF
  __int64 v10; // [rsp+38h] [rbp-19h]
  __int64 v11[4]; // [rsp+40h] [rbp-11h] BYREF
  __int64 v12[8]; // [rsp+60h] [rbp+Fh] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+A8h] [rbp+57h]

  v12[4] = (__int64)a2;
  v12[5] = (__int64)a3;
  v9[0] = 0LL;
  v9[1] = 0LL;
  v10 = 0LL;
  v7 = Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::Initialize(
         (__int64)v9,
         &_ImageBase,
         a4);
  if ( v7 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0xBA,
      (int)"pcshell\\twinui\\pinmanager\\lib\\NotificationPinConsentPrompt.cpp",
      (const char *)(unsigned int)v7,
      0);
  winrt::param::hstring::hstring((winrt::param::hstring *)v11, L"action");
  winrt::impl::consume_Windows_Data_Xml_Dom_IXmlDocument<winrt::Windows::Data::Xml::Dom::IXmlDocument>::CreateElement(
    a3,
    a2,
    v11);
  winrt::param::hstring::hstring((winrt::param::hstring *)v11, a5);
  winrt::param::hstring::hstring((winrt::param::hstring *)v12, L"id");
  winrt::impl::consume_Windows_Data_Xml_Dom_IXmlElement<winrt::Windows::Data::Xml::Dom::IXmlElement>::SetAttribute(
    a2,
    v12,
    v11);
  winrt::param::hstring::hstring((winrt::param::hstring *)v12, a5);
  winrt::param::hstring::hstring((winrt::param::hstring *)v11, L"arguments");
  winrt::impl::consume_Windows_Data_Xml_Dom_IXmlElement<winrt::Windows::Data::Xml::Dom::IXmlElement>::SetAttribute(
    a2,
    v11,
    v12);
  winrt::param::hstring::hstring((winrt::param::hstring *)v12, v9[0]);
  winrt::param::hstring::hstring((winrt::param::hstring *)v11, L"content");
  winrt::impl::consume_Windows_Data_Xml_Dom_IXmlElement<winrt::Windows::Data::Xml::Dom::IXmlElement>::SetAttribute(
    a2,
    v11,
    v12);
  Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free((__int64)v9);
  winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension(a3);
  return a2;
}
