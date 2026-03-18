/*
 * XREFs of ??$GrepReleaseLockValidate@$06@@YAXXZ @ 0x14001D800
 * Callers:
 *     GreAddBitmapD3DDirtyRgn @ 0x14001C31C (GreAddBitmapD3DDirtyRgn.c)
 *     GreSfmGetDirtyRgn @ 0x14001D1F8 (GreSfmGetDirtyRgn.c)
 *     GreGetDxSharedSurface @ 0x14001D3F4 (GreGetDxSharedSurface.c)
 *     ??1?$SEMOBJEXORSHARED@$06@@QEAA@XZ @ 0x140038CFC (--1-$SEMOBJEXORSHARED@$06@@QEAA@XZ.c)
 * Callees:
 *     W32GetCurrentWin32kSessionId @ 0x1400FC820 (W32GetCurrentWin32kSessionId.c)
 */

void GrepReleaseLockValidate<7>()
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
    if ( (*(_BYTE *)((v3 & -(__int64)(v4 != 0)) + 0xF))-- == 1 )
      *v5 &= ~0x80uLL;
    if ( !*v5 )
      GrepOnAllLocksReleased();
  }
}
