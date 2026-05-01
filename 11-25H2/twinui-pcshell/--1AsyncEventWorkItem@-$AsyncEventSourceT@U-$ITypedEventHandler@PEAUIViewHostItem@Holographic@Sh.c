/*
 * XREFs of ??1AsyncEventWorkItem@?$AsyncEventSourceT@U?$ITypedEventHandler@PEAUIViewHostItem@Holographic@Shell@Internal@Windows@@PEAUIViewHostItemEventArgs@2345@@Foundation@Windows@@VGitEventSourceSupportsAgile@Internal@3@U?$InvokeModeOptions@$01@WRL@Microsoft@@$00Uerr_returncode_policy@wil@@@wil@@UEAA@XZ @ 0x1803F75B8
 * Callers:
 *     ??_EAsyncEventWorkItem@?$AsyncEventSourceT@U?$ITypedEventHandler@PEAUIViewHostItem@Holographic@Shell@Internal@Windows@@PEAUIViewHostItemEventArgs@2345@@Foundation@Windows@@VGitEventSourceSupportsAgile@Internal@3@U?$InvokeModeOptions@$01@WRL@Microsoft@@$00Uerr_returncode_policy@wil@@@wil@@UEAAPEAXI@Z @ 0x1803F7A40 (--_EAsyncEventWorkItem@-$AsyncEventSourceT@U-$ITypedEventHandler@PEAUIViewHostItem@Holographic@S.c)
 * Callees:
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIUnknown@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180052510 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIUnknown@@@Detai.c)
 *     ??1?$function@$$A6A_NJ@Z@wistd@@QEAA@XZ @ 0x18005BC88 (--1-$function@$$A6A_NJ@Z@wistd@@QEAA@XZ.c)
 *     ??1?$unique_storage@U?$resource_policy@PEAVoperation_guard@wil@@P6AXPEAV12@@_E$1?release_operation_guard_reference@details@2@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAV12@PEAV12@$0A@$$T@details@wil@@@details@wil@@QEAA@XZ @ 0x1802CF624 (--1-$unique_storage@U-$resource_policy@PEAVoperation_guard@wil@@P6AXPEAV12@@_E$1-release_operati.c)
 *     ?reset@?$unique_storage@U?$resource_policy@PEAVoperation_guard@wil@@P6AXPEAV12@@_E$1?release_operation_guard_reference@details@2@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAV12@PEAV12@$0A@$$T@details@wil@@@details@wil@@QEAAXPEAVoperation_guard@3@@Z @ 0x1803FE878 (-reset@-$unique_storage@U-$resource_policy@PEAVoperation_guard@wil@@P6AXPEAV12@@_E$1-release_ope.c)
 */

__int64 __fastcall wil::AsyncEventSourceT<Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::Holographic::IViewHostItem *,Windows::Internal::Shell::Holographic::IViewHostItemEventArgs *>,Windows::Internal::GitEventSourceSupportsAgile,Microsoft::WRL::InvokeModeOptions<2>,1,wil::err_returncode_policy>::AsyncEventWorkItem::~AsyncEventWorkItem(
        __int64 a1)
{
  volatile signed __int32 **v2; // rbx
  volatile signed __int32 *v3; // rcx

  v2 = (volatile signed __int32 **)(a1 + 152);
  *(_QWORD *)a1 = &wil::AsyncEventSourceT<Windows::Foundation::ITypedEventHandler<Windows::Internal::FamilySafety::AppLimits::FamilyAppUsageManager *,Windows::Internal::FamilySafety::AppLimits::AppUsageStateChangedEventArgs *>,Windows::Internal::GitEventSourceSupportsAgile,Microsoft::WRL::InvokeModeOptions<2>,1,wil::err_exception_policy>::AsyncEventWorkItem::`vftable';
  _reset___unique_storage_U__resource_policy_PEAVoperation_guard_wil__P6AXPEAV12___E_1_release_operation_guard_reference_details_2_YAX0_ZU__integral_constant__K_00_wistd__PEAV12_PEAV12__0A___T_details_wil___details_wil__QEAAXPEAVoperation_guard_3__Z(
    a1 + 152,
    0LL);
  __1__unique_storage_U__resource_policy_PEAVoperation_guard_wil__P6AXPEAV12___E_1_release_operation_guard_reference_details_2_YAX0_ZU__integral_constant__K_00_wistd__PEAV12_PEAV12__0A___T_details_wil___details_wil__QEAA_XZ(v2);
  wistd::function<bool (long)>::~function<bool (long)>(a1 + 32);
  v3 = *(volatile signed __int32 **)(a1 + 24);
  if ( v3 )
  {
    *(_QWORD *)(a1 + 24) = 0LL;
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IUnknown>::Release(v3);
  }
  *(_QWORD *)a1 = &wil::details::AsyncEventWorkItemBase::`vftable';
  return wistd::unique_ptr<CThreadRefHost,wistd::default_delete<CThreadRefHost>>::reset(
           (__int64 (__fastcall ****)(_QWORD, __int64))(a1 + 8),
           0LL);
}
