/*
 * XREFs of ?Show@CActionCenterExperienceManager@@AEAAJXZ @ 0x180367A5C
 * Callers:
 *     ?OnEventQueued@CActionCenterExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@PEAUHSTRING__@@PEAUIPropertySet@Collections@Foundation@Windows@@@Z @ 0x18003A800 (-OnEventQueued@CActionCenterExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@PEAUHSTRING_.c)
 *     ?HotKeyInvoked@CActionCenterExperienceManager@@UEAAJW4HotKeyKind@Experience@Shell@Internal@Windows@@@Z @ 0x180365F00 (-HotKeyInvoked@CActionCenterExperienceManager@@UEAAJW4HotKeyKind@Experience@Shell@Internal@Windo.c)
 *     CActionCenterExperienceManager::ShowRequested$_ResumeCoro$1 @ 0x180367D70 (CActionCenterExperienceManager--ShowRequested$_ResumeCoro$1.c)
 *     ?StartSwipe@CActionCenterExperienceManager@@UEAAJIUtagPOINT@@@Z @ 0x180368790 (-StartSwipe@CActionCenterExperienceManager@@UEAAJIUtagPOINT@@@Z.c)
 *     ?put_IsVisible@CActionCenterExperienceManager@@UEAAJE@Z @ 0x180369CF0 (-put_IsVisible@CActionCenterExperienceManager@@UEAAJE@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18001AE8C (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?reset@?$unique_storage@U?$resource_policy@PEAU_TP_TIMER@@P6AXPEAU1@@Z$1?Destroy@?$DestroyThreadPoolTimer@USystemThreadPoolMethods@details@wil@@$0A@@details@wil@@SAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@QEAAXPEAU_TP_TIMER@@@Z @ 0x18001D8C8 (-reset@-$unique_storage@U-$resource_policy@PEAU_TP_TIMER@@P6AXPEAU1@@Z$1-Destroy@-$DestroyThread.c)
 *     ?Show@CSingleViewShellExperience@@QEAAJW4ShowOptions@1@@Z @ 0x18002050C (-Show@CSingleViewShellExperience@@QEAAJW4ShowOptions@1@@Z.c)
 *     ??1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ @ 0x18002633C (--1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ.c)
 *     ?unconditional_release_ref@?$com_ptr@UAppBackupListener@implementation@Shell@Internal@Windows@winrt@@@winrt@@AEAAXXZ @ 0x180026574 (-unconditional_release_ref@-$com_ptr@UAppBackupListener@implementation@Shell@Internal@Windows@wi.c)
 *     ??4?$com_ptr@UIWeakReference@impl@winrt@@@winrt@@QEAAAEAU01@$$QEAU01@@Z @ 0x180026FEC (--4-$com_ptr@UIWeakReference@impl@winrt@@@winrt@@QEAAAEAU01@$$QEAU01@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003E550 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180048294 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?RaisePropertyChangedEvent@CActionCenterExperienceManager@@AEAAJPEBG_N@Z @ 0x1800678F8 (-RaisePropertyChangedEvent@CActionCenterExperienceManager@@AEAAJPEBG_N@Z.c)
 *     ??B?$ComPtrRef@VWeakRef@WRL@Microsoft@@@Details@WRL@Microsoft@@QEAAPEAVWeakRef@23@XZ @ 0x180073448 (--B-$ComPtrRef@VWeakRef@WRL@Microsoft@@@Details@WRL@Microsoft@@QEAAPEAVWeakRef@23@XZ.c)
 *     ?PositionView@CActionCenterExperienceManager@@AEAAJXZ @ 0x180099D14 (-PositionView@CActionCenterExperienceManager@@AEAAJXZ.c)
 *     ??$AsWeak@VCActionCenterExperienceManager@@@WRL@Microsoft@@YAJPEAVCActionCenterExperienceManager@@PEAVWeakRef@01@@Z @ 0x18010B828 (--$AsWeak@VCActionCenterExperienceManager@@@WRL@Microsoft@@YAJPEAVCActionCenterExperienceManager.c)
 *     ?Current@ViewCoordinator@Shell@UI@WindowsUdk@winrt@@SA@XZ @ 0x1801D06A4 (-Current@ViewCoordinator@Shell@UI@WindowsUdk@winrt@@SA@XZ.c)
 *     ?SetRelativeThreadpoolTimerInMilliseconds@ThreadpoolHelpers@@YAXPEAU_TP_TIMER@@_KKK@Z @ 0x1801FFD04 (-SetRelativeThreadpoolTimerInMilliseconds@ThreadpoolHelpers@@YAXPEAU_TP_TIMER@@_KKK@Z.c)
 *     ??0implements_delegate_base@impl@winrt@@QEAA@XZ @ 0x18028AE60 (--0implements_delegate_base@impl@winrt@@QEAA@XZ.c)
 *     ??2@YAPEAX_K@Z @ 0x1802C9924 (--2@YAPEAX_K@Z.c)
 *     _lambda_56f82e2d72bc142b92699b1566ad23a5_::_lambda_56f82e2d72bc142b92699b1566ad23a5_ @ 0x180301B20 (_lambda_56f82e2d72bc142b92699b1566ad23a5_--_lambda_56f82e2d72bc142b92699b1566ad23a5_.c)
 *     ??1?$event_revoker@UIViewCoordinator@Shell@UI@WindowsUdk@winrt@@$MP8type@?$abi@UIViewCoordinator@Shell@UI@WindowsUdk@winrt@@X@impl@5@EAAHUevent_token@5@@_E1??_96785@$BHA@AA@impl@winrt@@QEAA@XZ @ 0x180363E34 (--1-$event_revoker@UIViewCoordinator@Shell@UI@WindowsUdk@winrt@@$MP8type@-$abi@UIViewCoordinator.c)
 *     ??1?$event_revoker@UIViewCoordinator@Shell@UI@WindowsUdk@winrt@@@winrt@@QEAA@XZ @ 0x180363E90 (--1-$event_revoker@UIViewCoordinator@Shell@UI@WindowsUdk@winrt@@@winrt@@QEAA@XZ.c)
 *     _lambda_447b2046ef5222f08cb9a5e113edf53b_::operator_void_(__cdecl_)(_TP_CALLBACK_INSTANCE___void____TP_TIMER__) @ 0x1803641C8 (_lambda_447b2046ef5222f08cb9a5e113edf53b_--operator_void_(__cdecl_)(_TP_CALLBACK_INSTANCE___void.c)
 *     ?ActionCenterLaunchSkippedDueToDeviceLockdown@NotificationCenterTelemetry@NotificationCenterUITelemetry@@SAXXZ @ 0x180364638 (-ActionCenterLaunchSkippedDueToDeviceLockdown@NotificationCenterTelemetry@NotificationCenterUITe.c)
 *     ?ActionCenterLaunchSkippedDueToPolicy@NotificationCenterTelemetry@NotificationCenterUITelemetry@@SAXXZ @ 0x18036468C (-ActionCenterLaunchSkippedDueToPolicy@NotificationCenterTelemetry@NotificationCenterUITelemetry@.c)
 *     ?ActionCenterLaunchSkippedDueToShellNotReady@NotificationCenterTelemetry@NotificationCenterUITelemetry@@SAXXZ @ 0x1803646E0 (-ActionCenterLaunchSkippedDueToShellNotReady@NotificationCenterTelemetry@NotificationCenterUITel.c)
 *     ?HideViewRequested@?$consume_WindowsUdk_UI_Shell_IViewCoordinator@UIViewCoordinator@Shell@UI@WindowsUdk@winrt@@@impl@winrt@@QEBA@Uauto_revoke_t@3@AEBU?$TypedEventHandler@UViewCoordinator@Shell@UI@WindowsUdk@winrt@@UHideViewRequestedEventArgs@2345@@Foundation@Windows@3@@Z @ 0x180365E98 (-HideViewRequested@-$consume_WindowsUdk_UI_Shell_IViewCoordinator@UIViewCoordinator_ea_180365E98.c)
 *     ?IsNotificationCenterDisabledByPolicy@CActionCenterExperienceManager@@AEAA_NXZ @ 0x180366244 (-IsNotificationCenterDisabledByPolicy@CActionCenterExperienceManager@@AEAA_NXZ.c)
 *     ?revoke@?$event_revoker@UIViewCoordinator@Shell@UI@WindowsUdk@winrt@@@winrt@@QEAAXXZ @ 0x180369E0C (-revoke@-$event_revoker@UIViewCoordinator@Shell@UI@WindowsUdk@winrt@@@winrt@@QEAAXXZ.c)
 */

// Hidden C++ exception states: #wind=4 #try_helpers=1
__int64 __fastcall CActionCenterExperienceManager::Show(CActionCenterExperienceManager *this)
{
  __int64 v2; // rcx
  void (__fastcall *v4)(__int64, struct IUnknown *); // rax
  struct _TP_TIMER *ThreadpoolTimer; // rax
  __int64 *v6; // rax
  int v7; // eax
  unsigned int v8; // esi
  __int64 *v9; // rsi
  char *v10; // rax
  __int64 *v11; // rdx
  __int64 *v12; // rcx
  __int64 v13; // r8
  __int64 *v14; // rax
  __int64 v15; // rdx
  __int64 v16; // rcx
  int v17; // eax
  int v18; // eax
  unsigned int v19; // esi
  int v20; // eax
  unsigned int v21; // edi
  __int64 v22; // [rsp+20h] [rbp-58h] BYREF
  __int64 v23[2]; // [rsp+30h] [rbp-48h] BYREF
  __int64 v24; // [rsp+40h] [rbp-38h] BYREF
  __int64 (__fastcall *v25)(__int64); // [rsp+48h] [rbp-30h]
  __int64 v26; // [rsp+50h] [rbp-28h]
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+0h]
  __int64 v28; // [rsp+88h] [rbp+10h] BYREF
  __int64 *v29; // [rsp+90h] [rbp+18h] BYREF
  __int64 *v30; // [rsp+98h] [rbp+20h] BYREF

  if ( *((_DWORD *)this + 42) == 2 )
    return 0LL;
  if ( CActionCenterExperienceManager::IsNotificationCenterDisabledByPolicy(this) )
  {
    NotificationCenterUITelemetry::NotificationCenterTelemetry::ActionCenterLaunchSkippedDueToPolicy(v2);
    return 2147943660LL;
  }
  if ( *((_BYTE *)this + 688) )
  {
    NotificationCenterUITelemetry::NotificationCenterTelemetry::ActionCenterLaunchSkippedDueToDeviceLockdown(v2);
    return 2147943660LL;
  }
  if ( !*((_BYTE *)this + 420) )
  {
    NotificationCenterUITelemetry::NotificationCenterTelemetry::ActionCenterLaunchSkippedDueToShellNotReady(v2);
    return 2147549183LL;
  }
  if ( !*((_QWORD *)this + 77) )
  {
    v4 = lambda_447b2046ef5222f08cb9a5e113edf53b_::operator_void____cdecl____TP_CALLBACK_INSTANCE___void____TP_TIMER___();
    ThreadpoolTimer = CreateThreadpoolTimer((PTP_TIMER_CALLBACK)v4, this, 0LL);
    wil::details::unique_storage<wil::details::resource_policy<_TP_TIMER *,void (*)(_TP_TIMER *),&public: static void wil::details::DestroyThreadPoolTimer<wil::details::SystemThreadPoolMethods,0>::Destroy(_TP_TIMER *),wistd::integral_constant<unsigned __int64,0>,_TP_TIMER *,_TP_TIMER *,0,std::nullptr_t>>::reset(
      (struct _TP_TIMER **)this + 77,
      ThreadpoolTimer);
    ThreadpoolHelpers::SetRelativeThreadpoolTimerInMilliseconds(
      *((ThreadpoolHelpers **)this + 77),
      (struct _TP_TIMER *)0x2710,
      0);
  }
  winrt::WindowsUdk::UI::Shell::ViewCoordinator::Current(&v29);
  v28 = 0LL;
  v30 = &v28;
  v6 = Microsoft::WRL::Details::ComPtrRef<Microsoft::WRL::WeakRef>::operator Microsoft::WRL::WeakRef *(&v30);
  v7 = Microsoft::WRL::AsWeak<CActionCenterExperienceManager>(this, v6);
  v8 = v7;
  if ( v7 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x3A8,
      (int)"pcshell\\twinui\\experiencemanagers\\lib\\actioncenterexperiencemanager.cpp",
      (const char *)(unsigned int)v7);
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v28);
    winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)&v29);
    return v8;
  }
  v9 = lambda_56f82e2d72bc142b92699b1566ad23a5_::_lambda_56f82e2d72bc142b92699b1566ad23a5_(&v22, (__int64)this, &v28);
  v30 = v9;
  v10 = (char *)operator new(0x20uLL);
  winrt::impl::implements_delegate_base::implements_delegate_base((winrt::impl::implements_delegate_base *)(v10 + 8));
  v11[2] = *v9;
  v12 = v9 + 1;
  v11[3] = 0LL;
  if ( v11 + 3 != v9 + 1 )
  {
    v11[3] = *v12;
    *v12 = 0LL;
  }
  _InterlockedIncrement(&`winrt::get_module_lock'::`2'::s_lock);
  *v11 = (__int64)off_180733A68;
  v30 = v11;
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(v12);
  v14 = winrt::impl::consume_WindowsUdk_UI_Shell_IViewCoordinator<winrt::WindowsUdk::UI::Shell::IViewCoordinator>::HideViewRequested(
          &v29,
          v23,
          v13,
          (__int64 *)&v30);
  v15 = v14[1];
  v16 = *v14;
  *v14 = 0LL;
  v24 = v16;
  v25 =  ISwitchItemController::`vcall'{112,{flat}};
  v26 = v15;
  if ( (__int64 *)((char *)this + 696) != &v24 )
  {
    winrt::event_revoker<winrt::WindowsUdk::UI::Shell::IViewCoordinator>::revoke((char *)this + 696);
    winrt::com_ptr<winrt::impl::IWeakReference>::operator=((__int64 *)this + 87, &v24);
    *((_QWORD *)this + 88) = v25;
    *((_QWORD *)this + 89) = v26;
  }
  winrt::event_revoker<winrt::WindowsUdk::UI::Shell::IViewCoordinator>::~event_revoker<winrt::WindowsUdk::UI::Shell::IViewCoordinator>(&v24);
  __1__event_revoker_UIViewCoordinator_Shell_UI_WindowsUdk_winrt___MP8type___abi_UIViewCoordinator_Shell_UI_WindowsUdk_winrt__X_impl_5_EAAHUevent_token_5___E1___96785__BHA_AA_impl_winrt__QEAA_XZ(v23);
  winrt::com_ptr<winrt::Windows::Internal::Shell::implementation::AppBackupListener>::unconditional_release_ref((__int64 *)&v30);
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v28);
  winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)&v29);
  if ( *((_QWORD *)this + 19) )
  {
    v17 = CActionCenterExperienceManager::RaisePropertyChangedEvent(this, L"SuppressAnimations", *((_BYTE *)this + 368));
    if ( v17 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x3C4,
        (int)"pcshell\\twinui\\experiencemanagers\\lib\\actioncenterexperiencemanager.cpp",
        (const char *)(unsigned int)v17);
    v18 = CActionCenterExperienceManager::PositionView(this);
    v19 = v18;
    if ( v18 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x3C5,
        (int)"pcshell\\twinui\\experiencemanagers\\lib\\actioncenterexperiencemanager.cpp",
        (const char *)(unsigned int)v18);
      return v19;
    }
  }
  v20 = CSingleViewShellExperience::Show((__int64)this + 128, 0LL);
  v21 = v20;
  if ( v20 >= 0 )
    return 0LL;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x3C8,
    (int)"pcshell\\twinui\\experiencemanagers\\lib\\actioncenterexperiencemanager.cpp",
    (const char *)(unsigned int)v20);
  return v21;
}
