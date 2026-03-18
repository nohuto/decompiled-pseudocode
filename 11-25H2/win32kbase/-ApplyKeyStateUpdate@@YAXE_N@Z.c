/*
 * XREFs of ?ApplyKeyStateUpdate@@YAXE_N@Z @ 0x14021971C
 * Callers:
 *     ?ivHandleKeyboardAsyncKeyStatePacket@CBaseInput@@AEAA?AW4IVHandlerResult@@PEAXPEAURawInputManagerObject@@@Z @ 0x14021A1F0 (-ivHandleKeyboardAsyncKeyStatePacket@CBaseInput@@AEAA-AW4IVHandlerResult@@PEAXPEAURawInputManage.c)
 * Callees:
 *     UpdateRawKeyState @ 0x1401084FC (UpdateRawKeyState.c)
 *     UpdateAsyncKeyState @ 0x14018CE40 (UpdateAsyncKeyState.c)
 */

void __fastcall ApplyKeyStateUpdate(__int64 a1, __int64 a2)
{
  char v2; // bl
  char v3; // di
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 UserSessionState; // rax
  __int64 v7; // rdx

  v2 = a2;
  v3 = a1;
  UpdateRawKeyState(a1, a2);
  UserSessionState = W32GetUserSessionState(v5, v4);
  LOBYTE(v7) = v3;
  UpdateAsyncKeyState(*(_QWORD *)(UserSessionState + 18888), v7, v2);
}
