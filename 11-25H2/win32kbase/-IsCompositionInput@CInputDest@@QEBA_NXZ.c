/*
 * XREFs of ?IsCompositionInput@CInputDest@@QEBA_NXZ @ 0x1400B9B64
 * Callers:
 *     ?IsIndependentInputWindow@CInputDest@@QEBA_NXZ @ 0x1400B9B10 (-IsIndependentInputWindow@CInputDest@@QEBA_NXZ.c)
 *     NtUserReportInertia @ 0x140173210 (NtUserReportInertia.c)
 *     ?SetManipulationInputTarget@CTouchProcessor@@QEAAHIIPEAIPEAXPEAUTELEMETRY_POINTER_FRAME_TIMES@@H@Z @ 0x14018900C (-SetManipulationInputTarget@CTouchProcessor@@QEAAHIIPEAIPEAXPEAUTELEMETRY_POINTER_FRAME_TIMES@@H.c)
 *     ?DetectAndApplyMouseMovePostStrategy@CMouseProcessor@@AEAAXAEBVCInputDest@@AEBUtagLOGICALPOINT@@AEBVCMoveEvent@1@PEAU_mouseCursorEvent@@@Z @ 0x14018FD48 (-DetectAndApplyMouseMovePostStrategy@CMouseProcessor@@AEAAXAEBVCInputDest@@AEBUtagLOGICALPOINT@@.c)
 *     ?PopulatePointerInfoNode@CTouchProcessor@@QEAAHPEAUCPointerInputFrame@@PEAUCPointerInfoNode@@K@Z @ 0x140205ED0 (-PopulatePointerInfoNode@CTouchProcessor@@QEAAHPEAUCPointerInputFrame@@PEAUCPointerInfoNode@@K@Z.c)
 *     ?DeliverMouseWheelToInputDest@CMouseProcessor@@AEAAXAEBVCWheelEvent@1@AEBVCInputDest@@AEBUInputDeliveryContext@1@@Z @ 0x14021FF1C (-DeliverMouseWheelToInputDest@CMouseProcessor@@AEAAXAEBVCWheelEvent@1@AEBVCInputDest@@AEBUInputD.c)
 *     ?ShouldDeliverWheelEventToInputDest@CMouseProcessor@@AEBA_NAEBVCWheelEvent@1@AEBVCInputDest@@@Z @ 0x140222284 (-ShouldDeliverWheelEventToInputDest@CMouseProcessor@@AEBA_NAEBVCWheelEvent@1@AEBVCInputDest@@@Z.c)
 * Callees:
 *     ApiSetEditionIsCompositionInputWindow @ 0x1400B9B94 (ApiSetEditionIsCompositionInputWindow.c)
 */

bool __fastcall CInputDest::IsCompositionInput(CInputDest *this)
{
  if ( *((_DWORD *)this + 23) == 2 )
    return (unsigned int)ApiSetEditionIsCompositionInputWindow(*((_QWORD *)this + 10)) == 1;
  else
    return *(_DWORD *)this != 0;
}
