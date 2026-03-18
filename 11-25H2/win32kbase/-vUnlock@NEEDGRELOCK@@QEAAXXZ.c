/*
 * XREFs of ?vUnlock@NEEDGRELOCK@@QEAAXXZ @ 0x140045DD0
 * Callers:
 *     ?hbmCreateClone@@YAPEAUHBITMAP__@@PEAVSURFACE@@KK@Z @ 0x140087050 (-hbmCreateClone@@YAPEAUHBITMAP__@@PEAVSURFACE@@KK@Z.c)
 *     ?bDeleteSurface@SURFACE@@QEAAHW4_CLEANUPTYPE@@H@Z @ 0x14008D360 (-bDeleteSurface@SURFACE@@QEAAHW4_CLEANUPTYPE@@H@Z.c)
 *     GreSetMagicColors @ 0x14014DDBC (GreSetMagicColors.c)
 * Callees:
 *     ?GreReleaseSemaphoreSharedInternal@@YAXPEAUHSEMAPHORE__@@@Z @ 0x140045860 (-GreReleaseSemaphoreSharedInternal@@YAXPEAUHSEMAPHORE__@@@Z.c)
 *     EtwTraceGreLockReleaseSemaphore @ 0x140045890 (EtwTraceGreLockReleaseSemaphore.c)
 *     W32GetCurrentWin32kSessionId @ 0x140049A34 (W32GetCurrentWin32kSessionId.c)
 */

void __fastcall NEEDGRELOCK::vUnlock(struct _ERESOURCE **this)
{
  struct _ERESOURCE *v1; // rsi
  struct _KTHREAD *CurrentThread; // rbp
  __int64 v4; // rdi
  __int64 *ThreadWin32Thread; // rax
  __int64 v6; // rax
  __int64 v7; // rdi
  int CurrentWin32kSessionId; // ebx
  __int64 CurrentThreadProcess; // rax

  v1 = *this;
  if ( *this )
  {
    EtwTraceGreLockReleaseSemaphore((__int64)L"GreLock", (int)*this);
    CurrentThread = KeGetCurrentThread();
    v4 = 0LL;
    if ( !(unsigned __int8)KeIsAttachedProcess()
      || (CurrentWin32kSessionId = W32GetCurrentWin32kSessionId(),
          CurrentThreadProcess = PsGetCurrentThreadProcess(),
          CurrentWin32kSessionId == (unsigned int)PsGetProcessSessionIdEx(CurrentThreadProcess)) )
    {
      ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(CurrentThread);
      if ( ThreadWin32Thread )
        v4 = *ThreadWin32Thread;
    }
    v6 = v4 + 8;
    v7 = -v4;
    if ( (v6 & -(__int64)(v7 != 0)) != 0 && (*(_BYTE *)((v6 & -(__int64)(v7 != 0)) + 0xA))-- == 1 )
      *(_QWORD *)(v6 & -(__int64)(v7 != 0)) &= ~4uLL;
    GreReleaseSemaphoreSharedInternal(v1);
    *this = 0LL;
  }
}
