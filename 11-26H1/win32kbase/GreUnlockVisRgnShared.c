/*
 * XREFs of GreUnlockVisRgnShared @ 0x14001D450
 * Callers:
 *     <none>
 * Callees:
 *     ?GreReleaseSemaphoreSharedInternal@@YAXPEAUHSEMAPHORE__@@@Z @ 0x14001B1C0 (-GreReleaseSemaphoreSharedInternal@@YAXPEAUHSEMAPHORE__@@@Z.c)
 *     W32GetCurrentWin32kSessionId @ 0x1400584BC (W32GetCurrentWin32kSessionId.c)
 *     McTemplateK0pz_EtwWriteTransfer @ 0x1401A1F74 (McTemplateK0pz_EtwWriteTransfer.c)
 */

void __fastcall GreUnlockVisRgnShared(__int64 a1)
{
  __int64 v1; // rdi
  int v2; // ecx
  int v3; // r8d
  struct _ERESOURCE **v4; // r14
  struct _ERESOURCE *v5; // rbp
  struct _KTHREAD *CurrentThread; // r15
  __int64 v7; // rsi
  __int64 *ThreadWin32Thread; // rax
  __int64 v9; // rax
  __int64 v10; // rsi
  bool v11; // zf
  int v12; // ecx
  int v13; // r8d
  struct _ERESOURCE *v14; // rbp
  struct _KTHREAD *v15; // r15
  __int64 v16; // rsi
  __int64 *v17; // rax
  __int64 v18; // rax
  __int64 v19; // rsi
  int v20; // ecx
  int v21; // r8d
  struct _ERESOURCE *v22; // rsi
  struct _KTHREAD *v23; // rbp
  __int64 *v24; // rax
  __int64 v25; // rax
  __int64 v26; // rdi
  int CurrentWin32kSessionId; // ebx
  __int64 CurrentThreadProcess; // rax
  int v29; // ebx
  __int64 v30; // rax
  int v31; // ebx
  __int64 v32; // rax

  v1 = 0LL;
  v4 = *(struct _ERESOURCE ***)(W32GetSessionState(a1) + 88);
  v5 = *v4;
  if ( HIDWORD(WPP_MAIN_CB.Queue.Wcb.DeviceContext) && (Microsoft_Windows_Win32kEnableBits & 0x10) != 0 )
    McTemplateK0pz_EtwWriteTransfer(v2, (unsigned int)&LockRelease, v3, (_DWORD)v5 + 728, (__int64)L"DCVisRgn");
  CurrentThread = KeGetCurrentThread();
  v7 = 0LL;
  if ( !(unsigned __int8)KeIsAttachedProcess()
    || (CurrentWin32kSessionId = W32GetCurrentWin32kSessionId(),
        CurrentThreadProcess = PsGetCurrentThreadProcess(),
        CurrentWin32kSessionId == (unsigned int)PsGetProcessSessionIdEx(CurrentThreadProcess)) )
  {
    ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(CurrentThread);
    if ( ThreadWin32Thread )
      v7 = *ThreadWin32Thread;
  }
  v9 = v7 + 8;
  v10 = -v7;
  if ( (v9 & -(__int64)(v10 != 0)) != 0 )
  {
    v11 = (*(_BYTE *)((v9 & -(__int64)(v10 != 0)) + 0xB))-- == 1;
    if ( v11 )
      *(_QWORD *)(v9 & -(__int64)(v10 != 0)) &= ~8uLL;
  }
  GreReleaseSemaphoreSharedInternal(v5 + 7);
  v14 = *v4;
  if ( HIDWORD(WPP_MAIN_CB.Queue.Wcb.DeviceContext) && (Microsoft_Windows_Win32kEnableBits & 0x10) != 0 )
    McTemplateK0pz_EtwWriteTransfer(v12, (unsigned int)&LockRelease, v13, (_DWORD)v14 + 1144, (__int64)L"GreLock");
  v15 = KeGetCurrentThread();
  v16 = 0LL;
  if ( !(unsigned __int8)KeIsAttachedProcess()
    || (v29 = W32GetCurrentWin32kSessionId(),
        v30 = PsGetCurrentThreadProcess(),
        v29 == (unsigned int)PsGetProcessSessionIdEx(v30)) )
  {
    v17 = (__int64 *)PsGetThreadWin32Thread(v15);
    if ( v17 )
      v16 = *v17;
  }
  v18 = v16 + 8;
  v19 = -v16;
  if ( (v18 & -(__int64)(v19 != 0)) != 0 )
  {
    v11 = (*(_BYTE *)((v18 & -(__int64)(v19 != 0)) + 0xA))-- == 1;
    if ( v11 )
      *(_QWORD *)(v18 & -(__int64)(v19 != 0)) &= ~4uLL;
  }
  GreReleaseSemaphoreSharedInternal(v14 + 11);
  v22 = *v4;
  if ( HIDWORD(WPP_MAIN_CB.Queue.Wcb.DeviceContext) && (Microsoft_Windows_Win32kEnableBits & 0x10) != 0 )
    McTemplateK0pz_EtwWriteTransfer(
      v20,
      (unsigned int)&LockRelease,
      v21,
      (_DWORD)v22 + 624,
      (__int64)L"DynamicModeChange");
  v23 = KeGetCurrentThread();
  if ( !(unsigned __int8)KeIsAttachedProcess()
    || (v31 = W32GetCurrentWin32kSessionId(),
        v32 = PsGetCurrentThreadProcess(),
        v31 == (unsigned int)PsGetProcessSessionIdEx(v32)) )
  {
    v24 = (__int64 *)PsGetThreadWin32Thread(v23);
    if ( v24 )
      v1 = *v24;
  }
  v25 = v1 + 8;
  v26 = -v1;
  if ( (v25 & -(__int64)(v26 != 0)) != 0 )
  {
    v11 = (*(_BYTE *)((v25 & -(__int64)(v26 != 0)) + 9))-- == 1;
    if ( v11 )
      *(_QWORD *)(v25 & -(__int64)(v26 != 0)) &= ~2uLL;
  }
  GreReleaseSemaphoreSharedInternal(v22 + 6);
}
