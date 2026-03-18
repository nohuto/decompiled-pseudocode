/*
 * XREFs of ?vUnlockIfNeeded@NEEDDYNAMICMODECHANGESHARELOCK@@QEAAXXZ @ 0x140043ED8
 * Callers:
 *     GreGetDeviceCaps @ 0x140043070 (GreGetDeviceCaps.c)
 *     NtGdiGetDeviceCaps @ 0x140043D20 (NtGdiGetDeviceCaps.c)
 *     DrvGetDisplayConfigBufferSizesAndLeaveUserCrit @ 0x140047A1C (DrvGetDisplayConfigBufferSizesAndLeaveUserCrit.c)
 *     DrvQueryDisplayConfigAndLeaveUserCrit @ 0x140047BB4 (DrvQueryDisplayConfigAndLeaveUserCrit.c)
 *     ?bDeleteSurface@SURFACE@@QEAAHW4_CLEANUPTYPE@@H@Z @ 0x14008D360 (-bDeleteSurface@SURFACE@@QEAAHW4_CLEANUPTYPE@@H@Z.c)
 *     ?vDelete@XDCOBJ@@QEAAXK@Z @ 0x1400D9D40 (-vDelete@XDCOBJ@@QEAAXK@Z.c)
 *     NtGdiGetDeviceCapsAll @ 0x1400E76C0 (NtGdiGetDeviceCapsAll.c)
 * Callees:
 *     ?GreReleaseSemaphoreSharedInternal@@YAXPEAUHSEMAPHORE__@@@Z @ 0x140045860 (-GreReleaseSemaphoreSharedInternal@@YAXPEAUHSEMAPHORE__@@@Z.c)
 *     EtwTraceGreLockReleaseSemaphore @ 0x140045890 (EtwTraceGreLockReleaseSemaphore.c)
 *     W32GetCurrentWin32kSessionId @ 0x140049A34 (W32GetCurrentWin32kSessionId.c)
 */

void __fastcall NEEDDYNAMICMODECHANGESHARELOCK::vUnlockIfNeeded(__int64 **this)
{
  __int64 v2; // rbp
  struct _KTHREAD *CurrentThread; // r14
  __int64 v4; // rdi
  __int64 *ThreadWin32Thread; // rax
  __int64 v6; // rax
  __int64 v7; // rdi
  int CurrentWin32kSessionId; // ebx
  __int64 CurrentThreadProcess; // rax

  if ( *((_BYTE *)this + 8) )
  {
    v2 = **this;
    EtwTraceGreLockReleaseSemaphore(L"DynamicModeChange", v2 + 624);
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
    if ( (v6 & -(__int64)(v7 != 0)) != 0 && (*(_BYTE *)((v6 & -(__int64)(v7 != 0)) + 9))-- == 1 )
      *(_QWORD *)(v6 & -(__int64)(v7 != 0)) &= ~2uLL;
    GreReleaseSemaphoreSharedInternal((HSEMAPHORE)(v2 + 624));
    *((_BYTE *)this + 8) = 0;
  }
}
