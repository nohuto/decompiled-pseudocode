/*
 * XREFs of ?GetAtom@CSwapChainProp@@MEAAGXZ @ 0x14025D7C0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CSwapChainProp::GetAtom(CSwapChainProp *this, __int64 a2)
{
  return *(unsigned __int16 *)(W32GetUserSessionState(this, a2) + 42286);
}
