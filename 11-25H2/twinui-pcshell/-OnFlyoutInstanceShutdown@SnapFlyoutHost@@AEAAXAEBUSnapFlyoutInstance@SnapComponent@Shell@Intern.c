/*
 * XREFs of ?OnFlyoutInstanceShutdown@SnapFlyoutHost@@AEAAXAEBUSnapFlyoutInstance@SnapComponent@Shell@Internal@Windows@winrt@@@Z @ 0x180272450
 * Callers:
 *     <none>
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180029A94 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x180029B4C (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x180029F1C (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ??1CAutoSRWExclusiveLock@@QEAA@XZ @ 0x180048190 (--1CAutoSRWExclusiveLock@@QEAA@XZ.c)
 *     ?AcquireSRWLockExclusive@wil@@YA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@1@PEAU_RTL_SRWLOCK@@@Z @ 0x180142B80 (-AcquireSRWLockExclusive@wil@@YA-AV-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_.c)
 *     ?erase@?$vector@V?$shared_ptr@UFlyoutInstanceRecord@SnapFlyoutHost@@@std@@V?$allocator@V?$shared_ptr@UFlyoutInstanceRecord@SnapFlyoutHost@@@std@@@2@@std@@QEAA?AV?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@V?$shared_ptr@UFlyoutInstanceRecord@SnapFlyoutHost@@@std@@@std@@@std@@@2@V?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@V?$shared_ptr@UFlyoutInstanceRecord@SnapFlyoutHost@@@std@@@std@@@std@@@2@0@Z @ 0x1801CAA34 (-erase@-$vector@V-$shared_ptr@UFlyoutInstanceRecord@SnapFlyoutHost@@@std@@V-$allocator@V-$shared.c)
 *     ?TryGetFlyoutInstance@SnapFlyoutHost@@AEAA?AV?$shared_ptr@UFlyoutInstanceRecord@SnapFlyoutHost@@@std@@AEBUSnapFlyoutInstance@SnapComponent@Shell@Internal@Windows@winrt@@AEBV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@@Z @ 0x180202E7C (-TryGetFlyoutInstance@SnapFlyoutHost@@AEAA-AV-$shared_ptr@UFlyoutInstanceRecord@SnapFlyoutHost@@.c)
 *     ?ProgressRequest@?$consume_Windows_Internal_Shell_WindowManagementEvents_IArrangedWindowResizeStartedEventArgs@UIArrangedWindowResizeStartedEventArgs@WindowManagementEvents@Shell@Internal@Windows@winrt@@@impl@winrt@@QEBA@XZ @ 0x180202F10 (-ProgressRequest@-$consume_Windows_Internal_Shell_WindowManagementEvents_IArrangedWindowResizeSt.c)
 *     ?GetInt32@?$consume_Windows_Management_Policies_INamedPolicyData@UINamedPolicyData@Policies@Management@Windows@winrt@@@impl@winrt@@QEBA@XZ @ 0x180272F30 (-GetInt32@-$consume_Windows_Management_Policies_INamedPolicyData@UINamedPolicyData@Policies@Mana.c)
 *     ??1?$test_data_control@V?$merged_data@U_tip_SnapFlyoutShowTest@@U1@@details@tip2@@@tip2@@QEAA@XZ @ 0x18028AB88 (--1-$test_data_control@V-$merged_data@U_tip_SnapFlyoutShowTest@@U1@@details@tip2@@@tip2@@QEAA@XZ.c)
 *     ??C?$tip_test@V?$merged_data@U_tip_SnapFlyoutShowTest@@U1@@details@tip2@@@tip2@@QEAA?AV?$test_data_control@V?$merged_data@U_tip_SnapFlyoutShowTest@@U1@@details@tip2@@@1@XZ @ 0x18028C808 (--C-$tip_test@V-$merged_data@U_tip_SnapFlyoutShowTest@@U1@@details@tip2@@@tip2@@QEAA-AV-$test_da.c)
 *     ??B?$tip_test@V?$merged_data@U_tip_SearchHomeRenderTest@@U1@@details@tip2@@@tip2@@QEBA_NXZ @ 0x180295DEC (--B-$tip_test@V-$merged_data@U_tip_SearchHomeRenderTest@@U1@@details@tip2@@@tip2@@QEBA_NXZ.c)
 *     ??$SnapFlyout_InstanceShutdown@I@SnapFlyoutTelemetry@@SAX$$QEAI@Z @ 0x1802CC204 (--$SnapFlyout_InstanceShutdown@I@SnapFlyoutTelemetry@@SAX$$QEAI@Z.c)
 *     ?complete@?$tip_test@V?$merged_data@U_tip_GamingPostureControllerStateChangeTest@@U1@@details@tip2@@@tip2@@QEAAXXZ @ 0x1802CFFBC (-complete@-$tip_test@V-$merged_data@U_tip_GamingPostureControllerStateChangeTest@@U1@@details@ti.c)
 *     ??$_Free_non_head@V?$allocator@U?$_List_node@V?$shared_ptr@UFlyoutInstanceRecord@SnapFlyoutHost@@@std@@PEAX@std@@@std@@@?$_List_node@V?$shared_ptr@UFlyoutInstanceRecord@SnapFlyoutHost@@@std@@PEAX@std@@SAXAEAV?$allocator@U?$_List_node@V?$shared_ptr@UFlyoutInstanceRecord@SnapFlyoutHost@@@std@@PEAX@std@@@1@PEAU01@@Z @ 0x18058DE30 (--$_Free_non_head@V-$allocator@U-$_List_node@V-$shared_ptr@UFlyoutInstanceRecord@SnapFlyoutHost@.c)
 *     std::remove_if_std::_Vector_iterator_std::_Vector_val_std::_Simple_types_std::shared_ptr_SnapFlyoutHost::FlyoutInstanceRecord_________lambda_68aa1190552d1a9a339a806e906c71bc___ @ 0x18058E0A0 (std--remove_if_std--_Vector_iterator_std--_Vector_val_std--_Simple_types_std--shared_ptr_SnapFly.c)
 *     std::remove_if_std::_Vector_iterator_std::_Vector_val_std::_Simple_types_std::shared_ptr_SnapFlyoutHost::FlyoutInstanceRecord_________lambda_8079b73aae97d35e2f9baaab6c344746___ @ 0x18058E130 (std--remove_if_std--_Vector_iterator_std--_Vector_val_std--_Simple_types_std--share_ea_18058E130.c)
 *     std::remove_if_std::_Vector_iterator_std::_Vector_val_std::_Simple_types_std::shared_ptr_SnapFlyoutHost::FlyoutInstanceRecord_________lambda_f1c47049353ace0ef5f26ec309cbdaee___ @ 0x18058E1CC (std--remove_if_std--_Vector_iterator_std--_Vector_val_std--_Simple_types_std--share_ea_18058E1CC.c)
 *     ?RemoveInstanceFromMonitorMap@SnapFlyoutHost@@AEAAXAEBUSnapFlyoutInstance@SnapComponent@Shell@Internal@Windows@winrt@@AEBV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@@Z @ 0x1805908D8 (-RemoveInstanceFromMonitorMap@SnapFlyoutHost@@AEAAXAEBUSnapFlyoutInstance@SnapComponent@Shell@In.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_Servicing_SnapBarDeadlockFix@@@details@wil@@QEAA_NXZ @ 0x1805916A0 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_Servicing_SnapBarDeadlockFix@@@de.c)
 */

// Hidden C++ exception states: #wind=3
void __fastcall SnapFlyoutHost::OnFlyoutInstanceShutdown(
        RTL_SRWLOCK *this,
        const struct winrt::Windows::Internal::Shell::SnapComponent::SnapFlyoutInstance *a2)
{
  std::_Ref_count_base *v4; // rax
  std::_Ref_count_base **v5; // rbx
  __int64 Ptr; // rbx
  __int64 *v7; // rax
  __int64 v8; // rbx
  __int64 *v9; // rax
  __int64 v10; // rcx
  __int64 v11; // rcx
  std::_Ref_count_base *v12; // rbx
  __int64 v13; // rbx
  __int64 *v14; // rax
  __int64 v15; // rbx
  __int64 *v16; // rax
  std::_Ref_count_base **v17; // [rsp+20h] [rbp-30h] BYREF
  std::_Ref_count_base *v18; // [rsp+28h] [rbp-28h]
  RTL_SRWLOCK **v19; // [rsp+30h] [rbp-20h]
  std::_Ref_count_base *v20[2]; // [rsp+40h] [rbp-10h] BYREF
  RTL_SRWLOCK *v21; // [rsp+80h] [rbp+30h] BYREF
  char v22; // [rsp+88h] [rbp+38h] BYREF

  LODWORD(v21) = winrt::impl::consume_Windows_Internal_Shell_WindowManagementEvents_IArrangedWindowResizeStartedEventArgs<winrt::Windows::Internal::Shell::WindowManagementEvents::IArrangedWindowResizeStartedEventArgs>::ProgressRequest((__int64 *)a2);
  SnapFlyoutTelemetry::SnapFlyout_InstanceShutdown<unsigned int>(&v21);
  if ( (unsigned __int8)wil::details::FeatureImpl<__WilFeatureTraits_Feature_Servicing_SnapBarDeadlockFix>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_Servicing_SnapBarDeadlockFix>::GetImpl'::`2'::impl) )
  {
    *(_OWORD *)v20 = 0LL;
    v4 = (std::_Ref_count_base *)std::_Allocate<16,std::_Default_allocate_traits,0>(0x20uLL);
    *(_QWORD *)v4 = v4;
    *((_QWORD *)v4 + 1) = v4;
    v20[0] = v4;
    wil::AcquireSRWLockExclusive(&v21, this + 22);
    SnapFlyoutHost::TryGetFlyoutInstance((__int64)this, &v17, (__int64)a2);
    v5 = v17;
    if ( v17
      && (unsigned __int8)tip2::tip_test<tip2::details::merged_data<_tip_SearchHomeRenderTest,_tip_SearchHomeRenderTest>>::operator bool(v17) )
    {
      *(_BYTE *)(*(_QWORD *)tip2::tip_test<tip2::details::merged_data<_tip_SnapFlyoutShowTest,_tip_SnapFlyoutShowTest>>::operator->(
                              v5,
                              &v22)
               + 266LL) = 1;
      tip2::test_data_control<tip2::details::merged_data<_tip_SnapFlyoutShowTest,_tip_SnapFlyoutShowTest>>::~test_data_control<tip2::details::merged_data<_tip_SnapFlyoutShowTest,_tip_SnapFlyoutShowTest>>(&v22);
      tip2::tip_test<tip2::details::merged_data<_tip_GamingPostureControllerStateChangeTest,_tip_GamingPostureControllerStateChangeTest>>::complete(v5);
    }
    if ( v18 )
      std::_Ref_count_base::_Decref(v18);
    Ptr = (__int64)this[4].Ptr;
    v7 = (__int64 *)std::remove_if_std::_Vector_iterator_std::_Vector_val_std::_Simple_types_std::shared_ptr_SnapFlyoutHost::FlyoutInstanceRecord_________lambda_68aa1190552d1a9a339a806e906c71bc___(
                      &v22,
                      this[3].Ptr,
                      Ptr,
                      a2);
    std::vector<std::shared_ptr<SnapFlyoutHost::FlyoutInstanceRecord>>::erase((__int64)&this[3], &v17, *v7, Ptr);
    if ( (unsigned int)winrt::impl::consume_Windows_Management_Policies_INamedPolicyData<winrt::Windows::Management::Policies::INamedPolicyData>::GetInt32(a2) == 2 )
    {
      SnapFlyoutHost::RemoveInstanceFromMonitorMap(this, a2);
      v8 = (__int64)this[4].Ptr;
      v17 = v20;
      v18 = (std::_Ref_count_base *)this;
      v19 = &v21;
      v9 = (__int64 *)((__int64 (__fastcall *)(char *, PVOID, __int64, std::_Ref_count_base ***))std::remove_if_std::_Vector_iterator_std::_Vector_val_std::_Simple_types_std::shared_ptr_SnapFlyoutHost::FlyoutInstanceRecord_________lambda_8079b73aae97d35e2f9baaab6c344746___)(
                        &v22,
                        this[3].Ptr,
                        v8,
                        &v17);
      std::vector<std::shared_ptr<SnapFlyoutHost::FlyoutInstanceRecord>>::erase((__int64)&this[3], &v17, *v9, v8);
    }
    CAutoSRWExclusiveLock::~CAutoSRWExclusiveLock(&v21);
    std::_List_node<std::shared_ptr<SnapFlyoutHost::FlyoutInstanceRecord>,void *>::_Free_non_head<std::allocator<std::_List_node<std::shared_ptr<SnapFlyoutHost::FlyoutInstanceRecord>,void *>>>(
      v10,
      v20[0]);
    *(_QWORD *)v20[0] = v20[0];
    *((std::_Ref_count_base **)v20[0] + 1) = v20[0];
    v20[1] = 0LL;
    std::_List_node<std::shared_ptr<SnapFlyoutHost::FlyoutInstanceRecord>,void *>::_Free_non_head<std::allocator<std::_List_node<std::shared_ptr<SnapFlyoutHost::FlyoutInstanceRecord>,void *>>>(
      v11,
      v20[0]);
    std::_Deallocate<16,0>(v20[0], (const struct std::nothrow_t *)0x20);
  }
  else
  {
    wil::AcquireSRWLockExclusive(&v21, this + 22);
    SnapFlyoutHost::TryGetFlyoutInstance((__int64)this, v20, (__int64)a2);
    v12 = v20[0];
    if ( v20[0]
      && (unsigned __int8)tip2::tip_test<tip2::details::merged_data<_tip_SearchHomeRenderTest,_tip_SearchHomeRenderTest>>::operator bool(v20[0]) )
    {
      *(_BYTE *)(*(_QWORD *)tip2::tip_test<tip2::details::merged_data<_tip_SnapFlyoutShowTest,_tip_SnapFlyoutShowTest>>::operator->(
                              v12,
                              &v22)
               + 266LL) = 1;
      tip2::test_data_control<tip2::details::merged_data<_tip_SnapFlyoutShowTest,_tip_SnapFlyoutShowTest>>::~test_data_control<tip2::details::merged_data<_tip_SnapFlyoutShowTest,_tip_SnapFlyoutShowTest>>(&v22);
      tip2::tip_test<tip2::details::merged_data<_tip_GamingPostureControllerStateChangeTest,_tip_GamingPostureControllerStateChangeTest>>::complete(v12);
    }
    if ( v20[1] )
      std::_Ref_count_base::_Decref(v20[1]);
    v13 = (__int64)this[4].Ptr;
    v14 = (__int64 *)std::remove_if_std::_Vector_iterator_std::_Vector_val_std::_Simple_types_std::shared_ptr_SnapFlyoutHost::FlyoutInstanceRecord_________lambda_68aa1190552d1a9a339a806e906c71bc___(
                       &v22,
                       this[3].Ptr,
                       v13,
                       a2);
    std::vector<std::shared_ptr<SnapFlyoutHost::FlyoutInstanceRecord>>::erase((__int64)&this[3], &v17, *v14, v13);
    if ( (unsigned int)winrt::impl::consume_Windows_Management_Policies_INamedPolicyData<winrt::Windows::Management::Policies::INamedPolicyData>::GetInt32(a2) == 2 )
    {
      SnapFlyoutHost::RemoveInstanceFromMonitorMap(this, a2);
      v15 = (__int64)this[4].Ptr;
      v20[0] = (std::_Ref_count_base *)this;
      v20[1] = (std::_Ref_count_base *)&v21;
      v16 = (__int64 *)std::remove_if_std::_Vector_iterator_std::_Vector_val_std::_Simple_types_std::shared_ptr_SnapFlyoutHost::FlyoutInstanceRecord_________lambda_f1c47049353ace0ef5f26ec309cbdaee___(
                         &v22,
                         this[3].Ptr,
                         v15,
                         v20);
      std::vector<std::shared_ptr<SnapFlyoutHost::FlyoutInstanceRecord>>::erase((__int64)&this[3], &v17, *v16, v15);
    }
    CAutoSRWExclusiveLock::~CAutoSRWExclusiveLock(&v21);
  }
}
