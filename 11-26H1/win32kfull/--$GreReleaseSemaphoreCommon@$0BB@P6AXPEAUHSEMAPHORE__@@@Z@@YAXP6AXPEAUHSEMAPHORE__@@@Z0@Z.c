/*
 * XREFs of ??$GreReleaseSemaphoreCommon@$0BB@P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z @ 0x140166AC8
 * Callers:
 *     ?bUnloadEUDCFont@PFTOBJ@@QEAAHPEAG@Z @ 0x140104000 (-bUnloadEUDCFont@PFTOBJ@@QEAAHPEAG@Z.c)
 *     ?GrepRemoveFontResource@@YAHPEBGKKKKPEAUtagDESIGNVECTOR@@K@Z @ 0x1401062B4 (-GrepRemoveFontResource@@YAHPEBGKKKKPEAUtagDESIGNVECTOR@@K@Z.c)
 *     GrepReleasePublicPFTSemaphoreEx @ 0x140166A90 (GrepReleasePublicPFTSemaphoreEx.c)
 *     ?bUnloadWorkhorse@PFTOBJ@@QEAAHPEAVPFF@@IK@Z @ 0x14028B4D4 (-bUnloadWorkhorse@PFTOBJ@@QEAAHPEAVPFF@@IK@Z.c)
 * Callees:
 *     W32GetCurrentWin32kSessionId @ 0x1400FC820 (W32GetCurrentWin32kSessionId.c)
 *     _guard_dispatch_icall @ 0x14034FDB0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall GreReleaseSemaphoreCommon<17,void (*)(HSEMAPHORE__ *)>(
        __int64 (__fastcall *a1)(__int64),
        __int64 a2)
{
  struct _KTHREAD *CurrentThread; // rbp
  __int64 v5; // rdi
  __int64 v6; // rcx
  __int64 *ThreadWin32Thread; // rax
  __int64 v8; // rax
  __int64 v9; // rdi
  _QWORD *v10; // rcx
  int CurrentWin32kSessionId; // ebx
  __int64 CurrentThreadProcess; // rax

  EtwTraceGreLockReleaseSemaphore(L"PublicPFT", a2);
  CurrentThread = KeGetCurrentThread();
  v5 = 0LL;
  if ( !(unsigned __int8)KeIsAttachedProcess()
    || (CurrentWin32kSessionId = W32GetCurrentWin32kSessionId(v6),
        CurrentThreadProcess = PsGetCurrentThreadProcess(),
        CurrentWin32kSessionId == (unsigned int)PsGetProcessSessionIdEx(CurrentThreadProcess)) )
  {
    ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(CurrentThread);
    if ( ThreadWin32Thread )
      v5 = *ThreadWin32Thread;
  }
  v8 = v5 + 8;
  v9 = -v5;
  v10 = (_QWORD *)(v8 & -(__int64)(v9 != 0));
  if ( v10 )
  {
    if ( (*(_BYTE *)((v8 & -(__int64)(v9 != 0)) + 0x19))-- == 1 )
      *v10 &= ~0x20000uLL;
    if ( !*v10 )
      GrepOnAllLocksReleased();
  }
  return a1(a2);
}
