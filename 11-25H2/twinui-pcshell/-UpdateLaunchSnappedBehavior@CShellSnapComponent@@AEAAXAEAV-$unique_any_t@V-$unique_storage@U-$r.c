/*
 * XREFs of ?UpdateLaunchSnappedBehavior@CShellSnapComponent@@AEAAXAEAV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@@Z @ 0x18057FC10
 * Callers:
 *     ?CreateSnapId@CShellSnapComponent@@UEAAJURect@Foundation@Windows@@PEAH@Z @ 0x18057B190 (-CreateSnapId@CShellSnapComponent@@UEAAJURect@Foundation@Windows@@PEAH@Z.c)
 *     ?GetAndDeleteSnapId@CShellSnapComponent@@UEAAJHPEAURect@Foundation@Windows@@@Z @ 0x18057B5F0 (-GetAndDeleteSnapId@CShellSnapComponent@@UEAAJHPEAURect@Foundation@Windows@@@Z.c)
 *     ?GetAndDeleteSnapIdForWindow@CShellSnapComponent@@UEAAJH_KPEAURect@Foundation@Windows@@@Z @ 0x18057B700 (-GetAndDeleteSnapIdForWindow@CShellSnapComponent@@UEAAJH_KPEAURect@Foundation@Windows@@@Z.c)
 *     ?GetAndDeleteSnapLaunchRect@CShellSnapComponent@@UEAAJPEAUHSTRING__@@PEAURect@Foundation@Windows@@@Z @ 0x18057B940 (-GetAndDeleteSnapLaunchRect@CShellSnapComponent@@UEAAJPEAUHSTRING__@@PEAURect@Foundation@Windows.c)
 *     ?RegisterSnapLaunch@CShellSnapComponent@@UEAAJPEAUHSTRING__@@HURect@Foundation@Windows@@@Z @ 0x18057D610 (-RegisterSnapLaunch@CShellSnapComponent@@UEAAJPEAUHSTRING__@@HURect@Foundation@Windows@@@Z.c)
 *     ?RevokeSnapIds@CShellSnapComponent@@AEAAXXZ @ 0x18057DAFC (-RevokeSnapIds@CShellSnapComponent@@AEAAXXZ.c)
 * Callees:
 *     ??1?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x180028330 (--1-$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180039744 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ @ 0x18005D244 (--1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ.c)
 *     ?Cancel@?$consume_Windows_System_Threading_IThreadPoolTimer@UIThreadPoolTimer@Threading@System@Windows@winrt@@@impl@winrt@@QEBA@XZ @ 0x18005D894 (-Cancel@-$consume_Windows_System_Threading_IThreadPoolTimer@UIThreadPoolTimer@Threading@System@W.c)
 *     ?unconditional_release_ref@?$com_ptr@UAppBackupListener@implementation@Shell@Internal@Windows@winrt@@@winrt@@AEAAXXZ @ 0x180066570 (-unconditional_release_ref@-$com_ptr@UAppBackupListener@implementation@Shell@Internal@Windows@wi.c)
 *     ??4ShellViewCoordinator@Shell@UI@WindowsUdk@winrt@@QEAAAEAU01234@$$QEAU01234@@Z @ 0x1800AA2B4 (--4ShellViewCoordinator@Shell@UI@WindowsUdk@winrt@@QEAAAEAU01234@$$QEAU01234@@Z.c)
 *     ??0resume_apartment_context@impl@winrt@@QEAA@XZ @ 0x1800FAB4C (--0resume_apartment_context@impl@winrt@@QEAA@XZ.c)
 *     ?CreateTimer@ThreadPoolTimer@Threading@System@Windows@winrt@@SA@AEBUTimerElapsedHandler@2345@AEBV?$duration@_JU?$ratio@$00$0JIJGIA@@std@@@chrono@std@@@Z @ 0x1801DEAD0 (-CreateTimer@ThreadPoolTimer@Threading@System@Windows@winrt@@SA@AEBUTimerElapsedHandler@2345@AEB.c)
 *     ??$com_weak_query_failfast@PEAVVirtualDesktopSwitcherHost@@@wil@@YA?AV?$com_ptr_t@UIWeakReference@@Uerr_failfast_policy@wil@@@0@$$QEAPEAVVirtualDesktopSwitcherHost@@@Z @ 0x1802C5CB8 (--$com_weak_query_failfast@PEAVVirtualDesktopSwitcherHost@@@wil@@YA-AV-$com_ptr_t@UIWeakReferenc.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_SnapLauncherAPI@@@details@wil@@QEAA_NXZ @ 0x1802EDA8C (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_SnapLauncherAPI@@@details@wil@@QE.c)
 *     winrt::Windows::System::Threading::TimerElapsedHandler::TimerElapsedHandler__lambda_3415c00afb736d6d54203eb8c7c58983___ @ 0x180577D00 (winrt--Windows--System--Threading--TimerElapsedHandler--TimerElapsedHandler__lambda_3415c00afb73.c)
 *     ?TryGetCustomDuration@CShellSnapComponent@@AEAA?AV?$optional@V?$duration@_JU?$ratio@$00$0DOI@@std@@@chrono@std@@@std@@PEBG@Z @ 0x18057F89C (-TryGetCustomDuration@CShellSnapComponent@@AEAA-AV-$optional@V-$duration@_JU-$ratio@$00$0DOI@@st.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall CShellSnapComponent::UpdateLaunchSnappedBehavior(__int64 a1, __int64 a2)
{
  __int64 *v3; // rdi
  unsigned __int8 v4; // si
  __int64 *v5; // rax
  __int64 v6; // rcx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 CustomDuration; // rax
  __int64 v10; // rax
  __int64 *Timer; // rax
  int v12; // eax
  __int64 v13; // [rsp+20h] [rbp-30h] BYREF
  int v14; // [rsp+28h] [rbp-28h]
  __int64 v15[2]; // [rsp+30h] [rbp-20h] BYREF
  int v16; // [rsp+40h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+18h]
  __int64 v18; // [rsp+70h] [rbp+20h] BYREF
  __int64 v19; // [rsp+78h] [rbp+28h] BYREF
  __int64 v20; // [rsp+80h] [rbp+30h] BYREF

  v19 = a2;
  v3 = (__int64 *)(a1 + 1808);
  if ( *(_QWORD *)(a1 + 1808) )
  {
    winrt::impl::consume_Windows_System_Threading_IThreadPoolTimer<winrt::Windows::System::Threading::IThreadPoolTimer>::Cancel((__int64 *)(a1 + 1808));
    v19 = 0LL;
    winrt::WindowsUdk::UI::Shell::ShellViewCoordinator::operator=(v3, &v19);
    winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)&v19);
  }
  if ( *(_QWORD *)(a1 + 1560)
    || wil::details::FeatureImpl<__WilFeatureTraits_Feature_SnapLauncherAPI>::__private_IsEnabled((wil::details *)&`wil::Feature<__WilFeatureTraits_Feature_SnapLauncherAPI>::GetImpl'::`2'::impl)
    && *(_QWORD *)(a1 + 1840) )
  {
    v4 = 1;
    winrt::impl::resume_apartment_context::resume_apartment_context((winrt::impl::resume_apartment_context *)&v13);
    v18 = a1;
    v5 = wil::com_weak_query_failfast<VirtualDesktopSwitcherHost *>(
           &v20,
           (__int64 (__fastcall ****)(_QWORD, GUID *, __int64 *))&v18);
    v6 = *v5;
    *v5 = 0LL;
    v15[0] = v6;
    v15[1] = v13;
    if ( v13 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 8LL))(v13);
    v16 = v14;
    winrt::Windows::System::Threading::TimerElapsedHandler::TimerElapsedHandler__lambda_3415c00afb736d6d54203eb8c7c58983___(
      &v19,
      v15);
    wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v20);
    CustomDuration = CShellSnapComponent::TryGetCustomDuration(v7, (__int64)v15, v8);
    if ( *(_BYTE *)(CustomDuration + 8) )
      v10 = *(_QWORD *)CustomDuration;
    else
      v10 = 30000LL;
    v18 = 10000 * v10;
    Timer = (__int64 *)winrt::Windows::System::Threading::ThreadPoolTimer::CreateTimer(
                         (__int64)&v20,
                         (__int64)&v19,
                         (__int64)&v18);
    winrt::WindowsUdk::UI::Shell::ShellViewCoordinator::operator=(v3, Timer);
    winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)&v20);
    if ( v19 )
      winrt::com_ptr<winrt::Windows::Internal::Shell::implementation::AppBackupListener>::unconditional_release_ref(&v19);
    winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)&v13);
  }
  else
  {
    v4 = 0;
  }
  if ( v4 != *(_BYTE *)(a1 + 1800) )
  {
    v12 = (*(__int64 (__fastcall **)(_QWORD, __int64, _QWORD))(**(_QWORD **)(a1 + 432) + 56LL))(
            *(_QWORD *)(a1 + 432),
            32LL,
            32 * (unsigned int)v4);
    if ( v12 >= 0 )
      *(_BYTE *)(a1 + 1800) = v4;
    else
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x6FA,
        (int)"pcshell\\twinui\\snapcomponent\\lib\\snapshellcomponent.cpp",
        (const char *)(unsigned int)v12);
  }
}
