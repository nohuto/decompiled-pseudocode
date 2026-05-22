/*
 * XREFs of ??1?$unique_ptr@VDragGestureTracker@@U?$default_delete@VDragGestureTracker@@@std@@@std@@QEAA@XZ @ 0x18014D95C
 * Callers:
 *     ??1MessageInfo@DragNDropProcessor@@QEAA@XZ @ 0x18014DA74 (--1MessageInfo@DragNDropProcessor@@QEAA@XZ.c)
 *     ?SetupInteractionContext@DragNDropProcessor@@AEAAXKW4InputType@@PEAUHitTestResult@@UtagPOINT@@@Z @ 0x180150A20 (-SetupInteractionContext@DragNDropProcessor@@AEAAXKW4InputType@@PEAUHitTestResult@@UtagPOINT@@@Z.c)
 *     ?StartDrag@DragNDropProcessor@@QEAAJK_KPEAVBamoDragManagerClientProxy@@@Z @ 0x180150F14 (-StartDrag@DragNDropProcessor@@QEAAJK_KPEAVBamoDragManagerClientProxy@@@Z.c)
 *     ?StartManualDrag@DragNDropProcessor@@QEAAXKPEAVBamoManualDragAreaClientProxy@@@Z @ 0x180151390 (-StartManualDrag@DragNDropProcessor@@QEAAXKPEAVBamoManualDragAreaClientProxy@@@Z.c)
 *     ??1MessageInfo@ResizeProcessor@@QEAA@XZ @ 0x1801537FC (--1MessageInfo@ResizeProcessor@@QEAA@XZ.c)
 *     ?StartGestureRecognition@ResizeProcessor@@AEAAXPEAUHitTestResult@@K@Z @ 0x180155594 (-StartGestureRecognition@ResizeProcessor@@AEAAXPEAUHitTestResult@@K@Z.c)
 *     ?StartManualResize@ResizeProcessor@@QEAAJKW4InputResizeRegion@Input@Internal@UI@Windows@@PEAVBamoManualResizeAreaClientProxy@@@Z @ 0x180155724 (-StartManualResize@ResizeProcessor@@QEAAJKW4InputResizeRegion@Input@Internal@UI@Windows@@PEAVBam.c)
 *     ?StartResize@ResizeProcessor@@QEAAJKPEAVBamoResizeControllerClientProxy@@@Z @ 0x1801559D0 (-StartResize@ResizeProcessor@@QEAAJKPEAVBamoResizeControllerClientProxy@@@Z.c)
 *     ??R?$default_delete@VEdgyRecognizer@@@std@@QEBAXPEAVEdgyRecognizer@@@Z @ 0x180156AB8 (--R-$default_delete@VEdgyRecognizer@@@std@@QEBAXPEAVEdgyRecognizer@@@Z.c)
 *     ??0EdgyRecognizer@@QEAA@PEAVBamoEdgyGestureRecognitionConfigurationProxy@@@Z @ 0x180159180 (--0EdgyRecognizer@@QEAA@PEAVBamoEdgyGestureRecognitionConfigurationProxy@@@Z.c)
 *     _std::pair_unsigned_long_const__DragNDropProcessor::MessageInfo_::pair_unsigned_long_const__DragNDropProcessor::MessageInfo__std::tuple_unsigned_long_const_&__std::tuple___0__::_1_::dtor$6 @ 0x1801DB4E7 (_std--pair_unsigned_long_const__DragNDropProcessor--MessageInfo_--pair_unsigned_lon_ea_1801DB4E7.c)
 *     _EdgyRecognizer::EdgyRecognizer_::_1_::dtor$0 @ 0x1801DBB4B (_EdgyRecognizer--EdgyRecognizer_--_1_--dtor$0.c)
 * Callees:
 *     ??R?$default_delete@VDragGestureTracker@@@std@@QEBAXPEAVDragGestureTracker@@@Z @ 0x18014DC80 (--R-$default_delete@VDragGestureTracker@@@std@@QEBAXPEAVDragGestureTracker@@@Z.c)
 */

__int64 __fastcall std::unique_ptr<DragGestureTracker>::~unique_ptr<DragGestureTracker>(_QWORD *a1)
{
  __int64 result; // rax

  if ( *a1 )
    return std::default_delete<DragGestureTracker>::operator()();
  return result;
}
