/*
 * XREFs of ?GetInputType@PointerManipulationHelper@@SA?AW4InputType@Input@Internal@UI@Windows@@W42@@Z @ 0x1801A4EB0
 * Callers:
 *     ?ProcessGesture@GestureHandler@@QEAAJAEBUGestureAnimationProperties@@W4VirtualKeyModifiers@System@Windows@@W4GestureOperationState@@@Z @ 0x18006B75C (-ProcessGesture@GestureHandler@@QEAAJAEBUGestureAnimationProperties@@W4VirtualKeyModifiers@Syste.c)
 *     ?OnInput@DragNDropProcessor@@UEAAJPEAUInputInfo@@PEAVInputContext@@PEAUContextualProcessorResponse@@@Z @ 0x18014FC80 (-OnInput@DragNDropProcessor@@UEAAJPEAUInputInfo@@PEAVInputContext@@PEAUContextualProcessorRespon.c)
 *     ?StartDrag@DragNDropProcessor@@QEAAJK_KPEAVBamoDragManagerClientProxy@@@Z @ 0x180150F14 (-StartDrag@DragNDropProcessor@@QEAAJK_KPEAVBamoDragManagerClientProxy@@@Z.c)
 *     ?StartManualDrag@DragNDropProcessor@@QEAAXKPEAVBamoManualDragAreaClientProxy@@@Z @ 0x180151390 (-StartManualDrag@DragNDropProcessor@@QEAAXKPEAVBamoManualDragAreaClientProxy@@@Z.c)
 *     ?OnHitTest@ResizeProcessor@@UEAAJPEAUHitTestInfo@@PEAVInputContext@@PEAUContextualProcessorInitialState@@@Z @ 0x1801548B0 (-OnHitTest@ResizeProcessor@@UEAAJPEAUHitTestInfo@@PEAVInputContext@@PEAUContextualProcessorIniti.c)
 *     ?OnInput@ResizeProcessor@@UEAAJPEAUInputInfo@@PEAVInputContext@@PEAUContextualProcessorResponse@@@Z @ 0x180154990 (-OnInput@ResizeProcessor@@UEAAJPEAUInputInfo@@PEAVInputContext@@PEAUContextualProcessorResponse@.c)
 *     ?OnInputDrag@EdgyProcessor@@AEAAXPEAUInputInfo@@AEAUtagPOINTER_INFO@@PEAUContextualProcessorResponse@@@Z @ 0x180157F1C (-OnInputDrag@EdgyProcessor@@AEAAXPEAUInputInfo@@AEAUtagPOINTER_INFO@@PEAUContextualProcessorResp.c)
 *     ?PopulateGestureHandler@ShellGesturesProcessor@@AEAAXAEAUHandlerContext@1@W4InputType@@AEAV?$vector@UGestureRegistration@ShellGesturesProcessor@@V?$allocator@UGestureRegistration@ShellGesturesProcessor@@@std@@@std@@@Z @ 0x18015CF00 (-PopulateGestureHandler@ShellGesturesProcessor@@AEAAXAEAUHandlerContext@1@W4InputType@@AEAV-$vec.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PointerManipulationHelper::GetInputType(int a1)
{
  __int64 result; // rax

  result = 2LL;
  if ( (a1 & 2) != 0 )
    return 1LL;
  if ( (a1 & 8) == 0 )
  {
    if ( (a1 & 0x10) != 0 )
    {
      return 4LL;
    }
    else
    {
      result = 0LL;
      if ( (a1 & 0x1000020) != 0 )
        return 8LL;
    }
  }
  return result;
}
