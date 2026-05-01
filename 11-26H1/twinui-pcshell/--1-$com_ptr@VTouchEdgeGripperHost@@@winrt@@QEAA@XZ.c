/*
 * XREFs of ??1?$com_ptr@VTouchEdgeGripperHost@@@winrt@@QEAA@XZ @ 0x1802BB56C
 * Callers:
 *     _TouchEdgeGestureManager::TouchEdgeGestureManager_::_1_::dtor$7 @ 0x1806CFB0F (_TouchEdgeGestureManager--TouchEdgeGestureManager_--_1_--dtor$7.c)
 *     __lambda_e0b0b8eaa13602b9fabc447bd0975459_::operator()_winrt::Windows::System::Threading::ThreadPoolTimer_const_&__::_1_::dtor$0 @ 0x1806F778C (__lambda_e0b0b8eaa13602b9fabc447bd0975459_--operator()_winrt--Windows--System--Threading--Thread.c)
 *     _TouchEdgeGripperHost::CreateGripperWindowAsync$_ResumeCoro$1_::_1_::dtor$1 @ 0x1806F781E (_TouchEdgeGripperHost--CreateGripperWindowAsync$_ResumeCoro$1_--_1_--dtor$1.c)
 *     _TouchEdgeGripperHost::DismissGripperWindowAsync$_ResumeCoro$1_::_1_::dtor$1 @ 0x1806F79CE (_TouchEdgeGripperHost--DismissGripperWindowAsync$_ResumeCoro$1_--_1_--dtor$1.c)
 *     _TouchEdgeGripperHost::DismissGripperWindowAsync$_ResumeCoro$1_::_1_::dtor$5 @ 0x1806F7A5B (_TouchEdgeGripperHost--DismissGripperWindowAsync$_ResumeCoro$1_--_1_--dtor$5.c)
 *     _TouchEdgeGripperHost::EnsureXamlHostThreadStarted_::_1_::dtor$0 @ 0x1806F7B28 (_TouchEdgeGripperHost--EnsureXamlHostThreadStarted_--_1_--dtor$0.c)
 *     _TouchEdgeGripperHost::HideGripperAsync$_ResumeCoro$1_::_1_::dtor$0 @ 0x1806F7B82 (_TouchEdgeGripperHost--HideGripperAsync$_ResumeCoro$1_--_1_--dtor$0.c)
 *     _TouchEdgeGripperHost::NotifyGripperPressedAsync$_ResumeCoro$1_::_1_::dtor$0 @ 0x1806F7C49 (_TouchEdgeGripperHost--NotifyGripperPressedAsync$_ResumeCoro$1_--_1_--dtor$0.c)
 *     _TouchEdgeGripperHost::ShowGripperAsync$_ResumeCoro$1_::_1_::dtor$0 @ 0x1806F7D53 (_TouchEdgeGripperHost--ShowGripperAsync$_ResumeCoro$1_--_1_--dtor$0.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall winrt::com_ptr<TouchEdgeGripperHost>::~com_ptr<TouchEdgeGripperHost>(_QWORD *a1)
{
  return winrt::com_ptr<ListenerWindow>::~com_ptr<ListenerWindow>(a1);
}
