/*
 * XREFs of ?OnLongPressTimerElapsed@GamepadButtonTracker@@AEAAXAEBUThreadPoolTimer@Threading@System@Windows@winrt@@@Z @ 0x18035BD70
 * Callers:
 *     <none>
 * Callees:
 *     ??1CAutoSRWExclusiveLock@@QEAA@XZ @ 0x180048190 (--1CAutoSRWExclusiveLock@@QEAA@XZ.c)
 *     ??1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ @ 0x18005D244 (--1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ.c)
 *     ?Cancel@?$consume_Windows_System_Threading_IThreadPoolTimer@UIThreadPoolTimer@Threading@System@Windows@winrt@@@impl@winrt@@QEBA@XZ @ 0x18005D894 (-Cancel@-$consume_Windows_System_Threading_IThreadPoolTimer@UIThreadPoolTimer@Threading@System@W.c)
 *     ??4ShellViewCoordinator@Shell@UI@WindowsUdk@winrt@@QEAAAEAU01234@$$QEAU01234@@Z @ 0x1800AA2B4 (--4ShellViewCoordinator@Shell@UI@WindowsUdk@winrt@@QEAAAEAU01234@$$QEAU01234@@Z.c)
 *     ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockShared@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x180101060 (--1-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1-ReleaseS.c)
 *     ?LockShared@SRWLock@Wrappers@WRL@Microsoft@@SA?AVSyncLockShared@Details@234@PEAU_RTL_SRWLOCK@@@Z @ 0x18012BBCC (-LockShared@SRWLock@Wrappers@WRL@Microsoft@@SA-AVSyncLockShared@Details@234@PEAU_RTL_SRWLOCK@@@Z.c)
 *     ?AcquireSRWLockExclusive@wil@@YA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@1@PEAU_RTL_SRWLOCK@@@Z @ 0x180142B80 (-AcquireSRWLockExclusive@wil@@YA-AV-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_.c)
 *     ?reset@?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@QEAAXPEAU_RTL_SRWLOCK@@@Z @ 0x1801E9A20 (-reset@-$unique_storage@U-$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1-ReleaseSRWLockExclus.c)
 *     __security_check_cookie @ 0x1802D2210 (__security_check_cookie.c)
 *     ??R?$_Func_class@XAEBUAPP_LOCAL_DEVICE_ID@@W4GamepadButtonEventKind@@@std@@QEBAXAEBUAPP_LOCAL_DEVICE_ID@@W4GamepadButtonEventKind@@@Z @ 0x18035B608 (--R-$_Func_class@XAEBUAPP_LOCAL_DEVICE_ID@@W4GamepadButtonEventKind@@@std@@QEBAXAEBUAPP_LOCAL_DE.c)
 *     ?CreateRumbleEffect@GamepadButtonTracker@@AEAAXUread_lock_required@wil@@V?$duration@_JU?$ratio@$00$0DOI@@std@@@chrono@std@@@Z @ 0x18035B758 (-CreateRumbleEffect@GamepadButtonTracker@@AEAAXUread_lock_required@wil@@V-$duration@_JU-$ratio@$.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_Gamepad_LongPressRumble@@@details@wil@@QEAA_NXZ @ 0x18035C010 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_Gamepad_LongPressRumble@@@details.c)
 */

// Hidden C++ exception states: #wind=2
void __fastcall GamepadButtonTracker::OnLongPressTimerElapsed(
        GamepadButtonTracker *this,
        const struct winrt::Windows::System::Threading::ThreadPoolTimer *a2)
{
  bool v3; // di
  __int64 v4; // rdx
  RTL_SRWLOCK *v5; // [rsp+20h] [rbp-28h] BYREF
  RTL_SRWLOCK *v6; // [rsp+28h] [rbp-20h] BYREF

  v6 = 0LL;
  wil::AcquireSRWLockExclusive(&v6, (RTL_SRWLOCK *)this);
  v3 = 0;
  if ( *((_BYTE *)this + 120) )
    v3 = *((_BYTE *)this + 24) != 0;
  if ( *((_QWORD *)this + 1) )
  {
    winrt::impl::consume_Windows_System_Threading_IThreadPoolTimer<winrt::Windows::System::Threading::IThreadPoolTimer>::Cancel((__int64 *)this + 1);
    v5 = 0LL;
    winrt::WindowsUdk::UI::Shell::ShellViewCoordinator::operator=((__int64 *)this + 1, (__int64 *)&v5);
    winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)&v5);
  }
  *((_BYTE *)this + 24) = 0;
  wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockExclusive(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>::reset(
    &v6,
    0LL);
  if ( v3 )
  {
    if ( (unsigned __int8)wil::details::FeatureImpl<__WilFeatureTraits_Feature_Gamepad_LongPressRumble>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_Gamepad_LongPressRumble>::GetImpl'::`2'::impl) )
    {
      v5 = 0LL;
      Microsoft::WRL::Wrappers::SRWLock::LockShared(&v5, (RTL_SRWLOCK *)this);
      GamepadButtonTracker::CreateRumbleEffect((__int64)this, v4, *((_QWORD *)this + 6));
      wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockShared(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockShared(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>>(&v5);
    }
    std::_Func_class<void,APP_LOCAL_DEVICE_ID const &,enum GamepadButtonEventKind>::operator()(
      (__int64)this + 56,
      (__int64)this + 144,
      1);
  }
  CAutoSRWExclusiveLock::~CAutoSRWExclusiveLock(&v6);
}
