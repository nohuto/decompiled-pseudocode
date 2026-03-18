/*
 * XREFs of GreUnlockVisRgn @ 0x140045BA0
 * Callers:
 *     xxxEnumDisplayMonitors @ 0x14003FE60 (xxxEnumDisplayMonitors.c)
 *     DestroyCacheDCEntries @ 0x140046CF0 (DestroyCacheDCEntries.c)
 *     ReleaseCacheDC @ 0x140046EA0 (ReleaseCacheDC.c)
 *     GreSuspendDirectDraw @ 0x140072B40 (GreSuspendDirectDraw.c)
 *     ?DxLddmCleanupAtProcessDestroy@@YAXK@Z @ 0x1400853A8 (-DxLddmCleanupAtProcessDestroy@@YAXK@Z.c)
 *     UserGetMonitorDC @ 0x1400A2330 (UserGetMonitorDC.c)
 *     _GetDCEx @ 0x1400A2500 (_GetDCEx.c)
 *     DestroyMonitorDCs @ 0x1400ABCF0 (DestroyMonitorDCs.c)
 *     ?GrepRestoreDCOBJ@@YAHAEAVXDCOBJ@@H@Z @ 0x1401245F0 (-GrepRestoreDCOBJ@@YAHAEAVXDCOBJ@@H@Z.c)
 *     DelayedDestroyCacheDC @ 0x1401371E0 (DelayedDestroyCacheDC.c)
 *     ?DxLddmPrimaryLockCleanUpSinglePDev@@YAXPEAVPDEVOBJ@@@Z @ 0x14013E588 (-DxLddmPrimaryLockCleanUpSinglePDev@@YAXPEAVPDEVOBJ@@@Z.c)
 *     InitUserScreen @ 0x140167940 (InitUserScreen.c)
 *     xxxUserProcessCallout @ 0x14016B6A0 (xxxUserProcessCallout.c)
 *     DestroyCacheDC @ 0x14016CCA0 (DestroyCacheDC.c)
 *     NtUserGetDC @ 0x14016FF60 (NtUserGetDC.c)
 *     ?UserProcessDestroyCallout@@YAXPEAU_W32PROCESS@@@Z @ 0x1401B5D5C (-UserProcessDestroyCallout@@YAXPEAU_W32PROCESS@@@Z.c)
 * Callees:
 *     ?GreReleaseSemaphoreSharedInternal@@YAXPEAUHSEMAPHORE__@@@Z @ 0x140045860 (-GreReleaseSemaphoreSharedInternal@@YAXPEAUHSEMAPHORE__@@@Z.c)
 *     EtwTraceGreLockReleaseSemaphore @ 0x140045890 (EtwTraceGreLockReleaseSemaphore.c)
 *     W32GetCurrentWin32kSessionId @ 0x140049A34 (W32GetCurrentWin32kSessionId.c)
 */

void __fastcall GreUnlockVisRgn(__int64 a1)
{
  struct _ERESOURCE **v1; // r15
  struct _ERESOURCE *v2; // rbp
  struct _KTHREAD *CurrentThread; // r14
  __int64 v4; // rdi
  __int64 v5; // rsi
  __int64 *ThreadWin32Thread; // rax
  __int64 v7; // rax
  __int64 v8; // rsi
  bool v9; // zf
  struct _ERESOURCE *v10; // rbp
  struct _KTHREAD *v11; // r14
  __int64 v12; // rsi
  __int64 *v13; // rax
  __int64 v14; // rax
  __int64 v15; // rsi
  struct _ERESOURCE *v16; // rsi
  struct _KTHREAD *v17; // rbp
  __int64 *v18; // rax
  __int64 v19; // rax
  __int64 v20; // rdi
  int CurrentWin32kSessionId; // ebx
  __int64 CurrentThreadProcess; // rax
  int v23; // ebx
  __int64 v24; // rax
  int v25; // ebx
  __int64 v26; // rax

  v1 = *(struct _ERESOURCE ***)(W32GetSessionState(a1) + 88);
  v2 = *v1;
  EtwTraceGreLockReleaseSemaphore((__int64)L"DCVisRgn", *(_DWORD *)v1 + 728);
  CurrentThread = KeGetCurrentThread();
  v4 = 0LL;
  v5 = 0LL;
  if ( !(unsigned __int8)KeIsAttachedProcess()
    || (CurrentWin32kSessionId = W32GetCurrentWin32kSessionId(),
        CurrentThreadProcess = PsGetCurrentThreadProcess(),
        CurrentWin32kSessionId == (unsigned int)PsGetProcessSessionIdEx(CurrentThreadProcess)) )
  {
    ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(CurrentThread);
    if ( ThreadWin32Thread )
      v5 = *ThreadWin32Thread;
  }
  v7 = v5 + 8;
  v8 = -v5;
  if ( (v7 & -(__int64)(v8 != 0)) != 0 )
  {
    v9 = (*(_BYTE *)((v7 & -(__int64)(v8 != 0)) + 0xB))-- == 1;
    if ( v9 )
      *(_QWORD *)(v7 & -(__int64)(v8 != 0)) &= ~8uLL;
  }
  GreReleaseSemaphoreSharedInternal(v2 + 7);
  v10 = *v1;
  EtwTraceGreLockReleaseSemaphore((__int64)L"GreLock", *(_DWORD *)v1 + 1144);
  v11 = KeGetCurrentThread();
  v12 = 0LL;
  if ( !(unsigned __int8)KeIsAttachedProcess()
    || (v23 = W32GetCurrentWin32kSessionId(),
        v24 = PsGetCurrentThreadProcess(),
        v23 == (unsigned int)PsGetProcessSessionIdEx(v24)) )
  {
    v13 = (__int64 *)PsGetThreadWin32Thread(v11);
    if ( v13 )
      v12 = *v13;
  }
  v14 = v12 + 8;
  v15 = -v12;
  if ( (v14 & -(__int64)(v15 != 0)) != 0 )
  {
    v9 = (*(_BYTE *)((v14 & -(__int64)(v15 != 0)) + 0xA))-- == 1;
    if ( v9 )
      *(_QWORD *)(v14 & -(__int64)(v15 != 0)) &= ~4uLL;
  }
  GreReleaseSemaphoreSharedInternal(v10 + 11);
  v16 = *v1;
  EtwTraceGreLockReleaseSemaphore((__int64)L"DynamicModeChange", *(_DWORD *)v1 + 624);
  v17 = KeGetCurrentThread();
  if ( !(unsigned __int8)KeIsAttachedProcess()
    || (v25 = W32GetCurrentWin32kSessionId(),
        v26 = PsGetCurrentThreadProcess(),
        v25 == (unsigned int)PsGetProcessSessionIdEx(v26)) )
  {
    v18 = (__int64 *)PsGetThreadWin32Thread(v17);
    if ( v18 )
      v4 = *v18;
  }
  v19 = v4 + 8;
  v20 = -v4;
  if ( (v19 & -(__int64)(v20 != 0)) != 0 )
  {
    v9 = (*(_BYTE *)((v19 & -(__int64)(v20 != 0)) + 9))-- == 1;
    if ( v9 )
      *(_QWORD *)(v19 & -(__int64)(v20 != 0)) &= ~2uLL;
  }
  GreReleaseSemaphoreSharedInternal(v16 + 6);
}
