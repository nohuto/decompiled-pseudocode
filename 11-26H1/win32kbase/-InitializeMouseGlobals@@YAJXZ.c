/*
 * XREFs of ?InitializeMouseGlobals@@YAJXZ @ 0x14019CC00
 * Callers:
 *     ?InitializeInputGlobals@@YAJXZ @ 0x1401BCD80 (-InitializeInputGlobals@@YAJXZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall InitializeMouseGlobals(int a1, int a2, int a3)
{
  __int64 UserSessionState; // rax

  UserSessionState = W32GetUserSessionState(a1, a2, a3);
  *(_DWORD *)(UserSessionState + 14712) = 500;
  *(_DWORD *)(UserSessionState + 14716) = 1;
  *(_DWORD *)(UserSessionState + 16316) = -1;
  *(_DWORD *)(UserSessionState + 16328) = 0;
  *(_OWORD *)(UserSessionState + 16352) = (unsigned __int64)CMouseAcceleration_CreateInstance;
  *(_QWORD *)(UserSessionState + 16368) = 0LL;
  *(_OWORD *)(UserSessionState + 16376) = (unsigned __int64)CTouchpadAcceleration_CreateInstance;
  *(_QWORD *)(UserSessionState + 16392) = 1LL;
  return 0LL;
}
