/*
 * XREFs of ??$emplace_back@UPointerFrame@PointerInputMediator@@@?$deque@UPointerFrame@PointerInputMediator@@V?$allocator@UPointerFrame@PointerInputMediator@@@std@@@std@@QEAAAEAUPointerFrame@PointerInputMediator@@$$QEAU23@@Z @ 0x18008B2EC
 * Callers:
 *     ?OnNewFrame@PointerInputMediator@@SAXPEBUtagMANIPULATION_INPUT_INFO@@@Z @ 0x180010060 (-OnNewFrame@PointerInputMediator@@SAXPEBUtagMANIPULATION_INPUT_INFO@@@Z.c)
 *     ?RoutePointers@PointerInputMediator@@SAXIPEAXIPEAIPEBUtagTELEMETRY_POINTER_FRAME_TIMES@@_NW4FrameRoutingSource@@@Z @ 0x18008A9A0 (-RoutePointers@PointerInputMediator@@SAXIPEAXIPEAIPEBUtagTELEMETRY_POINTER_FRAME_TIMES@@_NW4Fram.c)
 * Callees:
 *     ??$_Emplace_back_internal@UPointerFrame@PointerInputMediator@@@?$deque@UPointerFrame@PointerInputMediator@@V?$allocator@UPointerFrame@PointerInputMediator@@@std@@@std@@AEAAX$$QEAUPointerFrame@PointerInputMediator@@@Z @ 0x180059B9C (--$_Emplace_back_internal@UPointerFrame@PointerInputMediator@@@-$deque@UPointerFrame@PointerInpu.c)
 */

__int64 __fastcall std::deque<PointerInputMediator::PointerFrame>::emplace_back<PointerInputMediator::PointerFrame>(
        _QWORD *a1,
        __int64 a2)
{
  std::deque<PointerInputMediator::PointerFrame>::_Emplace_back_internal<PointerInputMediator::PointerFrame>(a1, a2);
  return *(_QWORD *)(a1[1] + 8 * ((a1[2] - 1LL) & (a1[4] - 1LL + a1[3])));
}
