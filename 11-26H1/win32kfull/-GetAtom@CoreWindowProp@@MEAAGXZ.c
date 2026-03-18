/*
 * XREFs of ?GetAtom@CoreWindowProp@@MEAAGXZ @ 0x1402E15D0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CoreWindowProp::GetAtom(CoreWindowProp *this, __int64 a2)
{
  return *(unsigned __int16 *)(W32GetUserSessionState(this, a2) + 42282);
}
