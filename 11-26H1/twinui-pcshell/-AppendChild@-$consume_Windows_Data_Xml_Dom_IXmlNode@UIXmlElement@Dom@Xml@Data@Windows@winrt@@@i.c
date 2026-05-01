/*
 * XREFs of ?AppendChild@?$consume_Windows_Data_Xml_Dom_IXmlNode@UIXmlElement@Dom@Xml@Data@Windows@winrt@@@impl@winrt@@QEBA@AEBUIXmlNode@Dom@Xml@Data@Windows@3@@Z @ 0x1805EE640
 * Callers:
 *     _anonymous_namespace_::CreateConsentToastXmlDocument @ 0x1805EE804 (_anonymous_namespace_--CreateConsentToastXmlDocument.c)
 * Callees:
 *     ??1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ @ 0x18002633C (--1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1802C8E90 (__security_check_cookie.c)
 *     ?check_hresult@winrt@@YA?AUhresult@1@U21@AEBUslim_source_location@impl@1@@Z @ 0x1802D92D0 (-check_hresult@winrt@@YA-AUhresult@1@U21@AEBUslim_source_location@impl@1@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *__fastcall winrt::impl::consume_Windows_Data_Xml_Dom_IXmlNode<winrt::Windows::Data::Xml::Dom::IXmlElement>::AppendChild(
        __int64 (__fastcall ****a1)(_QWORD, void *, __int64 *),
        _QWORD *a2,
        _QWORD *a3)
{
  __int64 (__fastcall ***v5)(_QWORD, void *, __int64 *); // rcx
  int v6; // eax
  __int64 v7; // rbx
  int v8; // eax
  __int64 v10; // [rsp+20h] [rbp-40h] BYREF
  int v11; // [rsp+30h] [rbp-30h] BYREF
  __int128 v12; // [rsp+38h] [rbp-28h]
  __int64 v13; // [rsp+48h] [rbp-18h] BYREF
  __int64 v14; // [rsp+50h] [rbp-10h] BYREF

  v14 = 0LL;
  v5 = *a1;
  if ( v5 )
  {
    v13 = 0LL;
    v6 = (**v5)(v5, &winrt::impl::guid_v<winrt::Windows::Data::Xml::Dom::IXmlNode>, &v13);
    v7 = v13;
    v10 = v13;
  }
  else
  {
    v6 = 0;
    v10 = 0LL;
    v7 = 0LL;
  }
  v11 = 0;
  v12 = 0LL;
  winrt::check_hresult((int *)&v13, v6, (__int64)&v11);
  v11 = 0;
  v12 = 0LL;
  v8 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64 *))(*(_QWORD *)v7 + 176LL))(v7, *a3, &v14);
  winrt::check_hresult((int *)&v13, v8, (__int64)&v11);
  winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)&v10);
  *a2 = v14;
  return a2;
}
