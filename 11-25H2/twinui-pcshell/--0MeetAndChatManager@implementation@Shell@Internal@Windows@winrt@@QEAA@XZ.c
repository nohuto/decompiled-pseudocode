/*
 * XREFs of ??0MeetAndChatManager@implementation@Shell@Internal@Windows@winrt@@QEAA@XZ @ 0x1802839EC
 * Callers:
 *     ??0?$heap_implements@V?$module_count_wrapper@UMeetAndChatManager@implementation@Shell@Internal@Windows@winrt@@@details@wil@@@impl@winrt@@QEAA@XZ @ 0x1805CEEB4 (--0-$heap_implements@V-$module_count_wrapper@UMeetAndChatManager@implementation@Shell@Internal@W.c)
 * Callees:
 *     ?unconditional_release_ref@?$com_ptr@UAppBackupListener@implementation@Shell@Internal@Windows@winrt@@@winrt@@AEAAXXZ @ 0x180066570 (-unconditional_release_ref@-$com_ptr@UAppBackupListener@implementation@Shell@Internal@Windows@wi.c)
 *     ??0immersive_shell_component@winrt@@QEAA@XZ @ 0x180151C9C (--0immersive_shell_component@winrt@@QEAA@XZ.c)
 *     ??$register_service_information@$$CBU_GUID@@@immersive_shell_component@winrt@@IEAAXAEBU_GUID@@@Z @ 0x1801522D0 (--$register_service_information@$$CBU_GUID@@@immersive_shell_component@winrt@@IEAAXAEBU_GUID@@@Z.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_MACFlyout@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x1801EEEDC (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_MACFlyout@@@details@wil@@QEAAX_NW4Reporti.c)
 *     ??$create_and_initialize@VMeetAndChatIris@implementation@Shell@Internal@Windows@winrt@@$$V@impl@winrt@@YAPEAVMeetAndChatIris@implementation@Shell@Internal@Windows@1@XZ @ 0x1802299B4 (--$create_and_initialize@VMeetAndChatIris@implementation@Shell@Internal@Windows@winrt@@$$V@impl@.c)
 *     ?create@?$event_t@V?$unique_storage@U?$resource_policy@PEAXP6AXPEAX@_E$1?CloseHandle@details@wil@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAXPEAX$0A@$$T@details@wil@@@details@wil@@Uerr_exception_policy@3@@wil@@QEAAXW4EventOptions@2@PEBGPEAU_SECURITY_ATTRIBUTES@@PEA_N@Z @ 0x1802C0B94 (-create@-$event_t@V-$unique_storage@U-$resource_policy@PEAXP6AXPEAX@_E$1-CloseHandl_ea_1802C0B94.c)
 *     ??2@YAPEAX_K@Z @ 0x1802D2B34 (--2@YAPEAX_K@Z.c)
 */

// Hidden C++ exception states: #wind=14
winrt::Windows::Internal::Shell::implementation::MeetAndChatManager *__fastcall winrt::Windows::Internal::Shell::implementation::MeetAndChatManager::MeetAndChatManager(
        winrt::Windows::Internal::Shell::implementation::MeetAndChatManager *this,
        __int64 a2)
{
  RTL_SRWLOCK *v3; // rdi
  _OWORD *v4; // rax
  _QWORD *v5; // rbx
  __int64 v6; // r9
  _QWORD *v7; // rdi
  __int64 v9[5]; // [rsp+30h] [rbp-28h] BYREF

  *((_QWORD *)this + 1) = &winrt::impl::produce<winrt::Windows::Internal::Shell::implementation::MeetAndChatManager,winrt::Windows::Internal::Shell::IMeetAndChatManager>::`vftable';
  *(_QWORD *)this = &Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::Experience::IBaseExperienceManager *,Windows::Internal::Shell::Experience::IVisibilityChangedEventArgs *>::`vftable';
  v3 = (RTL_SRWLOCK *)((char *)this + 16);
  winrt::immersive_shell_component::immersive_shell_component(
    (winrt::Windows::Internal::Shell::implementation::MeetAndChatManager *)((char *)this + 16),
    a2);
  *(_QWORD *)this = &wil::details::module_count_wrapper<winrt::Windows::Internal::Shell::implementation::MeetAndChatManager>::`vftable'{for `winrt::impl::producers_base<winrt::Windows::Internal::Shell::implementation::MeetAndChatManager,std::tuple<winrt::Windows::Internal::Shell::MeetAndChatManager,IImmersiveWindowMessageNotification>>'};
  v3->Ptr = &wil::details::module_count_wrapper<winrt::Windows::Internal::Shell::implementation::MeetAndChatManager>::`vftable'{for `winrt::impl::producer_convert<winrt::immersive_shell_component,IObjectWithSite,void>'};
  *((_QWORD *)this + 3) = &winrt::impl::heap_implements<TouchGestureComponent>::`vftable'{for `winrt::impl::producer_convert<winrt::immersive_shell_component,IServiceProvider,void>'};
  *((_QWORD *)this + 4) = &TouchGestureComponent::`vftable'{for `winrt::impl::producer_convert<winrt::immersive_shell_component,IImmersiveShellComponent,void>'};
  *((_QWORD *)this + 6) = &winrt::Windows::Internal::Shell::implementation::MeetAndChatManager::`vftable'{for `winrt::immersive_shell_component'};
  v4 = operator new(0x38uLL);
  *v4 = 0LL;
  v4[1] = 0LL;
  v4[2] = 0LL;
  *((_QWORD *)v4 + 6) = 0LL;
  *((_QWORD *)v4 + 2) = &winrt::impl::produce<ListenerWindow,winrt::Windows::Foundation::IInspectable>::`vftable';
  _InterlockedIncrement(&`winrt::get_module_lock'::`2'::s_lock);
  *((_QWORD *)v4 + 1) = 1LL;
  *((_QWORD *)v4 + 3) = 0LL;
  *((_QWORD *)v4 + 4) = 0LL;
  *((_QWORD *)v4 + 5) = 0LL;
  *((_QWORD *)v4 + 6) = 0LL;
  *(_QWORD *)v4 = &winrt::impl::heap_implements<ListenerWindow>::`vftable';
  *((_QWORD *)this + 13) = v4;
  *((_QWORD *)this + 14) = 0LL;
  *((_QWORD *)this + 15) = 0LL;
  *((_QWORD *)this + 16) = 0LL;
  *((_QWORD *)this + 17) = 0LL;
  *((_QWORD *)this + 18) = 0LL;
  *((_QWORD *)this + 19) = 0LL;
  *((_QWORD *)this + 20) = 0LL;
  *((_DWORD *)this + 42) = 0;
  *((_QWORD *)this + 22) = 0LL;
  *((_QWORD *)this + 23) = 0LL;
  *((_QWORD *)this + 24) = 0LL;
  *((_QWORD *)this + 25) = 0LL;
  *((_BYTE *)this + 208) = 0;
  *(_OWORD *)((char *)this + 212) = 0LL;
  *((_QWORD *)this + 29) = 0LL;
  *((_QWORD *)this + 30) = 0LL;
  *((_DWORD *)this + 62) = 0;
  *((_QWORD *)this + 32) = 0LL;
  *((_QWORD *)this + 33) = 0LL;
  *((_QWORD *)this + 34) = 0LL;
  *((_QWORD *)this + 35) = 0LL;
  v5 = (_QWORD *)((char *)this + 288);
  *((_QWORD *)this + 36) = 0LL;
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_MACFlyout>::ReportUsage(
    `wil::Feature<__WilFeatureTraits_Feature_MACFlyout>::GetImpl'::`2'::impl,
    1u,
    3u,
    v6);
  winrt::immersive_shell_component::register_service_information<_GUID const>(v3, (__int128 *)&SID_MeetAndChatManager);
  v7 = winrt::impl::create_and_initialize<winrt::Windows::Internal::Shell::implementation::MeetAndChatIris,>();
  v9[0] = (__int64)v7;
  if ( (__int64 *)((char *)this + 288) == v9 )
  {
    if ( v7 )
      winrt::com_ptr<winrt::Windows::Internal::Shell::implementation::AppBackupListener>::unconditional_release_ref(v9);
  }
  else
  {
    if ( *v5 )
      winrt::com_ptr<winrt::Windows::Internal::Shell::implementation::AppBackupListener>::unconditional_release_ref((__int64 *)this + 36);
    *v5 = v7;
  }
  _create___event_t_V__unique_storage_U__resource_policy_PEAXP6AXPEAX__E_1_CloseHandle_details_wil__YAX0_ZU__integral_constant__K_0A__wistd__PEAXPEAX_0A___T_details_wil___details_wil__Uerr_exception_policy_3__wil__QEAAXW4EventOptions_2_PEBGPEAU_SECURITY_ATTRIBUTES__PEA_N_Z(
    (char *)this + 272,
    1LL);
  return this;
}
