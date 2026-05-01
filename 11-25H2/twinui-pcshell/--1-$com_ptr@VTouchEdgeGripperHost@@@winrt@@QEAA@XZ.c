/*
 * XREFs of ??1?$com_ptr@VTouchEdgeGripperHost@@@winrt@@QEAA@XZ @ 0x1802D18F4
 * Callers:
 *     _TouchEdgeGestureManager::TouchEdgeGestureManager_::_1_::dtor$7 @ 0x1806A99B9 (_TouchEdgeGestureManager--TouchEdgeGestureManager_--_1_--dtor$7.c)
 *     __lambda_7c27b082a2d594abdbf5dd9e5359180a_::_lambda_invoker_cdecl__::_1_::dtor$0 @ 0x1806CF03F (__lambda_7c27b082a2d594abdbf5dd9e5359180a_--_lambda_invoker_cdecl__--_1_--dtor$0.c)
 *     _TouchEdgeGripperHost::CreateGripperWindowAsync$_ResumeCoro$1_::_1_::dtor$1 @ 0x1806CF0D7 (_TouchEdgeGripperHost--CreateGripperWindowAsync$_ResumeCoro$1_--_1_--dtor$1.c)
 *     _TouchEdgeGripperHost::DismissGripperWindowAsync$_ResumeCoro$1_::_1_::dtor$1 @ 0x1806CF30A (_TouchEdgeGripperHost--DismissGripperWindowAsync$_ResumeCoro$1_--_1_--dtor$1.c)
 *     _TouchEdgeGripperHost::DismissGripperWindowAsync$_ResumeCoro$1_::_1_::dtor$5 @ 0x1806CF3A9 (_TouchEdgeGripperHost--DismissGripperWindowAsync$_ResumeCoro$1_--_1_--dtor$5.c)
 *     _TouchEdgeGripperHost::EnsureXamlHostThreadStarted_::_1_::dtor$0 @ 0x1806CF4D5 (_TouchEdgeGripperHost--EnsureXamlHostThreadStarted_--_1_--dtor$0.c)
 *     _TouchEdgeGripperHost::ShowGripperAsync$_ResumeCoro$1_::_1_::dtor$0 @ 0x1806CF52F (_TouchEdgeGripperHost--ShowGripperAsync$_ResumeCoro$1_--_1_--dtor$0.c)
 *     _winrt::impl::delegate_winrt::Windows::System::Threading::TimerElapsedHandler__lambda_e0b0b8eaa13602b9fabc447bd0975459___::Invoke_::_1_::dtor$0 @ 0x1806CF587 (_winrt--impl--delegate_winrt--Windows--System--Threading--TimerElapsedHandler__lambda_e0b0b8eaa1.c)
 *     _TouchEdgeGripperHost::NotifyGripperPressedAsync$_ResumeCoro$1_::_1_::dtor$0 @ 0x1806CF599 (_TouchEdgeGripperHost--NotifyGripperPressedAsync$_ResumeCoro$1_--_1_--dtor$0.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall winrt::com_ptr<TouchEdgeGripperHost>::~com_ptr<TouchEdgeGripperHost>(_QWORD **a1)
{
  return winrt::com_ptr<ListenerWindow>::~com_ptr<ListenerWindow>(a1);
}
