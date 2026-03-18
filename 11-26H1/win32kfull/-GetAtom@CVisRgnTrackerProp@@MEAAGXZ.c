/*
 * XREFs of ?GetAtom@CVisRgnTrackerProp@@MEAAGXZ @ 0x14020B1C0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CVisRgnTrackerProp::GetAtom(CVisRgnTrackerProp *this, __int64 a2)
{
  return *(unsigned __int16 *)(W32GetUserSessionState(this, a2) + 42288);
}
