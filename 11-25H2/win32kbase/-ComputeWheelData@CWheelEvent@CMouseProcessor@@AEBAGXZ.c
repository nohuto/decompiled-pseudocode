/*
 * XREFs of ?ComputeWheelData@CWheelEvent@CMouseProcessor@@AEBAGXZ @ 0x14021FCB4
 * Callers:
 *     ?WriteChunkMouseInputData@CWheelEvent@CMouseProcessor@@UEBAXPEAU_MOUSE_INPUT_DATA@@@Z @ 0x140192A60 (-WriteChunkMouseInputData@CWheelEvent@CMouseProcessor@@UEBAXPEAU_MOUSE_INPUT_DATA@@@Z.c)
 *     ?ComputeAndDeliverMouseWheel@CMouseProcessor@@AEAAXAEBVCMouseEvent@1@@Z @ 0x14021FA30 (-ComputeAndDeliverMouseWheel@CMouseProcessor@@AEAAXAEBVCMouseEvent@1@@Z.c)
 * Callees:
 *     <none>
 */

unsigned __int16 __fastcall CMouseProcessor::CWheelEvent::ComputeWheelData(
        CMouseProcessor::CWheelEvent *this,
        __int64 a2)
{
  if ( (*(_DWORD *)(*((_QWORD *)this + 1) + 120LL) & 0x20000) != 0
    || !*(_DWORD *)(W32GetUserSessionState(this, a2) + 67264) )
  {
    return *(_WORD *)(*((_QWORD *)this + 1) + 30LL);
  }
  else
  {
    return -*(_WORD *)(*((_QWORD *)this + 1) + 30LL);
  }
}
