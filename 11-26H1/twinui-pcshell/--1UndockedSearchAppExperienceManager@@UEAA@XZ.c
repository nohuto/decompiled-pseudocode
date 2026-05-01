/*
 * XREFs of ??1UndockedSearchAppExperienceManager@@UEAA@XZ @ 0x1803AE508
 * Callers:
 *     ??_GUndockedSearchAppExperienceManager@@UEAAPEAXI@Z @ 0x1803AFD60 (--_GUndockedSearchAppExperienceManager@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18001AE8C (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?Destroy@?$DestroyThreadPoolTimer@USystemThreadPoolMethods@details@wil@@$0A@@details@wil@@SAXPEAU_TP_TIMER@@@Z @ 0x18001D930 (-Destroy@-$DestroyThreadPoolTimer@USystemThreadPoolMethods@details@wil@@$0A@@details@wil@@SAXPEA.c)
 *     ??1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ @ 0x18002633C (--1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ.c)
 *     ?_Tidy@?$vector@UCRect@Geometry@@V?$allocator@UCRect@Geometry@@@std@@@std@@AEAAXXZ @ 0x180028798 (-_Tidy@-$vector@UCRect@Geometry@@V-$allocator@UCRect@Geometry@@@std@@@std@@AEAAXXZ.c)
 *     ?close@?$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ @ 0x18002E610 (-close@-$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x1800373AC (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?UnregisterViewCoordinatorEvents@UndockedSearchAppExperienceManager@@AEAAXXZ @ 0x1800CB964 (-UnregisterViewCoordinatorEvents@UndockedSearchAppExperienceManager@@AEAAXXZ.c)
 *     ??1?$EventSource@U?$ITypedEventHandler@PEAUIInspectable@@PEAUITopLevelViewEventArgs@ComposableShell@Internal@Windows@@@Foundation@Windows@@U?$InvokeModeOptions@$01@WRL@Microsoft@@@WRL@Microsoft@@QEAA@XZ @ 0x1800F0C00 (--1-$EventSource@U-$ITypedEventHandler@PEAUIInspectable@@PEAUITopLevelViewEventArgs@ComposableSh.c)
 *     ?delete_wnf_subscription_state@details@wil@@YAXPEAUwnf_subscription_state_base@12@@Z @ 0x1800F91D4 (-delete_wnf_subscription_state@details@wil@@YAXPEAUwnf_subscription_state_base@12@@Z.c)
 *     ?reset@?$unique_ptr@VCThreadRefHost@@U?$default_delete@VCThreadRefHost@@@wistd@@@wistd@@QEAAXPEAVCThreadRefHost@@@Z @ 0x180184560 (-reset@-$unique_ptr@VCThreadRefHost@@U-$default_delete@VCThreadRefHost@@@wistd@@@wistd@@QEAAXPEA.c)
 *     ?reset@?$unique_ptr@VIUndockedSearchAppExperienceManagerConfig@@U?$default_delete@VIUndockedSearchAppExperienceManagerConfig@@@wistd@@@wistd@@QEAAXPEAVIUndockedSearchAppExperienceManagerConfig@@@Z @ 0x18020C4BC (-reset@-$unique_ptr@VIUndockedSearchAppExperienceManagerConfig@@U-$default_delete@VIUndockedSear.c)
 *     ??1?$com_ptr_t@V?$merged_data@U_tip_SearchFullActivationTest@@U1@@details@tip2@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x1802815E0 (--1-$com_ptr_t@V-$merged_data@U_tip_SearchFullActivationTest@@U1@@details@tip2@@Uerr_returncode_.c)
 *     ??1?$com_ptr_t@V?$merged_data@U_tip_SearchHideTest@@U1@@details@tip2@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x1802831B0 (--1-$com_ptr_t@V-$merged_data@U_tip_SearchHideTest@@U1@@details@tip2@@Uerr_returncode_policy@wil.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_44533041@@@details@wil@@QEAA_NXZ @ 0x18028B984 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_44533041@@@details@wil@@QEAA_NXZ.c)
 *     ??1?$event_revoker@UITaskbarLayout@Shell@UI@WindowsUdk@winrt@@$MP8type@?$abi@UITaskbarLayout@Shell@UI@WindowsUdk@winrt@@X@impl@5@EAAHUevent_token@5@@_E1??_96785@$BGI@AA@impl@winrt@@QEAA@XZ @ 0x1802C1700 (--1-$event_revoker@UITaskbarLayout@Shell@UI@WindowsUdk@winrt@@$MP8type@-$abi@UITaskbarLayout@She.c)
 *     ??1?$com_ptr_t@V?$merged_data@U_tip_SearchHomeRenderTest@@U1@@details@tip2@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x1803AE080 (--1-$com_ptr_t@V-$merged_data@U_tip_SearchHomeRenderTest@@U1@@details@tip2@@Uerr_returncode_poli.c)
 *     ?UnregisterViewEventDispatcherHandler@UndockedSearchAppExperienceManager@@AEAAXXZ @ 0x1803BA410 (-UnregisterViewEventDispatcherHandler@UndockedSearchAppExperienceManager@@AEAAXXZ.c)
 *     ?UntrackMouseMovement@UndockedSearchAppExperienceManager@@AEAAXXZ @ 0x1803BA508 (-UntrackMouseMovement@UndockedSearchAppExperienceManager@@AEAAXXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall UndockedSearchAppExperienceManager::~UndockedSearchAppExperienceManager(
        UndockedSearchAppExperienceManager *this)
{
  __int64 v2; // rcx
  struct wil::details::wnf_subscription_state_base *v3; // rdx
  wil::details *v4; // rcx
  wil::details *v5; // rcx
  struct _TP_TIMER *v6; // rcx
  struct _TP_TIMER *v7; // rcx
  struct _TP_TIMER *v8; // rcx
  std::_Ref_count_base *v9; // rcx
  struct _TP_TIMER *v10; // rcx
  struct _TP_TIMER *v11; // rcx
  struct _TP_TIMER *v12; // rcx
  struct _TP_TIMER *v13; // rcx
  struct _TP_TIMER *v14; // rcx
  struct _TP_TIMER *v15; // rcx
  void (__fastcall ***v16)(_QWORD, __int64); // rcx

  *(_QWORD *)this = &UndockedSearchAppExperienceManager::`vftable'{for `Windows::Internal::Shell::Experience::ICortanaExperienceManager'};
  *((_QWORD *)this + 1) = &UndockedSearchAppExperienceManager::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,IWeakReferenceSource,IInitializeTrustedComponentForegroundControl,IDeferralMessage>'};
  *((_QWORD *)this + 2) = &UndockedSearchAppExperienceManager::`vftable'{for `IInitializeTrustedComponentForegroundControl'};
  *((_QWORD *)this + 3) = &UndockedSearchAppExperienceManager::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,IDeferralMessage>'};
  if ( *((_DWORD *)this + 72) )
  {
    v2 = *((_QWORD *)this + 9);
    if ( v2 )
    {
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 32LL))(v2);
      *((_DWORD *)this + 72) = 0;
    }
  }
  UndockedSearchAppExperienceManager::UnregisterViewCoordinatorEvents((RTL_SRWLOCK *)this);
  UndockedSearchAppExperienceManager::UnregisterViewEventDispatcherHandler(this);
  if ( wil::details::FeatureImpl<__WilFeatureTraits_Feature_44533041>::__private_IsEnabled((__int64)&`wil::Feature<__WilFeatureTraits_Feature_44533041>::GetImpl'::`2'::impl) )
    UndockedSearchAppExperienceManager::UntrackMouseMovement(this);
  winrt::handle_type<winrt::impl::hstring_traits>::close((volatile signed __int32 **)this + 120);
  v4 = (wil::details *)*((_QWORD *)this + 118);
  if ( v4 )
    wil::details::delete_wnf_subscription_state(v4, v3);
  v5 = (wil::details *)*((_QWORD *)this + 117);
  if ( v5 )
    wil::details::delete_wnf_subscription_state(v5, v3);
  __1__event_revoker_UITaskbarLayout_Shell_UI_WindowsUdk_winrt___MP8type___abi_UITaskbarLayout_Shell_UI_WindowsUdk_winrt__X_impl_5_EAAHUevent_token_5___E1___96785__BGI_AA_impl_winrt__QEAA_XZ((__int64 *)this + 115);
  v6 = (struct _TP_TIMER *)*((_QWORD *)this + 113);
  if ( v6 )
    wil::details::DestroyThreadPoolTimer<wil::details::SystemThreadPoolMethods,0>::Destroy(v6);
  wil::com_ptr_t<tip2::details::merged_data<_tip_SearchHideTest,_tip_SearchHideTest>,wil::err_returncode_policy>::~com_ptr_t<tip2::details::merged_data<_tip_SearchHideTest,_tip_SearchHideTest>,wil::err_returncode_policy>((void **)this + 111);
  v7 = (struct _TP_TIMER *)*((_QWORD *)this + 110);
  if ( v7 )
    wil::details::DestroyThreadPoolTimer<wil::details::SystemThreadPoolMethods,0>::Destroy(v7);
  wil::com_ptr_t<tip2::details::merged_data<_tip_SearchHomeRenderTest,_tip_SearchHomeRenderTest>,wil::err_returncode_policy>::~com_ptr_t<tip2::details::merged_data<_tip_SearchHomeRenderTest,_tip_SearchHomeRenderTest>,wil::err_returncode_policy>((void **)this + 109);
  winrt::handle_type<winrt::impl::hstring_traits>::close((volatile signed __int32 **)this + 107);
  winrt::handle_type<winrt::impl::hstring_traits>::close((volatile signed __int32 **)this + 106);
  wil::com_ptr_t<tip2::details::merged_data<_tip_SearchFullActivationTest,_tip_SearchFullActivationTest>,wil::err_returncode_policy>::~com_ptr_t<tip2::details::merged_data<_tip_SearchFullActivationTest,_tip_SearchFullActivationTest>,wil::err_returncode_policy>((void **)this + 104);
  v8 = (struct _TP_TIMER *)*((_QWORD *)this + 103);
  if ( v8 )
    wil::details::DestroyThreadPoolTimer<wil::details::SystemThreadPoolMethods,0>::Destroy(v8);
  v9 = (std::_Ref_count_base *)*((_QWORD *)this + 101);
  if ( v9 )
    std::_Ref_count_base::_Decref(v9);
  v10 = (struct _TP_TIMER *)*((_QWORD *)this + 99);
  if ( v10 )
    wil::details::DestroyThreadPoolTimer<wil::details::SystemThreadPoolMethods,0>::Destroy(v10);
  v11 = (struct _TP_TIMER *)*((_QWORD *)this + 97);
  if ( v11 )
    wil::details::DestroyThreadPoolTimer<wil::details::SystemThreadPoolMethods,0>::Destroy(v11);
  v12 = (struct _TP_TIMER *)*((_QWORD *)this + 96);
  if ( v12 )
    wil::details::DestroyThreadPoolTimer<wil::details::SystemThreadPoolMethods,0>::Destroy(v12);
  v13 = (struct _TP_TIMER *)*((_QWORD *)this + 95);
  if ( v13 )
    wil::details::DestroyThreadPoolTimer<wil::details::SystemThreadPoolMethods,0>::Destroy(v13);
  v14 = (struct _TP_TIMER *)*((_QWORD *)this + 94);
  if ( v14 )
    wil::details::DestroyThreadPoolTimer<wil::details::SystemThreadPoolMethods,0>::Destroy(v14);
  Microsoft::WRL::EventSource<Windows::Foundation::ITypedEventHandler<IInspectable *,Windows::Internal::ComposableShell::ITopLevelViewEventArgs *>,Microsoft::WRL::InvokeModeOptions<2>>::~EventSource<Windows::Foundation::ITypedEventHandler<IInspectable *,Windows::Internal::ComposableShell::ITopLevelViewEventArgs *>,Microsoft::WRL::InvokeModeOptions<2>>((volatile signed __int32 **)this + 89);
  Microsoft::WRL::EventSource<Windows::Foundation::ITypedEventHandler<IInspectable *,Windows::Internal::ComposableShell::ITopLevelViewEventArgs *>,Microsoft::WRL::InvokeModeOptions<2>>::~EventSource<Windows::Foundation::ITypedEventHandler<IInspectable *,Windows::Internal::ComposableShell::ITopLevelViewEventArgs *>,Microsoft::WRL::InvokeModeOptions<2>>((volatile signed __int32 **)this + 86);
  Microsoft::WRL::EventSource<Windows::Foundation::ITypedEventHandler<IInspectable *,Windows::Internal::ComposableShell::ITopLevelViewEventArgs *>,Microsoft::WRL::InvokeModeOptions<2>>::~EventSource<Windows::Foundation::ITypedEventHandler<IInspectable *,Windows::Internal::ComposableShell::ITopLevelViewEventArgs *>,Microsoft::WRL::InvokeModeOptions<2>>((volatile signed __int32 **)this + 83);
  Microsoft::WRL::EventSource<Windows::Foundation::ITypedEventHandler<IInspectable *,Windows::Internal::ComposableShell::ITopLevelViewEventArgs *>,Microsoft::WRL::InvokeModeOptions<2>>::~EventSource<Windows::Foundation::ITypedEventHandler<IInspectable *,Windows::Internal::ComposableShell::ITopLevelViewEventArgs *>,Microsoft::WRL::InvokeModeOptions<2>>((volatile signed __int32 **)this + 80);
  Microsoft::WRL::EventSource<Windows::Foundation::ITypedEventHandler<IInspectable *,Windows::Internal::ComposableShell::ITopLevelViewEventArgs *>,Microsoft::WRL::InvokeModeOptions<2>>::~EventSource<Windows::Foundation::ITypedEventHandler<IInspectable *,Windows::Internal::ComposableShell::ITopLevelViewEventArgs *>,Microsoft::WRL::InvokeModeOptions<2>>((volatile signed __int32 **)this + 77);
  Microsoft::WRL::EventSource<Windows::Foundation::ITypedEventHandler<IInspectable *,Windows::Internal::ComposableShell::ITopLevelViewEventArgs *>,Microsoft::WRL::InvokeModeOptions<2>>::~EventSource<Windows::Foundation::ITypedEventHandler<IInspectable *,Windows::Internal::ComposableShell::ITopLevelViewEventArgs *>,Microsoft::WRL::InvokeModeOptions<2>>((volatile signed __int32 **)this + 74);
  Microsoft::WRL::EventSource<Windows::Foundation::ITypedEventHandler<IInspectable *,Windows::Internal::ComposableShell::ITopLevelViewEventArgs *>,Microsoft::WRL::InvokeModeOptions<2>>::~EventSource<Windows::Foundation::ITypedEventHandler<IInspectable *,Windows::Internal::ComposableShell::ITopLevelViewEventArgs *>,Microsoft::WRL::InvokeModeOptions<2>>((volatile signed __int32 **)this + 71);
  Microsoft::WRL::EventSource<Windows::Foundation::ITypedEventHandler<IInspectable *,Windows::Internal::ComposableShell::ITopLevelViewEventArgs *>,Microsoft::WRL::InvokeModeOptions<2>>::~EventSource<Windows::Foundation::ITypedEventHandler<IInspectable *,Windows::Internal::ComposableShell::ITopLevelViewEventArgs *>,Microsoft::WRL::InvokeModeOptions<2>>((volatile signed __int32 **)this + 68);
  Microsoft::WRL::EventSource<Windows::Foundation::ITypedEventHandler<IInspectable *,Windows::Internal::ComposableShell::ITopLevelViewEventArgs *>,Microsoft::WRL::InvokeModeOptions<2>>::~EventSource<Windows::Foundation::ITypedEventHandler<IInspectable *,Windows::Internal::ComposableShell::ITopLevelViewEventArgs *>,Microsoft::WRL::InvokeModeOptions<2>>((volatile signed __int32 **)this + 65);
  Microsoft::WRL::EventSource<Windows::Foundation::ITypedEventHandler<IInspectable *,Windows::Internal::ComposableShell::ITopLevelViewEventArgs *>,Microsoft::WRL::InvokeModeOptions<2>>::~EventSource<Windows::Foundation::ITypedEventHandler<IInspectable *,Windows::Internal::ComposableShell::ITopLevelViewEventArgs *>,Microsoft::WRL::InvokeModeOptions<2>>((volatile signed __int32 **)this + 62);
  Microsoft::WRL::EventSource<Windows::Foundation::ITypedEventHandler<IInspectable *,Windows::Internal::ComposableShell::ITopLevelViewEventArgs *>,Microsoft::WRL::InvokeModeOptions<2>>::~EventSource<Windows::Foundation::ITypedEventHandler<IInspectable *,Windows::Internal::ComposableShell::ITopLevelViewEventArgs *>,Microsoft::WRL::InvokeModeOptions<2>>((volatile signed __int32 **)this + 59);
  Microsoft::WRL::EventSource<Windows::Foundation::ITypedEventHandler<IInspectable *,Windows::Internal::ComposableShell::ITopLevelViewEventArgs *>,Microsoft::WRL::InvokeModeOptions<2>>::~EventSource<Windows::Foundation::ITypedEventHandler<IInspectable *,Windows::Internal::ComposableShell::ITopLevelViewEventArgs *>,Microsoft::WRL::InvokeModeOptions<2>>((volatile signed __int32 **)this + 56);
  Microsoft::WRL::EventSource<Windows::Foundation::ITypedEventHandler<IInspectable *,Windows::Internal::ComposableShell::ITopLevelViewEventArgs *>,Microsoft::WRL::InvokeModeOptions<2>>::~EventSource<Windows::Foundation::ITypedEventHandler<IInspectable *,Windows::Internal::ComposableShell::ITopLevelViewEventArgs *>,Microsoft::WRL::InvokeModeOptions<2>>((volatile signed __int32 **)this + 53);
  Microsoft::WRL::EventSource<Windows::Foundation::ITypedEventHandler<IInspectable *,Windows::Internal::ComposableShell::ITopLevelViewEventArgs *>,Microsoft::WRL::InvokeModeOptions<2>>::~EventSource<Windows::Foundation::ITypedEventHandler<IInspectable *,Windows::Internal::ComposableShell::ITopLevelViewEventArgs *>,Microsoft::WRL::InvokeModeOptions<2>>((volatile signed __int32 **)this + 50);
  Microsoft::WRL::EventSource<Windows::Foundation::ITypedEventHandler<IInspectable *,Windows::Internal::ComposableShell::ITopLevelViewEventArgs *>,Microsoft::WRL::InvokeModeOptions<2>>::~EventSource<Windows::Foundation::ITypedEventHandler<IInspectable *,Windows::Internal::ComposableShell::ITopLevelViewEventArgs *>,Microsoft::WRL::InvokeModeOptions<2>>((volatile signed __int32 **)this + 47);
  Microsoft::WRL::EventSource<Windows::Foundation::ITypedEventHandler<IInspectable *,Windows::Internal::ComposableShell::ITopLevelViewEventArgs *>,Microsoft::WRL::InvokeModeOptions<2>>::~EventSource<Windows::Foundation::ITypedEventHandler<IInspectable *,Windows::Internal::ComposableShell::ITopLevelViewEventArgs *>,Microsoft::WRL::InvokeModeOptions<2>>((volatile signed __int32 **)this + 44);
  Microsoft::WRL::EventSource<Windows::Foundation::ITypedEventHandler<IInspectable *,Windows::Internal::ComposableShell::ITopLevelViewEventArgs *>,Microsoft::WRL::InvokeModeOptions<2>>::~EventSource<Windows::Foundation::ITypedEventHandler<IInspectable *,Windows::Internal::ComposableShell::ITopLevelViewEventArgs *>,Microsoft::WRL::InvokeModeOptions<2>>((volatile signed __int32 **)this + 41);
  winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((UndockedSearchAppExperienceManager *)((char *)this + 304));
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)this + 32);
  std::vector<Geometry::CRect>::_Tidy((__int64 *)this + 29);
  v15 = (struct _TP_TIMER *)*((_QWORD *)this + 28);
  if ( v15 )
    wil::details::DestroyThreadPoolTimer<wil::details::SystemThreadPoolMethods,0>::Destroy(v15);
  winrt::handle_type<winrt::impl::hstring_traits>::close((volatile signed __int32 **)this + 25);
  winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((UndockedSearchAppExperienceManager *)((char *)this + 168));
  winrt::handle_type<winrt::impl::hstring_traits>::close((volatile signed __int32 **)this + 19);
  v16 = (void (__fastcall ***)(_QWORD, __int64))*((_QWORD *)this + 15);
  *((_QWORD *)this + 15) = 0LL;
  if ( v16 )
    (**v16)(v16, 1LL);
  wistd::unique_ptr<CThreadRefHost,wistd::default_delete<CThreadRefHost>>::reset(
    (__int64 (__fastcall ****)(_QWORD, __int64))this + 14,
    0LL);
  wistd::unique_ptr<CThreadRefHost,wistd::default_delete<CThreadRefHost>>::reset(
    (__int64 (__fastcall ****)(_QWORD, __int64))this + 13,
    0LL);
  wistd::unique_ptr<CThreadRefHost,wistd::default_delete<CThreadRefHost>>::reset(
    (__int64 (__fastcall ****)(_QWORD, __int64))this + 12,
    0LL);
  wistd::unique_ptr<IUndockedSearchAppExperienceManagerConfig,wistd::default_delete<IUndockedSearchAppExperienceManagerConfig>>::reset(
    (__int64 (__fastcall ****)(_QWORD, __int64))this + 11,
    0LL);
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)this + 10);
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)this + 9);
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)this + 8);
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)this + 7);
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)this + 6);
  Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,IVirtualDesktopSwitchAnimator,IVirtualDesktopSwitchAnimator2>::~RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,IVirtualDesktopSwitchAnimator,IVirtualDesktopSwitchAnimator2>((__int64)this);
}
