/*
 * XREFs of ?OnShellReady@CToastCenterExperienceManager@@AEAAJXZ @ 0x1801C2838
 * Callers:
 *     ?OnTargetedMessage@CToastCenterExperienceManager@@AEAAJW4TargetedMessageKind@1@G@Z @ 0x1801F58E8 (-OnTargetedMessage@CToastCenterExperienceManager@@AEAAJW4TargetedMessageKind@1@G@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180014E98 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180034A0C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?unconditional_release_ref@?$com_ptr@UAppBackupListener@implementation@Shell@Internal@Windows@winrt@@@winrt@@AEAAXXZ @ 0x180066570 (-unconditional_release_ref@-$com_ptr@UAppBackupListener@implementation@Shell@Internal@Windows@wi.c)
 *     ?CreateInstance@?$consume_WindowsUdk_UI_Shell_IShellViewCoordinatorFactory@UIShellViewCoordinatorFactory@Shell@UI@WindowsUdk@winrt@@@impl@winrt@@QEBA@AEBW4ShellView@Shell@UI@WindowsUdk@3@@Z @ 0x1800A6674 (-CreateInstance@-$consume_WindowsUdk_UI_Shell_IShellViewCoordinatorFactory@UIShellViewCoordinato.c)
 *     ??4?$event_revoker@UIShellViewCoordinator@Shell@UI@WindowsUdk@winrt@@$MP8type@?$abi@UIShellViewCoordinator@Shell@UI@WindowsUdk@winrt@@X@impl@5@EAAHUevent_token@5@@_E1??_96785@$BHA@AA@impl@winrt@@QEAAAEAU012@$$QEAU012@@Z @ 0x1800A66F8 (--4-$event_revoker@UIShellViewCoordinator@Shell@UI@WindowsUdk@winrt@@$MP8type@-$abi@UIShellViewC.c)
 *     ?get@?$weak_ref@UIShellViewCoordinator@Shell@UI@WindowsUdk@winrt@@@winrt@@QEBA@XZ @ 0x1800A6D40 (-get@-$weak_ref@UIShellViewCoordinator@Shell@UI@WindowsUdk@winrt@@@winrt@@QEBA@XZ.c)
 *     ??4ShellViewCoordinator@Shell@UI@WindowsUdk@winrt@@QEAAAEAU01234@$$QEAU01234@@Z @ 0x1800AA2B4 (--4ShellViewCoordinator@Shell@UI@WindowsUdk@winrt@@QEAAAEAU01234@$$QEAU01234@@Z.c)
 *     ?SubscribeToCriticalNotificationWnf@CToastCenterExperienceManager@@AEAAJXZ @ 0x1801C2D84 (-SubscribeToCriticalNotificationWnf@CToastCenterExperienceManager@@AEAAJXZ.c)
 *     ?SubscribeToNewNotificationWnf@CToastCenterExperienceManager@@AEAAJXZ @ 0x1801C2DFC (-SubscribeToNewNotificationWnf@CToastCenterExperienceManager@@AEAAJXZ.c)
 *     ?RegisterForDisplayMonitorInfoChangedAsync@CToastCenterExperienceManager@@AEAA?AUfire_and_forget@winrt@@XZ @ 0x1801C2E74 (-RegisterForDisplayMonitorInfoChangedAsync@CToastCenterExperienceManager@@AEAA-AUfire_and_forget.c)
 *     ??$call@AEAV_lambda_c784a7e41fe1a5698e55a9117bd5b7f8_@@@?$factory_cache_entry@UShellViewCoordinator@Shell@UI@WindowsUdk@winrt@@UIShellViewCoordinatorFactory@2345@@impl@winrt@@QEAA?A_PAEAV_lambda_c784a7e41fe1a5698e55a9117bd5b7f8_@@@Z @ 0x180211108 (--$call@AEAV_lambda_c784a7e41fe1a5698e55a9117bd5b7f8_@@@-$factory_cache_entry@UShellViewCoordina.c)
 *     ??0?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@U?$ITypedEventHandler@PEAUIBaseExperienceManager@Experience@Shell@Internal@Windows@@PEAUIVisibilityChangedEventArgs@2345@@Foundation@Windows@@@WRL@Microsoft@@QEAA@XZ @ 0x180217BCC (--0-$RuntimeClass@U-$RuntimeClassFlags@$01@WRL@Microsoft@@U-$ITypedEventHandler@PEAUIBaseExperie.c)
 *     winrt::Windows::Foundation::TypedEventHandler_winrt::WindowsUdk::UI::Shell::ShellViewCoordinator_winrt::Windows::Foundation::IInspectable_::TypedEventHandler_winrt::WindowsUdk::UI::Shell::ShellViewCoordinator_winrt::Windows::Foundation::IInspectable___lambda_3c3eef79882b33f453ce48f4c33680cf___ @ 0x180291C90 (winrt--Windows--Foundation--TypedEventHandler_winrt--WindowsUdk--UI--Shell--ShellVi_ea_180291C90.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_CCW@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x1802A7950 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_CCW@@@details@wil@@QEAAX_NW4ReportingKind.c)
 *     ?LookupToastQueue@CToastCenterExperienceManager@@AEAAJXZ @ 0x1802A9848 (-LookupToastQueue@CToastCenterExperienceManager@@AEAAJXZ.c)
 *     ??$com_weak_query@PEAVCToastCenterExperienceManager@@@wil@@YA?AV?$com_ptr_t@UIWeakReference@@Uerr_exception_policy@wil@@@0@$$QEAPEAVCToastCenterExperienceManager@@@Z @ 0x1802AA4F4 (--$com_weak_query@PEAVCToastCenterExperienceManager@@@wil@@YA-AV-$com_ptr_t@UIWeakReference@@Uer.c)
 *     ?RaiseException@Details@WRL@Microsoft@@YAXJK@Z @ 0x1802B86EC (-RaiseException@Details@WRL@Microsoft@@YAXJK@Z.c)
 *     ?ReadyToLaunch@ToastCenterTelemetry@@SAXXZ @ 0x1802CE98C (-ReadyToLaunch@ToastCenterTelemetry@@SAXXZ.c)
 *     __security_check_cookie @ 0x1802D2210 (__security_check_cookie.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1802D2234 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ?VisibilityChanged@?$consume_WindowsUdk_UI_Shell_IShellViewCoordinator@UIShellViewCoordinator@Shell@UI@WindowsUdk@winrt@@@impl@winrt@@QEBA@Uauto_revoke_t@3@AEBU?$TypedEventHandler@UShellViewCoordinator@Shell@UI@WindowsUdk@winrt@@UIInspectable@Foundation@Windows@5@@Foundation@Windows@3@@Z @ 0x180377840 (-VisibilityChanged@-$consume_WindowsUdk_UI_Shell_IShellViewCoordinator@UIShellViewCoordinator@Sh.c)
 *     ?revoke_impl@?$event_revoker@UIShellViewCoordinator@Shell@UI@WindowsUdk@winrt@@$MP8type@?$abi@UIShellViewCoordinator@Shell@UI@WindowsUdk@winrt@@X@impl@5@EAAHUevent_token@5@@_E1??_96785@$BHA@AA@impl@winrt@@AEAAXUIShellViewCoordinator@Shell@UI@WindowsUdk@3@@Z @ 0x180377B6C (-revoke_impl@-$event_revoker@UIShellViewCoordinator@Shell@UI@WindowsUdk@winrt@@$MP8_ea_180377B6C.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=34
__int64 __fastcall CToastCenterExperienceManager::OnShellReady(CToastCenterExperienceManager *this)
{
  __int64 v2; // rdi
  __int64 (__fastcall *v3)(__int64, void *, GUID *, __int64 *); // rbx
  int v4; // eax
  unsigned int v5; // ebx
  __int64 v6; // rbx
  __int64 (__fastcall *v7)(__int64, HSTRING, _QWORD); // rdi
  HRESULT v8; // eax
  int v9; // edx
  unsigned int v10; // r8d
  int v11; // eax
  __int64 v12; // rdx
  __int64 (__fastcall ***v13)(_QWORD, _QWORD, _QWORD); // rbx
  __int64 (__fastcall *v14)(_QWORD, GUID *, char *); // rdi
  _QWORD *v15; // rax
  _QWORD *v16; // rbx
  int v17; // eax
  __int64 v18; // rdx
  unsigned int v19; // edi
  __int64 (__fastcall ***v20)(_QWORD, _QWORD, _QWORD); // rcx
  __int64 v21; // rcx
  __int64 v23; // rcx
  __int64 *v24; // rax
  __int64 v25; // rdi
  __int64 v26; // r8
  __int64 *v27; // rax
  _QWORD *v28; // rax
  int v29; // eax
  int v30; // edi
  int v31; // eax
  int v32; // eax
  __int64 (__fastcall ***v33)(_QWORD, _QWORD, _QWORD); // rcx
  __int64 v34; // rcx
  __int64 (__fastcall ***v35)(_QWORD, GUID *, char *); // [rsp+38h] [rbp-49h] BYREF
  __int64 v36; // [rsp+40h] [rbp-41h] BYREF
  _BYTE v37[4]; // [rsp+48h] [rbp-39h] BYREF
  unsigned int v38; // [rsp+4Ch] [rbp-35h] BYREF
  CToastCenterExperienceManager *v39; // [rsp+50h] [rbp-31h] BYREF
  __int64 v40; // [rsp+58h] [rbp-29h] BYREF
  __int64 v41[2]; // [rsp+60h] [rbp-21h] BYREF
  unsigned int *v42; // [rsp+70h] [rbp-11h] BYREF
  __int64 v43; // [rsp+78h] [rbp-9h]
  _QWORD v44[3]; // [rsp+80h] [rbp-1h] BYREF
  __int64 v45; // [rsp+98h] [rbp+17h] BYREF
  HSTRING_HEADER hstringHeader; // [rsp+A0h] [rbp+1Fh] BYREF
  HSTRING string; // [rsp+B8h] [rbp+37h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+E0h] [rbp+5Fh]

  *((_BYTE *)this + 401) = 1;
  if ( *((_QWORD *)this + 45) )
  {
    RtlUnsubscribeWnfNotificationWaitForCompletion();
    *((_QWORD *)this + 45) = 0LL;
  }
  ToastCenterTelemetry::ReadyToLaunch();
  v36 = 0LL;
  v2 = *((_QWORD *)this + 76);
  v3 = *(__int64 (__fastcall **)(__int64, void *, GUID *, __int64 *))(*(_QWORD *)v2 + 24LL);
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v36);
  v4 = v3(v2, &unk_18075E200, &GUID_2e8fcb18_a0ee_41ad_8ef8_77fb3a370ca5, &v36);
  v5 = v4;
  if ( v4 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x280,
      (int)"pcshell\\twinui\\experiencemanagers\\lib\\toastcenterexperiencemanager.cpp",
      (const char *)(unsigned int)v4);
LABEL_51:
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v36);
    return v5;
  }
  v35 = 0LL;
  v6 = v36;
  v7 = *(__int64 (__fastcall **)(__int64, HSTRING, _QWORD))(*(_QWORD *)v36 + 48LL);
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v35);
  string = 0LL;
  v8 = WindowsCreateStringReference(L"Windows.Internal.ShellExperience.ActionCenter", 0x2Du, &hstringHeader, &string);
  if ( v8 < 0 )
    Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)(unsigned int)v8, v9, v10);
  v11 = v7(v6, string, &v35);
  v5 = v11;
  if ( v11 < 0 )
  {
    v12 = 644LL;
LABEL_9:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v12,
      (int)"pcshell\\twinui\\experiencemanagers\\lib\\toastcenterexperiencemanager.cpp",
      (const char *)(unsigned int)v11);
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v35);
    goto LABEL_51;
  }
  v13 = (__int64 (__fastcall ***)(_QWORD, _QWORD, _QWORD))v35;
  v14 = **v35;
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)this + 82);
  v11 = v14(v13, &GUID_fd8022e5_1099_53f9_b49a_b39bf3f15861, (char *)this + 656);
  v5 = v11;
  if ( v11 < 0 )
  {
    v12 = 646LL;
    goto LABEL_9;
  }
  v15 = operator new(0x18uLL, (const struct std::nothrow_t *)&std::nothrow);
  v16 = v15;
  if ( v15 )
  {
    Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::Experience::IBaseExperienceManager *,Windows::Internal::Shell::Experience::IVisibilityChangedEventArgs *>>::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::Experience::IBaseExperienceManager *,Windows::Internal::Shell::Experience::IVisibilityChangedEventArgs *>>(v15);
    v16[2] = this;
    *v16 = &off_18070C8D8;
  }
  else
  {
    v16 = 0LL;
  }
  v44[2] = v16;
  v17 = (*(__int64 (__fastcall **)(_QWORD, _QWORD *, char *))(**((_QWORD **)this + 82) + 64LL))(
          *((_QWORD *)this + 82),
          v16,
          (char *)this + 672);
  v19 = v17;
  if ( v17 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x292,
      (int)"pcshell\\twinui\\experiencemanagers\\lib\\toastcenterexperiencemanager.cpp",
      (const char *)(unsigned int)v17);
    if ( v16 )
      (*(void (__fastcall **)(_QWORD *))(*v16 + 16LL))(v16);
    v20 = (__int64 (__fastcall ***)(_QWORD, _QWORD, _QWORD))v35;
    if ( v35 )
    {
      v35 = 0LL;
      ((void (__fastcall *)(__int64 (__fastcall ***)(_QWORD, _QWORD, _QWORD)))(*v20)[2])(v20);
    }
    v21 = v36;
    if ( v36 )
    {
      v36 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v21 + 16LL))(v21);
    }
    return v19;
  }
  LOBYTE(v18) = 1;
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_CCW>::ReportUsage(
    &`wil::Feature<__WilFeatureTraits_Feature_CCW>::GetImpl'::`2'::impl,
    v18);
  v38 = 6;
  v42 = &v38;
  v44[1] = &qword_18089B038;
  _InterlockedIncrement64(&qword_18089B038);
  if ( winrt::impl::factory_cache_entry_v<winrt::WindowsUdk::UI::Shell::ShellViewCoordinator,winrt::WindowsUdk::UI::Shell::IShellViewCoordinatorFactory> )
  {
    winrt::impl::consume_WindowsUdk_UI_Shell_IShellViewCoordinatorFactory<winrt::WindowsUdk::UI::Shell::IShellViewCoordinatorFactory>::CreateInstance(
      (__int64 **)&winrt::impl::factory_cache_entry_v<winrt::WindowsUdk::UI::Shell::ShellViewCoordinator,winrt::WindowsUdk::UI::Shell::IShellViewCoordinatorFactory>,
      &v39,
      &v38);
    _InterlockedDecrement64(&qword_18089B038);
  }
  else
  {
    _InterlockedDecrement64(&qword_18089B038);
    winrt::impl::factory_cache_entry<winrt::WindowsUdk::UI::Shell::ShellViewCoordinator,winrt::WindowsUdk::UI::Shell::IShellViewCoordinatorFactory>::call<_lambda_c784a7e41fe1a5698e55a9117bd5b7f8_ &>(
      v23,
      &v39,
      &v42);
  }
  winrt::WindowsUdk::UI::Shell::ShellViewCoordinator::operator=((__int64 *)this + 89, (__int64 *)&v39);
  if ( v39 )
    winrt::com_ptr<winrt::Windows::Internal::Shell::implementation::AppBackupListener>::unconditional_release_ref((__int64 *)&v39);
  v43 = 0LL;
  v39 = this;
  v24 = (__int64 *)wil::com_weak_query<CToastCenterExperienceManager *>(v44, &v39);
  v25 = *v24;
  *v24 = 0LL;
  v43 = v25;
  if ( v44[0] )
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v44[0] + 16LL))(v44[0]);
  hstringHeader.Reserved.Reserved1 = this;
  *(_QWORD *)&hstringHeader.Reserved.Reserved2[8] = v25;
  if ( v25 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v25 + 8LL))(v25);
  winrt::Windows::Foundation::TypedEventHandler_winrt::WindowsUdk::UI::Shell::ShellViewCoordinator_winrt::Windows::Foundation::IInspectable_::TypedEventHandler_winrt::WindowsUdk::UI::Shell::ShellViewCoordinator_winrt::Windows::Foundation::IInspectable___lambda_3c3eef79882b33f453ce48f4c33680cf___(
    &v40,
    &hstringHeader);
  v27 = (__int64 *)winrt::impl::consume_WindowsUdk_UI_Shell_IShellViewCoordinator<winrt::WindowsUdk::UI::Shell::IShellViewCoordinator>::VisibilityChanged(
                     (char *)this + 712,
                     v41,
                     v26,
                     &v40);
  __4__event_revoker_UIShellViewCoordinator_Shell_UI_WindowsUdk_winrt___MP8type___abi_UIShellViewCoordinator_Shell_UI_WindowsUdk_winrt__X_impl_5_EAAHUevent_token_5___E1___96785__BHA_AA_impl_winrt__QEAAAEAU012___QEAU012__Z(
    (__int64)this + 720,
    v27);
  if ( v41[0] )
  {
    v28 = winrt::weak_ref<winrt::WindowsUdk::UI::Shell::IShellViewCoordinator>::get(v41, &v45);
    _revoke_impl___event_revoker_UIShellViewCoordinator_Shell_UI_WindowsUdk_winrt___MP8type___abi_UIShellViewCoordinator_Shell_UI_WindowsUdk_winrt__X_impl_5_EAAHUevent_token_5___E1___96785__BHA_AA_impl_winrt__AEAAXUIShellViewCoordinator_Shell_UI_WindowsUdk_3__Z(
      v41,
      v28);
    if ( v41[0] )
      winrt::com_ptr<winrt::Windows::Internal::Shell::implementation::AppBackupListener>::unconditional_release_ref(v41);
  }
  if ( v40 )
    winrt::com_ptr<winrt::Windows::Internal::Shell::implementation::AppBackupListener>::unconditional_release_ref(&v40);
  if ( v25 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v25 + 16LL))(v25);
  v29 = CToastCenterExperienceManager::SubscribeToNewNotificationWnf(this);
  v30 = v29;
  if ( v29 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x2CE,
      (int)"pcshell\\twinui\\experiencemanagers\\lib\\toastcenterexperiencemanager.cpp",
      (const char *)(unsigned int)v29);
    if ( v16 )
      (*(void (__fastcall **)(_QWORD *))(*v16 + 16LL))(v16);
LABEL_50:
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v35);
    v5 = v30;
    goto LABEL_51;
  }
  v31 = CToastCenterExperienceManager::SubscribeToCriticalNotificationWnf(this);
  v30 = v31;
  if ( v31 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x2D1,
      (int)"pcshell\\twinui\\experiencemanagers\\lib\\toastcenterexperiencemanager.cpp",
      (const char *)(unsigned int)v31);
    if ( v16 )
      (*(void (__fastcall **)(_QWORD *))(*v16 + 16LL))(v16);
    goto LABEL_50;
  }
  v32 = CToastCenterExperienceManager::LookupToastQueue(this);
  v30 = v32;
  if ( v32 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x2D3,
      (int)"pcshell\\twinui\\experiencemanagers\\lib\\toastcenterexperiencemanager.cpp",
      (const char *)(unsigned int)v32);
    if ( v16 )
      (*(void (__fastcall **)(_QWORD *))(*v16 + 16LL))(v16);
    goto LABEL_50;
  }
  CToastCenterExperienceManager::RegisterForDisplayMonitorInfoChangedAsync(this, v37);
  if ( v16 )
    (*(void (__fastcall **)(_QWORD *))(*v16 + 16LL))(v16);
  v33 = (__int64 (__fastcall ***)(_QWORD, _QWORD, _QWORD))v35;
  if ( v35 )
  {
    v35 = 0LL;
    ((void (__fastcall *)(__int64 (__fastcall ***)(_QWORD, _QWORD, _QWORD)))(*v33)[2])(v33);
  }
  v34 = v36;
  if ( v36 )
  {
    v36 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v34 + 16LL))(v34);
  }
  return 0LL;
}
