/*
 * XREFs of ?_Getblock@?$deque@UPointerFrame@PointerInputMediator@@V?$allocator@UPointerFrame@PointerInputMediator@@@std@@@std@@AEBA_J_K@Z @ 0x1800C7554
 * Callers:
 *     ??$_Emplace_back_internal@UPointerFrame@PointerInputMediator@@@?$deque@UPointerFrame@PointerInputMediator@@V?$allocator@UPointerFrame@PointerInputMediator@@@std@@@std@@AEAAX$$QEAUPointerFrame@PointerInputMediator@@@Z @ 0x180059B9C (--$_Emplace_back_internal@UPointerFrame@PointerInputMediator@@@-$deque@UPointerFrame@PointerInpu.c)
 *     ??$_Emplace_front_internal@AEAVRayStabilizationResult@@@?$deque@VRayStabilizationResult@@V?$allocator@VRayStabilizationResult@@@std@@@std@@AEAAXAEAVRayStabilizationResult@@@Z @ 0x180073038 (--$_Emplace_front_internal@AEAVRayStabilizationResult@@@-$deque@VRayStabilizationResult@@V-$allo.c)
 *     ??$_Emplace_back_internal@AEAPEBUtagMANIPULATION_INPUT_INFO@@@?$deque@UPointerFrame@PointerInputMediator@@V?$allocator@UPointerFrame@PointerInputMediator@@@std@@@std@@AEAAXAEAPEBUtagMANIPULATION_INPUT_INFO@@@Z @ 0x18007FB8C (--$_Emplace_back_internal@AEAPEBUtagMANIPULATION_INPUT_INFO@@@-$deque@UPointerFrame@PointerInput.c)
 *     ??$_Emplace_back_internal@UGetInputReportResult@@@?$deque@UGetInputReportResult@@V?$allocator@UGetInputReportResult@@@std@@@std@@AEAAX$$QEAUGetInputReportResult@@@Z @ 0x1800DC908 (--$_Emplace_back_internal@UGetInputReportResult@@@-$deque@UGetInputReportResult@@V-$allocator@UG.c)
 *     ??$_Emplace_back_internal@AEBUKeyboardEvent@@@?$deque@UKeyboardEvent@@V?$allocator@UKeyboardEvent@@@std@@@std@@AEAAXAEBUKeyboardEvent@@@Z @ 0x1800F55E8 (--$_Emplace_back_internal@AEBUKeyboardEvent@@@-$deque@UKeyboardEvent@@V-$allocator@UKeyboardEven.c)
 *     ??$_Emplace_back_internal@AEBU_MIT_KEYBOARD_OVERRIDER_INPUT_MESSAGE@@@?$deque@U_MIT_KEYBOARD_OVERRIDER_INPUT_MESSAGE@@V?$allocator@U_MIT_KEYBOARD_OVERRIDER_INPUT_MESSAGE@@@std@@@std@@AEAAXAEBU_MIT_KEYBOARD_OVERRIDER_INPUT_MESSAGE@@@Z @ 0x1800F56E8 (--$_Emplace_back_internal@AEBU_MIT_KEYBOARD_OVERRIDER_INPUT_MESSAGE@@@-$deque@U_MIT_KEYBOARD_OVE.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall std::deque<PointerInputMediator::PointerFrame>::_Getblock(__int64 a1, __int64 a2)
{
  return a2 & (*(_QWORD *)(a1 + 16) - 1LL);
}
