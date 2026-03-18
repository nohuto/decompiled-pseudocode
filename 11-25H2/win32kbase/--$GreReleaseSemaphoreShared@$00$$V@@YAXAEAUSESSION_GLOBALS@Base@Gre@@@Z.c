/*
 * XREFs of ??$GreReleaseSemaphoreShared@$00$$V@@YAXAEAUSESSION_GLOBALS@Base@Gre@@@Z @ 0x14004507C
 * Callers:
 *     GreGetDeviceCaps @ 0x140043070 (GreGetDeviceCaps.c)
 *     NtGdiGetDeviceCaps @ 0x140043D20 (NtGdiGetDeviceCaps.c)
 *     DxEngUnlockShareSem @ 0x1400EFA80 (DxEngUnlockShareSem.c)
 *     GreUnlockDynamicModeChange @ 0x140115770 (GreUnlockDynamicModeChange.c)
 *     GreUnlockVisRgnShared @ 0x14012AEC0 (GreUnlockVisRgnShared.c)
 *     ?DxgkEngReleaseWin32kLocks@@YAXXZ @ 0x14012D0B0 (-DxgkEngReleaseWin32kLocks@@YAXXZ.c)
 *     ?DrvReleaseChangeDisplaySettingLocks@@YAXXZ @ 0x14014BD44 (-DrvReleaseChangeDisplaySettingLocks@@YAXXZ.c)
 *     ?hCreateHDEV@@YAPEAUHDEV__@@PEAUtagGRAPHICS_DEVICE@@PEAU_DRV_NAMES@@PEAU_devicemodeW@@PEAXKKHHKPEAPEAU1@@Z @ 0x14017C714 (-hCreateHDEV@@YAPEAUHDEV__@@PEAUtagGRAPHICS_DEVICE@@PEAU_DRV_NAMES@@PEAU_devicemodeW@@PEAXKKHHKP.c)
 *     ?GrepUnlockVisRgnFast@@YAXAEAUSESSION_GLOBALS@Base@Gre@@@Z @ 0x1401C76A0 (-GrepUnlockVisRgnFast@@YAXAEAUSESSION_GLOBALS@Base@Gre@@@Z.c)
 * Callees:
 *     ?GreReleaseSemaphoreSharedInternal@@YAXPEAUHSEMAPHORE__@@@Z @ 0x140045860 (-GreReleaseSemaphoreSharedInternal@@YAXPEAUHSEMAPHORE__@@@Z.c)
 *     EtwTraceGreLockReleaseSemaphore @ 0x140045890 (EtwTraceGreLockReleaseSemaphore.c)
 *     W32GetCurrentWin32kSessionId @ 0x140049A34 (W32GetCurrentWin32kSessionId.c)
 */

void __fastcall GreReleaseSemaphoreShared<1,>(__int64 *a1)
{
  __int64 v1; // rsi
  struct _KTHREAD *CurrentThread; // rbp
  __int64 v3; // rdi
  __int64 *ThreadWin32Thread; // rax
  __int64 v5; // rax
  __int64 v6; // rdi
  int CurrentWin32kSessionId; // ebx
  __int64 CurrentThreadProcess; // rax

  v1 = *a1;
  EtwTraceGreLockReleaseSemaphore(L"DynamicModeChange", *a1 + 624);
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
  if ( (v5 & -(__int64)(v6 != 0)) != 0 && (*(_BYTE *)((v5 & -(__int64)(v6 != 0)) + 9))-- == 1 )
    *(_QWORD *)(v5 & -(__int64)(v6 != 0)) &= ~2uLL;
  GreReleaseSemaphoreSharedInternal((HSEMAPHORE)(v1 + 624));
}
