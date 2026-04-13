/*
 * XREFs of ?ExtractTargetedContentTilesInCollection@LayoutResolver@TargetedContentLayoutHelpers@CreativeFramework@@AEAAXPEB_W@Z @ 0x1800AEA1C
 * Callers:
 *     ?ProcessLayoutBindings@LayoutResolver@TargetedContentLayoutHelpers@CreativeFramework@@QEAAXPEAUHSTRING__@@V1ShellPlacementTelemetry@Logging@3@@Z @ 0x1800B0210 (-ProcessLayoutBindings@LayoutResolver@TargetedContentLayoutHelpers@CreativeFramework@@QEAAXPEAUH.c)
 * Callees:
 *     ??1?$com_ptr_t@UIStorageFolder@Storage@Windows@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x180029CB0 (--1-$com_ptr_t@UIStorageFolder@Storage@Windows@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180033C28 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003E0D8 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??0?$com_ptr_t@UIXmlNode@Dom@Xml@Data@Windows@@Uerr_exception_policy@wil@@@wil@@QEAA@AEBV01@@Z @ 0x18008E7D0 (--0-$com_ptr_t@UIXmlNode@Dom@Xml@Data@Windows@@Uerr_exception_policy@wil@@@wil@@QEAA@AEBV01@@Z.c)
 *     ??$end@PEAUHSTRING__@@@Collections@Foundation@Windows@@YA?AVvector_iterator@?$vector_range@U?$IVectorView@PEAUHSTRING__@@@Collections@Foundation@Windows@@Uerr_exception_policy@wil@@@wil@@PEAU?$IVectorView@PEAUHSTRING__@@@012@@Z @ 0x1800ADA20 (--$end@PEAUHSTRING__@@@Collections@Foundation@Windows@@YA-AVvector_iterator@-$vector_range@U-$IV.c)
 *     _lambda_12e028b79b04ba515e9d372c1a557575_::operator() @ 0x1800AE4D8 (_lambda_12e028b79b04ba515e9d372c1a557575_--operator().c)
 *     ?GetStartDefaultPins@StartDocked@@YAJV?$com_ptr_t@UIStartScreenManagerExtensionStatics@StartScreen@UI@WindowsUdk@@Uerr_exception_policy@wil@@@wil@@PEAPEAU?$IVectorView@PEAUIInspectable@@@Collections@Foundation@Windows@@@Z @ 0x1800AF394 (-GetStartDefaultPins@StartDocked@@YAJV-$com_ptr_t@UIStartScreenManagerExtensionStatics@StartScre.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800C0010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=6
void __fastcall CreativeFramework::TargetedContentLayoutHelpers::LayoutResolver::ExtractTargetedContentTilesInCollection(
        CreativeFramework::TargetedContentLayoutHelpers::LayoutResolver *this,
        const wchar_t *a2)
{
  __int64 *v2; // rax
  int StartDefaultPins; // eax
  int i; // eax
  __int64 (__fastcall *v5)(__int64 *, _QWORD, _QWORD); // rbx
  int v6; // eax
  __int64 (__fastcall **v7)(_QWORD, GUID *, _QWORD); // rax
  int v8; // eax
  int v9; // eax
  int v10; // [rsp+20h] [rbp-30h]
  __int64 *v11; // [rsp+20h] [rbp-30h]
  unsigned int v12; // [rsp+28h] [rbp-28h]
  __int64 (__fastcall ***v13)(_QWORD, GUID *, _QWORD); // [rsp+30h] [rbp-20h] BYREF
  _BYTE v14[8]; // [rsp+38h] [rbp-18h] BYREF
  int v15; // [rsp+40h] [rbp-10h]
  __int64 v16; // [rsp+48h] [rbp-8h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+18h]
  __int64 (__fastcall ***v18)(_QWORD, GUID *, __int64 *); // [rsp+70h] [rbp+20h] BYREF
  const wchar_t *v19; // [rsp+78h] [rbp+28h] BYREF
  __int64 *v20; // [rsp+80h] [rbp+30h] BYREF
  CreativeFramework::TargetedContentLayoutHelpers::LayoutResolver *v21; // [rsp+88h] [rbp+38h] BYREF

  v19 = a2;
  v21 = this;
  if ( *((_QWORD *)this + 11) )
  {
    v20 = 0LL;
    v2 = wil::com_ptr_t<Windows::Data::Xml::Dom::IXmlNode,wil::err_exception_policy>::com_ptr_t<Windows::Data::Xml::Dom::IXmlNode,wil::err_exception_policy>(
           (__int64 *)&v19,
           (__int64 *)this + 11);
    StartDefaultPins = StartDocked::GetStartDefaultPins(v2, &v20);
    if ( StartDefaultPins < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        206LL,
        (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\targetedcontentlayoutresolver\\layoutresolver.cpp",
        (const char *)(unsigned int)StartDefaultPins,
        v10);
    v11 = v20;
    v12 = 0;
    v13 = 0LL;
    Windows::Foundation::Collections::end<HSTRING__ *>((__int64)v14, v20);
    for ( i = 0; i != v15; i = ++v12 )
    {
      v5 = *(__int64 (__fastcall **)(__int64 *, _QWORD, _QWORD))(*v11 + 48);
      Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v13);
      v6 = v5(v11, v12, &v13);
      if ( v6 < 0 )
        wil::details::in1diag3::Throw_Hr(
          retaddr,
          7305LL,
          (__int64)"onecore\\internal\\sdk\\inc\\wil\\opensource\\wil\\result_macros.h",
          (const char *)(unsigned int)v6,
          (int)v11);
      v18 = 0LL;
      v7 = *v13;
      v18 = 0LL;
      v8 = (*v7)(v13, &GUID_d3653510_4fff_4bfa_905b_ea038b142fa5, &v18);
      if ( v8 < 0 )
        wil::details::in1diag3::Throw_Hr(
          retaddr,
          211LL,
          (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\targetedcontentlayoutresolver\\layoutresolver.cpp",
          (const char *)(unsigned int)v8,
          (int)v11);
      LODWORD(v19) = 0;
      v9 = ((__int64 (__fastcall *)(__int64 (__fastcall ***)(_QWORD, GUID *, __int64 *), const wchar_t **))(*v18)[6])(
             v18,
             &v19);
      if ( v9 < 0 )
        wil::details::in1diag3::Throw_Hr(
          retaddr,
          213LL,
          (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\targetedcontentlayoutresolver\\layoutresolver.cpp",
          (const char *)(unsigned int)v9,
          (int)v11);
      if ( (_DWORD)v19 == 3 )
        lambda_12e028b79b04ba515e9d372c1a557575_::operator()((__int64 *)&v21, v18);
      wil::com_ptr_t<Windows::Storage::IStorageFolder,wil::err_exception_policy>::~com_ptr_t<Windows::Storage::IStorageFolder,wil::err_exception_policy>((__int64 *)&v18);
    }
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v16);
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v13);
    wil::com_ptr_t<Windows::Storage::IStorageFolder,wil::err_exception_policy>::~com_ptr_t<Windows::Storage::IStorageFolder,wil::err_exception_policy>((__int64 *)&v20);
  }
}
