/*
 * XREFs of ?GreReleasePushLockShared@@YAXPEAVW32_PUSH_LOCK@@@Z @ 0x140057650
 * Callers:
 *     ?SetCachedDpiScaleValue@DC@@QEAAXJ@Z @ 0x140039950 (-SetCachedDpiScaleValue@DC@@QEAAXJ@Z.c)
 *     ?GetFirstLSurf@SURFACE@@QEAAPEAVSFMLOGICALSURFACE@@XZ @ 0x1400572C0 (-GetFirstLSurf@SURFACE@@QEAAPEAVSFMLOGICALSURFACE@@XZ.c)
 * Callees:
 *     W32GetCurrentWin32kSessionId @ 0x1400584BC (W32GetCurrentWin32kSessionId.c)
 */

void __fastcall GreReleasePushLockShared(struct W32_PUSH_LOCK *a1)
{
  struct _KTHREAD *CurrentThread; // rbp
  __int64 v3; // rdi
  __int64 *ThreadWin32Thread; // rax
  __int64 v5; // rax
  __int64 v6; // rdi
  int CurrentWin32kSessionId; // ebx
  __int64 CurrentThreadProcess; // rax

  CurrentThread = KeGetCurrentThread();
  v3 = 0LL;
  if ( !(unsigned __int8)KeIsAttachedProcess()
    || (CurrentWin32kSessionId = W32GetCurrentWin32kSessionId(),
        CurrentThreadProcess = PsGetCurrentThreadProcess(),
        CurrentWin32kSessionId == (unsigned int)PsGetProcessSessionIdEx(CurrentThreadProcess)) )
  {
    ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(CurrentThread);
    if ( ThreadWin32Thread )
      v3 = *ThreadWin32Thread;
  }
  v5 = v3 + 8;
  v6 = -v3;
  if ( (v5 & -(__int64)(v6 != 0)) != 0 && (*(_BYTE *)((v5 & -(__int64)(v6 != 0)) + 0x1E))-- == 1 )
    *(_QWORD *)(v5 & -(__int64)(v6 != 0)) &= ~0x2000000000uLL;
  ExReleasePushLockSharedEx(a1, 0LL);
  KeLeaveCriticalRegion();
}
