/*
 * XREFs of ?SnapAssistCompleted@CSnapAssistControllerBase@@UEAAJW4SnapAssistUsage@WindowSnapping@Shell@Internal@Windows@@IPEA_K@Z @ 0x1805A7A90
 * Callers:
 *     <none>
 * Callees:
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_GuidedSnapAssistContinuity@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x18006CF04 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_GuidedSnapAssistContinuity@@@details@wil@.c)
 *     ?EndGuidedSnapAssist@CSnapAssistControllerBase@@IEAAXW4GuidedSnapAssistResult@1@V?$vector@_KV?$allocator@_K@std@@@std@@@Z @ 0x1800E2890 (-EndGuidedSnapAssist@CSnapAssistControllerBase@@IEAAXW4GuidedSnapAssistResult@1@V-$vector@_KV-$a.c)
 *     ??1?$_Hash_vec@V?$allocator@V?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBV?$ComPtr@UIVirtualDesktop@@@WRL@Microsoft@@V?$ComPtr@UIVirtualDesktop@Multitasking@ComposableShell@Internal@Windows@@@23@@std@@@std@@@std@@@std@@@std@@@std@@QEAA@XZ @ 0x1800E2AD4 (--1-$_Hash_vec@V-$allocator@V-$_List_unchecked_iterator@V-$_List_val@U-$_List_simple_types@U-$pa.c)
 *     ?complete@?$tip_test@V?$merged_data@U_tip_GamingPostureControllerStateChangeTest@@U1@@details@tip2@@@tip2@@QEAAXXZ @ 0x18028BF74 (-complete@-$tip_test@V-$merged_data@U_tip_GamingPostureControllerStateChangeTest@@U1@@details@ti.c)
 *     ??B?$tip_test@V?$merged_data@U_tip_SearchHomeRenderTest@@U1@@details@tip2@@@tip2@@QEBA_NXZ @ 0x1802A2788 (--B-$tip_test@V-$merged_data@U_tip_SearchHomeRenderTest@@U1@@details@tip2@@@tip2@@QEBA_NXZ.c)
 *     ??$_Assign_counted_range@PEA_K@?$vector@_KV?$allocator@_K@std@@@std@@AEAAXPEA_K_K@Z @ 0x1805A59D8 (--$_Assign_counted_range@PEA_K@-$vector@_KV-$allocator@_K@std@@@std@@AEAAXPEA_K_K@Z.c)
 *     ??0?$vector@_KV?$allocator@_K@std@@@std@@QEAA@AEBV01@@Z @ 0x1805A686C (--0-$vector@_KV-$allocator@_K@std@@@std@@QEAA@AEBV01@@Z.c)
 *     ??1?$test_data_control@V?$merged_data@U_tip_TabTearOutEventTest@@U1@@details@tip2@@@tip2@@QEAA@XZ @ 0x1805A6A10 (--1-$test_data_control@V-$merged_data@U_tip_TabTearOutEventTest@@U1@@details@tip2@@@tip2@@QEAA@X.c)
 *     ??C?$tip_test@V?$merged_data@U_tip_TabTearOutEventTest@@U1@@details@tip2@@@tip2@@QEAA?AV?$test_data_control@V?$merged_data@U_tip_TabTearOutEventTest@@U1@@details@tip2@@@1@XZ @ 0x1805A6C14 (--C-$tip_test@V-$merged_data@U_tip_TabTearOutEventTest@@U1@@details@tip2@@@tip2@@QEAA-AV-$test_d.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CSnapAssistControllerBase::SnapAssistCompleted(__int64 a1, int a2, unsigned int a3, char *a4)
{
  BOOL v8; // esi
  __int64 *v9; // rax
  __int64 *v10; // rbp
  __int128 v12; // [rsp+20h] [rbp-48h] BYREF
  __int64 v13; // [rsp+30h] [rbp-38h]
  __int64 v14[3]; // [rsp+38h] [rbp-30h] BYREF
  void *v15; // [rsp+70h] [rbp+8h] BYREF

  v8 = a2 == 2;
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_GuidedSnapAssistContinuity>::ReportUsage(
    `wil::Feature<__WilFeatureTraits_Feature_GuidedSnapAssistContinuity>::GetImpl'::`2'::impl,
    1u,
    a3);
  v12 = 0LL;
  v13 = 0LL;
  std::vector<unsigned __int64>::_Assign_counted_range<unsigned __int64 *>((__int64 *)&v12, a4, a3);
  v9 = std::vector<unsigned __int64>::vector<unsigned __int64>(v14, (void **)&v12);
  CSnapAssistControllerBase::EndGuidedSnapAssist(a1 - 32, v8, (__int64)v9);
  std::_Hash_vec<std::allocator<std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<Microsoft::WRL::ComPtr<IVirtualDesktop> const,Microsoft::WRL::ComPtr<Windows::Internal::ComposableShell::Multitasking::IVirtualDesktop>>>>>>>::~_Hash_vec<std::allocator<std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<Microsoft::WRL::ComPtr<IVirtualDesktop> const,Microsoft::WRL::ComPtr<Windows::Internal::ComposableShell::Multitasking::IVirtualDesktop>>>>>>>((__int64 *)&v12);
  v10 = (__int64 *)(a1 + 280);
  if ( (unsigned __int8)tip2::tip_test<tip2::details::merged_data<_tip_SearchHomeRenderTest,_tip_SearchHomeRenderTest>>::operator bool(v10) )
  {
    *(_BYTE *)(*tip2::tip_test<tip2::details::merged_data<_tip_TabTearOutEventTest,_tip_TabTearOutEventTest>>::operator->(
                  (__int64)v10,
                  (__int64 *)&v15)
             + 272) = a2 != 2;
    tip2::test_data_control<tip2::details::merged_data<_tip_TabTearOutEventTest,_tip_TabTearOutEventTest>>::~test_data_control<tip2::details::merged_data<_tip_TabTearOutEventTest,_tip_TabTearOutEventTest>>(&v15);
    *(_BYTE *)(*tip2::tip_test<tip2::details::merged_data<_tip_TabTearOutEventTest,_tip_TabTearOutEventTest>>::operator->(
                  (__int64)v10,
                  (__int64 *)&v15)
             + 273) = a2 == 2;
    tip2::test_data_control<tip2::details::merged_data<_tip_TabTearOutEventTest,_tip_TabTearOutEventTest>>::~test_data_control<tip2::details::merged_data<_tip_TabTearOutEventTest,_tip_TabTearOutEventTest>>(&v15);
    tip2::tip_test<tip2::details::merged_data<_tip_GamingPostureControllerStateChangeTest,_tip_GamingPostureControllerStateChangeTest>>::complete(v10);
  }
  return 0LL;
}
