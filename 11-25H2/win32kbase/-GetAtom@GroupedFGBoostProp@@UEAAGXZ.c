/*
 * XREFs of ?GetAtom@GroupedFGBoostProp@@UEAAGXZ @ 0x1401A5D10
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall GroupedFGBoostProp::GetAtom(GroupedFGBoostProp *this, __int64 a2)
{
  return *(unsigned __int16 *)(W32GetUserSessionState(this, a2) + 42252);
}
