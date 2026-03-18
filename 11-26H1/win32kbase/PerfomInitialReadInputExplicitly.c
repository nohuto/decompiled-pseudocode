/*
 * XREFs of PerfomInitialReadInputExplicitly @ 0x14018F3BC
 * Callers:
 *     UserKSTInitialize @ 0x140181AD0 (UserKSTInitialize.c)
 * Callees:
 *     ?Read@CBaseInput@@QEAAJXZ @ 0x1400976E0 (-Read@CBaseInput@@QEAAJXZ.c)
 */

__int64 __fastcall PerfomInitialReadInputExplicitly(int a1, int a2, int a3)
{
  __int64 v3; // rbx
  __int64 UserSessionState; // rax

  v3 = a1;
  UserSessionState = W32GetUserSessionState(a1, a2, a3);
  return CBaseInput::Read(*(CBaseInput **)(UserSessionState + 48 * v3 + 3136));
}
