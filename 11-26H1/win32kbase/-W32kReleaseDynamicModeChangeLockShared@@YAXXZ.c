/*
 * XREFs of ?W32kReleaseDynamicModeChangeLockShared@@YAXXZ @ 0x140058980
 * Callers:
 *     <none>
 * Callees:
 *     ?GreReleaseSemaphoreSharedInternal@@YAXPEAUHSEMAPHORE__@@@Z @ 0x14001B1C0 (-GreReleaseSemaphoreSharedInternal@@YAXPEAUHSEMAPHORE__@@@Z.c)
 *     W32GetCurrentWin32kSessionId @ 0x1400584BC (W32GetCurrentWin32kSessionId.c)
 *     McTemplateK0pz_EtwWriteTransfer @ 0x1401A1F74 (McTemplateK0pz_EtwWriteTransfer.c)
 */

void __fastcall W32kReleaseDynamicModeChangeLockShared(__int64 a1)
{
  __int64 v1; // rdi
  struct _ERESOURCE **v2; // rcx
  int v3; // r8d
  struct _ERESOURCE *v4; // rsi
  struct _KTHREAD *CurrentThread; // rbp
  __int64 v6; // rcx
  __int64 *ThreadWin32Thread; // rax
  __int64 v8; // rax
  __int64 v9; // rdi
  int CurrentWin32kSessionId; // ebx
  __int64 CurrentThreadProcess; // rax

  v1 = 0LL;
  v2 = *(struct _ERESOURCE ***)(W32GetSessionState(a1) + 88);
  v4 = *v2;
  if ( HIDWORD(WPP_MAIN_CB.Queue.Wcb.DeviceContext) && (Microsoft_Windows_Win32kEnableBits & 0x10) != 0 )
    McTemplateK0pz_EtwWriteTransfer(
      (_DWORD)v2,
      (unsigned int)&LockRelease,
      v3,
      (_DWORD)v4 + 624,
      (__int64)L"DynamicModeChange");
  CurrentThread = KeGetCurrentThread();
  if ( !(unsigned __int8)KeIsAttachedProcess()
    || (CurrentWin32kSessionId = W32GetCurrentWin32kSessionId(v6),
        CurrentThreadProcess = PsGetCurrentThreadProcess(),
        CurrentWin32kSessionId == (unsigned int)PsGetProcessSessionIdEx(CurrentThreadProcess)) )
  {
    ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(CurrentThread);
    if ( ThreadWin32Thread )
      v1 = *ThreadWin32Thread;
  }
  v8 = v1 + 8;
  v9 = -v1;
  if ( (v8 & -(__int64)(v9 != 0)) != 0 && (*(_BYTE *)((v8 & -(__int64)(v9 != 0)) + 9))-- == 1 )
    *(_QWORD *)(v8 & -(__int64)(v9 != 0)) &= ~2uLL;
  GreReleaseSemaphoreSharedInternal(v4 + 6);
}
