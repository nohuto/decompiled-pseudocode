/*
 * XREFs of ??$ActivateInstance@UIXmlDocument@Dom@Xml@Data@Windows@@@wil@@YA?AV?$com_ptr_t@UIXmlDocument@Dom@Xml@Data@Windows@@Uerr_exception_policy@wil@@@0@PEB_W@Z @ 0x1800ACA00
 * Callers:
 *     ??0TargetedContentLayoutXmlUtilities@TargetedContentLayoutHelpers@CreativeFramework@@QEAA@PEAUHSTRING__@@@Z @ 0x1800ADEE4 (--0TargetedContentLayoutXmlUtilities@TargetedContentLayoutHelpers@CreativeFramework@@QEAA@PEAUHS.c)
 * Callees:
 *     ??$?0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z @ 0x180023724 (--$-0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z.c)
 *     ??1?$com_ptr_t@UIStorageFolder@Storage@Windows@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x180029CB0 (--1-$com_ptr_t@UIStorageFolder@Storage@Windows@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003E0D8 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?reset@?$com_ptr_t@UIInspectable@@Uerr_exception_policy@wil@@@wil@@QEAAXXZ @ 0x18006BAE0 (-reset@-$com_ptr_t@UIInspectable@@Uerr_exception_policy@wil@@@wil@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1800B9110 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800C0010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=2
_QWORD *__fastcall wil::ActivateInstance<Windows::Data::Xml::Dom::IXmlDocument>(_QWORD *a1)
{
  unsigned int v2; // r8d
  HSTRING_HEADER *v3; // rax
  int v4; // eax
  __int64 (__fastcall ***v5)(_QWORD, GUID *, _QWORD *); // rcx
  int v6; // eax
  int v8[2]; // [rsp+20h] [rbp-58h] BYREF
  const WCHAR *v9; // [rsp+30h] [rbp-48h] BYREF
  HSTRING_HEADER v10; // [rsp+48h] [rbp-30h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+0h]

  v9 = L"Windows.Data.Xml.Dom.XmlDocument";
  *(_QWORD *)v8 = 0LL;
  wil::com_ptr_t<IInspectable,wil::err_exception_policy>::reset((__int64 *)v8);
  v3 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(&v10, &v9, v2);
  v4 = RoActivateInstance(v3[1].Reserved.Reserved1, v8);
  if ( v4 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      1869LL,
      (__int64)"onecore\\internal\\sdk\\inc\\wil\\opensource\\wil\\winrt.h",
      (const char *)(unsigned int)v4,
      v8[0]);
  v5 = *(__int64 (__fastcall ****)(_QWORD, GUID *, _QWORD *))v8;
  *a1 = 0LL;
  v6 = (**v5)(v5, &GUID_f7f3a506_1e87_42d6_bcfb_b8c809fa5494, a1);
  if ( v6 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      7305LL,
      (__int64)"onecore\\internal\\sdk\\inc\\wil\\opensource\\wil\\result_macros.h",
      (const char *)(unsigned int)v6,
      v8[0]);
  wil::com_ptr_t<Windows::Storage::IStorageFolder,wil::err_exception_policy>::~com_ptr_t<Windows::Storage::IStorageFolder,wil::err_exception_policy>((__int64 *)v8);
  return a1;
}
