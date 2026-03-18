/*
 * XREFs of DecrementCompositedCount @ 0x14028796C
 * Callers:
 *     ?SetVisible@@YA_NPEAUtagWND@@W4SetVisibleOptions@@@Z @ 0x14005A4E4 (-SetVisible@@YA_NPEAUtagWND@@W4SetVisibleOptions@@@Z.c)
 *     ?DecComposited@@YAXPEAUtagWND@@@Z @ 0x1402CA070 (-DecComposited@@YAXPEAUtagWND@@@Z.c)
 * Callees:
 *     FindTimer @ 0x14001A310 (FindTimer.c)
 */

__int64 __fastcall DecrementCompositedCount(__int64 a1, __int64 a2)
{
  int v2; // ebx
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 UserSessionState; // rax
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // rax

  v2 = *(_DWORD *)(W32GetUserSessionState(a1, a2) + 43280);
  UserSessionState = W32GetUserSessionState(v4, v3);
  --*(_DWORD *)(UserSessionState + 43280);
  if ( v2 == 1 )
  {
    v8 = W32GetUserSessionState(v7, v6);
    FindTimer(*(_QWORD *)(v8 + 68472), 65525LL, 2u, 1, 0LL);
  }
  return 1LL;
}
