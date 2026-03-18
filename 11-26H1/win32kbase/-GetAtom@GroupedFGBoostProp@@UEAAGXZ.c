/*
 * XREFs of ?GetAtom@GroupedFGBoostProp@@UEAAGXZ @ 0x1401962D0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall GroupedFGBoostProp::GetAtom(GroupedFGBoostProp *this, int a2, int a3)
{
  return *(unsigned __int16 *)(W32GetUserSessionState((_DWORD)this, a2, a3) + 42280);
}
