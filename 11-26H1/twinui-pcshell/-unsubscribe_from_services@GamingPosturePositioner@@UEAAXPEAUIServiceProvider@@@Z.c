/*
 * XREFs of ?unsubscribe_from_services@GamingPosturePositioner@@UEAAXPEAUIServiceProvider@@@Z @ 0x180506000
 * Callers:
 *     <none>
 * Callees:
 *     ??$Write@$$V@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2@Z @ 0x18001DFD4 (--$Write@$$V@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESC.c)
 *     ?reset@?$com_ptr_t@UIUwpWindowWrapperInternal@@Uerr_exception_policy@wil@@@wil@@QEAAXXZ @ 0x180024FF4 (-reset@-$com_ptr_t@UIUwpWindowWrapperInternal@@Uerr_exception_policy@wil@@@wil@@QEAAXXZ.c)
 *     ?Unregister@SmartCookie@@QEAAJXZ @ 0x1800250B4 (-Unregister@SmartCookie@@QEAAJXZ.c)
 *     ?unconditional_release_ref@?$com_ptr@UAppBackupListener@implementation@Shell@Internal@Windows@winrt@@@winrt@@AEAAXXZ @ 0x180026574 (-unconditional_release_ref@-$com_ptr@UAppBackupListener@implementation@Shell@Internal@Windows@wi.c)
 *     ??4ShellViewCoordinator@Shell@UI@WindowsUdk@winrt@@QEAAAEAU01234@$$QEAU01234@@Z @ 0x180054B64 (--4ShellViewCoordinator@Shell@UI@WindowsUdk@winrt@@QEAAAEAU01234@$$QEAU01234@@Z.c)
 *     ?reset@?$unique_storage@U?$resource_policy@PEAUwnf_subscription_state_base@details@wil@@P6AXPEAU123@@Z$1?delete_wnf_subscription_state@23@YAX0@ZU?$integral_constant@_K$01@wistd@@PEAU123@PEAU123@$0A@$$T@details@wil@@@details@wil@@QEAAXPEAUwnf_subscription_state_base@23@@Z @ 0x18008FE80 (-reset@-$unique_storage@U-$resource_policy@PEAUwnf_subscription_state_base@details@wil@@P6AXPEAU.c)
 *     ??1ActivityThreadWatcher@wil@@QEAA@XZ @ 0x1800B32E8 (--1ActivityThreadWatcher@wil@@QEAA@XZ.c)
 *     ?reset@?$unique_storage@U?$resource_policy@PEAUHWINEVENTHOOK__@@P6AHPEAU1@@Z$1?UnhookWinEvent@@YAH0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@QEAAXPEAUHWINEVENTHOOK__@@@Z @ 0x18022F878 (-reset@-$unique_storage@U-$resource_policy@PEAUHWINEVENTHOOK__@@P6AHPEAU1@@Z$1-UnhookWinEvent@@Y.c)
 *     ?reset@?$com_ptr_t@UIImmersiveAppCrusher@@Uerr_exception_policy@wil@@@wil@@QEAAXXZ @ 0x1802B5EE4 (-reset@-$com_ptr_t@UIImmersiveAppCrusher@@Uerr_exception_policy@wil@@@wil@@QEAAXXZ.c)
 *     ??$emplace@VActivityThreadWatcher@wil@@@?$optional@VActivityThreadWatcher@wil@@@std@@QEAAAEAVActivityThreadWatcher@wil@@$$QEAV23@@Z @ 0x180326550 (--$emplace@VActivityThreadWatcher@wil@@@-$optional@VActivityThreadWatcher@wil@@@std@@QEAAAEAVAct.c)
 *     ??1?$_Optional_destruct_base@VActivityThreadWatcher@wil@@$0A@@std@@QEAA@XZ @ 0x180328D64 (--1-$_Optional_destruct_base@VActivityThreadWatcher@wil@@$0A@@std@@QEAA@XZ.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_60149300@@@details@wil@@QEAA_NXZ @ 0x1803307AC (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_60149300@@@details@wil@@QEAA_NXZ.c)
 *     ?reset@?$unique_storage@U?$resource_policy@PEAUGAMING_FULL_SCREEN_EXPERIENCE_REGISTRATION__@@P6AXPEAU1@@Z$1?UnregisterGamingFullScreenExperienceChangeNotification@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@QEAAXPEAUGAMING_FULL_SCREEN_EXPERIENCE_REGISTRATION__@@@Z @ 0x1804ED328 (-reset@-$unique_storage@U-$resource_policy@PEAUGAMING_FULL_SCREEN_EXPERIENCE_REGISTRATION__@@P6A.c)
 *     ?CancelViewFallbackTimer@GamingPosturePositioner@@AEAAXXZ @ 0x1804F97DC (-CancelViewFallbackTimer@GamingPosturePositioner@@AEAAXXZ.c)
 *     ?Provider@GamingPosturePositionerTelemetryProvider@@SAPEBU_tlgProvider_t@@XZ @ 0x1805021D8 (-Provider@GamingPosturePositionerTelemetryProvider@@SAPEBU_tlgProvider_t@@XZ.c)
 *     ?WatchCurrentThread@GamingPosturePositionerTelemetryProvider@@SA?AVActivityThreadWatcher@wil@@PEBD@Z @ 0x1805039E0 (-WatchCurrentThread@GamingPosturePositionerTelemetryProvider@@SA-AVActivityThreadWatcher@wil@@PE.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_59118310@@@details@wil@@QEAA_NXZ @ 0x180504CBC (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_59118310@@@details@wil@@QEAA_NXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall GamingPosturePositioner::unsubscribe_from_services(
        GamingPosturePositioner *this,
        struct IServiceProvider *a2)
{
  __int64 v3; // rcx
  const struct _tlgProvider_t *v4; // rax
  wil::ActivityThreadWatcher *v5; // rax
  __int64 v6; // rcx
  _BYTE v7[80]; // [rsp+20h] [rbp-A8h] BYREF
  _BYTE v8[88]; // [rsp+70h] [rbp-58h] BYREF
  __int64 v9; // [rsp+D0h] [rbp+8h] BYREF

  if ( !wil::details::FeatureImpl<__WilFeatureTraits_Feature_60149300>::__private_IsEnabled((wil::details *)&`wil::Feature<__WilFeatureTraits_Feature_60149300>::GetImpl'::`2'::impl) )
  {
    v4 = GamingPosturePositionerTelemetryProvider::Provider(v3);
    if ( *(_DWORD *)v4 > 4u )
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<>(
        (__int64)v4,
        byte_180816974,
        0LL);
  }
  v7[72] = 0;
  if ( wil::details::FeatureImpl<__WilFeatureTraits_Feature_60149300>::__private_IsEnabled((wil::details *)&`wil::Feature<__WilFeatureTraits_Feature_60149300>::GetImpl'::`2'::impl) )
  {
    v5 = GamingPosturePositionerTelemetryProvider::WatchCurrentThread(
           (wil::ActivityThreadWatcher *)v8,
           "unsubscribe_from_services");
    std::optional<wil::ActivityThreadWatcher>::emplace<wil::ActivityThreadWatcher>((__int64)v7, (__int64)v5);
    wil::ActivityThreadWatcher::~ActivityThreadWatcher((wil::ActivityThreadWatcher *)v8);
  }
  GamingPosturePositioner::CancelViewFallbackTimer((GamingPosturePositioner *)((char *)this - 64));
  SmartCookie::Unregister((GamingPosturePositioner *)((char *)this + 200));
  SmartCookie::Unregister((GamingPosturePositioner *)((char *)this + 328));
  SmartCookie::Unregister((GamingPosturePositioner *)((char *)this + 456));
  wil::com_ptr_t<IUwpWindowWrapperInternal,wil::err_exception_policy>::reset((__int64 *)this + 15);
  wil::com_ptr_t<IUwpWindowWrapperInternal,wil::err_exception_policy>::reset((__int64 *)this + 14);
  wil::details::unique_storage<wil::details::resource_policy<GAMING_FULL_SCREEN_EXPERIENCE_REGISTRATION__ *,void (*)(GAMING_FULL_SCREEN_EXPERIENCE_REGISTRATION__ *),&void UnregisterGamingFullScreenExperienceChangeNotification(GAMING_FULL_SCREEN_EXPERIENCE_REGISTRATION__ *),wistd::integral_constant<unsigned __int64,0>,GAMING_FULL_SCREEN_EXPERIENCE_REGISTRATION__ *,GAMING_FULL_SCREEN_EXPERIENCE_REGISTRATION__ *,0,std::nullptr_t>>::reset(
    (__int64 *)this + 86,
    0LL);
  wil::com_ptr_t<IImmersiveAppCrusher,wil::err_exception_policy>::reset((__int64 *)this + 87);
  wil::com_ptr_t<IImmersiveAppCrusher,wil::err_exception_policy>::reset((__int64 *)this + 17);
  wil::com_ptr_t<IImmersiveAppCrusher,wil::err_exception_policy>::reset((__int64 *)this + 18);
  wil::com_ptr_t<IImmersiveAppCrusher,wil::err_exception_policy>::reset((__int64 *)this + 19);
  v9 = 0LL;
  winrt::WindowsUdk::UI::Shell::ShellViewCoordinator::operator=((__int64 *)this + 88, &v9);
  if ( v9 )
    winrt::com_ptr<winrt::Windows::Internal::Shell::implementation::AppBackupListener>::unconditional_release_ref(&v9);
  if ( wil::details::FeatureImpl<__WilFeatureTraits_Feature_59118310>::__private_IsEnabled((wil::details *)&`wil::Feature<__WilFeatureTraits_Feature_59118310>::GetImpl'::`2'::impl) )
  {
    wil::details::unique_storage<wil::details::resource_policy<wil::details::wnf_subscription_state_base *,void (*)(wil::details::wnf_subscription_state_base *),&void wil::details::delete_wnf_subscription_state(wil::details::wnf_subscription_state_base *),wistd::integral_constant<unsigned __int64,2>,wil::details::wnf_subscription_state_base *,wil::details::wnf_subscription_state_base *,0,std::nullptr_t>>::reset(
      (void (__fastcall ****)(_QWORD, __int64))this + 11,
      0LL);
    wil::details::unique_storage<wil::details::resource_policy<HWINEVENTHOOK__ *,int (*)(HWINEVENTHOOK__ *),&int UnhookWinEvent(HWINEVENTHOOK__ *),wistd::integral_constant<unsigned __int64,0>,HWINEVENTHOOK__ *,HWINEVENTHOOK__ *,0,std::nullptr_t>>::reset(
      (HWINEVENTHOOK *)this + 12,
      0LL);
    v6 = GamingPosturePositioner::s_instance;
    GamingPosturePositioner::s_instance = 0LL;
    if ( v6 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
  }
  std::_Optional_destruct_base<wil::ActivityThreadWatcher,0>::~_Optional_destruct_base<wil::ActivityThreadWatcher,0>((wil::ActivityThreadWatcher *)v7);
}
