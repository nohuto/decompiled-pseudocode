/*
 * XREFs of ?GetButtonData@CWheelEvent@CMouseProcessor@@UEBAGXZ @ 0x140185EC0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CMouseProcessor::CWheelEvent::GetButtonData(CMouseProcessor::CWheelEvent *this)
{
  return *((unsigned __int16 *)this + 16);
}
