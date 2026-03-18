/*
 * XREFs of ??$GrepReleasePushLockCommon@$0A@$0A@P6AXPEAVW32_PUSH_LOCK@@K@Z@@YAXP6AXPEAVW32_PUSH_LOCK@@K@Z0@Z @ 0x140071E5C
 * Callers:
 *     ??0EUDCCountRegion@@QEAA@AEAUGLOBALS@Font@Gre@@@Z @ 0x140282670 (--0EUDCCountRegion@@QEAA@AEAUGLOBALS@Font@Gre@@@Z.c)
 * Callees:
 *     ?W32ReleasePushLockSharedEx@@YAXPEAVW32_PUSH_LOCK@@K@Z @ 0x140071870 (-W32ReleasePushLockSharedEx@@YAXPEAVW32_PUSH_LOCK@@K@Z.c)
 *     W32GetCurrentWin32kSessionId @ 0x1400FC820 (W32GetCurrentWin32kSessionId.c)
 */

void __fastcall GrepReleasePushLockCommon<0,0,void (*)(W32_PUSH_LOCK *,unsigned long)>(
        __int64 a1,
        struct W32_PUSH_LOCK *a2)
{
  struct _KTHREAD *CurrentThread; // rsi
  __int64 v3; // rdi
  __int64 *ThreadWin32Thread; // rax
  __int64 v5; // rax
  __int64 v6; // rdi
  _QWORD *v7; // rcx
  int CurrentWin32kSessionId; // ebx
  __int64 CurrentThreadProcess; // rax

  W32ReleasePushLockSharedEx(a2, 2LL);
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
  v7 = (_QWORD *)(v5 & -(__int64)(v6 != 0));
  if ( v7 )
  {
    if ( (*(_BYTE *)((v5 & -(__int64)(v6 != 0)) + 8))-- == 1 )
      *v7 &= ~1uLL;
    if ( !*v7 )
      GrepOnAllLocksReleased();
  }
}
