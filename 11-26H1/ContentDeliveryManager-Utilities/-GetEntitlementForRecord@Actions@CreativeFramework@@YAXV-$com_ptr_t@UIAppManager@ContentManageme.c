/*
 * XREFs of ?GetEntitlementForRecord@Actions@CreativeFramework@@YAXV?$com_ptr_t@UIAppManager@ContentManagement@@Uerr_exception_policy@wil@@@wil@@AEBQEB_W111_N@Z @ 0x1800932F0
 * Callers:
 *     ?InstallAppByProductAndSku@Actions@CreativeFramework@@YAXPEB_W00_N11100@Z @ 0x180093638 (-InstallAppByProductAndSku@Actions@CreativeFramework@@YAXPEB_W00_N11100@Z.c)
 *     ?InstallAppByStoreId@Actions@CreativeFramework@@YAXPEB_W0_N1110000@Z @ 0x1800937C4 (-InstallAppByStoreId@Actions@CreativeFramework@@YAXPEB_W0_N1110000@Z.c)
 * Callees:
 *     _Init_thread_footer @ 0x1800232C0 (_Init_thread_footer.c)
 *     _Init_thread_header @ 0x180023330 (_Init_thread_header.c)
 *     ??$?0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z @ 0x180023724 (--$-0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z.c)
 *     ??1?$com_ptr_t@UIStorageFolder@Storage@Windows@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x180029CB0 (--1-$com_ptr_t@UIStorageFolder@Storage@Windows@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z @ 0x18002E084 (-CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003E0D8 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_InstallAttribution@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x180076D48 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_InstallAttribution@@@details@wil@@QEAAX_N.c)
 *     ??$ReportEntitlementAcquisitionState@AEBQEB_WAEBQEB_WAEA_NIAEBQEB_W@ContentDeliveryManagerTelemetry@Background@ContentDeliveryManager@@SAXAEBQEB_W0AEA_N$$QEAI0@Z @ 0x1800929F4 (--$ReportEntitlementAcquisitionState@AEBQEB_WAEBQEB_WAEA_NIAEBQEB_W@ContentDeliveryManagerTeleme.c)
 *     ?IsMsaConnected@Actions@CreativeFramework@@YA_NXZ @ 0x180093CBC (-IsMsaConnected@Actions@CreativeFramework@@YA_NXZ.c)
 *     __security_check_cookie @ 0x1800B9110 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800C0010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=12
__int64 __fastcall CreativeFramework::Actions::GetEntitlementForRecord(
        __int64 *a1,
        const WCHAR **a2,
        const WCHAR **a3,
        const WCHAR **a4,
        const WCHAR **a5,
        char a6)
{
  __int64 *v7; // rdi
  const WCHAR **v8; // rsi
  CreativeFramework::Actions *v9; // rcx
  char v10; // bl
  unsigned int v11; // r8d
  __int64 (*v12)(void); // r15
  PVOID Reserved1; // r14
  unsigned int v14; // r8d
  PVOID v15; // rsi
  unsigned int v16; // r8d
  unsigned int v17; // r8d
  int v18; // eax
  wil *v19; // rcx
  char v20; // al
  __int64 (*v21)(void); // r15
  PVOID v22; // r14
  unsigned int v23; // r8d
  PVOID v24; // rsi
  unsigned int v25; // r8d
  unsigned int v26; // r8d
  int v27; // eax
  unsigned int v28; // r8d
  wil *v29; // rcx
  _BYTE v31[32]; // [rsp+0h] [rbp-178h] BYREF
  int v32[2]; // [rsp+20h] [rbp-158h]
  char v33; // [rsp+28h] [rbp-150h]
  PVOID v34; // [rsp+30h] [rbp-148h]
  char v35; // [rsp+40h] [rbp-138h] BYREF
  char v36; // [rsp+41h] [rbp-137h]
  const WCHAR **v37; // [rsp+48h] [rbp-130h] BYREF
  const WCHAR *v38; // [rsp+50h] [rbp-128h] BYREF
  const WCHAR **v39; // [rsp+58h] [rbp-120h]
  const WCHAR **v40; // [rsp+60h] [rbp-118h]
  __int64 *v41; // [rsp+68h] [rbp-110h]
  const wchar_t **v42; // [rsp+70h] [rbp-108h]
  const wchar_t **v43; // [rsp+78h] [rbp-100h]
  __int64 *v44; // [rsp+80h] [rbp-F8h]
  const WCHAR **v45; // [rsp+88h] [rbp-F0h]
  HSTRING_HEADER hstringHeader; // [rsp+90h] [rbp-E8h] BYREF
  __int64 v47; // [rsp+A8h] [rbp-D0h]
  HSTRING_HEADER v48; // [rsp+B0h] [rbp-C8h] BYREF
  HSTRING_HEADER v49; // [rsp+D0h] [rbp-A8h] BYREF
  HSTRING_HEADER v50; // [rsp+F0h] [rbp-88h] BYREF
  HSTRING_HEADER v51; // [rsp+110h] [rbp-68h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+178h] [rbp+0h]

  v39 = a3;
  v40 = a2;
  v7 = a1;
  v41 = a1;
  v44 = a1;
  v43 = a2;
  v42 = a3;
  v8 = a5;
  v37 = a5;
  v45 = a5;
  if ( a6 )
    goto LABEL_7;
  if ( dword_1801805F0 > *(_DWORD *)(*((_QWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + (unsigned int)tls_index)
                                   + 8LL) )
  {
    Init_thread_header(&dword_1801805F0);
    if ( dword_1801805F0 == -1 )
    {
      byte_1801805F4 = CreativeFramework::Actions::IsMsaConnected(v9);
      Init_thread_footer(&dword_1801805F0);
    }
  }
  if ( !byte_1801805F4 )
LABEL_7:
    v10 = 1;
  else
    v10 = 0;
  v36 = v10;
  v35 = v10;
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_InstallAttribution>::ReportUsage(
    (wil::details *)&`wil::Feature<__WilFeatureTraits_Feature_InstallAttribution>::GetImpl'::`2'::impl,
    1u,
    0);
  v38 = *a4;
  if ( v10 )
    goto LABEL_14;
  v12 = *(__int64 (**)(void))(*(_QWORD *)*v7 + 80LL);
  Reserved1 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(&v48, &v38, v11)[1].Reserved.Reserved1;
  v15 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(&v49, a5, v14)[1].Reserved.Reserved1;
  v47 = 0LL;
  Microsoft::WRL::Wrappers::HStringReference::CreateReference(&hstringHeader, &Src, 1u, 0);
  Microsoft::WRL::Wrappers::HStringReference::HStringReference(&v50, v39, v16);
  Microsoft::WRL::Wrappers::HStringReference::HStringReference(&v51, v40, v17);
  v34 = Reserved1;
  v33 = 0;
  *(_QWORD *)v32 = v15;
  try
  {
    v18 = v12();
    v19 = retaddr;
    if ( v18 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        116LL,
        (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\actionhelpers\\appinstaller.cpp",
        (const char *)(unsigned int)v18,
        v32[0]);
  }
  catch ( ... )
  {
    LODWORD(v37) = wil::ResultFromCaughtException(v19, v31, v11);
    ContentDeliveryManager::Background::ContentDeliveryManagerTelemetry::ReportEntitlementAcquisitionState<wchar_t const * const &,wchar_t const * const &,bool &,unsigned int,wchar_t const * const &>(
      v43,
      v42,
      &v35,
      (int *)&v37,
      &v38);
    v35 = 1;
    v20 = 1;
    v36 = 1;
    v7 = v44;
    v41 = v44;
    v40 = v43;
    v39 = v42;
    v8 = v45;
    goto LABEL_13;
  }
  v20 = v36;
  v7 = v41;
  v8 = v37;
LABEL_13:
  if ( v20 )
  {
LABEL_14:
    v21 = *(__int64 (**)(void))(*(_QWORD *)*v7 + 80LL);
    v22 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(&v51, &v38, v11)[1].Reserved.Reserved1;
    v24 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(&v50, v8, v23)[1].Reserved.Reserved1;
    v47 = 0LL;
    Microsoft::WRL::Wrappers::HStringReference::CreateReference(&hstringHeader, &Src, 1u, 0);
    Microsoft::WRL::Wrappers::HStringReference::HStringReference(&v49, v39, v25);
    Microsoft::WRL::Wrappers::HStringReference::HStringReference(&v48, v40, v26);
    v34 = v22;
    v33 = v36;
    *(_QWORD *)v32 = v24;
    try
    {
      v27 = v21();
      v29 = retaddr;
      if ( v27 < 0 )
        wil::details::in1diag3::Throw_Hr(
          retaddr,
          138LL,
          (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\actionhelpers\\appinstaller.cpp",
          (const char *)(unsigned int)v27,
          v32[0]);
    }
    catch ( ... )
    {
      LODWORD(v37) = wil::ResultFromCaughtException(v29, v31, v28);
      ContentDeliveryManager::Background::ContentDeliveryManagerTelemetry::ReportEntitlementAcquisitionState<wchar_t const * const &,wchar_t const * const &,bool &,unsigned int,wchar_t const * const &>(
        v43,
        v42,
        &v35,
        (int *)&v37,
        &v38);
      throw;
    }
  }
  LODWORD(v37) = 0;
  ContentDeliveryManager::Background::ContentDeliveryManagerTelemetry::ReportEntitlementAcquisitionState<wchar_t const * const &,wchar_t const * const &,bool &,unsigned int,wchar_t const * const &>(
    v40,
    v39,
    &v35,
    (int *)&v37,
    &v38);
  return wil::com_ptr_t<Windows::Storage::IStorageFolder,wil::err_exception_policy>::~com_ptr_t<Windows::Storage::IStorageFolder,wil::err_exception_policy>(v41);
}
