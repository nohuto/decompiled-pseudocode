/*
 * XREFs of ?MNSetTimerToAutoDismiss@@YAXPEAUtagMENUSTATE@@PEAUtagWND@@@Z @ 0x1402019C0
 * Callers:
 *     xxxMNMouseMove @ 0x140044310 (xxxMNMouseMove.c)
 *     xxxMenuWindowProc @ 0x140183030 (xxxMenuWindowProc.c)
 * Callees:
 *     InternalSetTimer @ 0x140019C44 (InternalSetTimer.c)
 */

void __fastcall MNSetTimerToAutoDismiss(struct tagMENUSTATE *a1, struct tagWND *a2)
{
  int v2; // eax
  __int64 UserSessionState; // rax

  v2 = *((_DWORD *)a1 + 2);
  if ( (v2 & 0x800) != 0 && (v2 & 0x1000) == 0 )
  {
    UserSessionState = W32GetUserSessionState(a1, a2);
    if ( InternalSetTimer((__int64)a2, 65529LL, 16 * *(_DWORD *)(UserSessionState + 66032), 0LL, 0, 16) )
      *((_DWORD *)a1 + 2) |= 0x1000u;
  }
}
