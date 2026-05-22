/*
 * XREFs of ?_Subscript@?$_Deque_val@U?$_Deque_simple_types@UPointerFrame@PointerInputMediator@@@std@@@std@@QEBAAEBUPointerFrame@PointerInputMediator@@_K@Z @ 0x18008B294
 * Callers:
 *     ?OnNewFrame@PointerInputMediator@@SAXPEBUtagMANIPULATION_INPUT_INFO@@@Z @ 0x180010060 (-OnNewFrame@PointerInputMediator@@SAXPEBUtagMANIPULATION_INPUT_INFO@@@Z.c)
 *     ?OnForwardedToGestureTargeting@PointerInputMediator@@SAXPEBU_MIT_INPUT_INTEROP_MESSAGE@@@Z @ 0x180011888 (-OnForwardedToGestureTargeting@PointerInputMediator@@SAXPEBU_MIT_INPUT_INTEROP_MESSAGE@@@Z.c)
 *     ??$_Emplace_back_internal@UPointerFrame@PointerInputMediator@@@?$deque@UPointerFrame@PointerInputMediator@@V?$allocator@UPointerFrame@PointerInputMediator@@@std@@@std@@AEAAX$$QEAUPointerFrame@PointerInputMediator@@@Z @ 0x180059B9C (--$_Emplace_back_internal@UPointerFrame@PointerInputMediator@@@-$deque@UPointerFrame@PointerInpu.c)
 *     ??D?$_Deque_unchecked_const_iterator@V?$_Deque_val@U?$_Deque_simple_types@UPointerFrame@PointerInputMediator@@@std@@@std@@@std@@QEBAAEBUPointerFrame@PointerInputMediator@@XZ @ 0x1800628FC (--D-$_Deque_unchecked_const_iterator@V-$_Deque_val@U-$_Deque_simple_types@UPointerFrame@PointerI.c)
 *     ?PerformLowPassFilterStabilization@RayStabilizer@@AEAAXAEAVRayStabilizationResult@@@Z @ 0x18006AE74 (-PerformLowPassFilterStabilization@RayStabilizer@@AEAAXAEAVRayStabilizationResult@@@Z.c)
 *     ??$_Emplace_front_internal@AEAVRayStabilizationResult@@@?$deque@VRayStabilizationResult@@V?$allocator@VRayStabilizationResult@@@std@@@std@@AEAAXAEAVRayStabilizationResult@@@Z @ 0x180073038 (--$_Emplace_front_internal@AEAVRayStabilizationResult@@@-$deque@VRayStabilizationResult@@V-$allo.c)
 *     ??$_Emplace_back_internal@AEAPEBUtagMANIPULATION_INPUT_INFO@@@?$deque@UPointerFrame@PointerInputMediator@@V?$allocator@UPointerFrame@PointerInputMediator@@@std@@@std@@AEAAXAEAPEBUtagMANIPULATION_INPUT_INFO@@@Z @ 0x18007FB8C (--$_Emplace_back_internal@AEAPEBUtagMANIPULATION_INPUT_INFO@@@-$deque@UPointerFrame@PointerInput.c)
 *     ?RoutePointers@PointerInputMediator@@SAXIPEAXIPEAIPEBUtagTELEMETRY_POINTER_FRAME_TIMES@@_NW4FrameRoutingSource@@@Z @ 0x18008A9A0 (-RoutePointers@PointerInputMediator@@SAXIPEAXIPEAIPEBUtagTELEMETRY_POINTER_FRAME_TIMES@@_NW4Fram.c)
 *     ??$_Emplace_back_internal@UGetInputReportResult@@@?$deque@UGetInputReportResult@@V?$allocator@UGetInputReportResult@@@std@@@std@@AEAAX$$QEAUGetInputReportResult@@@Z @ 0x1800DC908 (--$_Emplace_back_internal@UGetInputReportResult@@@-$deque@UGetInputReportResult@@V-$allocator@UG.c)
 *     ??$_Emplace_back_internal@AEBUKeyboardEvent@@@?$deque@UKeyboardEvent@@V?$allocator@UKeyboardEvent@@@std@@@std@@AEAAXAEBUKeyboardEvent@@@Z @ 0x1800F55E8 (--$_Emplace_back_internal@AEBUKeyboardEvent@@@-$deque@UKeyboardEvent@@V-$allocator@UKeyboardEven.c)
 *     ??$_Emplace_back_internal@AEBU_MIT_KEYBOARD_OVERRIDER_INPUT_MESSAGE@@@?$deque@U_MIT_KEYBOARD_OVERRIDER_INPUT_MESSAGE@@V?$allocator@U_MIT_KEYBOARD_OVERRIDER_INPUT_MESSAGE@@@std@@@std@@AEAAXAEBU_MIT_KEYBOARD_OVERRIDER_INPUT_MESSAGE@@@Z @ 0x1800F56E8 (--$_Emplace_back_internal@AEBU_MIT_KEYBOARD_OVERRIDER_INPUT_MESSAGE@@@-$deque@U_MIT_KEYBOARD_OVE.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall std::_Deque_val<std::_Deque_simple_types<PointerInputMediator::PointerFrame>>::_Subscript(
        __int64 a1,
        __int64 a2)
{
  return *(_QWORD *)(*(_QWORD *)(a1 + 8) + 8 * (a2 & (*(_QWORD *)(a1 + 16) - 1LL)));
}
