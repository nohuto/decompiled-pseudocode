/*
 * XREFs of ??1TouchEdgeGestureProcessor@@QEAA@XZ @ 0x1802BA828
 * Callers:
 *     ??1TouchEdgeGestureManager@@UEAA@XZ @ 0x1800FB4D8 (--1TouchEdgeGestureManager@@UEAA@XZ.c)
 *     _TouchEdgeGestureManager::TouchEdgeGestureManager_::_1_::dtor$8 @ 0x1806A99CF (_TouchEdgeGestureManager--TouchEdgeGestureManager_--_1_--dtor$8.c)
 * Callees:
 *     ?unconditional_release_ref@?$com_ptr@UISnapComponent@@@winrt@@AEAAXXZ @ 0x1800286D0 (-unconditional_release_ref@-$com_ptr@UISnapComponent@@@winrt@@AEAAXXZ.c)
 *     ??1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ @ 0x18005D244 (--1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ.c)
 *     ??1?$function@$$A6A_NAEBU?$pair@V?$shared_ptr@VPinOperationContext@@@std@@V?$time_point@Usteady_clock@chrono@std@@V?$duration@_JU?$ratio@$00$0DLJKMKAA@@std@@@23@@chrono@2@@std@@@Z@std@@QEAA@XZ @ 0x180071F24 (--1-$function@$$A6A_NAEBU-$pair@V-$shared_ptr@VPinOperationContext@@@std@@V-$time_point@Usteady_.c)
 *     ??4ShellViewCoordinator@Shell@UI@WindowsUdk@winrt@@QEAAAEAU01234@$$QEAU01234@@Z @ 0x1800AA2B4 (--4ShellViewCoordinator@Shell@UI@WindowsUdk@winrt@@QEAAAEAU01234@$$QEAU01234@@Z.c)
 *     ?delete_wnf_subscription_state@details@wil@@YAXPEAUwnf_subscription_state_base@12@@Z @ 0x1800C0A4C (-delete_wnf_subscription_state@details@wil@@YAXPEAUwnf_subscription_state_base@12@@Z.c)
 *     ?UpdateTouchEdgeGestureRegistration@TouchEdgeGestureProcessor@@AEAAXW4TouchEdgeGestureType@@@Z @ 0x1800FC364 (-UpdateTouchEdgeGestureRegistration@TouchEdgeGestureProcessor@@AEAAXW4TouchEdgeGestureType@@@Z.c)
 */

void __fastcall TouchEdgeGestureProcessor::~TouchEdgeGestureProcessor(TouchEdgeGestureProcessor *this)
{
  __int64 *v2; // rdi
  __int64 v3; // rdx
  struct wil::details::wnf_subscription_state_base *v4; // rdx
  wil::details *v5; // rcx
  __int64 v6; // [rsp+30h] [rbp+8h] BYREF

  v2 = (__int64 *)((char *)this + 104);
  if ( *((_QWORD *)this + 13) )
  {
    TouchEdgeGestureProcessor::UpdateTouchEdgeGestureRegistration((__int64)this, 0);
    v6 = 0LL;
    winrt::WindowsUdk::UI::Shell::ShellViewCoordinator::operator=(v2, &v6);
    winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)&v6);
  }
  winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((TouchEdgeGestureProcessor *)((char *)this + 112));
  winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)v2);
  std::function<bool (std::pair<std::shared_ptr<PinOperationContext>,std::chrono::time_point<std::chrono::steady_clock,std::chrono::duration<__int64,std::ratio<1,1000000000>>>> const &)>::~function<bool (std::pair<std::shared_ptr<PinOperationContext>,std::chrono::time_point<std::chrono::steady_clock,std::chrono::duration<__int64,std::ratio<1,1000000000>>>> const &)>(
    (__int64)this + 24,
    v3);
  v5 = (wil::details *)*((_QWORD *)this + 2);
  if ( v5 )
    wil::details::delete_wnf_subscription_state(v5, v4);
  if ( *((_QWORD *)this + 1) )
    winrt::com_ptr<ISnapComponent>::unconditional_release_ref((__int64 *)this + 1);
  if ( *(_QWORD *)this )
    winrt::com_ptr<ISnapComponent>::unconditional_release_ref((__int64 *)this);
}
