/*
 * XREFs of ??$GreReleaseSemaphoreExclusive@$04PEAVRFONT@@@@YAXPEAVRFONT@@@Z @ 0x1400DA758
 * Callers:
 *     ?UMPDReleaseRFONTSem@@YAHAEAVRFONTOBJ@@PEAVUMPDOBJ@@PEAK2PEAPEAH@Z @ 0x1400DA83C (-UMPDReleaseRFONTSem@@YAHAEAVRFONTOBJ@@PEAVUMPDOBJ@@PEAK2PEAPEAH@Z.c)
 *     ?vInitEUDC@RFONTOBJ@@QEAAXAEAVUDCOBJ@@@Z @ 0x140262338 (-vInitEUDC@RFONTOBJ@@QEAAXAEAVUDCOBJ@@@Z.c)
 *     ?vInitEUDCRemote@RFONTOBJ@@QEAAXAEAVUDCOBJ@@@Z @ 0x140262AA0 (-vInitEUDCRemote@RFONTOBJ@@QEAAXAEAVUDCOBJ@@@Z.c)
 * Callees:
 *     W32GetCurrentWin32kSessionId @ 0x1400D8E2C (W32GetCurrentWin32kSessionId.c)
 */

void __fastcall GreReleaseSemaphoreExclusive<5,RFONT *>(__int64 a1)
{
  HSEMAPHORE v1; // rsi
  struct _KTHREAD *CurrentThread; // rbp
  __int64 v3; // rdi
  __int64 *ThreadWin32Thread; // rax
  __int64 v5; // rax
  __int64 v6; // rdi
  _QWORD *v7; // rdx
  int CurrentWin32kSessionId; // ebx
  __int64 CurrentThreadProcess; // rax

  v1 = *(HSEMAPHORE *)(a1 + 504);
  EtwTraceGreLockReleaseSemaphore(L"RFONT_Cache", v1);
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
    if ( (*(_BYTE *)((v5 & -(__int64)(v6 != 0)) + 0xD))-- == 1 )
      *v7 &= ~0x20uLL;
    if ( !*v7 )
      GrepOnAllLocksReleased();
  }
  GreReleaseSemaphoreExclusiveInternal(v1);
}
