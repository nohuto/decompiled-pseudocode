/*
 * XREFs of PerfomInitialReadInputExplicitly @ 0x1401A08FC
 * Callers:
 *     UserKSTInitialize @ 0x140219140 (UserKSTInitialize.c)
 * Callees:
 *     ?Read@CBaseInput@@QEAAJXZ @ 0x14014A440 (-Read@CBaseInput@@QEAAJXZ.c)
 */

__int64 __fastcall PerfomInitialReadInputExplicitly(__int64 a1, __int64 a2)
{
  __int64 v2; // rbx
  __int64 UserSessionState; // rax

  v2 = (int)a1;
  UserSessionState = W32GetUserSessionState(a1, a2);
  return CBaseInput::Read(*(CBaseInput **)(UserSessionState + 48 * v2 + 3136));
}
