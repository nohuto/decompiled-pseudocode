/*
 * XREFs of ??1MLOCKOBJ@@QEAA@XZ @ 0x140045EA4
 * Callers:
 *     pProcessDfbSurfacesInternal @ 0x1400700D0 (pProcessDfbSurfacesInternal.c)
 *     ?GrepSelectBitmap@@YA?AVGSBResult@@AEAVXDCOBJ@@PEAUHBITMAP__@@W4GSBOptions@@@Z @ 0x140177760 (-GrepSelectBitmap@@YA-AVGSBResult@@AEAVXDCOBJ@@PEAUHBITMAP__@@W4GSBOptions@@@Z.c)
 * Callees:
 *     ?GreReleaseSemaphoreSharedInternal@@YAXPEAUHSEMAPHORE__@@@Z @ 0x140045860 (-GreReleaseSemaphoreSharedInternal@@YAXPEAUHSEMAPHORE__@@@Z.c)
 *     EtwTraceGreLockReleaseSemaphore @ 0x140045890 (EtwTraceGreLockReleaseSemaphore.c)
 *     W32GetCurrentWin32kSessionId @ 0x140049A34 (W32GetCurrentWin32kSessionId.c)
 */

void __fastcall MLOCKOBJ::~MLOCKOBJ(MLOCKOBJ *this)
{
  __int64 v1; // rdi
  __int64 v2; // rsi
  struct _KTHREAD *CurrentThread; // rbp
  __int64 *ThreadWin32Thread; // rax
  __int64 v5; // rax
  __int64 v6; // rdi
  int CurrentWin32kSessionId; // ebx
  __int64 CurrentThreadProcess; // rax

  v1 = 0LL;
  if ( *(_DWORD *)this )
  {
    v2 = **(_QWORD **)(W32GetSessionState(this) + 88);
    EtwTraceGreLockReleaseSemaphore((__int64)L"Hmgr", v2 + 1512);
    CurrentThread = KeGetCurrentThread();
    if ( !(unsigned __int8)KeIsAttachedProcess()
      || (CurrentWin32kSessionId = W32GetCurrentWin32kSessionId(),
          CurrentThreadProcess = PsGetCurrentThreadProcess(),
          CurrentWin32kSessionId == (unsigned int)PsGetProcessSessionIdEx(CurrentThreadProcess)) )
    {
      ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(CurrentThread);
      if ( ThreadWin32Thread )
        v1 = *ThreadWin32Thread;
    }
    v5 = v1 + 8;
    v6 = -v1;
    if ( (v5 & -(__int64)(v6 != 0)) != 0 && (*(_BYTE *)((v5 & -(__int64)(v6 != 0)) + 0x1C))-- == 1 )
      *(_QWORD *)(v5 & -(__int64)(v6 != 0)) &= ~0x100000uLL;
    GreReleaseSemaphoreSharedInternal((struct _ERESOURCE *)(v2 + 1512));
  }
}
