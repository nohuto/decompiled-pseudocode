/*
 * XREFs of ??1?$ComPtr@VMPCRemoteStateManager@@@WRL@Microsoft@@QEAA@XZ @ 0x1800991E8
 * Callers:
 *     _DWMInputRouter::DWMInputRouter_::_1_::dtor$16 @ 0x1801D5149 (_DWMInputRouter--DWMInputRouter_--_1_--dtor$16.c)
 *     _AnimationDataProvider::GetBamoDataSourceStub_::_1_::dtor$0 @ 0x1801D79AF (_AnimationDataProvider--GetBamoDataSourceStub_--_1_--dtor$0.c)
 *     _MPC3DStateHelper::MPC3DStateHelper_::_1_::dtor$6 @ 0x1801D7F26 (_MPC3DStateHelper--MPC3DStateHelper_--_1_--dtor$6.c)
 *     _AnimationDataProvider::CreateDataSource_::_1_::dtor$0 @ 0x1801DAC0B (_AnimationDataProvider--CreateDataSource_--_1_--dtor$0.c)
 *     _AnimationDataProvider::GetDataSourceId_::_1_::dtor$0 @ 0x1801DACF5 (_AnimationDataProvider--GetDataSourceId_--_1_--dtor$0.c)
 *     _std::pair_unsigned_long_const__EdgyProcessor::EdgyDragMessageInfo_::pair_unsigned_long_const__EdgyProcessor::EdgyDragMessageInfo__std::tuple_unsigned_long_const_&__std::tuple___0__::_1_::dtor$2 @ 0x1801DB4BB (_std--pair_unsigned_long_const__EdgyProcessor--EdgyDragMessageInfo_--pair_unsigned__ea_1801DB4BB.c)
 *     _std::pair_unsigned_long_const__DragNDropProcessor::MessageInfo_::pair_unsigned_long_const__DragNDropProcessor::MessageInfo__std::tuple_unsigned_long_const_&__std::tuple___0__::_1_::dtor$3 @ 0x1801DB4D1 (_std--pair_unsigned_long_const__DragNDropProcessor--MessageInfo_--pair_unsigned_long_const__Drag.c)
 *     _DragNDropProcessor::CancelDrag_::_1_::dtor$0 @ 0x1801DB66B (_DragNDropProcessor--CancelDrag_--_1_--dtor$0.c)
 *     _EdgyProcessor::FeedAnimationDataIfNeeded_::_1_::dtor$0 @ 0x1801DB67D (_EdgyProcessor--FeedAnimationDataIfNeeded_--_1_--dtor$0.c)
 *     _ResizeProcessor::CancelResize_::_1_::dtor$0 @ 0x1801DB6E0 (_ResizeProcessor--CancelResize_--_1_--dtor$0.c)
 *     _DragNDropProcessor::HitTest_::_1_::dtor$6 @ 0x1801DB716 (_DragNDropProcessor--HitTest_--_1_--dtor$6.c)
 *     _DragNDropProcessor::SetupInteractionContext_::_1_::dtor$1 @ 0x1801DB782 (_DragNDropProcessor--SetupInteractionContext_--_1_--dtor$1.c)
 *     _EdgyProcessor::StartAnimation_::_1_::dtor$1 @ 0x1801DB794 (_EdgyProcessor--StartAnimation_--_1_--dtor$1.c)
 *     _ResizeProcessor::GetControllerForManualResize_::_1_::dtor$4 @ 0x1801DB7A6 (_ResizeProcessor--GetControllerForManualResize_--_1_--dtor$4.c)
 *     _EdgyProcessor::CancelDrag_::_1_::dtor$0 @ 0x1801DB7EE (_EdgyProcessor--CancelDrag_--_1_--dtor$0.c)
 *     _ResizeProcessor::FeedAnimationDataIfNeeded_::_1_::dtor$0 @ 0x1801DB8F5 (_ResizeProcessor--FeedAnimationDataIfNeeded_--_1_--dtor$0.c)
 *     _ResizeProcessor::StartAnimation_::_1_::dtor$0 @ 0x1801DB92B (_ResizeProcessor--StartAnimation_--_1_--dtor$0.c)
 *     _ResizeProcessor::StartAnimation_::_1_::dtor$1 @ 0x1801DB93D (_ResizeProcessor--StartAnimation_--_1_--dtor$1.c)
 *     _ResizeProcessor::StartGestureRecognition_::_1_::dtor$0 @ 0x1801DB94F (_ResizeProcessor--StartGestureRecognition_--_1_--dtor$0.c)
 *     _EdgyProcessor::StartGestureRecognition_::_1_::dtor$1 @ 0x1801DBAF1 (_EdgyProcessor--StartGestureRecognition_--_1_--dtor$1.c)
 *     _EdgyProcessor::StartAnimation_::_1_::dtor$0 @ 0x1801DBB39 (_EdgyProcessor--StartAnimation_--_1_--dtor$0.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall Microsoft::WRL::ComPtr<MPCRemoteStateManager>::~ComPtr<MPCRemoteStateManager>(__int64 *a1)
{
  return Microsoft::WRL::ComPtr<DataProviderRegistrarProxy>::InternalRelease(a1);
}
