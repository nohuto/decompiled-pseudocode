/*
 * XREFs of ?ExtendedBehaviorEnabled@ShellWindowManagement@@YA_NK@Z @ 0x1401EA758
 * Callers:
 *     NtUserNotifyWinEvent @ 0x14002D250 (NtUserNotifyWinEvent.c)
 *     NtUserSetWindowPos @ 0x14024EC50 (NtUserSetWindowPos.c)
 * Callees:
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140036850 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 */

char __fastcall ShellWindowManagement::ExtendedBehaviorEnabled(ShellWindowManagement *this, __int64 a2)
{
  int v2; // ebx
  struct tagTHREADINFO *v3; // rax
  char v4; // dl
  __int64 v5; // rax

  v2 = (int)this;
  v3 = PtiCurrent((__int64)this, a2);
  v4 = 0;
  v5 = *((_QWORD *)v3 + 62);
  if ( v5 )
    return (v2 & *(_DWORD *)(v5 + 336) & 0xFF000000) != 0;
  return v4;
}
