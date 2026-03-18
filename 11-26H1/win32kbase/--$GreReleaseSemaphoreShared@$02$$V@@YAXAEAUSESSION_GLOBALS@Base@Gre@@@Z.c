/*
 * XREFs of ??$GreReleaseSemaphoreShared@$02$$V@@YAXAEAUSESSION_GLOBALS@Base@Gre@@@Z @ 0x14001D03C
 * Callers:
 *     ?bLock@DEVLOCKOBJ@@QEAAHAEAVXDCOBJ@@H@Z @ 0x14001B740 (-bLock@DEVLOCKOBJ@@QEAAHAEAVXDCOBJ@@H@Z.c)
 *     ?GrepUnlockVisRgn@@YAXAEAUSESSION_GLOBALS@Base@Gre@@@Z @ 0x14003B7CC (-GrepUnlockVisRgn@@YAXAEAUSESSION_GLOBALS@Base@Gre@@@Z.c)
 *     ?DxgkEngReleaseWin32kLocks@@YAXXZ @ 0x140055D70 (-DxgkEngReleaseWin32kLocks@@YAXXZ.c)
 *     ?DrvReleaseChangeDisplaySettingLocks@@YAXXZ @ 0x140187700 (-DrvReleaseChangeDisplaySettingLocks@@YAXXZ.c)
 *     GreUnlockVisRgnWithDmcLockAcquiredEx @ 0x1401F0990 (GreUnlockVisRgnWithDmcLockAcquiredEx.c)
 * Callees:
 *     ?GreReleaseSemaphoreSharedInternal@@YAXPEAUHSEMAPHORE__@@@Z @ 0x14001B1C0 (-GreReleaseSemaphoreSharedInternal@@YAXPEAUHSEMAPHORE__@@@Z.c)
 *     W32GetCurrentWin32kSessionId @ 0x1400584BC (W32GetCurrentWin32kSessionId.c)
 *     McTemplateK0pz_EtwWriteTransfer @ 0x1401A1F74 (McTemplateK0pz_EtwWriteTransfer.c)
 */

void __fastcall GreReleaseSemaphoreShared<3,>(struct _ERESOURCE **a1, __int64 a2, int a3)
{
  struct _ERESOURCE *v3; // rsi
  __int64 v4; // rdi
  struct _KTHREAD *CurrentThread; // rbp
  __int64 *ThreadWin32Thread; // rax
  __int64 v7; // rax
  __int64 v8; // rdi
  int CurrentWin32kSessionId; // ebx
  __int64 CurrentThreadProcess; // rax

  v3 = *a1;
  v4 = 0LL;
  if ( HIDWORD(WPP_MAIN_CB.Queue.Wcb.DeviceContext) && (Microsoft_Windows_Win32kEnableBits & 0x10) != 0 )
    McTemplateK0pz_EtwWriteTransfer((_DWORD)a1, (unsigned int)&LockRelease, a3, (_DWORD)v3 + 728, (__int64)L"DCVisRgn");
  CurrentThread = KeGetCurrentThread();
  if ( !(unsigned __int8)KeIsAttachedProcess()
    || (CurrentWin32kSessionId = W32GetCurrentWin32kSessionId(),
        CurrentThreadProcess = PsGetCurrentThreadProcess(),
        CurrentWin32kSessionId == (unsigned int)PsGetProcessSessionIdEx(CurrentThreadProcess)) )
  {
    ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(CurrentThread);
    if ( ThreadWin32Thread )
      v4 = *ThreadWin32Thread;
  }
  v7 = v4 + 8;
  v8 = -v4;
  if ( (v7 & -(__int64)(v8 != 0)) != 0 && (*(_BYTE *)((v7 & -(__int64)(v8 != 0)) + 0xB))-- == 1 )
    *(_QWORD *)(v7 & -(__int64)(v8 != 0)) &= ~8uLL;
  GreReleaseSemaphoreSharedInternal(v3 + 7);
}
