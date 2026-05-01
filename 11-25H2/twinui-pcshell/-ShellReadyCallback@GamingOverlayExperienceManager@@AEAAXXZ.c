/*
 * XREFs of ?ShellReadyCallback@GamingOverlayExperienceManager@@AEAAXXZ @ 0x18034F714
 * Callers:
 *     wistd::__function::__func__lambda_16aab40d9edae95fb04102e02aa4eed0__void___cdecl(void)_::operator() @ 0x1803423C0 (wistd--__function--__func__lambda_16aab40d9edae95fb04102e02aa4eed0__void___cdecl(void)_--operato.c)
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180029A94 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ??1CAutoSRWExclusiveLock@@QEAA@XZ @ 0x180048190 (--1CAutoSRWExclusiveLock@@QEAA@XZ.c)
 *     ??4?$shared_ptr@UKBViewInfo@@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x18005D480 (--4-$shared_ptr@UKBViewInfo@@@std@@QEAAAEAV01@$$QEAV01@@Z.c)
 *     ?unconditional_release_ref@?$com_ptr@UAppBackupListener@implementation@Shell@Internal@Windows@winrt@@@winrt@@AEAAXXZ @ 0x180066570 (-unconditional_release_ref@-$com_ptr@UAppBackupListener@implementation@Shell@Internal@Windows@wi.c)
 *     ?AcquireSRWLockExclusive@wil@@YA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@1@PEAU_RTL_SRWLOCK@@@Z @ 0x180142B80 (-AcquireSRWLockExclusive@wil@@YA-AV-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_.c)
 *     ?RegisterForXusbConnectionEvents@GamingOverlayExperienceManager@@AEAAJUwrite_lock_required@wil@@@Z @ 0x18020EF28 (-RegisterForXusbConnectionEvents@GamingOverlayExperienceManager@@AEAAJUwrite_lock_required@wil@@.c)
 *     ?reset@?$unique_storage@U?$resource_policy@PEAUHCMNOTIFICATION__@@P6AKPEAU1@@Z$1?CM_Unregister_Notification@@YAK0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@QEAAXPEAUHCMNOTIFICATION__@@@Z @ 0x18020F008 (-reset@-$unique_storage@U-$resource_policy@PEAUHCMNOTIFICATION__@@P6AKPEAU1@@Z$1-CM_Unregister_N.c)
 *     ??$swap@UIUINavigationControllerStatics@Input@Gaming@Windows@winrt@@$0A@@std@@YAXAEAUIUINavigationControllerStatics@Input@Gaming@Windows@winrt@@0@Z @ 0x18023086C (--$swap@UIUINavigationControllerStatics@Input@Gaming@Windows@winrt@@$0A@@std@@YAXAEAUIUINavigati.c)
 *     ??$?0VGamingOverlayExperienceManager@@P80@EAAXUIInspectable@Foundation@Windows@winrt@@AEBUUINavigationController@Input@Gaming@34@@Z@?$EventHandler@UUINavigationController@Input@Gaming@Windows@winrt@@@Foundation@Windows@winrt@@QEAA@PEAVGamingOverlayExperienceManager@@P84@EAAXUIInspectable@123@AEBUUINavigationController@Input@Gaming@23@@Z@Z @ 0x1802327D0 (--$-0VGamingOverlayExperienceManager@@P80@EAAXUIInspectable@Foundation@Windows@winrt@@AEBUUINavi.c)
 *     ??1?$factory_event_revoker@UIRemoteSystemDataModelStatics@Shell@Internal@Windows@winrt@@$MP8type@?$abi@UIRemoteSystemDataModelStatics@Shell@Internal@Windows@winrt@@X@impl@5@EAAHUevent_token@5@@_E1??_96785@$BEI@AA@impl@winrt@@QEAA@XZ @ 0x180233850 (--1-$factory_event_revoker@UIRemoteSystemDataModelStatics@Shell@Internal@Windows@winrt@@$MP8type.c)
 *     ?IsXusbDevicePresent@GamingOverlayExperienceManager@@AEAA_NUwrite_lock_required@wil@@@Z @ 0x180244C40 (-IsXusbDevicePresent@GamingOverlayExperienceManager@@AEAA_NUwrite_lock_required@wil@@@Z.c)
 *     ?RegisterGameBarRegistryChangedEvent@GamingOverlayExperienceManager@@AEAAXXZ @ 0x180245038 (-RegisterGameBarRegistryChangedEvent@GamingOverlayExperienceManager@@AEAAXXZ.c)
 *     ?RegisterGameDvrRegistryChangedEvent@GamingOverlayExperienceManager@@AEAAXXZ @ 0x180245178 (-RegisterGameDvrRegistryChangedEvent@GamingOverlayExperienceManager@@AEAAXXZ.c)
 *     ??1?$factory_event_revoker@UIUINavigationControllerStatics@Input@Gaming@Windows@winrt@@$MP8type@?$abi@UIUINavigationControllerStatics@Input@Gaming@Windows@winrt@@X@impl@5@EAAHUevent_token@5@@_E1??_96785@$BDI@AA@impl@winrt@@QEAA@XZ @ 0x1802A93E0 (--1-$factory_event_revoker@UIUINavigationControllerStatics@Input@Gaming@Windows@winrt@@$MP8type@.c)
 *     __security_check_cookie @ 0x1802D2210 (__security_check_cookie.c)
 *     ?GameBarFseWarmLaunch@GamingOverlayExperienceManager@@AEAA?AUfire_and_forget@winrt@@XZ @ 0x180344620 (-GameBarFseWarmLaunch@GamingOverlayExperienceManager@@AEAA-AUfire_and_forget@winrt@@XZ.c)
 *     ?Instance@?$singleton_with_factory@UNexusPolicyManager@@U?$singleton_initialize_factory@UNexusPolicyManager@@@xblib@@@xblib@@SA?AV?$shared_ptr@UNexusPolicyManager@@@std@@XZ @ 0x1803481BC (-Instance@-$singleton_with_factory@UNexusPolicyManager@@U-$singleton_initialize_factory@UNexusPo.c)
 *     ?StartGameInputWatcher@GamingOverlayExperienceManager@@AEAAJUwrite_lock_required@wil@@@Z @ 0x18034FA8C (-StartGameInputWatcher@GamingOverlayExperienceManager@@AEAAJUwrite_lock_required@wil@@@Z.c)
 *     ?UINavigationControllerAdded@UINavigationController@Input@Gaming@Windows@winrt@@SA@Uauto_revoke_t@5@AEBU?$EventHandler@UUINavigationController@Input@Gaming@Windows@winrt@@@Foundation@45@@Z @ 0x180350C74 (-UINavigationControllerAdded@UINavigationController@Input@Gaming@Windows@winrt@@SA@Uauto_revoke_.c)
 *     ?UINavigationControllerRemoved@UINavigationController@Input@Gaming@Windows@winrt@@SA@Uauto_revoke_t@5@AEBU?$EventHandler@UUINavigationController@Input@Gaming@Windows@winrt@@@Foundation@45@@Z @ 0x180350D30 (-UINavigationControllerRemoved@UINavigationController@Input@Gaming@Windows@winrt@@SA@Uauto_revok.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_Gamepad_NexusImprovements@@@details@wil@@QEAA_NXZ @ 0x180352AF8 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_Gamepad_NexusImprovements@@@detai.c)
 */

// Hidden C++ exception states: #wind=4
void __fastcall GamingOverlayExperienceManager::ShellReadyCallback(GamingOverlayExperienceManager *this)
{
  __int64 *v2; // rax
  __int64 v3; // rdx
  __int64 v4; // rax
  std::_Ref_count_base *v5; // rcx
  std::_Ref_count_base *v6; // rax
  __int64 v7; // rdx
  __int64 v8; // rax
  std::_Ref_count_base *v9; // rcx
  std::_Ref_count_base *v10; // rax
  std::_Ref_count_base *v11[2]; // [rsp+20h] [rbp-60h] BYREF
  _BYTE v12[16]; // [rsp+30h] [rbp-50h] BYREF
  __int128 v13; // [rsp+40h] [rbp-40h] BYREF
  _BYTE v14[16]; // [rsp+50h] [rbp-30h] BYREF
  RTL_SRWLOCK *v15; // [rsp+60h] [rbp-20h] BYREF
  __time64_t Time; // [rsp+68h] [rbp-18h] BYREF

  if ( (unsigned __int8)wil::details::FeatureImpl<__WilFeatureTraits_Feature_Gamepad_NexusImprovements>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_Gamepad_NexusImprovements>::GetImpl'::`2'::impl) )
  {
    v2 = xblib::singleton_with_factory<NexusPolicyManager,xblib::singleton_initialize_factory<NexusPolicyManager>>::Instance((__int64 *)v11);
    std::shared_ptr<KBViewInfo>::operator=((_QWORD *)this + 121, v2);
    if ( v11[1] )
      std::_Ref_count_base::_Decref(v11[1]);
    if ( (unsigned int)IsGamingFullScreenExperienceActive() )
      GamingOverlayExperienceManager::GameBarFseWarmLaunch((__int64)this, v12);
  }
  GamingOverlayExperienceManager::RegisterGameBarRegistryChangedEvent((wil::details::registry_watcher_state **)this);
  GamingOverlayExperienceManager::RegisterGameDvrRegistryChangedEvent((wil::details::registry_watcher_state **)this);
  v15 = 0LL;
  wil::AcquireSRWLockExclusive(&v15, (RTL_SRWLOCK *)this + 28);
  GamingOverlayExperienceManager::RegisterForXusbConnectionEvents((__int64)this);
  if ( GamingOverlayExperienceManager::IsXusbDevicePresent() )
  {
    wil::details::unique_storage<wil::details::resource_policy<HCMNOTIFICATION__ *,unsigned long (*)(HCMNOTIFICATION__ *),&unsigned long CM_Unregister_Notification(HCMNOTIFICATION__ *),wistd::integral_constant<unsigned __int64,0>,HCMNOTIFICATION__ *,HCMNOTIFICATION__ *,0,std::nullptr_t>>::reset(
      (__int64 *)this + 30,
      0LL);
    GamingOverlayExperienceManager::StartGameInputWatcher(this);
  }
  CAutoSRWExclusiveLock::~CAutoSRWExclusiveLock(&v15);
  if ( !*((_QWORD *)this + 200) )
  {
    v11[0] = (std::_Ref_count_base *)GamingOverlayExperienceManager::OnUINavigationControllerAdded;
    LODWORD(v11[1]) = 0;
    winrt::Windows::Foundation::EventHandler<winrt::Windows::Gaming::Input::UINavigationController>::EventHandler<winrt::Windows::Gaming::Input::UINavigationController>(
      (__int64)&v15,
      (__int64)this,
      v11);
    v4 = winrt::Windows::Gaming::Input::UINavigationController::UINavigationControllerAdded(&v13, v3, &v15);
    v5 = *(std::_Ref_count_base **)v4;
    *(_QWORD *)v4 = 0LL;
    v11[0] = v5;
    v11[1] = *(std::_Ref_count_base **)(v4 + 8);
    std::swap<winrt::Windows::Gaming::Input::IUINavigationControllerStatics,0>((__int64 *)v11, (__int64 *)this + 200);
    v6 = v11[1];
    v11[1] = *((std::_Ref_count_base **)this + 201);
    *((_QWORD *)this + 201) = v6;
    __1__factory_event_revoker_UIUINavigationControllerStatics_Input_Gaming_Windows_winrt___MP8type___abi_UIUINavigationControllerStatics_Input_Gaming_Windows_winrt__X_impl_5_EAAHUevent_token_5___E1___96785__BDI_AA_impl_winrt__QEAA_XZ((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)v11);
    __1__factory_event_revoker_UIUINavigationControllerStatics_Input_Gaming_Windows_winrt___MP8type___abi_UIUINavigationControllerStatics_Input_Gaming_Windows_winrt__X_impl_5_EAAHUevent_token_5___E1___96785__BDI_AA_impl_winrt__QEAA_XZ((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)&v13);
    if ( v15 )
      winrt::com_ptr<winrt::Windows::Internal::Shell::implementation::AppBackupListener>::unconditional_release_ref((__int64 *)&v15);
  }
  if ( !*((_QWORD *)this + 202) )
  {
    v11[0] = (std::_Ref_count_base *)GamingOverlayExperienceManager::OnUINavigationControllerRemoved;
    LODWORD(v11[1]) = 0;
    v13 = *(_OWORD *)v11;
    winrt::Windows::Foundation::EventHandler<winrt::Windows::Gaming::Input::UINavigationController>::EventHandler<winrt::Windows::Gaming::Input::UINavigationController>(
      (__int64)&v15,
      (__int64)this,
      &v13);
    v8 = winrt::Windows::Gaming::Input::UINavigationController::UINavigationControllerRemoved(v14, v7, &v15);
    v9 = *(std::_Ref_count_base **)v8;
    *(_QWORD *)v8 = 0LL;
    v11[0] = v9;
    v11[1] = *(std::_Ref_count_base **)(v8 + 8);
    std::swap<winrt::Windows::Gaming::Input::IUINavigationControllerStatics,0>((__int64 *)v11, (__int64 *)this + 202);
    v10 = v11[1];
    v11[1] = *((std::_Ref_count_base **)this + 203);
    *((_QWORD *)this + 203) = v10;
    __1__factory_event_revoker_UIRemoteSystemDataModelStatics_Shell_Internal_Windows_winrt___MP8type___abi_UIRemoteSystemDataModelStatics_Shell_Internal_Windows_winrt__X_impl_5_EAAHUevent_token_5___E1___96785__BEI_AA_impl_winrt__QEAA_XZ((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)v11);
    __1__factory_event_revoker_UIRemoteSystemDataModelStatics_Shell_Internal_Windows_winrt___MP8type___abi_UIRemoteSystemDataModelStatics_Shell_Internal_Windows_winrt__X_impl_5_EAAHUevent_token_5___E1___96785__BEI_AA_impl_winrt__QEAA_XZ((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)v14);
    if ( v15 )
      winrt::com_ptr<winrt::Windows::Internal::Shell::implementation::AppBackupListener>::unconditional_release_ref((__int64 *)&v15);
  }
  Time = 0LL;
  _time64(&Time);
  *((_QWORD *)this + 199) = Time;
}
