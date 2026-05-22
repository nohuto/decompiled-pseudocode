/*
 * XREFs of ?GetKeyModifiers@PointerManipulationHelper@@SA?AW4VirtualKeyModifiers@System@Windows@@PEAUInputInfo@@@Z @ 0x1800985D4
 * Callers:
 *     ?OnPointerInfoFrame@GestureTracker@@QEAA_NPEAUPointerInputInfo@@@Z @ 0x18007841C (-OnPointerInfoFrame@GestureTracker@@QEAA_NPEAUPointerInputInfo@@@Z.c)
 *     ?OnInput@DragNDropProcessor@@UEAAJPEAUInputInfo@@PEAVInputContext@@PEAUContextualProcessorResponse@@@Z @ 0x18014FC80 (-OnInput@DragNDropProcessor@@UEAAJPEAUInputInfo@@PEAVInputContext@@PEAUContextualProcessorRespon.c)
 *     ?OnInputDrag@EdgyProcessor@@AEAAXPEAUInputInfo@@AEAUtagPOINTER_INFO@@PEAUContextualProcessorResponse@@@Z @ 0x180157F1C (-OnInputDrag@EdgyProcessor@@AEAAXPEAUInputInfo@@AEAUtagPOINTER_INFO@@PEAUContextualProcessorResp.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PointerManipulationHelper::GetKeyModifiers(__int64 a1)
{
  int v1; // edx
  __int64 result; // rax

  v1 = *(_DWORD *)(a1 + 232);
  result = (v1 & 0x11) != 0;
  if ( (v1 & 0x22) != 0 )
    result = (unsigned int)result | 4;
  if ( (v1 & 0x44) != 0 )
    result = (unsigned int)result | 2;
  if ( (v1 & 0x88) != 0 )
    return (unsigned int)result | 8;
  return result;
}
