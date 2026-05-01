/*
 * XREFs of _lambda_8079b73aae97d35e2f9baaab6c344746_::operator() @ 0x18058E540
 * Callers:
 *     std::remove_if_std::_Vector_iterator_std::_Vector_val_std::_Simple_types_std::shared_ptr_SnapFlyoutHost::FlyoutInstanceRecord_________lambda_8079b73aae97d35e2f9baaab6c344746___ @ 0x18058E130 (std--remove_if_std--_Vector_iterator_std--_Vector_val_std--_Simple_types_std--share_ea_18058E130.c)
 * Callees:
 *     ??1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ @ 0x18005D244 (--1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ.c)
 *     ?TryCleanupHiddenSnapBar@SnapFlyoutInstance@implementation@SnapComponent@Shell@Internal@Windows@winrt@@QEAA_NXZ @ 0x180274AF4 (-TryCleanupHiddenSnapBar@SnapFlyoutInstance@implementation@SnapComponent@Shell@Internal@Windows@.c)
 *     ??1?$test_data_control@V?$merged_data@U_tip_SnapFlyoutShowTest@@U1@@details@tip2@@@tip2@@QEAA@XZ @ 0x18028AB88 (--1-$test_data_control@V-$merged_data@U_tip_SnapFlyoutShowTest@@U1@@details@tip2@@@tip2@@QEAA@XZ.c)
 *     ??C?$tip_test@V?$merged_data@U_tip_SnapFlyoutShowTest@@U1@@details@tip2@@@tip2@@QEAA?AV?$test_data_control@V?$merged_data@U_tip_SnapFlyoutShowTest@@U1@@details@tip2@@@1@XZ @ 0x18028C808 (--C-$tip_test@V-$merged_data@U_tip_SnapFlyoutShowTest@@U1@@details@tip2@@@tip2@@QEAA-AV-$test_da.c)
 *     ??B?$tip_test@V?$merged_data@U_tip_SearchHomeRenderTest@@U1@@details@tip2@@@tip2@@QEBA_NXZ @ 0x180295DEC (--B-$tip_test@V-$merged_data@U_tip_SearchHomeRenderTest@@U1@@details@tip2@@@tip2@@QEBA_NXZ.c)
 *     ?complete@?$tip_test@V?$merged_data@U_tip_GamingPostureControllerStateChangeTest@@U1@@details@tip2@@@tip2@@QEAAXXZ @ 0x1802CFFBC (-complete@-$tip_test@V-$merged_data@U_tip_GamingPostureControllerStateChangeTest@@U1@@details@ti.c)
 *     ??$_Emplace@AEBV?$shared_ptr@UFlyoutInstanceRecord@SnapFlyoutHost@@@std@@@?$list@V?$shared_ptr@UFlyoutInstanceRecord@SnapFlyoutHost@@@std@@V?$allocator@V?$shared_ptr@UFlyoutInstanceRecord@SnapFlyoutHost@@@std@@@2@@std@@QEAAPEAU?$_List_node@V?$shared_ptr@UFlyoutInstanceRecord@SnapFlyoutHost@@@std@@PEAX@1@QEAU21@AEBV?$shared_ptr@UFlyoutInstanceRecord@SnapFlyoutHost@@@1@@Z @ 0x18058DAF0 (--$_Emplace@AEBV-$shared_ptr@UFlyoutInstanceRecord@SnapFlyoutHost@@@std@@@-$list@V-$shared_ptr@U.c)
 *     ?RemoveInstanceFromMonitorMap@SnapFlyoutHost@@AEAAXAEBUSnapFlyoutInstance@SnapComponent@Shell@Internal@Windows@winrt@@AEBV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@@Z @ 0x1805908D8 (-RemoveInstanceFromMonitorMap@SnapFlyoutHost@@AEAAXAEBUSnapFlyoutInstance@SnapComponent@Shell@In.c)
 */

// Hidden C++ exception states: #wind=1
char __fastcall lambda_8079b73aae97d35e2f9baaab6c344746_::operator()(__int64 *a1, __int64 *a2)
{
  char v4; // di
  __int64 v6; // [rsp+38h] [rbp+10h] BYREF

  v4 = winrt::Windows::Internal::Shell::SnapComponent::implementation::SnapFlyoutInstance::TryCleanupHiddenSnapBar(*(winrt::Windows::Internal::Shell::SnapComponent::implementation::SnapFlyoutInstance **)(*a2 + 8));
  if ( v4 )
  {
    std::list<std::shared_ptr<SnapFlyoutHost::FlyoutInstanceRecord>>::_Emplace<std::shared_ptr<SnapFlyoutHost::FlyoutInstanceRecord> const &>(
      *a1,
      *(_QWORD *)*a1,
      a2);
    if ( (unsigned __int8)tip2::tip_test<tip2::details::merged_data<_tip_SearchHomeRenderTest,_tip_SearchHomeRenderTest>>::operator bool((__int64 *)*a2) )
    {
      *(_BYTE *)(*tip2::tip_test<tip2::details::merged_data<_tip_SnapFlyoutShowTest,_tip_SnapFlyoutShowTest>>::operator->(
                    *a2,
                    &v6)
               + 266) = 1;
      tip2::test_data_control<tip2::details::merged_data<_tip_SnapFlyoutShowTest,_tip_SnapFlyoutShowTest>>::~test_data_control<tip2::details::merged_data<_tip_SnapFlyoutShowTest,_tip_SnapFlyoutShowTest>>(&v6);
      tip2::tip_test<tip2::details::merged_data<_tip_GamingPostureControllerStateChangeTest,_tip_GamingPostureControllerStateChangeTest>>::complete((__int64 *)*a2);
    }
    v6 = *(_QWORD *)(*a2 + 8) + 16LL;
    SnapFlyoutHost::RemoveInstanceFromMonitorMap(a1[1], &v6);
    v6 = 0LL;
    winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)&v6);
  }
  return v4;
}
