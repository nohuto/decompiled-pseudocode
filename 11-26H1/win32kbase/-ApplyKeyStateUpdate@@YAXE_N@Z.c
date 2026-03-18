/*
 * XREFs of ?ApplyKeyStateUpdate@@YAXE_N@Z @ 0x14021E144
 * Callers:
 *     ?ivHandleKeyboardAsyncKeyStatePacket@CBaseInput@@AEAA?AW4IVHandlerResult@@PEAXPEAURawInputManagerObject@@@Z @ 0x14021EB50 (-ivHandleKeyboardAsyncKeyStatePacket@CBaseInput@@AEAA-AW4IVHandlerResult@@PEAXPEAURawInputManage.c)
 * Callees:
 *     UpdateAsyncKeyState @ 0x14008A330 (UpdateAsyncKeyState.c)
 *     UpdateRawKeyState @ 0x140148288 (UpdateRawKeyState.c)
 */

void __fastcall ApplyKeyStateUpdate(unsigned __int8 a1, unsigned __int8 a2, int a3)
{
  int v5; // edx
  int v6; // ecx
  int v7; // r8d
  __int64 UserSessionState; // rax
  __int64 v9; // r8
  __int64 v10; // rdx
  __int64 v11; // r9

  UpdateRawKeyState(a1, a2, a3);
  UserSessionState = W32GetUserSessionState(v6, v5, v7);
  LOBYTE(v9) = a2;
  LOBYTE(v10) = a1;
  UpdateAsyncKeyState(*(_QWORD *)(UserSessionState + 18928), v10, v9, v11);
}
