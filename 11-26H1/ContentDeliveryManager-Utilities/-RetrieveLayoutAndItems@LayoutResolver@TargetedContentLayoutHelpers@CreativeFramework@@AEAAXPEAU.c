/*
 * XREFs of ?RetrieveLayoutAndItems@LayoutResolver@TargetedContentLayoutHelpers@CreativeFramework@@AEAAXPEAUITargetedContentIdAliasStore@Internal@TargetedContent@Services@Windows@@V1ShellPlacementTelemetry@Logging@3@@Z @ 0x1800B0F1C
 * Callers:
 *     ?ProcessLayoutBindings@LayoutResolver@TargetedContentLayoutHelpers@CreativeFramework@@QEAAXPEAUHSTRING__@@V1ShellPlacementTelemetry@Logging@3@@Z @ 0x1800B0210 (-ProcessLayoutBindings@LayoutResolver@TargetedContentLayoutHelpers@CreativeFramework@@QEAAXPEAUH.c)
 * Callees:
 *     ??1?$com_ptr_t@UIStorageFolder@Storage@Windows@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x180029CB0 (--1-$com_ptr_t@UIStorageFolder@Storage@Windows@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003E0D8 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$ActivateInstance@UITargetedContentSubscriptionInternal@Internal@TargetedContent@Services@Windows@@@wil@@YA?AV?$com_ptr_t@UITargetedContentSubscriptionInternal@Internal@TargetedContent@Services@Windows@@Uerr_exception_policy@wil@@@0@PEB_W@Z @ 0x1800AC94C (--$ActivateInstance@UITargetedContentSubscriptionInternal@Internal@TargetedContent@Services@Wind.c)
 *     ??$ContentIdsReceived@AEAI@LayoutResolver@ShellPlacementTelemetry@Logging@CreativeFramework@@QEAAXAEAI@Z @ 0x1800ACAE8 (--$ContentIdsReceived@AEAI@LayoutResolver@ShellPlacementTelemetry@Logging@CreativeFramework@@QEA.c)
 *     ??$call_and_wait_for_completion@UITargetedContentSubscriptionInternal@Internal@TargetedContent@Services@Windows@@PEAUHSTRING__@@PEAPEAU?$IAsyncOperation@PEAU?$IVectorView@PEAUHSTRING__@@@Collections@Foundation@Windows@@@Foundation@5@$$ZPEAU6@@wil@@YA?A_PPEAUITargetedContentSubscriptionInternal@Internal@TargetedContent@Services@Windows@@P812345@EAAJPEAUHSTRING__@@PEAPEAU?$IAsyncOperation@PEAU?$IVectorView@PEAUHSTRING__@@@Collections@Foundation@Windows@@@Foundation@5@@Z$$QEAPEAU6@@Z @ 0x1800AD8F0 (--$call_and_wait_for_completion@UITargetedContentSubscriptionInternal@Internal@TargetedContent@S.c)
 *     ??$end@PEAUHSTRING__@@@Collections@Foundation@Windows@@YA?AVvector_iterator@?$vector_range@U?$IVectorView@PEAUHSTRING__@@@Collections@Foundation@Windows@@Uerr_exception_policy@wil@@@wil@@PEAU?$IVectorView@PEAUHSTRING__@@@012@@Z @ 0x1800ADA20 (--$end@PEAUHSTRING__@@@Collections@Foundation@Windows@@YA-AVvector_iterator@-$vector_range@U-$IV.c)
 *     ??1LayoutResolver@ShellPlacementTelemetry@Logging@CreativeFramework@@QEAA@XZ @ 0x1800AE194 (--1LayoutResolver@ShellPlacementTelemetry@Logging@CreativeFramework@@QEAA@XZ.c)
 *     ??Dvector_iterator@?$vector_range@U?$IVectorView@PEAUHSTRING__@@@Collections@Foundation@Windows@@Uerr_exception_policy@wil@@@wil@@QEAAAEBVHStringWithRelease@?$MapToSmartType@PEAUHSTRING__@@X@details@2@XZ @ 0x1800AE44C (--Dvector_iterator@-$vector_range@U-$IVectorView@PEAUHSTRING__@@@Collections@Foundation@Windows@.c)
 *     ?ActivateSubscription@LayoutResolver@TargetedContentLayoutHelpers@CreativeFramework@@AEAAXXZ @ 0x1800AE640 (-ActivateSubscription@LayoutResolver@TargetedContentLayoutHelpers@CreativeFramework@@AEAAXXZ.c)
 *     ?GetSubscriptionContainer@LayoutResolver@TargetedContentLayoutHelpers@CreativeFramework@@AEAA?AV?$com_ptr_t@UITargetedContentContainer@TargetedContent@Services@Windows@@Uerr_exception_policy@wil@@@wil@@PEAUHSTRING__@@@Z @ 0x1800AF710 (-GetSubscriptionContainer@LayoutResolver@TargetedContentLayoutHelpers@CreativeFramework@@AEAA-AV.c)
 *     ?ProcessContainer@LayoutResolver@TargetedContentLayoutHelpers@CreativeFramework@@AEAAXPEAUITargetedContentContainer@TargetedContent@Services@Windows@@PEAUHSTRING__@@PEAUITargetedContentIdAliasStore@Internal@567@@Z @ 0x1800B016C (-ProcessContainer@LayoutResolver@TargetedContentLayoutHelpers@CreativeFramework@@AEAAXPEAUITarge.c)
 *     __security_check_cookie @ 0x1800B9110 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800C0010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=9 #try_helpers=1
void __fastcall CreativeFramework::TargetedContentLayoutHelpers::LayoutResolver::RetrieveLayoutAndItems(
        CreativeFramework::TargetedContentLayoutHelpers::LayoutResolver *a1,
        struct Windows::Services::TargetedContent::Internal::ITargetedContentIdAliasStore *a2,
        CreativeFramework::Logging::ShellPlacementTelemetry::LayoutResolver *a3)
{
  CreativeFramework::TargetedContentLayoutHelpers::LayoutResolver *v3; // r14
  __int64 *v4; // rax
  __int64 *v5; // rbx
  int v6; // eax
  char v7; // si
  int i; // eax
  HSTRING *v9; // rax
  __int64 v10; // rcx
  int v11; // eax
  int j; // eax
  HSTRING *v13; // rax
  __int64 v14; // rcx
  HSTRING *v15; // rbx
  PCWSTR StringRawBuffer; // rbx
  const char *v17; // rax
  const char *v18; // rax
  int v19; // [rsp+20h] [rbp-B8h]
  struct Windows::Services::TargetedContent::ITargetedContentContainer *v20; // [rsp+38h] [rbp-A0h] BYREF
  HSTRING *v21; // [rsp+40h] [rbp-98h] BYREF
  int v22; // [rsp+48h] [rbp-90h] BYREF
  __int64 *v23; // [rsp+50h] [rbp-88h] BYREF
  int v24; // [rsp+58h] [rbp-80h]
  HSTRING v25; // [rsp+60h] [rbp-78h]
  CreativeFramework::TargetedContentLayoutHelpers::LayoutResolver *v26; // [rsp+70h] [rbp-68h]
  __int64 *v27; // [rsp+80h] [rbp-58h] BYREF
  _BYTE v28[8]; // [rsp+88h] [rbp-50h] BYREF
  int v29; // [rsp+90h] [rbp-48h]
  HSTRING string; // [rsp+98h] [rbp-40h]
  struct Windows::Services::TargetedContent::Internal::ITargetedContentIdAliasStore *v31; // [rsp+A0h] [rbp-38h]
  CreativeFramework::Logging::ShellPlacementTelemetry::LayoutResolver *v32; // [rsp+A8h] [rbp-30h]
  wil::details::in1diag3 *retaddr; // [rsp+D8h] [rbp+0h]

  try
  {
    v3 = a1;
    v26 = a1;
    v31 = a2;
    v32 = a3;
    CreativeFramework::TargetedContentLayoutHelpers::LayoutResolver::ActivateSubscription(
      a1,
      (__int64)a2,
      (unsigned int)a3);
    v27 = (__int64 *)*((_QWORD *)v3 + 1);
    v4 = (__int64 *)wil::ActivateInstance<Windows::Services::TargetedContent::Internal::ITargetedContentSubscriptionInternal>((__int64)&v21);
    ___call_and_wait_for_completion_UITargetedContentSubscriptionInternal_Internal_TargetedContent_Services_Windows__PEAUHSTRING____PEAPEAU__IAsyncOperation_PEAU__IVectorView_PEAUHSTRING_____Collections_Foundation_Windows___Foundation_5___ZPEAU6__wil__YA_A_PPEAUITargetedContentSubscriptionInternal_Internal_TargetedContent_Services_Windows__P812345_EAAJPEAUHSTRING____PEAPEAU__IAsyncOperation_PEAU__IVectorView_PEAUHSTRING_____Collections_Foundation_Windows___Foundation_5__Z__QEAPEAU6__Z(
      (__int64)&v20,
      *v4);
    v5 = (__int64 *)v20;
    v20 = 0LL;
    v27 = v5;
    wil::com_ptr_t<Windows::Storage::IStorageFolder,wil::err_exception_policy>::~com_ptr_t<Windows::Storage::IStorageFolder,wil::err_exception_policy>((__int64 *)&v21);
    v22 = 0;
    v6 = (*(__int64 (__fastcall **)(__int64 *, int *))(*v5 + 56))(v5, &v22);
    if ( v6 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        427LL,
        (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\targetedcontentlayoutresolver\\layoutresolver.cpp",
        (const char *)(unsigned int)v6,
        v19);
    CreativeFramework::Logging::ShellPlacementTelemetry::LayoutResolver::ContentIdsReceived<unsigned int &>((__int64)v32);
    v7 = 1;
    v23 = v5;
    v24 = 0;
    v25 = 0LL;
    Windows::Foundation::Collections::end<HSTRING__ *>((__int64)v28, v5);
    for ( i = v24; i != v29; i = ++v24 )
    {
      v9 = (HSTRING *)wil::vector_range<Windows::Foundation::Collections::IVectorView<HSTRING__ *>,wil::err_exception_policy>::vector_iterator::operator*((__int64 *)&v23);
      CreativeFramework::TargetedContentLayoutHelpers::LayoutResolver::GetSubscriptionContainer(v10, &v20, *v9);
      if ( v20 )
      {
        LODWORD(v21) = 0;
        v11 = (*(__int64 (__fastcall **)(struct Windows::Services::TargetedContent::ITargetedContentContainer *, HSTRING **))(*(_QWORD *)v20 + 64LL))(
                v20,
                &v21);
        if ( v11 < 0 )
          wil::details::in1diag3::Throw_Hr(
            retaddr,
            439LL,
            (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\targetedcontentlayoutresolver\\layoutresolver.cpp",
            (const char *)(unsigned int)v11,
            v19);
        if ( (_DWORD)v21 != 2 )
        {
          v7 = 0;
          wil::com_ptr_t<Windows::Storage::IStorageFolder,wil::err_exception_policy>::~com_ptr_t<Windows::Storage::IStorageFolder,wil::err_exception_policy>((__int64 *)&v20);
          break;
        }
        v7 = 1;
      }
      wil::com_ptr_t<Windows::Storage::IStorageFolder,wil::err_exception_policy>::~com_ptr_t<Windows::Storage::IStorageFolder,wil::err_exception_policy>((__int64 *)&v20);
    }
    WindowsDeleteString(string);
    string = 0LL;
    WindowsDeleteString(v25);
    if ( v7 )
    {
      v23 = v5;
      v24 = 0;
      v25 = 0LL;
      Windows::Foundation::Collections::end<HSTRING__ *>((__int64)v28, v5);
      for ( j = v24; j != v29; j = ++v24 )
      {
        v13 = (HSTRING *)wil::vector_range<Windows::Foundation::Collections::IVectorView<HSTRING__ *>,wil::err_exception_policy>::vector_iterator::operator*((__int64 *)&v23);
        try
        {
          v15 = v13;
          v21 = v13;
          CreativeFramework::TargetedContentLayoutHelpers::LayoutResolver::GetSubscriptionContainer(v14, &v20, *v13);
          if ( v20 )
            CreativeFramework::TargetedContentLayoutHelpers::LayoutResolver::ProcessContainer(
              (HSTRING *)v3,
              v20,
              *v15,
              v31);
          wil::com_ptr_t<Windows::Storage::IStorageFolder,wil::err_exception_policy>::~com_ptr_t<Windows::Storage::IStorageFolder,wil::err_exception_policy>((__int64 *)&v20);
        }
        catch ( ... )
        {
          StringRawBuffer = WindowsGetStringRawBuffer(*v21, 0LL);
          v17 = (const char *)WindowsGetStringRawBuffer(*((HSTRING *)v26 + 1), 0LL);
          wil::details::in1diag3::Log_CaughtExceptionMsg(
            retaddr,
            (unsigned __int16 *)0x1CD,
            (int)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\targetedcontentlayoutresolver\\layoutresolver.cpp",
            "Subscription ID: %ls, Content ID: %ls",
            v17,
            StringRawBuffer);
          v3 = v26;
        }
      }
      WindowsDeleteString(string);
      string = 0LL;
      WindowsDeleteString(v25);
    }
    wil::com_ptr_t<Windows::Storage::IStorageFolder,wil::err_exception_policy>::~com_ptr_t<Windows::Storage::IStorageFolder,wil::err_exception_policy>((__int64 *)&v27);
  }
  catch ( ... )
  {
    v18 = (const char *)WindowsGetStringRawBuffer(*((HSTRING *)v26 + 1), 0LL);
    wil::details::in1diag3::Log_CaughtExceptionMsg(
      retaddr,
      (unsigned __int16 *)0x1D1,
      (int)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\targetedcontentlayoutresolver\\layoutresolver.cpp",
      "Subscription ID: %ls",
      v18);
  }
  CreativeFramework::Logging::ShellPlacementTelemetry::LayoutResolver::~LayoutResolver(v32);
}
