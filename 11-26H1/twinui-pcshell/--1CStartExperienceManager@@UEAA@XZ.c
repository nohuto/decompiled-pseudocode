/*
 * XREFs of ??1CStartExperienceManager@@UEAA@XZ @ 0x1803876F0
 * Callers:
 *     ??_GCStartExperienceManager@@UEAAPEAXI@Z @ 0x180387B60 (--_GCStartExperienceManager@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18001AE8C (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ??1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ @ 0x18002633C (--1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ.c)
 *     ??1CSingleViewShellExperience@@QEAA@XZ @ 0x1800C0C28 (--1CSingleViewShellExperience@@QEAA@XZ.c)
 *     ??1?$EventSource@U?$ITypedEventHandler@PEAUIInspectable@@PEAUITopLevelViewEventArgs@ComposableShell@Internal@Windows@@@Foundation@Windows@@U?$InvokeModeOptions@$01@WRL@Microsoft@@@WRL@Microsoft@@QEAA@XZ @ 0x1800F0C00 (--1-$EventSource@U-$ITypedEventHandler@PEAUIInspectable@@PEAUITopLevelViewEventArgs@ComposableSh.c)
 *     ??1?$event_revoker@UIDisplayMonitorInfoCollection@Shell@UI@WindowsUdk@winrt@@$MP8type@?$abi@UIDisplayMonitorInfoCollection@Shell@UI@WindowsUdk@winrt@@X@impl@5@EAAHUevent_token@5@@_E1??_96785@$BGA@AA@impl@winrt@@QEAA@XZ @ 0x1801D9B54 (--1-$event_revoker@UIDisplayMonitorInfoCollection@Shell@UI@WindowsUdk@winrt@@$MP8type@-$abi@UIDi.c)
 *     ??1?$event_revoker@UIDisplayMonitorInfoCollection@Shell@UI@WindowsUdk@winrt@@$MP8type@?$abi@UIDisplayMonitorInfoCollection@Shell@UI@WindowsUdk@winrt@@X@impl@5@EAAHUevent_token@5@@_E1??_96785@$BEA@AA@impl@winrt@@QEAA@XZ @ 0x180207900 (--1-$event_revoker@UIDisplayMonitorInfoCollection@Shell@UI@WindowsUdk@winrt@@$MP8ty_ea_180207900.c)
 *     ??1?$event_revoker@UIDisplayMonitorInfoCollection@Shell@UI@WindowsUdk@winrt@@$MP8type@?$abi@UIDisplayMonitorInfoCollection@Shell@UI@WindowsUdk@winrt@@X@impl@5@EAAHUevent_token@5@@_E1??_96785@$BFA@AA@impl@winrt@@QEAA@XZ @ 0x18020E3F0 (--1-$event_revoker@UIDisplayMonitorInfoCollection@Shell@UI@WindowsUdk@winrt@@$MP8ty_ea_18020E3F0.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIHostExperienceManager@Experience@Shell@Internal@Windows@@UIExperienceManagerPriorityManipulator@5678@UIImmersiveWindowMessageNotification@@UIClosable@Foundation@8@@Details@WRL@Microsoft@@UEAAKXZ @ 0x1802AC840 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIHostExperienceMa.c)
 *     ??1CExperienceManagerAnimationHelper@@QEAA@XZ @ 0x1802C3D14 (--1CExperienceManagerAnimationHelper@@QEAA@XZ.c)
 *     ??1?$event_revoker@UIDockedStartController2@Implementation@StartScreen@UI@WindowsUdk@winrt@@$MP8type@?$abi@UIDockedStartController2@Implementation@StartScreen@UI@WindowsUdk@winrt@@X@impl@6@EAAHUevent_token@6@@_E1??_97896@$BGI@AA@impl@winrt@@QEAA@XZ @ 0x18038760C (--1-$event_revoker@UIDockedStartController2@Implementation@StartScreen@UI@WindowsUdk@winrt@@$MP8.c)
 *     ??1?$event_revoker@UIDockedStartController2@Implementation@StartScreen@UI@WindowsUdk@winrt@@$MP8type@?$abi@UIDockedStartController2@Implementation@StartScreen@UI@WindowsUdk@winrt@@X@impl@6@EAAHUevent_token@6@@_E1??_97896@$BIA@AA@impl@winrt@@QEAA@XZ @ 0x180387668 (--1-$event_revoker@UIDockedStartController2@Implementation@StartScreen@UI@WindowsUd_ea_180387668.c)
 */

void __fastcall CStartExperienceManager::~CStartExperienceManager(CStartExperienceManager *this)
{
  __int64 v2; // rcx

  winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((CStartExperienceManager *)((char *)this + 856));
  __1__event_revoker_UIDisplayMonitorInfoCollection_Shell_UI_WindowsUdk_winrt___MP8type___abi_UIDisplayMonitorInfoCollection_Shell_UI_WindowsUdk_winrt__X_impl_5_EAAHUevent_token_5___E1___96785__BFA_AA_impl_winrt__QEAA_XZ((__int64 *)this + 105);
  __1__event_revoker_UIDisplayMonitorInfoCollection_Shell_UI_WindowsUdk_winrt___MP8type___abi_UIDisplayMonitorInfoCollection_Shell_UI_WindowsUdk_winrt__X_impl_5_EAAHUevent_token_5___E1___96785__BEA_AA_impl_winrt__QEAA_XZ((__int64 *)this + 103);
  __1__event_revoker_UIDisplayMonitorInfoCollection_Shell_UI_WindowsUdk_winrt___MP8type___abi_UIDisplayMonitorInfoCollection_Shell_UI_WindowsUdk_winrt__X_impl_5_EAAHUevent_token_5___E1___96785__BGA_AA_impl_winrt__QEAA_XZ((__int64 *)this + 101);
  winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((CStartExperienceManager *)((char *)this + 800));
  winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((CStartExperienceManager *)((char *)this + 792));
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)this + 90);
  CExperienceManagerAnimationHelper::~CExperienceManagerAnimationHelper((CStartExperienceManager *)((char *)this + 656));
  CExperienceManagerAnimationHelper::~CExperienceManagerAnimationHelper((CStartExperienceManager *)((char *)this + 624));
  __1__event_revoker_UIDockedStartController2_Implementation_StartScreen_UI_WindowsUdk_winrt___MP8type___abi_UIDockedStartController2_Implementation_StartScreen_UI_WindowsUdk_winrt__X_impl_6_EAAHUevent_token_6___E1___97896__BIA_AA_impl_winrt__QEAA_XZ((__int64 *)this + 76);
  __1__event_revoker_UIDockedStartController2_Implementation_StartScreen_UI_WindowsUdk_winrt___MP8type___abi_UIDockedStartController2_Implementation_StartScreen_UI_WindowsUdk_winrt__X_impl_6_EAAHUevent_token_6___E1___97896__BGI_AA_impl_winrt__QEAA_XZ((__int64 *)this + 74);
  winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((CStartExperienceManager *)((char *)this + 584));
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)this + 72);
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)this + 71);
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)this + 70);
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)this + 66);
  CSingleViewShellExperience::~CSingleViewShellExperience((CStartExperienceManager *)((char *)this + 320));
  v2 = *((_QWORD *)this + 39);
  if ( v2 )
  {
    *((_QWORD *)this + 39) = 0LL;
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,Windows::Internal::Shell::Experience::IHostExperienceManager,Windows::Internal::Shell::Experience::IExperienceManagerPriorityManipulator,IImmersiveWindowMessageNotification,Windows::Foundation::IClosable>::Release(v2);
  }
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)this + 38);
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)this + 37);
  Microsoft::WRL::EventSource<Windows::Foundation::ITypedEventHandler<IInspectable *,Windows::Internal::ComposableShell::ITopLevelViewEventArgs *>,Microsoft::WRL::InvokeModeOptions<2>>::~EventSource<Windows::Foundation::ITypedEventHandler<IInspectable *,Windows::Internal::ComposableShell::ITopLevelViewEventArgs *>,Microsoft::WRL::InvokeModeOptions<2>>((volatile signed __int32 **)this + 34);
  Microsoft::WRL::EventSource<Windows::Foundation::ITypedEventHandler<IInspectable *,Windows::Internal::ComposableShell::ITopLevelViewEventArgs *>,Microsoft::WRL::InvokeModeOptions<2>>::~EventSource<Windows::Foundation::ITypedEventHandler<IInspectable *,Windows::Internal::ComposableShell::ITopLevelViewEventArgs *>,Microsoft::WRL::InvokeModeOptions<2>>((volatile signed __int32 **)this + 31);
  Microsoft::WRL::EventSource<Windows::Foundation::ITypedEventHandler<IInspectable *,Windows::Internal::ComposableShell::ITopLevelViewEventArgs *>,Microsoft::WRL::InvokeModeOptions<2>>::~EventSource<Windows::Foundation::ITypedEventHandler<IInspectable *,Windows::Internal::ComposableShell::ITopLevelViewEventArgs *>,Microsoft::WRL::InvokeModeOptions<2>>((volatile signed __int32 **)this + 28);
  Microsoft::WRL::EventSource<Windows::Foundation::ITypedEventHandler<IInspectable *,Windows::Internal::ComposableShell::ITopLevelViewEventArgs *>,Microsoft::WRL::InvokeModeOptions<2>>::~EventSource<Windows::Foundation::ITypedEventHandler<IInspectable *,Windows::Internal::ComposableShell::ITopLevelViewEventArgs *>,Microsoft::WRL::InvokeModeOptions<2>>((volatile signed __int32 **)this + 25);
  Microsoft::WRL::EventSource<Windows::Foundation::ITypedEventHandler<IInspectable *,Windows::Internal::ComposableShell::ITopLevelViewEventArgs *>,Microsoft::WRL::InvokeModeOptions<2>>::~EventSource<Windows::Foundation::ITypedEventHandler<IInspectable *,Windows::Internal::ComposableShell::ITopLevelViewEventArgs *>,Microsoft::WRL::InvokeModeOptions<2>>((volatile signed __int32 **)this + 22);
  Microsoft::WRL::EventSource<Windows::Foundation::ITypedEventHandler<IInspectable *,Windows::Internal::ComposableShell::ITopLevelViewEventArgs *>,Microsoft::WRL::InvokeModeOptions<2>>::~EventSource<Windows::Foundation::ITypedEventHandler<IInspectable *,Windows::Internal::ComposableShell::ITopLevelViewEventArgs *>,Microsoft::WRL::InvokeModeOptions<2>>((volatile signed __int32 **)this + 19);
  Microsoft::WRL::EventSource<Windows::Foundation::ITypedEventHandler<IInspectable *,Windows::Internal::ComposableShell::ITopLevelViewEventArgs *>,Microsoft::WRL::InvokeModeOptions<2>>::~EventSource<Windows::Foundation::ITypedEventHandler<IInspectable *,Windows::Internal::ComposableShell::ITopLevelViewEventArgs *>,Microsoft::WRL::InvokeModeOptions<2>>((volatile signed __int32 **)this + 16);
  Microsoft::WRL::EventSource<Windows::Foundation::ITypedEventHandler<IInspectable *,Windows::Internal::ComposableShell::ITopLevelViewEventArgs *>,Microsoft::WRL::InvokeModeOptions<2>>::~EventSource<Windows::Foundation::ITypedEventHandler<IInspectable *,Windows::Internal::ComposableShell::ITopLevelViewEventArgs *>,Microsoft::WRL::InvokeModeOptions<2>>((volatile signed __int32 **)this + 13);
  Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,CWRLObjectWithSite,Windows::Internal::Shell::Experience::IStartExperienceManager,IImmersiveWindowMessageNotification,Windows::Foundation::IClosable,IDWMStoryboardListener,IInputHostLayoutChanges>::~RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,CWRLObjectWithSite,Windows::Internal::Shell::Experience::IStartExperienceManager,IImmersiveWindowMessageNotification,Windows::Foundation::IClosable,IDWMStoryboardListener,IInputHostLayoutChanges>((__int64)this);
}
