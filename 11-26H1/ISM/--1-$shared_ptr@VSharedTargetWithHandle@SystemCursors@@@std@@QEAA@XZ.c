/*
 * XREFs of ??1?$shared_ptr@VSharedTargetWithHandle@SystemCursors@@@std@@QEAA@XZ @ 0x18006B3C8
 * Callers:
 *     ??1ShellGesturesClientProxy@@UEAA@XZ @ 0x18006B5BC (--1ShellGesturesClientProxy@@UEAA@XZ.c)
 *     _SystemCursorController2::SystemCursorController2_::_1_::dtor$2 @ 0x1801D55F3 (_SystemCursorController2--SystemCursorController2_--_1_--dtor$2.c)
 *     _ShellGesturesProcessor::SendCurrentGestureEvent_::_1_::dtor$0 @ 0x1801D7963 (_ShellGesturesProcessor--SendCurrentGestureEvent_--_1_--dtor$0.c)
 *     _HotKeyProcessor::FindRegisteredHotKey_::_1_::dtor$3 @ 0x1801D79EE (_HotKeyProcessor--FindRegisteredHotKey_--_1_--dtor$3.c)
 *     _GestureHandler::MakeCompletedCallback_::_1_::dtor$0 @ 0x1801D7A12 (_GestureHandler--MakeCompletedCallback_--_1_--dtor$0.c)
 *     _ShellGesturesProcessor::TryFindResumableAnimationTarget_::_1_::dtor$2 @ 0x1801D7BBD (_ShellGesturesProcessor--TryFindResumableAnimationTarget_--_1_--dtor$2.c)
 *     _MPCSlateDeadzoneHelper::MPCSlateDeadzoneHelper_::_1_::dtor$0 @ 0x1801D92C0 (_MPCSlateDeadzoneHelper--MPCSlateDeadzoneHelper_--_1_--dtor$0.c)
 *     __lambda_4790bba48f35d5d527bba9490b41a1e9_::operator()_::_1_::dtor$0 @ 0x1801DA614 (__lambda_4790bba48f35d5d527bba9490b41a1e9_--operator()_--_1_--dtor$0.c)
 *     _ShellGesturesProcessor::StartOperation_::_1_::dtor$0 @ 0x1801DA680 (_ShellGesturesProcessor--StartOperation_--_1_--dtor$0.c)
 *     _SystemCursor2::SetShape_::_1_::dtor$2 @ 0x1801DA73C (_SystemCursor2--SetShape_--_1_--dtor$2.c)
 *     _SystemCursor2::SetShape_::_1_::dtor$1 @ 0x1801DA78B (_SystemCursor2--SetShape_--_1_--dtor$1.c)
 *     _SystemCursor2::SystemCursor2_::_1_::dtor$0 @ 0x1801DA8CD (_SystemCursor2--SystemCursor2_--_1_--dtor$0.c)
 *     _SystemCursor2::SystemCursor2_::_1_::dtor$2 @ 0x1801DA8F5 (_SystemCursor2--SystemCursor2_--_1_--dtor$2.c)
 *     _SystemCursorShape2::SystemCursorShape2_::_1_::dtor$0 @ 0x1801DA98F (_SystemCursorShape2--SystemCursorShape2_--_1_--dtor$0.c)
 *     _HotKeyProcessor::FindRegisteredHotKey_::_1_::dtor$6 @ 0x1801DA9C9 (_HotKeyProcessor--FindRegisteredHotKey_--_1_--dtor$6.c)
 *     _GestureHandler::CancelOperation_::_1_::dtor$0 @ 0x1801DA9DB (_GestureHandler--CancelOperation_--_1_--dtor$0.c)
 *     _SystemCursorService2::CreateCursorShape_::_1_::dtor$9 @ 0x1801DA9ED (_SystemCursorService2--CreateCursorShape_--_1_--dtor$9.c)
 *     _SystemCursorService2::CreatePermanentCursors_::_1_::dtor$0 @ 0x1801DA9FF (_SystemCursorService2--CreatePermanentCursors_--_1_--dtor$0.c)
 *     _Microsoft::WRL::Details::MakeAndInitialize_VirtualHotKeyTracker_VirtualHotKeyTracker__::_1_::dtor$4 @ 0x1801DD013 (_Microsoft--WRL--Details--MakeAndInitialize_VirtualHotKeyTracker_VirtualHotKeyTrack_ea_1801DD013.c)
 *     _MPCSixDofProcessor::UpdateTouchpadDownleveling_::_1_::dtor$1 @ 0x1801DD4B4 (_MPCSixDofProcessor--UpdateTouchpadDownleveling_--_1_--dtor$1.c)
 *     _std::find_if_std::_List_iterator_std::_List_val_std::_List_simple_types_std::shared_ptr_HotKeyInfo_________lambda_7cc4ca75940c0ea695d2d6398f0fa979____::_1_::dtor$1 @ 0x1801DD740 (_std--find_if_std--_List_iterator_std--_List_val_std--_List_simple_types_std--share_ea_1801DD740.c)
 *     _HotKeyProcessor::HotKeyProcessor_::_1_::dtor$3 @ 0x1801DD790 (_HotKeyProcessor--HotKeyProcessor_--_1_--dtor$3.c)
 *     _HotKeyProcessor::DetectAndProcessHotKey_::_1_::dtor$0 @ 0x1801DD8AC (_HotKeyProcessor--DetectAndProcessHotKey_--_1_--dtor$0.c)
 *     _HotKeyProcessor::FindRegisteredHotKey_::_1_::dtor$5 @ 0x1801DD8D0 (_HotKeyProcessor--FindRegisteredHotKey_--_1_--dtor$5.c)
 *     _HotKeyProcessor::FindRegisteredHotKey_::_1_::dtor$4 @ 0x1801DD906 (_HotKeyProcessor--FindRegisteredHotKey_--_1_--dtor$4.c)
 *     _HotKeyProcessor::RegisterHotKey_::_1_::dtor$0 @ 0x1801DD918 (_HotKeyProcessor--RegisterHotKey_--_1_--dtor$0.c)
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x18006BB00 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 */

void __fastcall std::shared_ptr<SystemCursors::SharedTargetWithHandle>::~shared_ptr<SystemCursors::SharedTargetWithHandle>(
        __int64 a1)
{
  std::_Ref_count_base *v1; // rcx

  v1 = *(std::_Ref_count_base **)(a1 + 8);
  if ( v1 )
    std::_Ref_count_base::_Decref(v1);
}
