/*
 * XREFs of ?ExtendedBehaviorEnabled@ShellWindowManagement@@YA_NK@Z @ 0x14021D978
 * Callers:
 *     NtUserNotifyWinEvent @ 0x140043200 (NtUserNotifyWinEvent.c)
 *     NtUserSetWindowPos @ 0x14025CDA0 (NtUserSetWindowPos.c)
 * Callees:
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140036890 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 */

char __fastcall ShellWindowManagement::ExtendedBehaviorEnabled(ShellWindowManagement *this)
{
  int v1; // ebx
  struct tagTHREADINFO *v2; // rax
  char v3; // dl
  __int64 v4; // rax

  v1 = (int)this;
  v2 = PtiCurrent((__int64)this);
  v3 = 0;
  v4 = *((_QWORD *)v2 + 61);
  if ( v4 )
    return (v1 & *(_DWORD *)(v4 + 336) & 0xFF000000) != 0;
  return v3;
}
