/*
 * XREFs of GamingOverlayExperienceManager::LaunchForResultsAsyncInternal$_ResumeCoro$1 @ 0x18034C420
 * Callers:
 *     ?LaunchForResultsAsyncInternal@GamingOverlayExperienceManager@@AEAA?AU?$IAsyncOperation@UValueSet@Collections@Foundation@Windows@winrt@@@Foundation@Windows@winrt@@Uhstring@5@U?$IMap@Uhstring@winrt@@U12@@Collections@345@@Z @ 0x18034D01C (-LaunchForResultsAsyncInternal@GamingOverlayExperienceManager@@AEAA-AU-$IAsyncOperation@UValueSe.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18001AE8C (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ??1CAutoSRWExclusiveLock@@QEAA@XZ @ 0x18001C3D4 (--1CAutoSRWExclusiveLock@@QEAA@XZ.c)
 *     ??1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ @ 0x18002633C (--1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ.c)
 *     ?close@?$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ @ 0x18002E610 (-close@-$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ.c)
 *     ?_Tidy_deallocate@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAAXXZ @ 0x180031D20 (-_Tidy_deallocate@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@AEAAXXZ.c)
 *     ??0?$shared_ptr@VInputAppViewCoodinatorHandler@@@std@@QEAA@AEBV01@@Z @ 0x180034ACC (--0-$shared_ptr@VInputAppViewCoodinatorHandler@@@std@@QEAA@AEBV01@@Z.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x1800373AC (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180048294 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z @ 0x1800573EC (-CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z.c)
 *     ?AcquireSRWLockExclusive@wil@@YA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@1@PEAU_RTL_SRWLOCK@@@Z @ 0x1800584D8 (-AcquireSRWLockExclusive@wil@@YA-AV-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18006B898 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??9Foundation@Windows@winrt@@YA_NAEBUIUnknown@012@0@Z @ 0x1800CC1A4 (--9Foundation@Windows@winrt@@YA_NAEBUIUnknown@012@0@Z.c)
 *     ??4IUnknown@Foundation@Windows@winrt@@QEAAAEAU0123@AEBU0123@@Z @ 0x1800DC92C (--4IUnknown@Foundation@Windows@winrt@@QEAAAEAU0123@AEBU0123@@Z.c)
 *     ?c_str@hstring@winrt@@QEBAPEBGXZ @ 0x1800F6270 (-c_str@hstring@winrt@@QEBAPEBGXZ.c)
 *     ??$?0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z @ 0x180114CC8 (--$-0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z.c)
 *     ??_D?$basic_stringstream@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAXXZ @ 0x18013BCA0 (--_D-$basic_stringstream@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAAXXZ.c)
 *     ?Size@?$consume_Windows_Foundation_Collections_IVectorView@U?$IVectorView@UIXamlMetadataProvider@Markup@Xaml@UI@Windows@winrt@@@Collections@Foundation@Windows@winrt@@UIXamlMetadataProvider@Markup@Xaml@UI@45@@impl@winrt@@QEBA@XZ @ 0x18020EBC0 (-Size@-$consume_Windows_Foundation_Collections_IVectorView@U-$IVectorView@UIXamlMetadataProvider.c)
 *     ??$verify_hresult@J@wil@@YAJJ@Z @ 0x1802C78AC (--$verify_hresult@J@wil@@YAJJ@Z.c)
 *     __security_check_cookie @ 0x1802C8E90 (__security_check_cookie.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1802C92A8 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??2@YAPEAX_K@Z @ 0x1802C9924 (--2@YAPEAX_K@Z.c)
 *     memset_0 @ 0x1802C9ECC (memset_0.c)
 *     _CxxThrowException_0 @ 0x1802C9ED8 (_CxxThrowException_0.c)
 *     ?current@slim_source_location@impl@winrt@@SA?AU123@IQEBD0@Z @ 0x1802D7924 (-current@slim_source_location@impl@winrt@@SA-AU123@IQEBD0@Z.c)
 *     ??0hresult_canceled@winrt@@QEAA@AEBUslim_source_location@impl@1@@Z @ 0x1803179A0 (--0hresult_canceled@winrt@@QEAA@AEBUslim_source_location@impl@1@@Z.c)
 *     ??$await_suspend@Upromise_type@?$coroutine_traits@U?$IAsyncOperation@U?$IVectorView@UMeetAndChatFallbackProp@Shell@Internal@Windows@winrt@@@Collections@Foundation@Windows@winrt@@@Foundation@Windows@winrt@@PEAVMeetAndChatIris@implementation@Shell@Internal@34@AEAUMeetAndChatFallbackContent@7834@@experimental@std@@@?$await_adapter@UIAsyncAction@Foundation@Windows@winrt@@$00@impl@winrt@@QEAA_NU?$coroutine_handle@Upromise_type@?$coroutine_traits@U?$IAsyncOperation@U?$IVectorView@UMeetAndChatFallbackProp@Shell@Internal@Windows@winrt@@@Collections@Foundation@Windows@winrt@@@Foundation@Windows@winrt@@PEAVMeetAndChatIris@implementation@Shell@Internal@34@AEAUMeetAndChatFallbackContent@7834@@experimental@std@@@experimental@std@@@Z @ 0x180325FE8 (--$await_suspend@Upromise_type@-$coroutine_traits@U-$IAsyncOperation@U-$IVectorView@UMeetAndChat.c)
 *     ??$await_suspend@Upromise_type@?$coroutine_traits@U?$IAsyncOperation@_N@Foundation@Windows@winrt@@PEAUPinManager@implementation@Shell@Internal@34@Uhstring@4@U94@USecondaryTile@StartScreen@UI@34@PEFBU_ITEMIDLIST@@_N_NW4PINNEDLISTMODIFYCALLER@@VPinManagerRequestPinItem@PinManagerTelemetry@@V?$tip_test@V?$merged_data@U_tip_PinManagerPinTest@PinManagerTipTests@@U12@@details@tip2@@@tip2@@V?$test_watcher@V?$merged_data@U_tip_PinManagerPinTest@PinManagerTipTests@@U12@@details@tip2@@@tip2@@@experimental@std@@@?$await_adapter@U?$IAsyncOperation@_N@Foundation@Windows@winrt@@$00@impl@winrt@@QEAA_NU?$coroutine_handle@Upromise_type@?$coroutine_traits@U?$IAsyncOperation@_N@Foundation@Windows@winrt@@PEAUPinManager@implementation@Shell@Internal@34@Uhstring@4@U94@USecondaryTile@StartScreen@UI@34@PEFBU_ITEMIDLIST@@_N_NW4PINNEDLISTMODIFYCALLER@@VPinManagerRequestPinItem@PinManagerTelemetry@@V?$tip_test@V?$merged_data@U_tip_PinManagerPinTest@PinManagerTipTests@@U12@@details@tip2@@@tip2@@V?$test_watcher@V?$merged_data@U_tip_PinManagerPinTest@PinManagerTipTests@@U12@@details@tip2@@@tip2@@@experimental@std@@@experimental@std@@@Z @ 0x180326094 (--$await_suspend@Upromise_type@-$coroutine_traits@U-$IAsyncOperation@_N@Foundation@Windows@winrt.c)
 *     ??$await_transform@UIAsyncAction@Foundation@Windows@winrt@@@?$promise_base@Upromise_type@?$coroutine_traits@UIAsyncAction@Foundation@Windows@winrt@@PEAUGamingPostureController@implementation@Posture@GamingExperiences@Internal@34@@experimental@std@@UIAsyncAction@Foundation@Windows@winrt@@X@impl@winrt@@QEAA$$QEAUIAsyncAction@Foundation@Windows@2@$$QEAU3452@@Z @ 0x180326108 (--$await_transform@UIAsyncAction@Foundation@Windows@winrt@@@-$promise_base@Upromise_type@-$corou.c)
 *     ??1?$cancellable_awaiter@U?$await_adapter@U?$IAsyncOperation@I@Foundation@Windows@winrt@@$00@impl@winrt@@@winrt@@QEAA@XZ @ 0x180328DF0 (--1-$cancellable_awaiter@U-$await_adapter@U-$IAsyncOperation@I@Foundation@Windows@winrt@@$00@imp.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_57804088@@@details@wil@@QEAA_NXZ @ 0x1803306F8 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_57804088@@@details@wil@@QEAA_NXZ.c)
 *     ?await_resume@?$await_adapter@U?$IAsyncOperation@_N@Foundation@Windows@winrt@@$00@impl@winrt@@QEBA@XZ @ 0x180330894 (-await_resume@-$await_adapter@U-$IAsyncOperation@_N@Foundation@Windows@winrt@@$00@impl@winrt@@QE.c)
 *     ?await_resume@?$await_adapter@UIAsyncAction@Foundation@Windows@winrt@@$00@impl@winrt@@QEBA@XZ @ 0x1803308DC (-await_resume@-$await_adapter@UIAsyncAction@Foundation@Windows@winrt@@$00@impl@winrt@@QEBA@XZ.c)
 *     ?await_suspend@final_suspend_awaiter@?$promise_base@Upromise_type@?$coroutine_traits@U?$IAsyncOperation@_N@Foundation@Windows@winrt@@PEAUGamingPostureController@implementation@Posture@GamingExperiences@Internal@34@UUri@234@@experimental@std@@U?$IAsyncOperation@_N@Foundation@Windows@winrt@@X@impl@winrt@@QEBA_NU?$coroutine_handle@X@experimental@std@@@Z @ 0x1803309B4 (-await_suspend@final_suspend_awaiter@-$promise_base@Upromise_type@-$coroutine_trait_ea_1803309B4.c)
 *     ??$?0$$V@?$_Ref_count_obj2@ULaunchForResultsQueuedOperationData@GamingOverlayExperienceManager@@@std@@QEAA@XZ @ 0x18033A8F8 (--$-0$$V@-$_Ref_count_obj2@ULaunchForResultsQueuedOperationData@GamingOverlayExperienceManager@@.c)
 *     ??$?6GU?$char_traits@G@std@@@std@@YAAEAV?$basic_ostream@GU?$char_traits@G@std@@@0@AEAV10@PEBG@Z @ 0x18033ADFC (--$-6GU-$char_traits@G@std@@@std@@YAAEAV-$basic_ostream@GU-$char_traits@G@std@@@0@AEAV10@PEBG@Z.c)
 *     ??$GetActivationFactory@V?$ComPtr@UIPackageFamilyStatics@StateRepository@Internal@Windows@@@WRL@Microsoft@@@Foundation@Windows@@YAJPEAUHSTRING__@@V?$ComPtrRef@V?$ComPtr@UIPackageFamilyStatics@StateRepository@Internal@Windows@@@WRL@Microsoft@@@Details@WRL@Microsoft@@@Z @ 0x18033BCE0 (--$GetActivationFactory@V-$ComPtr@UIPackageFamilyStatics@StateRepository@Internal@Windows@@@WRL@.c)
 *     ??$_Try_emplace@AEBI$$V@?$map@IV?$shared_ptr@ULaunchForResultsQueuedOperationData@GamingOverlayExperienceManager@@@std@@U?$less@I@2@V?$allocator@U?$pair@$$CBIV?$shared_ptr@ULaunchForResultsQueuedOperationData@GamingOverlayExperienceManager@@@std@@@std@@@2@@std@@AEAA?AU?$pair@PEAU?$_Tree_node@U?$pair@$$CBIV?$shared_ptr@ULaunchForResultsQueuedOperationData@GamingOverlayExperienceManager@@@std@@@std@@PEAX@std@@_N@1@AEBI@Z @ 0x18033E8C4 (--$_Try_emplace@AEBI$$V@-$map@IV-$shared_ptr@ULaunchForResultsQueuedOperationData@GamingOverlayE.c)
 *     ??$com_query@VGamingOverlayExperienceManager@@PEAV1@@wil@@YA?AV?$com_ptr_t@VGamingOverlayExperienceManager@@Uerr_exception_policy@wil@@@0@$$QEAPEAVGamingOverlayExperienceManager@@@Z @ 0x18033F410 (--$com_query@VGamingOverlayExperienceManager@@PEAV1@@wil@@YA-AV-$com_ptr_t@VGamingOverlayExperie.c)
 *     ??$get_begin_iterator@U?$IMap@Uhstring@winrt@@U12@@Collections@Foundation@Windows@winrt@@$0A@@impl@winrt@@YA?AU?$IIterator@U?$IKeyValuePair@Uhstring@winrt@@U12@@Collections@Foundation@Windows@winrt@@@Collections@Foundation@Windows@1@AEBU?$IMap@Uhstring@winrt@@U12@@3451@@Z @ 0x18033FD48 (--$get_begin_iterator@U-$IMap@Uhstring@winrt@@U12@@Collections@Foundation@Windows@winrt@@$0A@@im.c)
 *     ??0?$basic_stringstream@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@XZ @ 0x180341550 (--0-$basic_stringstream@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAA@XZ.c)
 *     _GamingOverlayExperienceManager::LaunchForResultsAsyncInternal_::_28_::_parameters_::__parameters_ @ 0x180341B70 (_GamingOverlayExperienceManager--LaunchForResultsAsyncInternal_--_28_--_parameters_--__parameter.c)
 *     ??1?$com_ptr_t@VGamingOverlayExperienceManager@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x180342034 (--1-$com_ptr_t@VGamingOverlayExperienceManager@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??1promise_type@?$coroutine_traits@U?$IAsyncOperation@UValueSet@Collections@Foundation@Windows@winrt@@@Foundation@Windows@winrt@@PEAVGamingOverlayExperienceManager@@Uhstring@4@U?$IMap@Uhstring@winrt@@U12@@Collections@234@@experimental@std@@UEAA@XZ @ 0x180342E34 (--1promise_type@-$coroutine_traits@U-$IAsyncOperation@UValueSet@Collections@Foundation@Windows@w.c)
 *     ??D?$consume_Windows_Foundation_Collections_IIterator@U?$IIterator@U?$IKeyValuePair@Uhstring@winrt@@UIInspectable@Foundation@Windows@2@@Collections@Foundation@Windows@winrt@@@Collections@Foundation@Windows@winrt@@U?$IKeyValuePair@Uhstring@winrt@@UIInspectable@Foundation@Windows@2@@2345@@impl@winrt@@QEBA?AU?$IKeyValuePair@Uhstring@winrt@@UIInspectable@Foundation@Windows@2@@Collections@Foundation@Windows@2@XZ @ 0x1803430F8 (--D-$consume_Windows_Foundation_Collections_IIterator@U-$IIterator@U-$IKeyValuePair@Uhstring@win.c)
 *     ??E?$consume_Windows_Foundation_Collections_IIterator@U?$IIterator@U?$IKeyValuePair@Uhstring@winrt@@U12@@Collections@Foundation@Windows@winrt@@@Collections@Foundation@Windows@winrt@@U?$IKeyValuePair@Uhstring@winrt@@U12@@2345@@impl@winrt@@QEAA@XZ @ 0x18034317C (--E-$consume_Windows_Foundation_Collections_IIterator@U-$IIterator@U-$IKeyValuePair@Uhstring@win.c)
 *     _lambda_189d139117de0f63592accc827d12a70_::operator() @ 0x1803436BC (_lambda_189d139117de0f63592accc827d12a70_--operator().c)
 *     ?Value@?$consume_Windows_Foundation_IReference@U?$IReference@Uhstring@winrt@@@Foundation@Windows@winrt@@Uhstring@4@@impl@winrt@@QEBA@XZ @ 0x18034C160 (-Value@-$consume_Windows_Foundation_IReference@U-$IReference@Uhstring@winrt@@@Foundation@Windows.c)
 *     ?LaunchGameBar@GamingOverlayExperienceManager@@AEAAJPEBGPEAPEAU?$IAsyncOperation@_N@Foundation@Windows@@@Z @ 0x18034D148 (-LaunchGameBar@GamingOverlayExperienceManager@@AEAAJPEBGPEAPEAU-$IAsyncOperation@_N@Foundation@W.c)
 *     ?Value@?$consume_Windows_Foundation_Collections_IKeyValuePair@U?$IKeyValuePair@Uhstring@winrt@@U12@@Collections@Foundation@Windows@winrt@@Uhstring@5@U65@@impl@winrt@@QEBA@XZ @ 0x180355E34 (-Value@-$consume_Windows_Foundation_Collections_IKeyValuePair@U-$IKeyValuePair@Uhstring@winrt@@U.c)
 *     ?WaitForResultsOperationAcknowledgedAsync@GamingOverlayExperienceManager@@AEAA?AUIAsyncAction@Foundation@Windows@winrt@@V?$shared_ptr@ULaunchForResultsQueuedOperationData@GamingOverlayExperienceManager@@@std@@@Z @ 0x1803562B8 (-WaitForResultsOperationAcknowledgedAsync@GamingOverlayExperienceManager@@AEAA-AUIAsyncAction@Fo.c)
 *     ?WaitForResultsOperationAcknowledgedAsync_old@GamingOverlayExperienceManager@@AEAA?AUIAsyncAction@Foundation@Windows@winrt@@V?$shared_ptr@ULaunchForResultsQueuedOperationData@GamingOverlayExperienceManager@@@std@@@Z @ 0x18035669C (-WaitForResultsOperationAcknowledgedAsync_old@GamingOverlayExperienceManager@@AEAA-AUIAsyncActio.c)
 *     ?WaitForResultsOperationCompletedAsync@GamingOverlayExperienceManager@@AEAA?AUIAsyncAction@Foundation@Windows@winrt@@V?$shared_ptr@ULaunchForResultsQueuedOperationData@GamingOverlayExperienceManager@@@std@@@Z @ 0x180356A38 (-WaitForResultsOperationCompletedAsync@GamingOverlayExperienceManager@@AEAA-AUIAsyncAction@Found.c)
 *     ?WaitForResultsOperationCompletedAsync_old@GamingOverlayExperienceManager@@AEAA?AUIAsyncAction@Foundation@Windows@winrt@@V?$shared_ptr@ULaunchForResultsQueuedOperationData@GamingOverlayExperienceManager@@@std@@@Z @ 0x180356DAC (-WaitForResultsOperationCompletedAsync_old@GamingOverlayExperienceManager@@AEAA-AUIAsyncAction@F.c)
 *     ?str@?$basic_stringbuf@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEBA?AV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@2@XZ @ 0x18035A128 (-str@-$basic_stringbuf@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEBA-AV-$basic_string@GU-$c.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=25 #try_helpers=1
void __fastcall GamingOverlayExperienceManager::LaunchForResultsAsyncInternal__ResumeCoro_1(__int64 a1)
{
  int v2; // eax
  unsigned int v3; // r8d
  __int64 v4; // rdi
  __int64 (__fastcall *v5)(__int64, _QWORD, PVOID, __int64); // rbx
  HSTRING_HEADER *v6; // rax
  int v7; // eax
  char v8; // al
  const char *v9; // r9
  const unsigned __int16 *v10; // rax
  __int64 v11; // r8
  __int64 v12; // rax
  char v13; // r15
  volatile signed __int32 **v14; // rax
  const unsigned __int16 *v15; // rax
  __int64 v16; // rax
  __int64 v17; // r13
  winrt::hstring *v18; // rax
  const unsigned __int16 *v19; // rax
  int *v20; // rbx
  void *v21; // rax
  __int64 v22; // rax
  __int64 v23; // rdi
  __int64 *v24; // rax
  __int64 v25; // rdx
  __int64 v26; // r8
  __int64 v27; // rdx
  __int64 v28; // rax
  __int64 v29; // rax
  __int64 *v30; // rbx
  __int64 v31; // rcx
  __int64 v32; // rdx
  int v33; // eax
  const struct winrt::impl::slim_source_location *v34; // rax
  std::_Ref_count_base *v35; // rcx
  char v36; // di
  char IsEnabled; // al
  _QWORD *v38; // rdx
  _QWORD *v39; // rax
  __int64 v40; // rax
  __int64 v41; // rax
  _QWORD *v42; // rax
  __int64 v43; // rax
  __int64 v44; // rax
  std::_Ref_count_base *v45; // rcx
  _QWORD *v46; // rax
  __int64 v47; // rdx
  __int64 v48; // rax
  std::_Ref_count_base *v49; // rcx
  winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *v50; // rcx
  std::_Ref_count_base *v51; // rcx
  _QWORD *v52; // rax
  __int64 v53; // rdx
  __int64 v54; // rax
  std::_Ref_count_base *v55; // rcx
  std::_Ref_count_base *v56; // rcx
  __int64 v57; // rdx
  int v58; // [rsp+20h] [rbp-1E8h]
  _BYTE pExceptionObject[24]; // [rsp+68h] [rbp-1A0h] BYREF
  __int64 v60; // [rsp+80h] [rbp-188h]
  __int64 v61; // [rsp+90h] [rbp-178h]
  unsigned __int64 v62; // [rsp+A8h] [rbp-160h]
  __int64 v63; // [rsp+C8h] [rbp-140h]
  int v65; // [rsp+D4h] [rbp-134h]
  __int64 v66; // [rsp+D8h] [rbp-130h]
  wil::details::in1diag3 *retaddr; // [rsp+208h] [rbp+0h]

  switch ( *(_WORD *)(a1 + 8) )
  {
    case 0xFFFF:
    case 1:
    case 3:
      goto LABEL_65;
    case 2:
      *(_DWORD *)(a1 + 784) = 0;
      *(_QWORD *)(a1 + 16) = 0LL;
      *(_QWORD *)(a1 + 24) = *(_QWORD *)(a1 + 872);
      wil::com_query<GamingOverlayExperienceManager,GamingOverlayExperienceManager *>(
        (_QWORD *)(a1 + 16),
        (volatile int *)(a1 + 24));
      *(_QWORD *)(a1 + 32) = 0LL;
      *(_QWORD *)(a1 + 64) = 0LL;
      Microsoft::WRL::Wrappers::HStringReference::CreateReference(
        (HSTRING_HEADER *)(a1 + 40),
        L"Windows.Internal.StateRepository.PackageFamily",
        0x2Fu,
        0x2Eu);
      v63 = *(_QWORD *)(a1 + 64);
      v2 = Windows::Foundation::GetActivationFactory<Microsoft::WRL::ComPtr<Windows::Internal::StateRepository::IPackageFamilyStatics>>(
             v63,
             (__int64 *)(a1 + 32));
      if ( v2 < 0 )
      {
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0xF4D,
          (int)"pcshell\\twinui\\gamingoverlayexperiencemanager\\lib\\GamingOverlayExperienceManager.cpp",
          (const char *)(unsigned int)v2);
        goto LABEL_11;
      }
      *(_BYTE *)(a1 + 72) = 1;
      v4 = *(_QWORD *)(a1 + 32);
      v66 = v4;
      v5 = *(__int64 (__fastcall **)(__int64, _QWORD, PVOID, __int64))(*(_QWORD *)v4 + 184LL);
      v6 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(
             (HSTRING_HEADER *)(a1 + 80),
             (const WCHAR **)&c_GamingOverlayPfn,
             v3);
      *(_DWORD *)(a1 + 784) = 1;
      v7 = v5(v4, 0LL, v6[1].Reserved.Reserved1, a1 + 72);
      if ( v7 >= 0 )
      {
        if ( !*(_BYTE *)(a1 + 72) )
        {
          v8 = 1;
          goto LABEL_9;
        }
      }
      else
      {
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0xF50,
          (int)"pcshell\\twinui\\gamingoverlayexperiencemanager\\lib\\GamingOverlayExperienceManager.cpp",
          (const char *)(unsigned int)v7);
      }
      v8 = 0;
LABEL_9:
      if ( v8 )
      {
        v9 = (const char *)(unsigned int)wil::verify_hresult<long>(0x80270254);
        wil::details::in1diag3::Throw_Hr(
          retaddr,
          (void *)0xF53,
          (int)"pcshell\\twinui\\gamingoverlayexperiencemanager\\lib\\GamingOverlayExperienceManager.cpp",
          v9,
          v58);
      }
LABEL_11:
      memset_0((void *)(a1 + 112), 0, 0xF8uLL);
      std::basic_stringstream<unsigned short,std::char_traits<unsigned short>,std::allocator<unsigned short>>::basic_stringstream<unsigned short,std::char_traits<unsigned short>,std::allocator<unsigned short>>((_QWORD *)(a1 + 112));
      std::operator<<<unsigned short,std::char_traits<unsigned short>>(a1 + 128, (__int64)L"ms-gamebar://");
      v10 = winrt::hstring::c_str((winrt::hstring *)(a1 + 880));
      v12 = std::operator<<<unsigned short,std::char_traits<unsigned short>>(v11, (__int64)v10);
      std::operator<<<unsigned short,std::char_traits<unsigned short>>(v12, (__int64)L"?");
      if ( *(_QWORD *)(a1 + 888)
        && (unsigned int)winrt::impl::consume_Windows_Foundation_Collections_IVectorView<winrt::Windows::Foundation::Collections::IVectorView<winrt::Windows::UI::Xaml::Markup::IXamlMetadataProvider>,winrt::Windows::UI::Xaml::Markup::IXamlMetadataProvider>::Size((__int64 *)(a1 + 888)) )
      {
        v13 = 1;
        winrt::impl::get_begin_iterator<winrt::Windows::Foundation::Collections::IMap<winrt::hstring,winrt::hstring>,0>(
          (_QWORD *)(a1 + 368),
          a1 + 888);
        *(_QWORD *)(a1 + 376) = 0LL;
        while ( winrt::Windows::Foundation::operator!=(
                  (void (__fastcall ****)(_QWORD, __int64 *, __int64 *))(a1 + 368),
                  (void (__fastcall ****)(_QWORD, __int64 *, __int64 *))(a1 + 376)) )
        {
          winrt::impl::consume_Windows_Foundation_Collections_IIterator<winrt::Windows::Foundation::Collections::IIterator<winrt::Windows::Foundation::Collections::IKeyValuePair<winrt::hstring,winrt::Windows::Foundation::IInspectable>>,winrt::Windows::Foundation::Collections::IKeyValuePair<winrt::hstring,winrt::Windows::Foundation::IInspectable>>::operator*(
            (__int64 *)(a1 + 368),
            (winrt *)(a1 + 384));
          if ( !v13 )
            std::operator<<<unsigned short,std::char_traits<unsigned short>>(a1 + 128, (__int64)L"&");
          if ( !*winrt::impl::consume_Windows_Foundation_IReference<winrt::Windows::Foundation::IReference<winrt::hstring>,winrt::hstring>::Value(
                   (__int64 *)(a1 + 384),
                   (volatile signed __int32 **)(a1 + 392)) )
            wil::details::in1diag3::Throw_Hr(
              retaddr,
              (void *)0xF68,
              (int)"pcshell\\twinui\\gamingoverlayexperiencemanager\\lib\\GamingOverlayExperienceManager.cpp",
              (const char *)0x80070057LL,
              v58);
          winrt::handle_type<winrt::impl::hstring_traits>::close((volatile signed __int32 **)(a1 + 392));
          v14 = winrt::impl::consume_Windows_Foundation_IReference<winrt::Windows::Foundation::IReference<winrt::hstring>,winrt::hstring>::Value(
                  (__int64 *)(a1 + 384),
                  (volatile signed __int32 **)(a1 + 408));
          v15 = winrt::hstring::c_str((winrt::hstring *)v14);
          v16 = std::operator<<<unsigned short,std::char_traits<unsigned short>>(a1 + 128, (__int64)v15);
          v17 = std::operator<<<unsigned short,std::char_traits<unsigned short>>(v16, (__int64)L"=");
          v18 = (winrt::hstring *)winrt::impl::consume_Windows_Foundation_Collections_IKeyValuePair<winrt::Windows::Foundation::Collections::IKeyValuePair<winrt::hstring,winrt::hstring>,winrt::hstring,winrt::hstring>::Value(
                                    a1 + 384,
                                    a1 + 400);
          v19 = winrt::hstring::c_str(v18);
          std::operator<<<unsigned short,std::char_traits<unsigned short>>(v17, (__int64)v19);
          winrt::handle_type<winrt::impl::hstring_traits>::close((volatile signed __int32 **)(a1 + 400));
          winrt::handle_type<winrt::impl::hstring_traits>::close((volatile signed __int32 **)(a1 + 408));
          v13 = 0;
          winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)(a1 + 384));
          winrt::impl::consume_Windows_Foundation_Collections_IIterator<winrt::Windows::Foundation::Collections::IIterator<winrt::Windows::Foundation::Collections::IKeyValuePair<winrt::hstring,winrt::hstring>>,winrt::Windows::Foundation::Collections::IKeyValuePair<winrt::hstring,winrt::hstring>>::operator++((__int64 *)(a1 + 368));
        }
        winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)(a1 + 376));
        winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)(a1 + 368));
      }
      v20 = (int *)(a1 + 416);
      *(_DWORD *)(a1 + 416) = 0;
      v21 = operator new(0x38uLL);
      *(_QWORD *)(a1 + 800) = v21;
      v22 = std::_Ref_count_obj2<GamingOverlayExperienceManager::LaunchForResultsQueuedOperationData>::_Ref_count_obj2<GamingOverlayExperienceManager::LaunchForResultsQueuedOperationData>((__int64)v21);
      *(_QWORD *)(a1 + 792) = v22;
      *(_QWORD *)(a1 + 432) = 0LL;
      *(_QWORD *)(a1 + 424) = v22 + 16;
      *(_QWORD *)(a1 + 432) = v22;
      *(_QWORD *)(a1 + 440) = 0LL;
      v23 = *(_QWORD *)(a1 + 872);
      wil::AcquireSRWLockExclusive((RTL_SRWLOCK **)(a1 + 440), (RTL_SRWLOCK *)(v23 + 664));
      *(_DWORD *)(a1 + 416) = ++*(_DWORD *)(v23 + 672);
      std::map<unsigned int,std::shared_ptr<GamingOverlayExperienceManager::LaunchForResultsQueuedOperationData>>::_Try_emplace<unsigned int const &,>(
        (__int64 *)(v23 + 680),
        a1 + 808,
        (_DWORD *)(a1 + 416));
      v24 = std::shared_ptr<InputAppViewCoodinatorHandler>::shared_ptr<InputAppViewCoodinatorHandler>(
              (_QWORD *)(a1 + 824),
              (_QWORD *)(a1 + 424));
      v25 = *v24;
      *v24 = *(_QWORD *)(v26 + 40);
      *(_QWORD *)(v26 + 40) = v25;
      v27 = v24[1];
      v24[1] = *(_QWORD *)(v26 + 48);
      *(_QWORD *)(v26 + 48) = v27;
      if ( *(_QWORD *)(a1 + 832) )
        std::_Ref_count_base::_Decref(*(std::_Ref_count_base **)(a1 + 832));
      CAutoSRWExclusiveLock::~CAutoSRWExclusiveLock((RTL_SRWLOCK **)(a1 + 440));
      *(_QWORD *)(a1 + 464) = 0LL;
      *(_QWORD *)(a1 + 448) = v23;
      *(_QWORD *)(a1 + 456) = v20;
      *(_BYTE *)(a1 + 464) = 1;
      if ( *(_QWORD *)(a1 + 888)
        && (unsigned int)winrt::impl::consume_Windows_Foundation_Collections_IVectorView<winrt::Windows::Foundation::Collections::IVectorView<winrt::Windows::UI::Xaml::Markup::IXamlMetadataProvider>,winrt::Windows::UI::Xaml::Markup::IXamlMetadataProvider>::Size((__int64 *)(a1 + 888)) )
      {
        std::operator<<<unsigned short,std::char_traits<unsigned short>>(a1 + 128, (__int64)L"&");
      }
      v28 = std::operator<<<unsigned short,std::char_traits<unsigned short>>(a1 + 128, (__int64)L"LaunchForResultsId");
      v29 = std::operator<<<unsigned short,std::char_traits<unsigned short>>(v28, (__int64)L"=");
      v65 = *v20;
      std::basic_ostream<unsigned short>::operator<<(v29);
      *(_QWORD *)(a1 + 472) = 0LL;
      v30 = (__int64 *)(a1 + 480);
      std::basic_stringbuf<unsigned short>::str(a1 + 136, a1 + 480);
      v32 = a1 + 480;
      v62 = *(_QWORD *)(a1 + 504);
      if ( v62 > 7 )
      {
        v32 = *v30;
        v61 = *v30;
      }
      v33 = GamingOverlayExperienceManager::LaunchGameBar(v31, v32, a1 + 472);
      if ( v33 < 0 )
        wil::details::in1diag3::Throw_Hr(
          retaddr,
          (void *)0xF8A,
          (int)"pcshell\\twinui\\gamingoverlayexperiencemanager\\lib\\GamingOverlayExperienceManager.cpp",
          (const char *)(unsigned int)v33,
          v58);
      std::wstring::_Tidy_deallocate((_QWORD *)(a1 + 480));
      *(_QWORD *)(a1 + 512) = *(_QWORD *)(a1 + 472);
      if ( *(_DWORD *)(a1 - 16) == 2 )
      {
        v34 = (const struct winrt::impl::slim_source_location *)winrt::impl::slim_source_location::current(a1 + 840);
        winrt::hresult_canceled::hresult_canceled((winrt::hresult_canceled *)pExceptionObject, v34);
        throw (winrt::hresult_canceled *)pExceptionObject;
      }
      *(_QWORD *)(a1 + 520) = 0LL;
      *(_QWORD *)(a1 + 528) = a1 + 512;
      *(_QWORD *)(a1 + 536) = 0LL;
      *(_BYTE *)(a1 + 544) = 1;
      *(_WORD *)(a1 + 8) = 4;
      if ( (unsigned __int8)winrt::impl::await_adapter<winrt::Windows::Foundation::IAsyncOperation<bool>,1>::await_suspend<std::experimental::coroutine_traits<winrt::Windows::Foundation::IAsyncOperation<bool>,winrt::Windows::Internal::Shell::implementation::PinManager *,winrt::hstring,winrt::hstring,winrt::Windows::UI::StartScreen::SecondaryTile,_ITEMIDLIST const __unaligned *,bool,bool,enum PINNEDLISTMODIFYCALLER,PinManagerTelemetry::PinManagerRequestPinItem,tip2::tip_test<tip2::details::merged_data<PinManagerTipTests::_tip_PinManagerPinTest,PinManagerTipTests::_tip_PinManagerPinTest>>,tip2::test_watcher<tip2::details::merged_data<PinManagerTipTests::_tip_PinManagerPinTest,PinManagerTipTests::_tip_PinManagerPinTest>>>::promise_type>(
                              (__int64 *)(a1 + 520),
                              a1) )
        return;
LABEL_37:
      v36 = winrt::impl::await_adapter<winrt::Windows::Foundation::IAsyncOperation<bool>,1>::await_resume(a1 + 520);
      winrt::cancellable_awaiter<winrt::impl::await_adapter<winrt::Windows::Foundation::IAsyncOperation<unsigned int>,1>>::~cancellable_awaiter<winrt::impl::await_adapter<winrt::Windows::Foundation::IAsyncOperation<unsigned int>,1>>((winrt::cancellable_promise **)(a1 + 520));
      if ( !v36 )
        wil::details::in1diag3::Throw_Hr(
          retaddr,
          (void *)0xF8E,
          (int)"pcshell\\twinui\\gamingoverlayexperiencemanager\\lib\\GamingOverlayExperienceManager.cpp",
          (const char *)0x80004005LL,
          v58);
      IsEnabled = wil::details::FeatureImpl<__WilFeatureTraits_Feature_57804088>::__private_IsEnabled((wil::details *)&`wil::Feature<__WilFeatureTraits_Feature_57804088>::GetImpl'::`2'::impl);
      v38 = (_QWORD *)(a1 + 424);
      if ( !IsEnabled )
      {
        v39 = std::shared_ptr<InputAppViewCoodinatorHandler>::shared_ptr<InputAppViewCoodinatorHandler>(
                (_QWORD *)(a1 + 664),
                v38);
        v40 = GamingOverlayExperienceManager::WaitForResultsOperationAcknowledgedAsync_old(
                *(_QWORD *)(a1 + 872),
                a1 + 680,
                v39);
        v41 = winrt::impl::promise_base<std::experimental::coroutine_traits<winrt::Windows::Foundation::IAsyncAction,winrt::Windows::Internal::GamingExperiences::Posture::implementation::GamingPostureController *>::promise_type,winrt::Windows::Foundation::IAsyncAction,void>::await_transform<winrt::Windows::Foundation::IAsyncAction>(
                a1 - 112,
                v40);
        *(_QWORD *)(a1 + 688) = 0LL;
        *(_QWORD *)(a1 + 696) = v41;
        *(_QWORD *)(a1 + 704) = 0LL;
        *(_BYTE *)(a1 + 712) = 1;
        *(_WORD *)(a1 + 8) = 10;
        if ( (unsigned __int8)winrt::impl::await_adapter<winrt::Windows::Foundation::IAsyncAction,1>::await_suspend<std::experimental::coroutine_traits<winrt::Windows::Foundation::IAsyncOperation<winrt::Windows::Foundation::Collections::IVectorView<winrt::Windows::Internal::Shell::MeetAndChatFallbackProp>>,winrt::Windows::Internal::Shell::implementation::MeetAndChatIris *,winrt::Windows::Internal::Shell::MeetAndChatFallbackContent &>::promise_type>(
                                (__int64 *)(a1 + 688),
                                a1) )
          return;
LABEL_56:
        winrt::impl::await_adapter<winrt::Windows::Foundation::IAsyncAction,1>::await_resume(a1 + 688);
        winrt::cancellable_awaiter<winrt::impl::await_adapter<winrt::Windows::Foundation::IAsyncOperation<unsigned int>,1>>::~cancellable_awaiter<winrt::impl::await_adapter<winrt::Windows::Foundation::IAsyncOperation<unsigned int>,1>>((winrt::cancellable_promise **)(a1 + 688));
        winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)(a1 + 680));
        v52 = std::shared_ptr<InputAppViewCoodinatorHandler>::shared_ptr<InputAppViewCoodinatorHandler>(
                (_QWORD *)(a1 + 720),
                (_QWORD *)(a1 + 424));
        v53 = GamingOverlayExperienceManager::WaitForResultsOperationCompletedAsync_old(
                *(_QWORD *)(a1 + 872),
                a1 + 736,
                v52);
        v54 = winrt::impl::promise_base<std::experimental::coroutine_traits<winrt::Windows::Foundation::IAsyncAction,winrt::Windows::Internal::GamingExperiences::Posture::implementation::GamingPostureController *>::promise_type,winrt::Windows::Foundation::IAsyncAction,void>::await_transform<winrt::Windows::Foundation::IAsyncAction>(
                a1 - 112,
                v53);
        *(_QWORD *)(a1 + 744) = 0LL;
        *(_QWORD *)(a1 + 752) = v54;
        *(_QWORD *)(a1 + 760) = 0LL;
        *(_BYTE *)(a1 + 768) = 1;
        *(_WORD *)(a1 + 8) = 12;
        if ( (unsigned __int8)winrt::impl::await_adapter<winrt::Windows::Foundation::IAsyncAction,1>::await_suspend<std::experimental::coroutine_traits<winrt::Windows::Foundation::IAsyncOperation<winrt::Windows::Foundation::Collections::IVectorView<winrt::Windows::Internal::Shell::MeetAndChatFallbackProp>>,winrt::Windows::Internal::Shell::implementation::MeetAndChatIris *,winrt::Windows::Internal::Shell::MeetAndChatFallbackContent &>::promise_type>(
                                (__int64 *)(a1 + 744),
                                a1) )
          return;
LABEL_61:
        winrt::impl::await_adapter<winrt::Windows::Foundation::IAsyncAction,1>::await_resume(a1 + 744);
        winrt::cancellable_awaiter<winrt::impl::await_adapter<winrt::Windows::Foundation::IAsyncOperation<unsigned int>,1>>::~cancellable_awaiter<winrt::impl::await_adapter<winrt::Windows::Foundation::IAsyncOperation<unsigned int>,1>>((winrt::cancellable_promise **)(a1 + 744));
        v50 = (winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)(a1 + 736);
LABEL_62:
        winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension(v50);
        v60 = *(_QWORD *)(a1 + 424);
        winrt::Windows::Foundation::IUnknown::operator=((__int64 *)(a1 - 8), (__int64 *)(v60 + 24));
        winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)(a1 + 512));
        *(_BYTE *)(a1 + 464) = 0;
        lambda_189d139117de0f63592accc827d12a70_::operator()((RTL_SRWLOCK **)(a1 + 448));
        v56 = *(std::_Ref_count_base **)(a1 + 792);
        if ( v56 )
          std::_Ref_count_base::_Decref(v56);
        std::basic_stringstream<unsigned short,std::char_traits<unsigned short>,std::allocator<unsigned short>>::`vbase destructor'(a1 + 112);
        Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)(a1 + 32));
        wil::com_ptr_t<GamingOverlayExperienceManager,wil::err_exception_policy>::~com_ptr_t<GamingOverlayExperienceManager,wil::err_exception_policy>((__int64 *)(a1 + 16));
        *(_QWORD *)(a1 + 776) = a1 - 112;
        *(_WORD *)(a1 + 8) = 0;
        if ( !winrt::impl::promise_base<std::experimental::coroutine_traits<winrt::Windows::Foundation::IAsyncOperation<bool>,winrt::Windows::Internal::GamingExperiences::Posture::implementation::GamingPostureController *,winrt::Windows::Foundation::Uri>::promise_type,winrt::Windows::Foundation::IAsyncOperation<bool>,void>::final_suspend_awaiter::await_suspend(
                (__int64 *)(a1 + 776),
                v57) )
        {
LABEL_65:
          std::experimental::coroutine_traits<winrt::Windows::Foundation::IAsyncOperation<winrt::Windows::Foundation::Collections::ValueSet>,GamingOverlayExperienceManager *,winrt::hstring,winrt::Windows::Foundation::Collections::IMap<winrt::hstring,winrt::hstring>>::promise_type::~promise_type((__int64 *)(a1 - 112));
          GamingOverlayExperienceManager::LaunchForResultsAsyncInternal_::_28_::_parameters_::__parameters_(a1 + 872);
          if ( *(_WORD *)(a1 + 10) )
            operator delete((void *)(a1 - 112), (const struct std::nothrow_t *)0x3F0);
        }
        return;
      }
      v42 = std::shared_ptr<InputAppViewCoodinatorHandler>::shared_ptr<InputAppViewCoodinatorHandler>(
              (_QWORD *)(a1 + 552),
              v38);
      v43 = GamingOverlayExperienceManager::WaitForResultsOperationAcknowledgedAsync(
              *(_QWORD *)(a1 + 872),
              a1 + 568,
              v42);
      v44 = winrt::impl::promise_base<std::experimental::coroutine_traits<winrt::Windows::Foundation::IAsyncAction,winrt::Windows::Internal::GamingExperiences::Posture::implementation::GamingPostureController *>::promise_type,winrt::Windows::Foundation::IAsyncAction,void>::await_transform<winrt::Windows::Foundation::IAsyncAction>(
              a1 - 112,
              v43);
      *(_QWORD *)(a1 + 576) = 0LL;
      *(_QWORD *)(a1 + 584) = v44;
      *(_QWORD *)(a1 + 592) = 0LL;
      *(_BYTE *)(a1 + 600) = 1;
      *(_WORD *)(a1 + 8) = 6;
      if ( (unsigned __int8)winrt::impl::await_adapter<winrt::Windows::Foundation::IAsyncAction,1>::await_suspend<std::experimental::coroutine_traits<winrt::Windows::Foundation::IAsyncOperation<winrt::Windows::Foundation::Collections::IVectorView<winrt::Windows::Internal::Shell::MeetAndChatFallbackProp>>,winrt::Windows::Internal::Shell::implementation::MeetAndChatIris *,winrt::Windows::Internal::Shell::MeetAndChatFallbackContent &>::promise_type>(
                              (__int64 *)(a1 + 576),
                              a1) )
        return;
LABEL_47:
      winrt::impl::await_adapter<winrt::Windows::Foundation::IAsyncAction,1>::await_resume(a1 + 576);
      winrt::cancellable_awaiter<winrt::impl::await_adapter<winrt::Windows::Foundation::IAsyncOperation<unsigned int>,1>>::~cancellable_awaiter<winrt::impl::await_adapter<winrt::Windows::Foundation::IAsyncOperation<unsigned int>,1>>((winrt::cancellable_promise **)(a1 + 576));
      winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)(a1 + 568));
      v46 = std::shared_ptr<InputAppViewCoodinatorHandler>::shared_ptr<InputAppViewCoodinatorHandler>(
              (_QWORD *)(a1 + 608),
              (_QWORD *)(a1 + 424));
      v47 = GamingOverlayExperienceManager::WaitForResultsOperationCompletedAsync(*(_QWORD *)(a1 + 872), a1 + 624, v46);
      v48 = winrt::impl::promise_base<std::experimental::coroutine_traits<winrt::Windows::Foundation::IAsyncAction,winrt::Windows::Internal::GamingExperiences::Posture::implementation::GamingPostureController *>::promise_type,winrt::Windows::Foundation::IAsyncAction,void>::await_transform<winrt::Windows::Foundation::IAsyncAction>(
              a1 - 112,
              v47);
      *(_QWORD *)(a1 + 632) = 0LL;
      *(_QWORD *)(a1 + 640) = v48;
      *(_QWORD *)(a1 + 648) = 0LL;
      *(_BYTE *)(a1 + 656) = 1;
      *(_WORD *)(a1 + 8) = 8;
      if ( !(unsigned __int8)winrt::impl::await_adapter<winrt::Windows::Foundation::IAsyncAction,1>::await_suspend<std::experimental::coroutine_traits<winrt::Windows::Foundation::IAsyncOperation<winrt::Windows::Foundation::Collections::IVectorView<winrt::Windows::Internal::Shell::MeetAndChatFallbackProp>>,winrt::Windows::Internal::Shell::implementation::MeetAndChatIris *,winrt::Windows::Internal::Shell::MeetAndChatFallbackContent &>::promise_type>(
                               (__int64 *)(a1 + 632),
                               a1) )
      {
LABEL_52:
        winrt::impl::await_adapter<winrt::Windows::Foundation::IAsyncAction,1>::await_resume(a1 + 632);
        winrt::cancellable_awaiter<winrt::impl::await_adapter<winrt::Windows::Foundation::IAsyncOperation<unsigned int>,1>>::~cancellable_awaiter<winrt::impl::await_adapter<winrt::Windows::Foundation::IAsyncOperation<unsigned int>,1>>((winrt::cancellable_promise **)(a1 + 632));
        v50 = (winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)(a1 + 624);
        goto LABEL_62;
      }
      return;
    case 4:
      goto LABEL_37;
    case 5:
      winrt::cancellable_awaiter<winrt::impl::await_adapter<winrt::Windows::Foundation::IAsyncOperation<unsigned int>,1>>::~cancellable_awaiter<winrt::impl::await_adapter<winrt::Windows::Foundation::IAsyncOperation<unsigned int>,1>>((winrt::cancellable_promise **)(a1 + 520));
      winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)(a1 + 512));
      *(_BYTE *)(a1 + 464) = 0;
      lambda_189d139117de0f63592accc827d12a70_::operator()((RTL_SRWLOCK **)(a1 + 448));
      v35 = *(std::_Ref_count_base **)(a1 + 792);
      if ( v35 )
        std::_Ref_count_base::_Decref(v35);
      goto LABEL_60;
    case 6:
      goto LABEL_47;
    case 7:
      winrt::cancellable_awaiter<winrt::impl::await_adapter<winrt::Windows::Foundation::IAsyncOperation<unsigned int>,1>>::~cancellable_awaiter<winrt::impl::await_adapter<winrt::Windows::Foundation::IAsyncOperation<unsigned int>,1>>((winrt::cancellable_promise **)(a1 + 576));
      winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)(a1 + 568));
      winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)(a1 + 512));
      *(_BYTE *)(a1 + 464) = 0;
      lambda_189d139117de0f63592accc827d12a70_::operator()((RTL_SRWLOCK **)(a1 + 448));
      v45 = *(std::_Ref_count_base **)(a1 + 792);
      if ( v45 )
        std::_Ref_count_base::_Decref(v45);
      goto LABEL_60;
    case 8:
      goto LABEL_52;
    case 9:
      winrt::cancellable_awaiter<winrt::impl::await_adapter<winrt::Windows::Foundation::IAsyncOperation<unsigned int>,1>>::~cancellable_awaiter<winrt::impl::await_adapter<winrt::Windows::Foundation::IAsyncOperation<unsigned int>,1>>((winrt::cancellable_promise **)(a1 + 632));
      winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)(a1 + 624));
      winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)(a1 + 512));
      *(_BYTE *)(a1 + 464) = 0;
      lambda_189d139117de0f63592accc827d12a70_::operator()((RTL_SRWLOCK **)(a1 + 448));
      v49 = *(std::_Ref_count_base **)(a1 + 792);
      if ( v49 )
        std::_Ref_count_base::_Decref(v49);
      goto LABEL_60;
    case 0xA:
      goto LABEL_56;
    case 0xB:
      winrt::cancellable_awaiter<winrt::impl::await_adapter<winrt::Windows::Foundation::IAsyncOperation<unsigned int>,1>>::~cancellable_awaiter<winrt::impl::await_adapter<winrt::Windows::Foundation::IAsyncOperation<unsigned int>,1>>((winrt::cancellable_promise **)(a1 + 688));
      winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)(a1 + 680));
      winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)(a1 + 512));
      *(_BYTE *)(a1 + 464) = 0;
      lambda_189d139117de0f63592accc827d12a70_::operator()((RTL_SRWLOCK **)(a1 + 448));
      v51 = *(std::_Ref_count_base **)(a1 + 792);
      if ( v51 )
        std::_Ref_count_base::_Decref(v51);
      goto LABEL_60;
    case 0xC:
      goto LABEL_61;
    case 0xD:
      winrt::cancellable_awaiter<winrt::impl::await_adapter<winrt::Windows::Foundation::IAsyncOperation<unsigned int>,1>>::~cancellable_awaiter<winrt::impl::await_adapter<winrt::Windows::Foundation::IAsyncOperation<unsigned int>,1>>((winrt::cancellable_promise **)(a1 + 744));
      winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)(a1 + 736));
      winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)(a1 + 512));
      *(_BYTE *)(a1 + 464) = 0;
      lambda_189d139117de0f63592accc827d12a70_::operator()((RTL_SRWLOCK **)(a1 + 448));
      v55 = *(std::_Ref_count_base **)(a1 + 792);
      if ( v55 )
        std::_Ref_count_base::_Decref(v55);
LABEL_60:
      std::basic_stringstream<unsigned short,std::char_traits<unsigned short>,std::allocator<unsigned short>>::`vbase destructor'(a1 + 112);
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)(a1 + 32));
      wil::com_ptr_t<GamingOverlayExperienceManager,wil::err_exception_policy>::~com_ptr_t<GamingOverlayExperienceManager,wil::err_exception_policy>((__int64 *)(a1 + 16));
      goto LABEL_65;
    default:
      __debugbreak();
      return;
  }
}
