/*
 * XREFs of ??1CToastCenterExperienceManager@@UEAA@XZ @ 0x180373CE8
 * Callers:
 *     ??_ECToastCenterExperienceManager@@UEAAPEAXI@Z @ 0x180374150 (--_ECToastCenterExperienceManager@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180014E98 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?Destroy@?$DestroyThreadPoolTimer@USystemThreadPoolMethods@details@wil@@$0A@@details@wil@@SAXPEAU_TP_TIMER@@@Z @ 0x180015980 (-Destroy@-$DestroyThreadPoolTimer@USystemThreadPoolMethods@details@wil@@$0A@@details@wil@@SAXPEA.c)
 *     ??1CSingleViewShellExperience@@QEAA@XZ @ 0x18001D758 (--1CSingleViewShellExperience@@QEAA@XZ.c)
 *     ??1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ @ 0x18005D244 (--1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ.c)
 *     ??1?$event_revoker@UIDisplayMonitorInfoCollection@Shell@UI@WindowsUdk@winrt@@$MP8type@?$abi@UIDisplayMonitorInfoCollection@Shell@UI@WindowsUdk@winrt@@X@impl@5@EAAHUevent_token@5@@_E1??_96785@$BGA@AA@impl@winrt@@QEAA@XZ @ 0x1800A67D8 (--1-$event_revoker@UIDisplayMonitorInfoCollection@Shell@UI@WindowsUdk@winrt@@$MP8type@-$abi@UIDi.c)
 *     ??1SmartCookie@@QEAA@XZ @ 0x1800E1A08 (--1SmartCookie@@QEAA@XZ.c)
 *     ??1?$EventSource@U?$ITypedEventHandler@PEAUIInspectable@@PEAUITopLevelViewEventArgs@ComposableShell@Internal@Windows@@@Foundation@Windows@@U?$InvokeModeOptions@$01@WRL@Microsoft@@@WRL@Microsoft@@QEAA@XZ @ 0x1800FEB90 (--1-$EventSource@U-$ITypedEventHandler@PEAUIInspectable@@PEAUITopLevelViewEventArgs@ComposableSh.c)
 *     ??1?$event_revoker@UIShellViewCoordinator@Shell@UI@WindowsUdk@winrt@@$MP8type@?$abi@UIShellViewCoordinator@Shell@UI@WindowsUdk@winrt@@X@impl@5@EAAHUevent_token@5@@_E1??_96785@$BHA@AA@impl@winrt@@QEAA@XZ @ 0x1802057E8 (--1-$event_revoker@UIShellViewCoordinator@Shell@UI@WindowsUdk@winrt@@$MP8type@-$abi_ea_1802057E8.c)
 */

void __fastcall CToastCenterExperienceManager::~CToastCenterExperienceManager(CToastCenterExperienceManager *this)
{
  struct _TP_TIMER *v2; // rcx

  *(_QWORD *)this = &CToastCenterExperienceManager::`vftable'{for `Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<3>,Windows::Internal::Shell::Experience::IBaseExperienceManager,Windows::Internal::Shell::Experience::IToastCenterExperienceManager,IImmersiveSessionIdleNotification,IImmersiveWindowMessageNotification,IImmersiveMonitorNotification,Windows::Foundation::IClosable,Windows::Internal::Shell::Holographic::IHolographicExperienceExtension,IInputHostLayoutChanges>'};
  *((_QWORD *)this + 1) = &CToastCenterExperienceManager::`vftable'{for `IWeakReferenceSource'};
  *((_QWORD *)this + 2) = &CToastCenterExperienceManager::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,Windows::Internal::Shell::Experience::IToastCenterExperienceManager,IImmersiveSessionIdleNotification,IImmersiveWindowMessageNotification,IImmersiveMonitorNotification,Windows::Foundation::IClosable,Windows::Internal::Shell::Holographic::IHolographicExperienceExtension,IInputHostLayoutChanges>'};
  *((_QWORD *)this + 3) = &CToastCenterExperienceManager::`vftable'{for `IImmersiveSessionIdleNotification'};
  *((_QWORD *)this + 4) = &CToastCenterExperienceManager::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,IImmersiveWindowMessageNotification,IImmersiveMonitorNotification,Windows::Foundation::IClosable,Windows::Internal::Shell::Holographic::IHolographicExperienceExtension,IInputHostLayoutChanges>'};
  *((_QWORD *)this + 5) = &CToastCenterExperienceManager::`vftable'{for `IImmersiveMonitorNotification'};
  *((_QWORD *)this + 6) = &CToastCenterExperienceManager::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,Windows::Foundation::IClosable,Windows::Internal::Shell::Holographic::IHolographicExperienceExtension,IInputHostLayoutChanges>'};
  *((_QWORD *)this + 7) = &CToastCenterExperienceManager::`vftable'{for `Windows::Internal::Shell::Holographic::IHolographicExperienceExtension'};
  *((_QWORD *)this + 8) = &CToastCenterExperienceManager::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,IInputHostLayoutChanges>'};
  *((_QWORD *)this + 11) = &CToastCenterExperienceManager::`vftable'{for `SingleViewShellExperienceEventHandler'};
  Microsoft::WRL::EventSource<Windows::Foundation::ITypedEventHandler<IInspectable *,Windows::Internal::ComposableShell::ITopLevelViewEventArgs *>,Microsoft::WRL::InvokeModeOptions<2>>::~EventSource<Windows::Foundation::ITypedEventHandler<IInspectable *,Windows::Internal::ComposableShell::ITopLevelViewEventArgs *>,Microsoft::WRL::InvokeModeOptions<2>>((volatile signed __int32 **)this + 99);
  Microsoft::WRL::EventSource<Windows::Foundation::ITypedEventHandler<IInspectable *,Windows::Internal::ComposableShell::ITopLevelViewEventArgs *>,Microsoft::WRL::InvokeModeOptions<2>>::~EventSource<Windows::Foundation::ITypedEventHandler<IInspectable *,Windows::Internal::ComposableShell::ITopLevelViewEventArgs *>,Microsoft::WRL::InvokeModeOptions<2>>((volatile signed __int32 **)this + 96);
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)this + 94);
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)this + 92);
  __1__event_revoker_UIShellViewCoordinator_Shell_UI_WindowsUdk_winrt___MP8type___abi_UIShellViewCoordinator_Shell_UI_WindowsUdk_winrt__X_impl_5_EAAHUevent_token_5___E1___96785__BHA_AA_impl_winrt__QEAA_XZ((__int64 *)this + 90);
  winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((CToastCenterExperienceManager *)((char *)this + 712));
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)this + 83);
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)this + 82);
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)this + 81);
  v2 = (struct _TP_TIMER *)*((_QWORD *)this + 80);
  if ( v2 )
    wil::details::DestroyThreadPoolTimer<wil::details::SystemThreadPoolMethods,0>::Destroy(v2);
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)this + 79);
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)this + 78);
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)this + 77);
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)this + 76);
  SmartCookie::~SmartCookie((CToastCenterExperienceManager *)((char *)this + 432));
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)this + 53);
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)this + 51);
  WindowsDeleteString(*((HSTRING *)this + 47));
  *((_QWORD *)this + 47) = 0LL;
  __1__event_revoker_UIDisplayMonitorInfoCollection_Shell_UI_WindowsUdk_winrt___MP8type___abi_UIDisplayMonitorInfoCollection_Shell_UI_WindowsUdk_winrt__X_impl_5_EAAHUevent_token_5___E1___96785__BGA_AA_impl_winrt__QEAA_XZ((__int64 *)this + 41);
  winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((CToastCenterExperienceManager *)((char *)this + 320));
  CSingleViewShellExperience::~CSingleViewShellExperience((CToastCenterExperienceManager *)((char *)this + 104));
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)this + 12);
  Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,Windows::Internal::Shell::Experience::IBaseExperienceManager,Windows::Internal::Shell::Experience::IToastCenterExperienceManager,IImmersiveSessionIdleNotification,IImmersiveWindowMessageNotification,IImmersiveMonitorNotification,Windows::Foundation::IClosable,Windows::Internal::Shell::Holographic::IHolographicExperienceExtension,IInputHostLayoutChanges>::~RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,Windows::Internal::Shell::Experience::IBaseExperienceManager,Windows::Internal::Shell::Experience::IToastCenterExperienceManager,IImmersiveSessionIdleNotification,IImmersiveWindowMessageNotification,IImmersiveMonitorNotification,Windows::Foundation::IClosable,Windows::Internal::Shell::Holographic::IHolographicExperienceExtension,IInputHostLayoutChanges>((__int64)this);
}
