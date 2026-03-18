/*
 * XREFs of ?GetAtom@CHwndTargetProp@@MEAAGXZ @ 0x14021E250
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CHwndTargetProp::GetAtom(CHwndTargetProp *this, __int64 a2)
{
  return *(unsigned __int16 *)(W32GetUserSessionState(this, a2) + 42270);
}
