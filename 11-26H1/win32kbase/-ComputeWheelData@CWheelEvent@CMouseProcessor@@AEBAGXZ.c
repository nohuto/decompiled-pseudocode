/*
 * XREFs of ?ComputeWheelData@CWheelEvent@CMouseProcessor@@AEBAGXZ @ 0x14014507C
 * Callers:
 *     ?ComputeAndDeliverMouseWheel@CMouseProcessor@@AEAAXAEBVCMouseEvent@1@@Z @ 0x140144620 (-ComputeAndDeliverMouseWheel@CMouseProcessor@@AEAAXAEBVCMouseEvent@1@@Z.c)
 *     ?WriteChunkMouseInputData@CWheelEvent@CMouseProcessor@@UEBAXPEAU_MOUSE_INPUT_DATA@@@Z @ 0x140224E70 (-WriteChunkMouseInputData@CWheelEvent@CMouseProcessor@@UEBAXPEAU_MOUSE_INPUT_DATA@@@Z.c)
 * Callees:
 *     <none>
 */

unsigned __int16 __fastcall CMouseProcessor::CWheelEvent::ComputeWheelData(
        CMouseProcessor::CWheelEvent *this,
        int a2,
        int a3)
{
  if ( (*(_DWORD *)(*((_QWORD *)this + 1) + 120LL) & 0x20000) != 0
    || !*(_DWORD *)(W32GetUserSessionState((_DWORD)this, a2, a3) + 67256) )
  {
    return *(_WORD *)(*((_QWORD *)this + 1) + 30LL);
  }
  else
  {
    return -*(_WORD *)(*((_QWORD *)this + 1) + 30LL);
  }
}
