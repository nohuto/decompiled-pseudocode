/*
 * XREFs of ?GetAtom@CInputQueueProp@@MEAAGXZ @ 0x1401F7880
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CInputQueueProp::GetAtom(CInputQueueProp *this, __int64 a2)
{
  return *(unsigned __int16 *)(W32GetUserSessionState(this, a2) + 42256);
}
