/*
 * XREFs of ??$GreReleaseSemaphoreCommon@$0O@P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z @ 0x14001D35C
 * Callers:
 *     ?bLock@DEVLOCKOBJ@@QEAAHAEAVXDCOBJ@@H@Z @ 0x14001B740 (-bLock@DEVLOCKOBJ@@QEAAHAEAVXDCOBJ@@H@Z.c)
 *     DxgkEngVisRgnUniq @ 0x14013D620 (DxgkEngVisRgnUniq.c)
 *     EngUpdateDeviceSurface @ 0x1401F1910 (EngUpdateDeviceSurface.c)
 * Callees:
 *     ?GreReleaseSemaphoreSharedInternal@@YAXPEAUHSEMAPHORE__@@@Z @ 0x14001B1C0 (-GreReleaseSemaphoreSharedInternal@@YAXPEAUHSEMAPHORE__@@@Z.c)
 *     W32GetCurrentWin32kSessionId @ 0x1400584BC (W32GetCurrentWin32kSessionId.c)
 *     McTemplateK0pz_EtwWriteTransfer @ 0x1401A1F74 (McTemplateK0pz_EtwWriteTransfer.c)
 */

void __fastcall GreReleaseSemaphoreCommon<14,void (*)(HSEMAPHORE__ *)>(int a1, struct _ERESOURCE *a2, int a3)
{
  __int64 v3; // rdi
  struct _KTHREAD *CurrentThread; // rbp
  __int64 *ThreadWin32Thread; // rax
  __int64 v7; // rax
  __int64 v8; // rdi
  int CurrentWin32kSessionId; // ebx
  __int64 CurrentThreadProcess; // rax

  v3 = 0LL;
  if ( HIDWORD(WPP_MAIN_CB.Queue.Wcb.DeviceContext) && (Microsoft_Windows_Win32kEnableBits & 0x10) != 0 )
    McTemplateK0pz_EtwWriteTransfer(a1, (unsigned int)&LockRelease, a3, (_DWORD)a2, (__int64)L"VisRgnUniqueness");
  CurrentThread = KeGetCurrentThread();
  if ( !(unsigned __int8)KeIsAttachedProcess()
    || (CurrentWin32kSessionId = W32GetCurrentWin32kSessionId(),
        CurrentThreadProcess = PsGetCurrentThreadProcess(),
        CurrentWin32kSessionId == (unsigned int)PsGetProcessSessionIdEx(CurrentThreadProcess)) )
  {
    ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(CurrentThread);
    if ( ThreadWin32Thread )
      v3 = *ThreadWin32Thread;
  }
  v7 = v3 + 8;
  v8 = -v3;
  if ( (v7 & -(__int64)(v8 != 0)) != 0 && (*(_BYTE *)((v7 & -(__int64)(v8 != 0)) + 0x16))-- == 1 )
    *(_QWORD *)(v7 & -(__int64)(v8 != 0)) &= ~0x4000uLL;
  GreReleaseSemaphoreSharedInternal(a2);
}
