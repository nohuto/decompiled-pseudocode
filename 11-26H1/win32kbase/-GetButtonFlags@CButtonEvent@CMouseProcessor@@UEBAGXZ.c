/*
 * XREFs of ?GetButtonFlags@CButtonEvent@CMouseProcessor@@UEBAGXZ @ 0x140166F60
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

unsigned __int16 __fastcall CMouseProcessor::CButtonEvent::GetButtonFlags(CMouseProcessor::CButtonEvent *this)
{
  return *(_WORD *)(*((_QWORD *)this + 1) + 28LL) & 0xF3FF;
}
