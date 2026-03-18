/*
 * XREFs of ??$GrepReleaseLockValidate@$01@@YAXXZ @ 0x14006BBF4
 * Callers:
 *     GreUpdateSpriteVisRgn @ 0x1400384E0 (GreUpdateSpriteVisRgn.c)
 *     ?vSynchronizeDriver@@YAXK@Z @ 0x14006B94C (-vSynchronizeDriver@@YAXK@Z.c)
 *     ??$GreReleaseSemaphoreExclusive@$01@@YAXXZ @ 0x1401D02B8 (--$GreReleaseSemaphoreExclusive@$01@@YAXXZ.c)
 * Callees:
 *     W32GetCurrentWin32kSessionId @ 0x1400FC820 (W32GetCurrentWin32kSessionId.c)
 */

void GrepReleaseLockValidate<2>()
{
  struct _KTHREAD *CurrentThread; // rsi
  __int64 v1; // rdi
  __int64 *ThreadWin32Thread; // rax
  __int64 v3; // rax
  __int64 v4; // rdi
  _QWORD *v5; // rcx
  int CurrentWin32kSessionId; // ebx
  __int64 CurrentThreadProcess; // rax

  CurrentThread = KeGetCurrentThread();
  v1 = 0LL;
  if ( !(unsigned __int8)KeIsAttachedProcess()
    || (CurrentWin32kSessionId = W32GetCurrentWin32kSessionId(),
        CurrentThreadProcess = PsGetCurrentThreadProcess(),
        CurrentWin32kSessionId == (unsigned int)PsGetProcessSessionIdEx(CurrentThreadProcess)) )
  {
    ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(CurrentThread);
    if ( ThreadWin32Thread )
      v1 = *ThreadWin32Thread;
  }
  v3 = v1 + 8;
  v4 = -v1;
  v5 = (_QWORD *)(v3 & -(__int64)(v4 != 0));
  if ( v5 )
  {
    if ( (*(_BYTE *)((v3 & -(__int64)(v4 != 0)) + 0xA))-- == 1 )
      *v5 &= ~4uLL;
    if ( !*v5 )
      GrepOnAllLocksReleased();
  }
}
