/*
 * XREFs of ?WriteChunkMouseInputData@CWheelEvent@CMouseProcessor@@UEBAXPEAU_MOUSE_INPUT_DATA@@@Z @ 0x140224E70
 * Callers:
 *     <none>
 * Callees:
 *     ?ComputeWheelData@CWheelEvent@CMouseProcessor@@AEBAGXZ @ 0x14014507C (-ComputeWheelData@CWheelEvent@CMouseProcessor@@AEBAGXZ.c)
 */

void __fastcall CMouseProcessor::CWheelEvent::WriteChunkMouseInputData(
        CMouseProcessor::CWheelEvent *this,
        struct _MOUSE_INPUT_DATA *a2)
{
  int v2; // r8d

  v2 = *(_WORD *)(*((_QWORD *)this + 1) + 28LL) & 0xC00;
  a2->ButtonFlags |= v2;
  a2->ButtonData = CMouseProcessor::CWheelEvent::ComputeWheelData(this, (int)a2, v2);
}
