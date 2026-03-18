/*
 * XREFs of ??$GreReleaseSemaphoreCommon@$0L@P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z @ 0x1400586B8
 * Callers:
 *     GreUnlockVisRgnPublish @ 0x140058680 (GreUnlockVisRgnPublish.c)
 *     EngUpdateDeviceSurface @ 0x1401F1910 (EngUpdateDeviceSurface.c)
 * Callees:
 *     W32GetCurrentWin32kSessionId @ 0x1400584BC (W32GetCurrentWin32kSessionId.c)
 *     McTemplateK0pz_EtwWriteTransfer @ 0x1401A1F74 (McTemplateK0pz_EtwWriteTransfer.c)
 *     _guard_dispatch_icall @ 0x14024BC70 (_guard_dispatch_icall.c)
 */

__int64 __fastcall GreReleaseSemaphoreCommon<11,void (*)(HSEMAPHORE__ *)>(
        __int64 (__fastcall *a1)(__int64),
        __int64 a2,
        int a3)
{
  __int64 v3; // rdi
  struct _KTHREAD *CurrentThread; // rbp
  __int64 v7; // rcx
  __int64 *ThreadWin32Thread; // rax
  __int64 v9; // rax
  __int64 v10; // rdi
  int CurrentWin32kSessionId; // ebx
  __int64 CurrentThreadProcess; // rax

  v3 = 0LL;
  if ( HIDWORD(WPP_MAIN_CB.Queue.Wcb.DeviceContext) && (Microsoft_Windows_Win32kEnableBits & 0x10) != 0 )
    McTemplateK0pz_EtwWriteTransfer((_DWORD)a1, (unsigned int)&LockRelease, a3, a2, (__int64)L"VisRgnPublish");
  CurrentThread = KeGetCurrentThread();
  if ( !(unsigned __int8)KeIsAttachedProcess()
    || (CurrentWin32kSessionId = W32GetCurrentWin32kSessionId(v7),
        CurrentThreadProcess = PsGetCurrentThreadProcess(),
        CurrentWin32kSessionId == (unsigned int)PsGetProcessSessionIdEx(CurrentThreadProcess)) )
  {
    ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(CurrentThread);
    if ( ThreadWin32Thread )
      v3 = *ThreadWin32Thread;
  }
  v9 = v3 + 8;
  v10 = -v3;
  if ( (v9 & -(__int64)(v10 != 0)) != 0 && (*(_BYTE *)((v9 & -(__int64)(v10 != 0)) + 0x13))-- == 1 )
    *(_QWORD *)(v9 & -(__int64)(v10 != 0)) &= ~0x800uLL;
  return a1(a2);
}
