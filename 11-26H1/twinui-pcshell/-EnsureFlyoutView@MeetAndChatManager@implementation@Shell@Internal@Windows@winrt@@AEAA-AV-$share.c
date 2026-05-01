/*
 * XREFs of ?EnsureFlyoutView@MeetAndChatManager@implementation@Shell@Internal@Windows@winrt@@AEAA?AV?$shared_ptr@VFlyoutView@@@std@@XZ @ 0x1805F4838
 * Callers:
 *     ?HideMACFlyout@MeetAndChatManager@implementation@Shell@Internal@Windows@winrt@@AEAAXPEAUHWND__@@@Z @ 0x1805F5484 (-HideMACFlyout@MeetAndChatManager@implementation@Shell@Internal@Windows@winrt@@AEAAXPEAUHWND__@@.c)
 *     ?RegisterFlyoutWindow@MeetAndChatManager@implementation@Shell@Internal@Windows@winrt@@QEAA?AUIInspectable@Foundation@56@AEBUWindowId@WindowManagement@ApplicationModel@456@AEBUhstring@6@@Z @ 0x1805F68CC (-RegisterFlyoutWindow@MeetAndChatManager@implementation@Shell@Internal@Windows@winrt@@QEAA-AUIIn.c)
 *     ?SetIconBadge@MeetAndChatManager@implementation@Shell@Internal@Windows@winrt@@QEAAXIAEBUhstring@6@@Z @ 0x1805F6C84 (-SetIconBadge@MeetAndChatManager@implementation@Shell@Internal@Windows@winrt@@QEAAXIAEBUhstring@.c)
 *     ?ShowMACFlyout@MeetAndChatManager@implementation@Shell@Internal@Windows@winrt@@AEAAXUShowShellViewRequestedEventArgs@3UI@WindowsUdk@6@W4LaunchSource@MeetAndChatTelemetry@@@Z @ 0x1805F6ED0 (-ShowMACFlyout@MeetAndChatManager@implementation@Shell@Internal@Windows@winrt@@AEAAXUShowShellVi.c)
 *     ?ToggleFlyoutVisibility@MeetAndChatManager@implementation@Shell@Internal@Windows@winrt@@AEAAXW4LaunchSource@MeetAndChatTelemetry@@@Z @ 0x1805F7E74 (-ToggleFlyoutVisibility@MeetAndChatManager@implementation@Shell@Internal@Windows@winrt@@AEAAXW4L.c)
 *     ?UpdateFlyoutVisibility@MeetAndChatManager@implementation@Shell@Internal@Windows@winrt@@AEAAXXZ @ 0x1805F7FFC (-UpdateFlyoutVisibility@MeetAndChatManager@implementation@Shell@Internal@Windows@winrt@@AEAAXXZ.c)
 * Callees:
 *     ??1CAutoSRWExclusiveLock@@QEAA@XZ @ 0x18001C3D4 (--1CAutoSRWExclusiveLock@@QEAA@XZ.c)
 *     ??1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ @ 0x18002633C (--1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ.c)
 *     ?unconditional_release_ref@?$com_ptr@UISnapComponent@@@winrt@@AEAAXXZ @ 0x18002694C (-unconditional_release_ref@-$com_ptr@UISnapComponent@@@winrt@@AEAAXXZ.c)
 *     ??0?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@QEBG@Z @ 0x180030428 (--0-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAA@QEBG@Z.c)
 *     ?_Tidy_deallocate@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAAXXZ @ 0x180031D20 (-_Tidy_deallocate@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@AEAAXXZ.c)
 *     ??4?$shared_ptr@VFlyoutView@@@std@@QEAAAEAV01@AEBV01@@Z @ 0x18003479C (--4-$shared_ptr@VFlyoutView@@@std@@QEAAAEAV01@AEBV01@@Z.c)
 *     ??0?$shared_ptr@VInputAppViewCoodinatorHandler@@@std@@QEAA@AEBV01@@Z @ 0x180034ACC (--0-$shared_ptr@VInputAppViewCoodinatorHandler@@@std@@QEAA@AEBV01@@Z.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x1800373AC (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?AcquireSRWLockExclusive@wil@@YA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@1@PEAU_RTL_SRWLOCK@@@Z @ 0x1800584D8 (-AcquireSRWLockExclusive@wil@@YA-AV-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_.c)
 *     ??$com_agile_query@AEAPEAUIUnknown@@@wil@@YA?AV?$com_ptr_t@UIAgileReference@@Uerr_exception_policy@wil@@@0@AEAPEAUIUnknown@@W4AgileReferenceOptions@@@Z @ 0x180084DF0 (--$com_agile_query@AEAPEAUIUnknown@@@wil@@YA-AV-$com_ptr_t@UIAgileReference@@Uerr_exception_poli.c)
 *     ??1?$unique_ptr@V_Facet_base@std@@U?$default_delete@V_Facet_base@std@@@2@@std@@QEAA@XZ @ 0x1800E485C (--1-$unique_ptr@V_Facet_base@std@@U-$default_delete@V_Facet_base@std@@@2@@std@@QEAA@XZ.c)
 *     ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockShared@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x18010E8A0 (--1-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1-ReleaseS.c)
 *     ?LockShared@SRWLock@Wrappers@WRL@Microsoft@@SA?AVSyncLockShared@Details@234@PEAU_RTL_SRWLOCK@@@Z @ 0x180128914 (-LockShared@SRWLock@Wrappers@WRL@Microsoft@@SA-AVSyncLockShared@Details@234@PEAU_RTL_SRWLOCK@@@Z.c)
 *     ?SHRegGetDWORD@@YAJPEAUHKEY__@@PEBG1PEAK@Z @ 0x180190638 (-SHRegGetDWORD@@YAJPEAUHKEY__@@PEBG1PEAK@Z.c)
 *     ??1?$unique_ptr@VProtocolLauncher@Utils@@U?$default_delete@VProtocolLauncher@Utils@@@std@@@std@@QEAA@XZ @ 0x18021FC40 (--1-$unique_ptr@VProtocolLauncher@Utils@@U-$default_delete@VProtocolLauncher@Utils@@@std@@@std@@.c)
 *     ?TryGetForUriScheme@ProtocolLauncher@Utils@@SA?AV?$unique_ptr@VProtocolLauncher@Utils@@U?$default_delete@VProtocolLauncher@Utils@@@std@@@std@@AEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@4@@Z @ 0x18027AF9C (-TryGetForUriScheme@ProtocolLauncher@Utils@@SA-AV-$unique_ptr@VProtocolLauncher@Utils@@U-$defaul.c)
 *     __security_check_cookie @ 0x1802C8E90 (__security_check_cookie.c)
 *     ??2@YAPEAX_K@Z @ 0x1802C9924 (--2@YAPEAX_K@Z.c)
 *     ??$?4U?$default_delete@VPrimaryAppProxyBase@@@std@@$0A@@?$unique_ptr@VPrimaryAppProxyBase@@U?$default_delete@VPrimaryAppProxyBase@@@std@@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x1804EEFC4 (--$-4U-$default_delete@VPrimaryAppProxyBase@@@std@@$0A@@-$unique_ptr@VPrimaryAppProxyBase@@U-$de.c)
 *     ??1KioskPositionerConfiguration@KioskPositioner@@QEAA@XZ @ 0x1804EFB1C (--1KioskPositionerConfiguration@KioskPositioner@@QEAA@XZ.c)
 *     ??$PreviousViewThrownOut@I@MeetAndChatTelemetry@@SAX$$QEAI@Z @ 0x1805F1D44 (--$PreviousViewThrownOut@I@MeetAndChatTelemetry@@SAX$$QEAI@Z.c)
 *     ??$get_site@UIUnknown@@@immersive_shell_component@winrt@@IEAA?AU?$com_ptr@UIUnknown@@@1@XZ @ 0x1805F2290 (--$get_site@UIUnknown@@@immersive_shell_component@winrt@@IEAA-AU-$com_ptr@UIUnknown@@@1@XZ.c)
 *     ??R?$default_delete@VProtocolLauncher@Utils@@@std@@QEBAXPEAVProtocolLauncher@Utils@@@Z @ 0x1805F3E40 (--R-$default_delete@VProtocolLauncher@Utils@@@std@@QEBAXPEAVProtocolLauncher@Utils@@@Z.c)
 *     ??$make_unique@VApplicationFlyoutView@@AEAPEAUIPrivilegedPresentationOperations@@AEAPEAUIInputHostLayout@@V?$unique_ptr@VProtocolLauncher@Utils@@U?$default_delete@VProtocolLauncher@Utils@@@std@@@std@@AEAPEBG$0A@@std@@YA?AV?$unique_ptr@VApplicationFlyoutView@@U?$default_delete@VApplicationFlyoutView@@@std@@@0@AEAPEAUIPrivilegedPresentationOperations@@AEAPEAUIInputHostLayout@@$$QEAV?$unique_ptr@VProtocolLauncher@Utils@@U?$default_delete@VProtocolLauncher@Utils@@@std@@@0@AEAPEBG@Z @ 0x1805FB384 (--$make_unique@VApplicationFlyoutView@@AEAPEAUIPrivilegedPresentationOperations@@AEAPEAUIInputHo.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=9
__int64 (__fastcall ***__fastcall winrt::Windows::Internal::Shell::implementation::MeetAndChatManager::EnsureFlyoutView(
        __int64 a1,
        __int64 (__fastcall ***a2)(_QWORD, __int64)))(_QWORD, __int64)
{
  __int64 v4; // rcx
  HSTRING *v5; // rdx
  const WCHAR **v6; // rbx
  const WCHAR *v7; // r15
  _QWORD *v8; // r12
  __int64 v9; // rcx
  __int64 v10; // rax
  __int64 v11; // rbx
  __int64 (__fastcall ***v12)(_QWORD, __int64); // rdi
  std::_Ref_count_base **v13; // rax
  std::_Ref_count_base *v14; // rcx
  __int64 v15; // rax
  RTL_SRWLOCK *v16; // rcx
  __int64 (__fastcall ***v17)(_QWORD, __int64); // rax
  RTL_SRWLOCK *v18; // rbx
  std::_Ref_count_base *v19; // rcx
  std::_Ref_count_base *v20; // rbx
  __int64 (__fastcall ***v22)(_QWORD, __int64); // [rsp+30h] [rbp-39h] BYREF
  RTL_SRWLOCK *v23; // [rsp+38h] [rbp-31h] BYREF
  __int64 (__fastcall ***v24)(_QWORD, __int64); // [rsp+40h] [rbp-29h] BYREF
  HSTRING *v25; // [rsp+48h] [rbp-21h] BYREF
  unsigned int v26; // [rsp+50h] [rbp-19h] BYREF
  __int64 (__fastcall ***v27[2])(_QWORD, __int64); // [rsp+58h] [rbp-11h] BYREF
  std::_Ref_count_base *v28[2]; // [rsp+68h] [rbp-1h] BYREF

  v24 = a2;
  std::wstring::wstring((__int64)v28, (__int64)L"ms-meetnow");
  Utils::ProtocolLauncher::TryGetForUriScheme(&v25, v28);
  std::wstring::_Tidy_deallocate(v28);
  v26 = 0;
  if ( SHRegGetDWORD(
         HKEY_CURRENT_USER,
         L"SOFTWARE\\Microsoft\\Windows\\CurrentVersion\\Explorer\\Advanced",
         L"TaskbarMnFallback",
         &v26) >= 0
    && v26 )
  {
    v5 = v25;
    v6 = 0LL;
    v25 = 0LL;
    if ( !v5 )
    {
LABEL_8:
      v7 = &pvData;
      goto LABEL_9;
    }
    std::default_delete<Utils::ProtocolLauncher>::operator()(v4, v5);
  }
  else
  {
    v6 = (const WCHAR **)v25;
  }
  if ( !v6 )
    goto LABEL_8;
  v7 = *v6;
LABEL_9:
  Microsoft::WRL::Wrappers::SRWLock::LockShared(&v23, (RTL_SRWLOCK *)(a1 + 112));
  v8 = (_QWORD *)(a1 + 192);
  v9 = *(_QWORD *)(a1 + 192);
  if ( !v9
    || (v10 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v9 + 48LL))(v9), (unsigned int)_o__wcsicmp(v7, v10)) )
  {
    wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockShared(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockShared(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>>(&v23);
    v23 = 0LL;
    if ( *v7 )
    {
      v27[0] = (__int64 (__fastcall ***)(_QWORD, __int64))L"ms-meetnow";
      v28[0] = *(std::_Ref_count_base **)(a1 + 184);
      v22 = *(__int64 (__fastcall ****)(_QWORD, __int64))(a1 + 176);
      v13 = (std::_Ref_count_base **)std::make_unique<ApplicationFlyoutView,IPrivilegedPresentationOperations * &,IInputHostLayout * &,std::unique_ptr<Utils::ProtocolLauncher>,unsigned short const * &,0>(
                                       (unsigned int)&v24,
                                       (unsigned int)&v22,
                                       (unsigned int)v28,
                                       (unsigned int)&v25,
                                       (__int64)v27);
      v14 = *v13;
      *v13 = 0LL;
      v28[0] = v14;
      std::unique_ptr<std::_Facet_base>::~unique_ptr<std::_Facet_base>(&v24);
      std::unique_ptr<PrimaryAppProxyBase>::operator=<std::default_delete<PrimaryAppProxyBase>,0>(&v23, (__int64 *)v28);
      KioskPositioner::KioskPositionerConfiguration::~KioskPositionerConfiguration((KioskPositioner::KioskPositionerConfiguration *)v28);
    }
    else
    {
      v11 = *winrt::immersive_shell_component::get_site<IUnknown>((RTL_SRWLOCK *)(a1 + 16), (__int64 *)v28);
      v12 = (__int64 (__fastcall ***)(_QWORD, __int64))operator new(0x20uLL);
      v24 = v12;
      v22 = (__int64 (__fastcall ***)(_QWORD, __int64))v11;
      *v12 = (__int64 (__fastcall **)(_QWORD, __int64))&FallbackFlyoutView::`vftable';
      wil::com_agile_query<IUnknown * &>(v12 + 1, (__int64 *)&v22);
      v12[2] = 0LL;
      v12[3] = 0LL;
      v27[0] = 0LL;
      v22 = v12;
      std::unique_ptr<std::_Facet_base>::~unique_ptr<std::_Facet_base>(v27);
      std::unique_ptr<PrimaryAppProxyBase>::operator=<std::default_delete<PrimaryAppProxyBase>,0>(&v23, (__int64 *)&v22);
      KioskPositioner::KioskPositionerConfiguration::~KioskPositionerConfiguration((KioskPositioner::KioskPositionerConfiguration *)&v22);
      if ( v28[0] )
        winrt::com_ptr<ISnapComponent>::unconditional_release_ref((__int64 *)v28);
    }
    *(_OWORD *)v28 = 0LL;
    wil::AcquireSRWLockExclusive((RTL_SRWLOCK **)&v24, (RTL_SRWLOCK *)(a1 + 112));
    if ( !*v8
      || (v15 = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)*v8 + 48LL))(*v8), (unsigned int)_o__wcsicmp(v7, v15)) )
    {
      std::shared_ptr<FlyoutView>::operator=(v28, (_QWORD *)(a1 + 192));
      v16 = 0LL;
      v17 = 0LL;
      v18 = v23;
      if ( v23 )
      {
        v17 = (__int64 (__fastcall ***)(_QWORD, __int64))operator new(0x18uLL);
        v27[0] = v17;
        *(_OWORD *)v17 = 0LL;
        *((_DWORD *)v17 + 2) = 1;
        *((_DWORD *)v17 + 3) = 1;
        *v17 = (__int64 (__fastcall **)(_QWORD, __int64))&std::_Ref_count_resource<FlyoutView *,std::default_delete<FlyoutView>>::`vftable';
        v17[2] = (__int64 (__fastcall **)(_QWORD, __int64))v18;
        v16 = v18;
        v23 = 0LL;
      }
      *(_QWORD *)(a1 + 192) = v16;
      v19 = *(std::_Ref_count_base **)(a1 + 200);
      *(_QWORD *)(a1 + 200) = v17;
      if ( v19 )
        std::_Ref_count_base::_Decref(v19);
      *(_BYTE *)(a1 + 208) = 0;
    }
    CAutoSRWExclusiveLock::~CAutoSRWExclusiveLock((RTL_SRWLOCK **)&v24);
    v20 = v28[0];
    if ( v28[0] )
    {
      LODWORD(v22) = (*(__int64 (__fastcall **)(std::_Ref_count_base *))(*(_QWORD *)v28[0] + 32LL))(v28[0]);
      MeetAndChatTelemetry::PreviousViewThrownOut<unsigned int>((int *)&v22);
      (*(void (__fastcall **)(std::_Ref_count_base *, __int64 (__fastcall ****)(_QWORD, __int64), _QWORD))(*(_QWORD *)v20 + 24LL))(
        v20,
        &v24,
        0LL);
      winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)&v24);
    }
    std::shared_ptr<InputAppViewCoodinatorHandler>::shared_ptr<InputAppViewCoodinatorHandler>(a2, (_QWORD *)(a1 + 192));
    if ( v28[1] )
      std::_Ref_count_base::_Decref(v28[1]);
    KioskPositioner::KioskPositionerConfiguration::~KioskPositionerConfiguration((KioskPositioner::KioskPositionerConfiguration *)&v23);
  }
  else
  {
    std::shared_ptr<InputAppViewCoodinatorHandler>::shared_ptr<InputAppViewCoodinatorHandler>(a2, (_QWORD *)(a1 + 192));
    wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockShared(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockShared(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>>(&v23);
  }
  std::unique_ptr<Utils::ProtocolLauncher>::~unique_ptr<Utils::ProtocolLauncher>(&v25);
  return a2;
}
