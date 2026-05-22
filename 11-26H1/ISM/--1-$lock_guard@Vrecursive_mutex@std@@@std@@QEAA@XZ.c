/*
 * XREFs of ??1?$lock_guard@Vrecursive_mutex@std@@@std@@QEAA@XZ @ 0x180074D70
 * Callers:
 *     _DWMCursorBroker::GetCursor_::_1_::dtor$0 @ 0x1801D4044 (_DWMCursorBroker--GetCursor_--_1_--dtor$0.c)
 *     _DWMCursorBroker::SetCursorPosition_::_1_::dtor$0 @ 0x1801D4102 (_DWMCursorBroker--SetCursorPosition_--_1_--dtor$0.c)
 *     _CursorNotificationProcessor::ProcessPositionChangedNotification_::_1_::dtor$0 @ 0x1801D4114 (_CursorNotificationProcessor--ProcessPositionChangedNotification_--_1_--dtor$0.c)
 *     _PointerInputMediator::OnForwardedToGestureTargeting_::_1_::dtor$0 @ 0x1801D4266 (_PointerInputMediator--OnForwardedToGestureTargeting_--_1_--dtor$0.c)
 *     _DWMCursorBroker::Initialize_::_1_::dtor$0 @ 0x1801D6682 (_DWMCursorBroker--Initialize_--_1_--dtor$0.c)
 *     _DWMCursorBroker::OnSystemContextNotification_::_1_::dtor$0 @ 0x1801D7A7A (_DWMCursorBroker--OnSystemContextNotification_--_1_--dtor$0.c)
 *     _DWMCursorBroker::GetClosestInteractiveBounds_::_1_::dtor$0 @ 0x1801D7C5F (_DWMCursorBroker--GetClosestInteractiveBounds_--_1_--dtor$0.c)
 *     _DockDeviceCollection::OnDeviceAttach_::_1_::dtor$3 @ 0x1801D9BEE (_DockDeviceCollection--OnDeviceAttach_--_1_--dtor$3.c)
 *     _CallOnThreadExit::CallOnThreadExitStatic_::_1_::dtor$0 @ 0x1801DB0E9 (_CallOnThreadExit--CallOnThreadExitStatic_--_1_--dtor$0.c)
 *     _CallOnThreadExit::Register_::_1_::dtor$1 @ 0x1801DB10D (_CallOnThreadExit--Register_--_1_--dtor$1.c)
 *     _DWMCursorBroker::OnTargetChanged_::_1_::dtor$0 @ 0x1801DD660 (_DWMCursorBroker--OnTargetChanged_--_1_--dtor$0.c)
 * Callees:
 *     <none>
 */

int __fastcall std::lock_guard<std::recursive_mutex>::~lock_guard<std::recursive_mutex>(_Mtx_t *a1)
{
  return _Mtx_unlock(*a1);
}
