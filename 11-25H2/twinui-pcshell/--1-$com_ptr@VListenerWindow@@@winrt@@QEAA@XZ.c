/*
 * XREFs of ??1?$com_ptr@VListenerWindow@@@winrt@@QEAA@XZ @ 0x1802923F0
 * Callers:
 *     ?DelayInitialize@TouchEdgeGestureManager@@QEAAXXZ @ 0x1800FB118 (-DelayInitialize@TouchEdgeGestureManager@@QEAAXXZ.c)
 *     ??1TouchEdgeGestureManager@@UEAA@XZ @ 0x1800FB4D8 (--1TouchEdgeGestureManager@@UEAA@XZ.c)
 *     ?get_strong@?$implements@VTouchEdgeGripperHost@@UIInspectable@Foundation@Windows@winrt@@@winrt@@QEAA?AU?$com_ptr@VTouchEdgeGripperHost@@@2@XZ @ 0x1801ED2D4 (-get_strong@-$implements@VTouchEdgeGripperHost@@UIInspectable@Foundation@Windows@winrt@@@winrt@@.c)
 *     ??1?$com_ptr@VTouchEdgeGripperHost@@@winrt@@QEAA@XZ @ 0x1802D18F4 (--1-$com_ptr@VTouchEdgeGripperHost@@@winrt@@QEAA@XZ.c)
 *     _lambda_7c27b082a2d594abdbf5dd9e5359180a_::_lambda_invoker_cdecl_ @ 0x180571AD0 (_lambda_7c27b082a2d594abdbf5dd9e5359180a_--_lambda_invoker_cdecl_.c)
 *     TouchEdgeGripperHost::CreateGripperWindowAsync$_ResumeCoro$1 @ 0x180572000 (TouchEdgeGripperHost--CreateGripperWindowAsync$_ResumeCoro$1.c)
 *     TouchEdgeGripperHost::DismissGripperWindowAsync$_ResumeCoro$1 @ 0x180572590 (TouchEdgeGripperHost--DismissGripperWindowAsync$_ResumeCoro$1.c)
 *     ?EnsureXamlHostThreadStarted@TouchEdgeGripperHost@@AEAAXAEBV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@@Z @ 0x1805729E8 (-EnsureXamlHostThreadStarted@TouchEdgeGripperHost@@AEAAXAEBV-$unique_any_t@V-$unique_storage@U-$.c)
 *     TouchEdgeGripperHost::HideGripperAsync$_ResumeCoro$1 @ 0x180572B50 (TouchEdgeGripperHost--HideGripperAsync$_ResumeCoro$1.c)
 *     winrt::impl::delegate_winrt::Windows::System::Threading::TimerElapsedHandler__lambda_e0b0b8eaa13602b9fabc447bd0975459___::Invoke @ 0x180572D50 (winrt--impl--delegate_winrt--Windows--System--Threading--TimerElapsedHandler__lambda_e0b0b8eaa13.c)
 *     TouchEdgeGripperHost::NotifyGripperDismissedIfNecessaryAsync$_ResumeCoro$1 @ 0x180572F60 (TouchEdgeGripperHost--NotifyGripperDismissedIfNecessaryAsync$_ResumeCoro$1.c)
 *     TouchEdgeGripperHost::NotifyGripperPressedAsync$_ResumeCoro$1 @ 0x180573180 (TouchEdgeGripperHost--NotifyGripperPressedAsync$_ResumeCoro$1.c)
 *     TouchEdgeGripperHost::ShowGripperAsync$_ResumeCoro$1 @ 0x180573370 (TouchEdgeGripperHost--ShowGripperAsync$_ResumeCoro$1.c)
 *     _winrt::WindowsUdk::UI::Shell::implementation::SearchAppActivatedEventArgs::GetDeferral_::_1_::dtor$0 @ 0x1806B37AF (_winrt--WindowsUdk--UI--Shell--implementation--SearchAppActivatedEventArgs--GetDeferral_--_1_--d.c)
 *     _winrt::Windows::Internal::Shell::implementation::MeetAndChatManager::MeetAndChatManager_::_1_::dtor$1 @ 0x1806D6F6E (_winrt--Windows--Internal--Shell--implementation--MeetAndChatManager--MeetAndChatMa_ea_1806D6F6E.c)
 *     __lambda_00799cc444f9312ab8cc556666836ecb_::operator()_winrt::Windows::UI::Composition::Internal::CompositionAnimationTriggerPartner_const_&_winrt::Windows::UI::Composition::Internal::CompositionAnimationTriggerPartnerFiredEventArgs_const_&__::_1_::dtor$0 @ 0x1806DD6CC (__lambda_00799cc444f9312ab8cc556666836ecb_--operator()_winrt--Windows--UI--Composition--Internal.c)
 *     _winrt::Windows::Internal::Shell::Animations::implementation::EdgeAnimationRelationshipManager::CreateWithShellViewCoordinatorMap_::_1_::dtor$0 @ 0x1806DD860 (_winrt--Windows--Internal--Shell--Animations--implementation--EdgeAnimationRelation_ea_1806DD860.c)
 * Callees:
 *     ?unconditional_release_ref@?$com_ptr@VTouchEdgeGripperHost@@@winrt@@AEAAXXZ @ 0x180292200 (-unconditional_release_ref@-$com_ptr@VTouchEdgeGripperHost@@@winrt@@AEAAXXZ.c)
 */

__int64 __fastcall winrt::com_ptr<ListenerWindow>::~com_ptr<ListenerWindow>(_QWORD **a1)
{
  __int64 result; // rax

  if ( *a1 )
    return winrt::com_ptr<TouchEdgeGripperHost>::unconditional_release_ref(a1);
  return result;
}
