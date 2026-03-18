/*
 * XREFs of ?xxxBroadcastImeShowStatusChange@@YAHPEAUtagWND@@H@Z @ 0x1402825B0
 * Callers:
 *     NtUserBroadcastImeShowStatusChange @ 0x140294AA0 (NtUserBroadcastImeShowStatusChange.c)
 * Callees:
 *     ?xxxNotifyImeShowStatus@@YAXPEAUtagWND@@@Z @ 0x140282EAC (-xxxNotifyImeShowStatus@@YAXPEAUtagWND@@@Z.c)
 */

__int64 __fastcall xxxBroadcastImeShowStatusChange(struct tagWND *a1, __int64 a2)
{
  if ( (*(_WORD *)(*((_QWORD *)a1 + 5) + 42LL) & 0x2FFF) == 0x2A9 )
  {
    *(_DWORD *)(W32GetUserSessionState(a1, a2) + 14304) = a2 != 0;
    xxxNotifyImeShowStatus(a1);
  }
  return 1LL;
}
