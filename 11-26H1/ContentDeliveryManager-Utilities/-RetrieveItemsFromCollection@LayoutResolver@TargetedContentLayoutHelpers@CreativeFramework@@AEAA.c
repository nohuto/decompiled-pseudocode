/*
 * XREFs of ?RetrieveItemsFromCollection@LayoutResolver@TargetedContentLayoutHelpers@CreativeFramework@@AEAAXPEAUITargetedContentCollection@TargetedContent@Services@Windows@@PEAUHSTRING__@@I@Z @ 0x1800B09F8
 * Callers:
 *     ?ProcessContainer@LayoutResolver@TargetedContentLayoutHelpers@CreativeFramework@@AEAAXPEAUITargetedContentContainer@TargetedContent@Services@Windows@@PEAUHSTRING__@@PEAUITargetedContentIdAliasStore@Internal@567@@Z @ 0x1800B016C (-ProcessContainer@LayoutResolver@TargetedContentLayoutHelpers@CreativeFramework@@AEAAXPEAUITarge.c)
 *     ?RetrieveItemsFromCollection@LayoutResolver@TargetedContentLayoutHelpers@CreativeFramework@@AEAAXPEAUITargetedContentCollection@TargetedContent@Services@Windows@@PEAUHSTRING__@@I@Z @ 0x1800B09F8 (-RetrieveItemsFromCollection@LayoutResolver@TargetedContentLayoutHelpers@CreativeFramework@@AEAA.c)
 * Callees:
 *     ??1?$com_ptr_t@UIStorageFolder@Storage@Windows@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x180029CB0 (--1-$com_ptr_t@UIStorageFolder@Storage@Windows@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180033C28 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Set@HString@Wrappers@WRL@Microsoft@@QEAAJAEBQEAUHSTRING__@@@Z @ 0x18003AE24 (-Set@HString@Wrappers@WRL@Microsoft@@QEAAJAEBQEAUHSTRING__@@@Z.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003E0D8 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x18005A5D4 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ??$make_shared@UItem@TargetedContentLayoutHelpers@CreativeFramework@@@std@@YA?AV?$shared_ptr@UItem@TargetedContentLayoutHelpers@CreativeFramework@@@0@XZ @ 0x1800ADA94 (--$make_shared@UItem@TargetedContentLayoutHelpers@CreativeFramework@@@std@@YA-AV-$shared_ptr@UIt.c)
 *     ?GetNumberFromPropertyBag@TargetedContentLayoutHelpers@CreativeFramework@@YANPEB_WPEAU?$IMapView@PEAUHSTRING__@@PEAVTargetedContentValue@TargetedContent@Services@Windows@@@Collections@Foundation@Windows@@PEAE@Z @ 0x1800AF264 (-GetNumberFromPropertyBag@TargetedContentLayoutHelpers@CreativeFramework@@YANPEB_WPEAU-$IMapView.c)
 *     ?RetrieveItemsFromCollection@LayoutResolver@TargetedContentLayoutHelpers@CreativeFramework@@AEAAXPEAUITargetedContentCollection@TargetedContent@Services@Windows@@PEAUHSTRING__@@I@Z @ 0x1800B09F8 (-RetrieveItemsFromCollection@LayoutResolver@TargetedContentLayoutHelpers@CreativeFramework@@AEAA.c)
 *     ?push_back@?$vector@V?$shared_ptr@UItem@TargetedContentLayoutHelpers@CreativeFramework@@@std@@V?$allocator@V?$shared_ptr@UItem@TargetedContentLayoutHelpers@CreativeFramework@@@std@@@2@@std@@QEAAXAEBV?$shared_ptr@UItem@TargetedContentLayoutHelpers@CreativeFramework@@@2@@Z @ 0x1800B1FFC (-push_back@-$vector@V-$shared_ptr@UItem@TargetedContentLayoutHelpers@CreativeFramework@@@std@@V-.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800C0010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=13
void __fastcall CreativeFramework::TargetedContentLayoutHelpers::LayoutResolver::RetrieveItemsFromCollection(
        CreativeFramework::TargetedContentLayoutHelpers::LayoutResolver *this,
        struct Windows::Services::TargetedContent::ITargetedContentCollection *a2,
        HSTRING a3,
        unsigned int a4)
{
  unsigned int v4; // r15d
  CreativeFramework::TargetedContentLayoutHelpers::LayoutResolver *v5; // r13
  __int64 v6; // rax
  int v7; // eax
  __int64 v8; // rbx
  int v9; // eax
  int v10; // r12d
  int i; // eax
  __int64 v12; // rdi
  __int64 (__fastcall *v13)(__int64, _QWORD, struct Windows::Services::TargetedContent::ITargetedContentCollection **); // rbx
  int v14; // eax
  __int64 v15; // rax
  int v16; // eax
  int v17; // eax
  struct Windows::Services::TargetedContent::ITargetedContentCollection *v18; // rsi
  void (__fastcall *v19)(struct Windows::Services::TargetedContent::ITargetedContentCollection *, HSTRING *); // rdi
  HSTRING *v20; // rbx
  __int64 v21; // rax
  int v22; // eax
  unsigned int v23; // ecx
  double NumberFromPropertyBag; // xmm0_8
  double v25; // xmm0_8
  double v26; // xmm0_8
  __int64 v27; // rax
  int v28; // eax
  __int64 v29; // rbx
  int v30; // eax
  int v31; // esi
  int v32; // eax
  HSTRING v33; // r12
  __int64 v34; // rdi
  __int64 (__fastcall *v35)(__int64, _QWORD, struct Windows::Services::TargetedContent::ITargetedContentCollection **); // rbx
  int v36; // eax
  const char *StringRawBuffer; // rax
  int v38; // [rsp+20h] [rbp-B8h]
  char v39; // [rsp+30h] [rbp-A8h] BYREF
  _BYTE v40[7]; // [rsp+31h] [rbp-A7h] BYREF
  __int64 v41; // [rsp+38h] [rbp-A0h] BYREF
  __int64 v42; // [rsp+40h] [rbp-98h]
  unsigned int v43; // [rsp+48h] [rbp-90h]
  struct Windows::Services::TargetedContent::ITargetedContentCollection *v44; // [rsp+50h] [rbp-88h] BYREF
  HSTRING *newString; // [rsp+58h] [rbp-80h] BYREF
  std::_Ref_count_base *v46; // [rsp+60h] [rbp-78h]
  __int64 v47; // [rsp+68h] [rbp-70h] BYREF
  __int64 v48; // [rsp+70h] [rbp-68h] BYREF
  __int64 v49; // [rsp+78h] [rbp-60h] BYREF
  __int64 v50; // [rsp+80h] [rbp-58h]
  int v51; // [rsp+88h] [rbp-50h]
  __int64 v52[9]; // [rsp+90h] [rbp-48h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+D8h] [rbp+0h]
  struct Windows::Services::TargetedContent::ITargetedContentCollection *v56; // [rsp+E8h] [rbp+10h] BYREF
  HSTRING v57; // [rsp+F0h] [rbp+18h] BYREF
  unsigned int v58; // [rsp+F8h] [rbp+20h]

  v58 = a4;
  v57 = a3;
  v56 = a2;
  v4 = a4;
  v5 = this;
  v6 = *(_QWORD *)a2;
  v49 = 0LL;
  v7 = (*(__int64 (__fastcall **)(struct Windows::Services::TargetedContent::ITargetedContentCollection *, __int64 *))(v6 + 96))(
         a2,
         &v49);
  if ( v7 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      352LL,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\targetedcontentlayoutresolver\\layoutresolver.cpp",
      (const char *)(unsigned int)v7,
      v38);
  v8 = v49;
  v42 = v49;
  v43 = 0;
  v44 = 0LL;
  LODWORD(v41) = 0;
  v9 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v49 + 56LL))(v49, &v41);
  if ( v9 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      7305LL,
      (__int64)"onecore\\internal\\sdk\\inc\\wil\\opensource\\wil\\result_macros.h",
      (const char *)(unsigned int)v9,
      v38);
  v50 = v8;
  v10 = v41;
  v51 = v41;
  v52[0] = 0LL;
  for ( i = v43; i != v10; i = ++v43 )
  {
    v12 = v42;
    v13 = *(__int64 (__fastcall **)(__int64, _QWORD, struct Windows::Services::TargetedContent::ITargetedContentCollection **))(*(_QWORD *)v42 + 48LL);
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v44);
    v14 = v13(v12, v43, &v44);
    if ( v14 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        7305LL,
        (__int64)"onecore\\internal\\sdk\\inc\\wil\\opensource\\wil\\result_macros.h",
        (const char *)(unsigned int)v14,
        v38);
    try
    {
      v47 = 0LL;
      v15 = *(_QWORD *)v44;
      v47 = 0LL;
      v16 = (*(__int64 (__fastcall **)(struct Windows::Services::TargetedContent::ITargetedContentCollection *, __int64 *))(v15 + 72))(
              v44,
              &v47);
      if ( v16 < 0 )
        wil::details::in1diag3::Throw_Hr(
          retaddr,
          358LL,
          (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\targetedcontentlayoutresolver\\layoutresolver.cpp",
          (const char *)(unsigned int)v16,
          v38);
      v40[0] = 0;
      v17 = (*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)v47 + 48LL))(v47, v40);
      if ( v17 < 0 )
        wil::details::in1diag3::Throw_Hr(
          retaddr,
          360LL,
          (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\targetedcontentlayoutresolver\\layoutresolver.cpp",
          (const char *)(unsigned int)v17,
          v38);
      if ( v40[0] )
      {
        std::make_shared<CreativeFramework::TargetedContentLayoutHelpers::Item>(&newString);
        Microsoft::WRL::Wrappers::HString::Set(newString, &v57);
        v18 = v44;
        v19 = *(void (__fastcall **)(struct Windows::Services::TargetedContent::ITargetedContentCollection *, HSTRING *))(*(_QWORD *)v44 + 48LL);
        v20 = newString;
        WindowsDeleteString(newString[1]);
        v20[1] = 0LL;
        v19(v18, v20 + 1);
        v41 = 0LL;
        v21 = *(_QWORD *)v44;
        v41 = 0LL;
        v22 = (*(__int64 (__fastcall **)(struct Windows::Services::TargetedContent::ITargetedContentCollection *, __int64 *))(v21 + 80))(
                v44,
                &v41);
        if ( v22 < 0 )
          wil::details::in1diag3::Throw_Hr(
            retaddr,
            369LL,
            (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\targetedcontentlayoutresolver\\layoutresolver.cpp",
            (const char *)(unsigned int)v22,
            v38);
        v39 = 0;
        v23 = v4++;
        v58 = v4;
        *((_DWORD *)newString + 5) = v23;
        NumberFromPropertyBag = CreativeFramework::TargetedContentLayoutHelpers::GetNumberFromPropertyBag(
                                  L"collection",
                                  v41,
                                  &v39);
        *((double *)newString + 4) = NumberFromPropertyBag;
        *((_BYTE *)newString + 17) = v39 != 0;
        v25 = CreativeFramework::TargetedContentLayoutHelpers::GetNumberFromPropertyBag(L"item", v41, &v39);
        *((double *)newString + 5) = v25;
        *((_BYTE *)newString + 18) = v39 != 0;
        v26 = CreativeFramework::TargetedContentLayoutHelpers::GetNumberFromPropertyBag(L"rank", v41, &v39);
        *((double *)newString + 3) = v26;
        *((_BYTE *)newString + 16) = v39 != 0;
        *((_BYTE *)newString + 48) = 0;
        std::vector<std::shared_ptr<CreativeFramework::TargetedContentLayoutHelpers::Item>>::push_back(
          (char *)v5 + 16,
          &newString);
        if ( *((_BYTE *)newString + 17) )
          std::vector<std::shared_ptr<CreativeFramework::TargetedContentLayoutHelpers::Item>>::push_back(
            (char *)v5 + 40,
            &newString);
        wil::com_ptr_t<Windows::Storage::IStorageFolder,wil::err_exception_policy>::~com_ptr_t<Windows::Storage::IStorageFolder,wil::err_exception_policy>(&v41);
        if ( v46 )
          std::_Ref_count_base::_Decref(v46);
      }
      wil::com_ptr_t<Windows::Storage::IStorageFolder,wil::err_exception_policy>::~com_ptr_t<Windows::Storage::IStorageFolder,wil::err_exception_policy>(&v47);
    }
    catch ( ... )
    {
      StringRawBuffer = (const char *)WindowsGetStringRawBuffer(v57, 0LL);
      wil::details::in1diag3::Log_CaughtExceptionMsg(
        retaddr,
        (unsigned __int16 *)0x185,
        (int)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\targetedcontentlayoutresolver\\layoutresolver.cpp",
        "Content ID: %ls",
        StringRawBuffer);
      v5 = this;
      v4 = v58;
      v10 = v51;
    }
  }
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(v52);
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v44);
  v27 = *(_QWORD *)v56;
  v48 = 0LL;
  v28 = (*(__int64 (__fastcall **)(struct Windows::Services::TargetedContent::ITargetedContentCollection *, __int64 *))(v27 + 88))(
          v56,
          &v48);
  if ( v28 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      393LL,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\targetedcontentlayoutresolver\\layoutresolver.cpp",
      (const char *)(unsigned int)v28,
      v38);
  v29 = v48;
  v42 = v48;
  v43 = 0;
  v44 = 0LL;
  LODWORD(v56) = 0;
  v30 = (*(__int64 (__fastcall **)(__int64, struct Windows::Services::TargetedContent::ITargetedContentCollection **))(*(_QWORD *)v48 + 56LL))(
          v48,
          &v56);
  if ( v30 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      7305LL,
      (__int64)"onecore\\internal\\sdk\\inc\\wil\\opensource\\wil\\result_macros.h",
      (const char *)(unsigned int)v30,
      v38);
  v50 = v29;
  v31 = (int)v56;
  v51 = (int)v56;
  v52[0] = 0LL;
  v32 = v43;
  v33 = v57;
  while ( v32 != v31 )
  {
    v34 = v42;
    v35 = *(__int64 (__fastcall **)(__int64, _QWORD, struct Windows::Services::TargetedContent::ITargetedContentCollection **))(*(_QWORD *)v42 + 48LL);
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v44);
    v36 = v35(v34, v43, &v44);
    if ( v36 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        7305LL,
        (__int64)"onecore\\internal\\sdk\\inc\\wil\\opensource\\wil\\result_macros.h",
        (const char *)(unsigned int)v36,
        v38);
    CreativeFramework::TargetedContentLayoutHelpers::LayoutResolver::RetrieveItemsFromCollection(v5, v44, v33, v4);
    v32 = ++v43;
  }
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(v52);
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v44);
  wil::com_ptr_t<Windows::Storage::IStorageFolder,wil::err_exception_policy>::~com_ptr_t<Windows::Storage::IStorageFolder,wil::err_exception_policy>(&v48);
  wil::com_ptr_t<Windows::Storage::IStorageFolder,wil::err_exception_policy>::~com_ptr_t<Windows::Storage::IStorageFolder,wil::err_exception_policy>(&v49);
}
