/*
 * XREFs of ?EndGuidedSnapAssist@CSnapAssistControllerBase@@IEAAXW4GuidedSnapAssistResult@1@V?$vector@_KV?$allocator@_K@std@@@std@@@Z @ 0x1800BC9A4
 * Callers:
 *     ?AdvanceGuidedSnapAssist@CSnapAssistControllerBase@@UEAAJ_K@Z @ 0x1800DA680 (-AdvanceGuidedSnapAssist@CSnapAssistControllerBase@@UEAAJ_K@Z.c)
 *     ??$SetGuidedSnapAssistRegions@V?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@UCRect@Geometry@@@std@@@std@@@std@@@CSnapAssistControllerBase@@IEAAXV?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@UCRect@Geometry@@@std@@@std@@@std@@0@Z @ 0x18029C3E4 (--$SetGuidedSnapAssistRegions@V-$_Vector_iterator@V-$_Vector_val@U-$_Simple_types@UCRect@Geometr.c)
 *     wil::details::lambda_call__lambda_44b56457426184e9711f8d1a3f34433d___::_lambda_call__lambda_44b56457426184e9711f8d1a3f34433d___ @ 0x180582C04 (wil--details--lambda_call__lambda_44b56457426184e9711f8d1a3f34433d___--_lambda_call__lambda_44b5.c)
 *     ?SnapAssistCompleted@CSnapAssistControllerBase@@UEAAJW4SnapAssistUsage@WindowSnapping@Shell@Internal@Windows@@IPEA_K@Z @ 0x180583C50 (-SnapAssistCompleted@CSnapAssistControllerBase@@UEAAJW4SnapAssistUsage@WindowSnapping@Shell@Inte.c)
 *     ?_SnapAssistTriggered@CSnapAssistControllerBase@@IEAAJAEBUCRect@Geometry@@PEAUIImmersiveMonitor@@AEBV?$vector@V?$ComPtr@UISnappedWindow@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@UISnappedWindow@@@WRL@Microsoft@@@std@@@std@@PEAUIAppLayout@@W4SNAP_ASSIST_VIEW_FLAGS@@HPEA_N@Z @ 0x180584EA0 (-_SnapAssistTriggered@CSnapAssistControllerBase@@IEAAJAEBUCRect@Geometry@@PEAUIImmersiveMonitor@.c)
 * Callees:
 *     ?unconditional_release_ref@?$com_ptr@UISnapComponent@@@winrt@@AEAAXXZ @ 0x1800286D0 (-unconditional_release_ref@-$com_ptr@UISnapComponent@@@winrt@@AEAAXXZ.c)
 *     ?_Tidy@?$vector@W4CollectionOfficeSKU@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@V?$allocator@W4CollectionOfficeSKU@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@@std@@@std@@AEAAXXZ @ 0x18002A054 (-_Tidy@-$vector@W4CollectionOfficeSKU@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@.c)
 *     ??1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ @ 0x18005D244 (--1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800934E8 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Tidy@?$deque@UtagRECT@@V?$allocator@UtagRECT@@@std@@@std@@AEAAXXZ @ 0x1800BCBD4 (-_Tidy@-$deque@UtagRECT@@V-$allocator@UtagRECT@@@std@@@std@@AEAAXXZ.c)
 *     ?__private_IsEnabledPreCheck@?$FeatureImpl@U__WilFeatureTraits_Feature_GuidedSnapAssistContinuity@@@details@wil@@QEAA_NW4ReportingKind@3@@Z @ 0x1800BCE18 (-__private_IsEnabledPreCheck@-$FeatureImpl@U__WilFeatureTraits_Feature_GuidedSnapAssistContinuit.c)
 *     ??C?$tip_test@V?$merged_data@U_tip_GuidedSnapAssistTest@@U1@@details@tip2@@@tip2@@QEAA?AV?$test_data_control@V?$merged_data@U_tip_GuidedSnapAssistTest@@U1@@details@tip2@@@1@XZ @ 0x1802887E8 (--C-$tip_test@V-$merged_data@U_tip_GuidedSnapAssistTest@@U1@@details@tip2@@@tip2@@QEAA-AV-$test_.c)
 *     ??B?$tip_test@V?$merged_data@U_tip_SearchHomeRenderTest@@U1@@details@tip2@@@tip2@@QEBA_NXZ @ 0x180295DEC (--B-$tip_test@V-$merged_data@U_tip_SearchHomeRenderTest@@U1@@details@tip2@@@tip2@@QEBA_NXZ.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18029752C (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ??1?$test_data_control@V?$merged_data@U_tip_GuidedSnapAssistTest@@U1@@details@tip2@@@tip2@@QEAA@XZ @ 0x1802C9254 (--1-$test_data_control@V-$merged_data@U_tip_GuidedSnapAssistTest@@U1@@details@tip2@@@tip2@@QEAA@.c)
 *     ??$_Emplace_one_at_back@UWindowId@WindowManagement@ApplicationModel@Internal@Windows@winrt@@@?$vector@UWindowId@WindowManagement@ApplicationModel@Internal@Windows@winrt@@V?$allocator@UWindowId@WindowManagement@ApplicationModel@Internal@Windows@winrt@@@std@@@std@@AEAAAEAUWindowId@WindowManagement@ApplicationModel@Internal@Windows@winrt@@$$QEAU234567@@Z @ 0x1802CBA40 (--$_Emplace_one_at_back@UWindowId@WindowManagement@ApplicationModel@Internal@Windows@winrt@@@-$v.c)
 *     ??$EndGuidedSnapAssist@AEAW4GuidedSnapAssistResult@CSnapAssistControllerBase@@@CSnapComponentTelemetry@@SAXAEAW4GuidedSnapAssistResult@CSnapAssistControllerBase@@@Z @ 0x1802CC3EC (--$EndGuidedSnapAssist@AEAW4GuidedSnapAssistResult@CSnapAssistControllerBase@@@CSnapComponentTel.c)
 *     ?complete@?$tip_test@V?$merged_data@U_tip_GamingPostureControllerStateChangeTest@@U1@@details@tip2@@@tip2@@QEAAXXZ @ 0x1802CFFBC (-complete@-$tip_test@V-$merged_data@U_tip_GamingPostureControllerStateChangeTest@@U1@@details@ti.c)
 *     ??$InvokeAll@PEAVCSnapAssistControllerBase@@PEAUIGuidedSnapAssistCompletedArgs@WindowSnapping@Shell@Internal@Windows@@@?$EventSource@U?$ITypedEventHandler@PEAUIGuidedSnapAssistController@WindowSnapping@Shell@Internal@Windows@@PEAVGuidedSnapAssistCompletedArgs@2345@@Foundation@Windows@@U?$InvokeModeOptions@$0?1@WRL@Microsoft@@@WRL@Microsoft@@QEAAJPEAVCSnapAssistControllerBase@@PEAUIGuidedSnapAssistCompletedArgs@WindowSnapping@Shell@Internal@Windows@@@Z @ 0x180581A0C (--$InvokeAll@PEAVCSnapAssistControllerBase@@PEAUIGuidedSnapAssistCompletedArgs@WindowSnapping@Sh.c)
 *     ??$as@UIGuidedSnapAssistCompletedArgs@WindowSnapping@Shell@Internal@Windows@@Utype@?$abi@UIUnknown@Foundation@Windows@winrt@@X@impl@winrt@@$0A@@impl@winrt@@YA?AU?$com_ptr@UIGuidedSnapAssistCompletedArgs@WindowSnapping@Shell@Internal@Windows@@@1@PEAUtype@?$abi@UIUnknown@Foundation@Windows@winrt@@X@01@@Z @ 0x180582144 (--$as@UIGuidedSnapAssistCompletedArgs@WindowSnapping@Shell@Internal@Windows@@Utype@-$abi@UIUnkno.c)
 *     ??$make@UGuidedSnapAssistCompletedArgs@implementation@WindowSnapping@Shell@Internal@Windows@winrt@@AEAW4SnapAssistUsage@34567@U?$array_view@$$CBUWindowId@WindowManagement@ApplicationModel@Internal@Windows@winrt@@@7@@winrt@@YA?A_PAEAW4SnapAssistUsage@WindowSnapping@Shell@Internal@Windows@0@$$QEAU?$array_view@$$CBUWindowId@WindowManagement@ApplicationModel@Internal@Windows@winrt@@@0@@Z @ 0x1805822B0 (--$make@UGuidedSnapAssistCompletedArgs@implementation@WindowSnapping@Shell@Internal@Windows@winr.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall CSnapAssistControllerBase::EndGuidedSnapAssist(__int64 a1, int a2, __int64 a3)
{
  __int64 v3; // r14
  const char *v6; // r9
  _DWORD *v7; // rbx
  _DWORD *v8; // r15
  __int64 v9; // rcx
  __int64 v10; // rbx
  int v11; // eax
  const char *v12; // r9
  int v14[2]; // [rsp+20h] [rbp-68h] BYREF
  int v15; // [rsp+28h] [rbp-60h]
  int v16[4]; // [rsp+30h] [rbp-58h] BYREF
  __int64 v17; // [rsp+40h] [rbp-48h]
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+0h]
  __int64 v19; // [rsp+90h] [rbp+8h] BYREF
  int v20; // [rsp+98h] [rbp+10h] BYREF
  __int64 v21; // [rsp+A0h] [rbp+18h]
  __int64 v22; // [rsp+A8h] [rbp+20h] BYREF

  v21 = a3;
  v20 = a2;
  v3 = a3;
  CSnapComponentTelemetry::EndGuidedSnapAssist<enum CSnapAssistControllerBase::GuidedSnapAssistResult &>(&v20);
  *(_OWORD *)v16 = 0LL;
  v17 = 0LL;
  AcquireSRWLockExclusive((PSRWLOCK)(a1 + 168));
  try
  {
    v19 = a1 + 168;
    wil::details::FeatureImpl<__WilFeatureTraits_Feature_GuidedSnapAssistContinuity>::__private_IsEnabledPreCheck(&`wil::Feature<__WilFeatureTraits_Feature_GuidedSnapAssistContinuity>::GetImpl'::`2'::impl);
    if ( (unsigned __int8)tip2::tip_test<tip2::details::merged_data<_tip_SearchHomeRenderTest,_tip_SearchHomeRenderTest>>::operator bool(a1 + 240) )
    {
      *(_BYTE *)(*(_QWORD *)tip2::tip_test<tip2::details::merged_data<_tip_GuidedSnapAssistTest,_tip_GuidedSnapAssistTest>>::operator->(
                              a1 + 240,
                              &v19)
               + 277LL) = a2 == 0;
      tip2::test_data_control<tip2::details::merged_data<_tip_GuidedSnapAssistTest,_tip_GuidedSnapAssistTest>>::~test_data_control<tip2::details::merged_data<_tip_GuidedSnapAssistTest,_tip_GuidedSnapAssistTest>>(&v19);
      tip2::tip_test<tip2::details::merged_data<_tip_GamingPostureControllerStateChangeTest,_tip_GamingPostureControllerStateChangeTest>>::complete(a1 + 240);
    }
    std::deque<tagRECT>::_Tidy(a1 + 176);
    *(_QWORD *)(a1 + 272) = 0LL;
    *(_DWORD *)(a1 + 280) = 1;
    if ( a1 != -168 )
      ReleaseSRWLockExclusive((PSRWLOCK)(a1 + 168));
    wil::details::FeatureImpl<__WilFeatureTraits_Feature_GuidedSnapAssistContinuity>::__private_IsEnabledPreCheck(&`wil::Feature<__WilFeatureTraits_Feature_GuidedSnapAssistContinuity>::GetImpl'::`2'::impl);
    v7 = *(_DWORD **)v3;
    v8 = *(_DWORD **)(v3 + 8);
    while ( v7 != v8 )
    {
      LODWORD(v19) = *v7;
      std::vector<winrt::Windows::Internal::ApplicationModel::WindowManagement::WindowId>::_Emplace_one_at_back<winrt::Windows::Internal::ApplicationModel::WindowManagement::WindowId>(
        v16,
        &v19);
      v7 += 2;
    }
    v9 = (__int64)(*(_QWORD *)&v16[2] - *(_QWORD *)v16) >> 2;
    if ( (_DWORD)v9 )
    {
      if ( a2 )
      {
        if ( a2 != 1 )
          wil::details::in1diag3::_FailFast_Unexpected(
            retaddr,
            (void *)0x30C,
            (unsigned int)"pcshell\\twinui\\snapcomponent\\lib\\snapassistcontroller.cpp",
            v6);
        LODWORD(v19) = 2;
      }
      else
      {
        LODWORD(v19) = v9 != 1;
      }
      *(_QWORD *)v14 = *(_QWORD *)v16;
      v15 = (__int64)(*(_QWORD *)&v16[2] - *(_QWORD *)v16) >> 2;
      winrt::make<winrt::Windows::Internal::Shell::WindowSnapping::implementation::GuidedSnapAssistCompletedArgs,enum winrt::Windows::Internal::Shell::WindowSnapping::SnapAssistUsage &,winrt::array_view<winrt::Windows::Internal::ApplicationModel::WindowManagement::WindowId const>>(
        &v22,
        &v19,
        v14);
      winrt::impl::as<Windows::Internal::Shell::WindowSnapping::IGuidedSnapAssistCompletedArgs,winrt::impl::abi<winrt::Windows::Foundation::IUnknown,void>::type,0>(
        &v19,
        v22);
      v10 = v19;
      v11 = Microsoft::WRL::EventSource<Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::WindowSnapping::IGuidedSnapAssistController *,Windows::Internal::Shell::WindowSnapping::GuidedSnapAssistCompletedArgs *>,Microsoft::WRL::InvokeModeOptions<-2>>::InvokeAll<CSnapAssistControllerBase *,Windows::Internal::Shell::WindowSnapping::IGuidedSnapAssistCompletedArgs *>(
              a1 + 144,
              a1,
              v19);
      if ( v11 < 0 )
        wil::details::in1diag3::Throw_Hr(
          retaddr,
          (void *)0x30F,
          (int)"pcshell\\twinui\\snapcomponent\\lib\\snapassistcontroller.cpp",
          (const char *)(unsigned int)v11,
          v14[0]);
      if ( v10 )
        winrt::com_ptr<ISnapComponent>::unconditional_release_ref(&v19);
      winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)&v22);
    }
    std::vector<enum WindowsInternal::Shell::UnifiedTile::CuratedTileCollections::CollectionOfficeSKU>::_Tidy((__int64)v16);
  }
  catch ( ... )
  {
    wil::details::in1diag3::Log_CaughtException(
      retaddr,
      (void *)0x312,
      (unsigned int)"pcshell\\twinui\\snapcomponent\\lib\\snapassistcontroller.cpp",
      v12);
    v3 = v21;
  }
  return std::_Hash_vec<std::allocator<std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<Microsoft::WRL::ComPtr<IVirtualDesktop> const,Microsoft::WRL::ComPtr<Windows::Internal::ComposableShell::Multitasking::IVirtualDesktop>>>>>>>::~_Hash_vec<std::allocator<std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<Microsoft::WRL::ComPtr<IVirtualDesktop> const,Microsoft::WRL::ComPtr<Windows::Internal::ComposableShell::Multitasking::IVirtualDesktop>>>>>>>(v3);
}
