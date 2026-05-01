/*
 * XREFs of ?EndGuidedSnapAssist@CSnapAssistControllerBase@@IEAAXW4GuidedSnapAssistResult@1@V?$vector@_KV?$allocator@_K@std@@@std@@@Z @ 0x1800E2890
 * Callers:
 *     ?AdvanceGuidedSnapAssist@CSnapAssistControllerBase@@UEAAJ_K@Z @ 0x18016C5A0 (-AdvanceGuidedSnapAssist@CSnapAssistControllerBase@@UEAAJ_K@Z.c)
 *     ??$SetGuidedSnapAssistRegions@V?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@UCRect@Geometry@@@std@@@std@@@std@@@CSnapAssistControllerBase@@IEAAXV?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@UCRect@Geometry@@@std@@@std@@@std@@0@Z @ 0x18029410C (--$SetGuidedSnapAssistRegions@V-$_Vector_iterator@V-$_Vector_val@U-$_Simple_types@UCRect@Geometr.c)
 *     wil::details::lambda_call__lambda_44b56457426184e9711f8d1a3f34433d___::_lambda_call__lambda_44b56457426184e9711f8d1a3f34433d___ @ 0x1805A6978 (wil--details--lambda_call__lambda_44b56457426184e9711f8d1a3f34433d___--_lambda_call__lambda_44b5.c)
 *     ?SnapAssistCompleted@CSnapAssistControllerBase@@UEAAJW4SnapAssistUsage@WindowSnapping@Shell@Internal@Windows@@IPEA_K@Z @ 0x1805A7A90 (-SnapAssistCompleted@CSnapAssistControllerBase@@UEAAJW4SnapAssistUsage@WindowSnapping@Shell@Inte.c)
 *     ?_SnapAssistTriggered@CSnapAssistControllerBase@@IEAAJAEBUCRect@Geometry@@PEAUIImmersiveMonitor@@AEBV?$vector@V?$ComPtr@UISnappedWindow@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@UISnappedWindow@@@WRL@Microsoft@@@std@@@std@@PEAUIAppLayout@@W4SNAP_ASSIST_VIEW_FLAGS@@HPEA_N@Z @ 0x1805A8DF0 (-_SnapAssistTriggered@CSnapAssistControllerBase@@IEAAJAEBUCRect@Geometry@@PEAUIImmersiveMonitor@.c)
 * Callees:
 *     ??1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ @ 0x18002633C (--1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ.c)
 *     ?unconditional_release_ref@?$com_ptr@UISnapComponent@@@winrt@@AEAAXXZ @ 0x18002694C (-unconditional_release_ref@-$com_ptr@UISnapComponent@@@winrt@@AEAAXXZ.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18006B898 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_GuidedSnapAssistContinuity@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x18006CF04 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_GuidedSnapAssistContinuity@@@details@wil@.c)
 *     ?_Tidy@?$deque@UtagRECT@@V?$allocator@UtagRECT@@@std@@@std@@AEAAXXZ @ 0x1800CB854 (-_Tidy@-$deque@UtagRECT@@V-$allocator@UtagRECT@@@std@@@std@@AEAAXXZ.c)
 *     ??1?$test_data_control@V?$merged_data@U_tip_GuidedSnapAssistTest@@U1@@details@tip2@@@tip2@@QEAA@XZ @ 0x18027F904 (--1-$test_data_control@V-$merged_data@U_tip_GuidedSnapAssistTest@@U1@@details@tip2@@@tip2@@QEAA@.c)
 *     ??C?$tip_test@V?$merged_data@U_tip_GuidedSnapAssistTest@@U1@@details@tip2@@@tip2@@QEAA?AV?$test_data_control@V?$merged_data@U_tip_GuidedSnapAssistTest@@U1@@details@tip2@@@1@XZ @ 0x18027FB80 (--C-$tip_test@V-$merged_data@U_tip_GuidedSnapAssistTest@@U1@@details@tip2@@@tip2@@QEAA-AV-$test_.c)
 *     ??$_Deallocate@$0BA@@std@@YAXPEAX_K@Z @ 0x180285A90 (--$_Deallocate@$0BA@@std@@YAXPEAX_K@Z.c)
 *     ?complete@?$tip_test@V?$merged_data@U_tip_GamingPostureControllerStateChangeTest@@U1@@details@tip2@@@tip2@@QEAAXXZ @ 0x18028BF74 (-complete@-$tip_test@V-$merged_data@U_tip_GamingPostureControllerStateChangeTest@@U1@@details@ti.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x180291BCC (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ??B?$tip_test@V?$merged_data@U_tip_SearchHomeRenderTest@@U1@@details@tip2@@@tip2@@QEBA_NXZ @ 0x1802A2788 (--B-$tip_test@V-$merged_data@U_tip_SearchHomeRenderTest@@U1@@details@tip2@@@tip2@@QEBA_NXZ.c)
 *     ??$_Emplace_one_at_back@UWindowId@WindowManagement@ApplicationModel@Internal@Windows@winrt@@@?$vector@UWindowId@WindowManagement@ApplicationModel@Internal@Windows@winrt@@V?$allocator@UWindowId@WindowManagement@ApplicationModel@Internal@Windows@winrt@@@std@@@std@@AEAAAEAUWindowId@WindowManagement@ApplicationModel@Internal@Windows@winrt@@$$QEAU234567@@Z @ 0x1802C1D34 (--$_Emplace_one_at_back@UWindowId@WindowManagement@ApplicationModel@Internal@Windows@winrt@@@-$v.c)
 *     ??$EndGuidedSnapAssist@AEAW4GuidedSnapAssistResult@CSnapAssistControllerBase@@@CSnapComponentTelemetry@@SAXAEAW4GuidedSnapAssistResult@CSnapAssistControllerBase@@@Z @ 0x1802C39A0 (--$EndGuidedSnapAssist@AEAW4GuidedSnapAssistResult@CSnapAssistControllerBase@@@CSnapComponentTel.c)
 *     ??$InvokeAll@PEAVCSnapAssistControllerBase@@PEAUIGuidedSnapAssistCompletedArgs@WindowSnapping@Shell@Internal@Windows@@@?$EventSource@U?$ITypedEventHandler@PEAUIGuidedSnapAssistController@WindowSnapping@Shell@Internal@Windows@@PEAVGuidedSnapAssistCompletedArgs@2345@@Foundation@Windows@@U?$InvokeModeOptions@$0?1@WRL@Microsoft@@@WRL@Microsoft@@QEAAJPEAVCSnapAssistControllerBase@@PEAUIGuidedSnapAssistCompletedArgs@WindowSnapping@Shell@Internal@Windows@@@Z @ 0x1805A5760 (--$InvokeAll@PEAVCSnapAssistControllerBase@@PEAUIGuidedSnapAssistCompletedArgs@WindowSnapping@Sh.c)
 *     ??$as@UIGuidedSnapAssistCompletedArgs@WindowSnapping@Shell@Internal@Windows@@Utype@?$abi@UIUnknown@Foundation@Windows@winrt@@X@impl@winrt@@$0A@@impl@winrt@@YA?AU?$com_ptr@UIGuidedSnapAssistCompletedArgs@WindowSnapping@Shell@Internal@Windows@@@1@PEAUtype@?$abi@UIUnknown@Foundation@Windows@winrt@@X@01@@Z @ 0x1805A5E20 (--$as@UIGuidedSnapAssistCompletedArgs@WindowSnapping@Shell@Internal@Windows@@Utype@-$abi@UIUnkno.c)
 *     ??$make@UGuidedSnapAssistCompletedArgs@implementation@WindowSnapping@Shell@Internal@Windows@winrt@@AEAW4SnapAssistUsage@34567@U?$array_view@$$CBUWindowId@WindowManagement@ApplicationModel@Internal@Windows@winrt@@@7@@winrt@@YA?A_PAEAW4SnapAssistUsage@WindowSnapping@Shell@Internal@Windows@0@$$QEAU?$array_view@$$CBUWindowId@WindowManagement@ApplicationModel@Internal@Windows@winrt@@@0@@Z @ 0x1805A5F98 (--$make@UGuidedSnapAssistCompletedArgs@implementation@WindowSnapping@Shell@Internal@Windows@winr.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall CSnapAssistControllerBase::EndGuidedSnapAssist(__int64 a1, int a2, __int64 a3)
{
  __int64 v3; // r14
  char v6; // r8
  char v7; // r8
  const char *v8; // r9
  _DWORD *v9; // rbx
  _DWORD *v10; // r15
  __int64 v11; // rcx
  __int64 v12; // rdx
  int v13; // eax
  __int64 v14; // rbx
  int v15; // eax
  int v17[2]; // [rsp+20h] [rbp-68h] BYREF
  int v18; // [rsp+28h] [rbp-60h]
  int v19[4]; // [rsp+30h] [rbp-58h] BYREF
  __int64 v20; // [rsp+40h] [rbp-48h]
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+0h]
  __int64 v22; // [rsp+90h] [rbp+8h] BYREF
  int v23; // [rsp+98h] [rbp+10h] BYREF
  __int64 v24; // [rsp+A0h] [rbp+18h]
  __int64 v25; // [rsp+A8h] [rbp+20h] BYREF

  v24 = a3;
  v23 = a2;
  v3 = a3;
  CSnapComponentTelemetry::EndGuidedSnapAssist<enum CSnapAssistControllerBase::GuidedSnapAssistResult &>(&v23);
  *(_OWORD *)v19 = 0LL;
  v20 = 0LL;
  AcquireSRWLockExclusive((PSRWLOCK)(a1 + 168));
  try
  {
    v22 = a1 + 168;
    wil::details::FeatureImpl<__WilFeatureTraits_Feature_GuidedSnapAssistContinuity>::ReportUsage(
      `wil::Feature<__WilFeatureTraits_Feature_GuidedSnapAssistContinuity>::GetImpl'::`2'::impl,
      1u,
      v6);
    if ( (unsigned __int8)tip2::tip_test<tip2::details::merged_data<_tip_SearchHomeRenderTest,_tip_SearchHomeRenderTest>>::operator bool(a1 + 240) )
    {
      *(_BYTE *)(*(_QWORD *)tip2::tip_test<tip2::details::merged_data<_tip_GuidedSnapAssistTest,_tip_GuidedSnapAssistTest>>::operator->(
                              a1 + 240,
                              &v22)
               + 285LL) = a2 == 0;
      tip2::test_data_control<tip2::details::merged_data<_tip_GuidedSnapAssistTest,_tip_GuidedSnapAssistTest>>::~test_data_control<tip2::details::merged_data<_tip_GuidedSnapAssistTest,_tip_GuidedSnapAssistTest>>(&v22);
      tip2::tip_test<tip2::details::merged_data<_tip_GamingPostureControllerStateChangeTest,_tip_GamingPostureControllerStateChangeTest>>::complete(a1 + 240);
    }
    std::deque<tagRECT>::_Tidy((_QWORD *)(a1 + 176));
    *(_QWORD *)(a1 + 272) = 0LL;
    *(_DWORD *)(a1 + 280) = 1;
    if ( a1 != -168 )
      ReleaseSRWLockExclusive((PSRWLOCK)(a1 + 168));
    wil::details::FeatureImpl<__WilFeatureTraits_Feature_GuidedSnapAssistContinuity>::ReportUsage(
      `wil::Feature<__WilFeatureTraits_Feature_GuidedSnapAssistContinuity>::GetImpl'::`2'::impl,
      1u,
      v7);
    v9 = *(_DWORD **)v3;
    v10 = *(_DWORD **)(v3 + 8);
    while ( v9 != v10 )
    {
      LODWORD(v22) = *v9;
      std::vector<winrt::Windows::Internal::ApplicationModel::WindowManagement::WindowId>::_Emplace_one_at_back<winrt::Windows::Internal::ApplicationModel::WindowManagement::WindowId>(
        v19,
        &v22);
      v9 += 2;
    }
    v11 = *(_QWORD *)v19;
    v12 = (__int64)(*(_QWORD *)&v19[2] - *(_QWORD *)v19) >> 2;
    if ( (_DWORD)v12 )
    {
      if ( a2 )
      {
        if ( a2 != 1 )
          wil::details::in1diag3::_FailFast_Unexpected(
            retaddr,
            (void *)0x30D,
            (unsigned int)"pcshell\\twinui\\snapcomponent\\lib\\snapassistcontroller.cpp",
            v8);
        v13 = 2;
      }
      else
      {
        v13 = v12 != 1;
      }
      LODWORD(v22) = v13;
      *(_QWORD *)v17 = *(_QWORD *)v19;
      v18 = (__int64)(*(_QWORD *)&v19[2] - *(_QWORD *)v19) >> 2;
      winrt::make<winrt::Windows::Internal::Shell::WindowSnapping::implementation::GuidedSnapAssistCompletedArgs,enum winrt::Windows::Internal::Shell::WindowSnapping::SnapAssistUsage &,winrt::array_view<winrt::Windows::Internal::ApplicationModel::WindowManagement::WindowId const>>(
        &v25,
        &v22,
        v17);
      winrt::impl::as<Windows::Internal::Shell::WindowSnapping::IGuidedSnapAssistCompletedArgs,winrt::impl::abi<winrt::Windows::Foundation::IUnknown,void>::type,0>(
        &v22,
        v25);
      v14 = v22;
      v15 = Microsoft::WRL::EventSource<Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::WindowSnapping::IGuidedSnapAssistController *,Windows::Internal::Shell::WindowSnapping::GuidedSnapAssistCompletedArgs *>,Microsoft::WRL::InvokeModeOptions<-2>>::InvokeAll<CSnapAssistControllerBase *,Windows::Internal::Shell::WindowSnapping::IGuidedSnapAssistCompletedArgs *>(
              a1 + 144,
              a1,
              v22);
      if ( v15 < 0 )
        wil::details::in1diag3::Throw_Hr(
          retaddr,
          (void *)0x310,
          (int)"pcshell\\twinui\\snapcomponent\\lib\\snapassistcontroller.cpp",
          (const char *)(unsigned int)v15,
          v17[0]);
      if ( v14 )
        winrt::com_ptr<ISnapComponent>::unconditional_release_ref(&v22);
      winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)&v25);
      v11 = *(_QWORD *)v19;
    }
    if ( v11 )
      std::_Deallocate<16>(v11, (v20 - v11) & 0xFFFFFFFFFFFFFFFCuLL);
  }
  catch ( ... )
  {
    wil::details::in1diag3::Log_CaughtException(
      retaddr,
      (void *)0x313,
      (unsigned int)"pcshell\\twinui\\snapcomponent\\lib\\snapassistcontroller.cpp",
      v8);
    v3 = v24;
  }
  return std::_Hash_vec<std::allocator<std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<Microsoft::WRL::ComPtr<IVirtualDesktop> const,Microsoft::WRL::ComPtr<Windows::Internal::ComposableShell::Multitasking::IVirtualDesktop>>>>>>>::~_Hash_vec<std::allocator<std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<Microsoft::WRL::ComPtr<IVirtualDesktop> const,Microsoft::WRL::ComPtr<Windows::Internal::ComposableShell::Multitasking::IVirtualDesktop>>>>>>>(v3);
}
