/*
 * XREFs of GreLockVisRgn @ 0x140045F80
 * Callers:
 *     xxxEnumDisplayMonitors @ 0x14003FE60 (xxxEnumDisplayMonitors.c)
 *     DestroyCacheDCEntries @ 0x140046CF0 (DestroyCacheDCEntries.c)
 *     ReleaseCacheDC @ 0x140046EA0 (ReleaseCacheDC.c)
 *     GreSuspendDirectDraw @ 0x140072B40 (GreSuspendDirectDraw.c)
 *     ?DxLddmCleanupAtProcessDestroy@@YAXK@Z @ 0x1400853A8 (-DxLddmCleanupAtProcessDestroy@@YAXK@Z.c)
 *     GreLockVisRgnSharedOrExclusive @ 0x140089890 (GreLockVisRgnSharedOrExclusive.c)
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
 *     EtwTraceGreLockAcquireSemaphoreExclusive @ 0x14001A650 (EtwTraceGreLockAcquireSemaphoreExclusive.c)
 *     ?GreAcquireSemaphoreInternal@@YAXPEAUHSEMAPHORE__@@@Z @ 0x14001A7F0 (-GreAcquireSemaphoreInternal@@YAXPEAUHSEMAPHORE__@@@Z.c)
 *     EtwTraceGreLockAcquireSemaphoreShared @ 0x140045A00 (EtwTraceGreLockAcquireSemaphoreShared.c)
 *     EngAcquireSemaphoreShared @ 0x140045A70 (EngAcquireSemaphoreShared.c)
 *     W32GetCurrentWin32kSessionId @ 0x140049A34 (W32GetCurrentWin32kSessionId.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x140088A44 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall GreLockVisRgn(__int64 a1)
{
  _DWORD *v1; // r14
  struct _KTHREAD *CurrentThread; // rsi
  __int64 v3; // rdi
  __int64 *ThreadWin32Thread; // rax
  int v5; // esi
  __int64 *v6; // rbx
  __int64 v7; // rdx
  char v8; // cl
  struct _ERESOURCE *v9; // rbx
  struct _KTHREAD *v10; // rbp
  __int64 v11; // rdi
  __int64 *v12; // rax
  __int64 *v13; // rbx
  __int64 v14; // rdx
  char v15; // cl
  struct _ERESOURCE *v16; // rbx
  struct _KTHREAD *v17; // rbp
  __int64 v18; // rdi
  __int64 *v19; // rax
  unsigned __int64 k; // rcx
  __int64 v21; // r8
  __int64 result; // rax
  __int64 *v23; // rbx
  __int64 v24; // rdx
  int CurrentWin32kSessionId; // ebx
  __int64 CurrentThreadProcess; // rax
  int v27; // ebx
  __int64 v28; // rax
  int v29; // ebx
  __int64 v30; // rax
  int v31; // r8d
  unsigned __int64 i; // rcx
  int v33; // eax
  int v34; // eax
  int v35; // r8d
  unsigned __int64 j; // rcx
  int v37; // eax

  v1 = *(_DWORD **)(W32GetSessionState(a1) + 88);
  EtwTraceGreLockAcquireSemaphoreShared((__int64)L"DynamicModeChange", *v1 + 624);
  EngAcquireSemaphoreShared((HSEMAPHORE)(*(_QWORD *)v1 + 624LL));
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
  v5 = 37;
  v6 = (__int64 *)((v3 + 8) & -(__int64)(v3 != 0));
  if ( v6 )
  {
    v7 = *v6;
    if ( (*v6 & 0xFFFFFFFFFFFFFFFEuLL) != 0 && (*v6 & 2) == 0 )
    {
      v31 = 37;
      for ( i = 0LL; i < 0x40; ++i )
      {
        v33 = i;
        if ( !_bittest64(&v7, i) )
          v33 = v31;
        v31 = v33;
      }
      if ( v33 > 1 )
        MicrosoftTelemetryAssertTriggeredNoArgsKM(i, v7, (unsigned int)v33);
    }
    v8 = *(_BYTE *)(((v3 + 8) & -(__int64)(v3 != 0)) + 9);
    *(_BYTE *)(((v3 + 8) & -(__int64)(v3 != 0)) + 9) = v8 + 1;
    if ( !v8 )
      *v6 |= 2uLL;
  }
  v9 = *(struct _ERESOURCE **)v1;
  EtwTraceGreLockAcquireSemaphoreExclusive((__int64)L"GreLock", *v1 + 1144, 0);
  GreAcquireSemaphoreInternal(v9 + 11);
  v10 = KeGetCurrentThread();
  v11 = 0LL;
  if ( !(unsigned __int8)KeIsAttachedProcess()
    || (v27 = W32GetCurrentWin32kSessionId(),
        v28 = PsGetCurrentThreadProcess(),
        v27 == (unsigned int)PsGetProcessSessionIdEx(v28)) )
  {
    v12 = (__int64 *)PsGetThreadWin32Thread(v10);
    if ( v12 )
      v11 = *v12;
  }
  v13 = (__int64 *)((v11 + 8) & -(__int64)(v11 != 0));
  if ( v13 )
  {
    v14 = *v13;
    if ( (*v13 & 0xFFFFFFFFFFFFFFFCuLL) != 0 && (*v13 & 4) == 0 )
    {
      v35 = 37;
      for ( j = 0LL; j < 0x40; ++j )
      {
        v37 = j;
        if ( !_bittest64(&v14, j) )
          v37 = v35;
        v35 = v37;
      }
      if ( v37 > 2 )
        MicrosoftTelemetryAssertTriggeredNoArgsKM(j, v14, (unsigned int)v37);
    }
    v15 = *(_BYTE *)(((v11 + 8) & -(__int64)(v11 != 0)) + 0xA);
    *(_BYTE *)(((v11 + 8) & -(__int64)(v11 != 0)) + 0xA) = v15 + 1;
    if ( !v15 )
      *v13 |= 4uLL;
  }
  v16 = *(struct _ERESOURCE **)v1;
  EtwTraceGreLockAcquireSemaphoreExclusive((__int64)L"DCVisRgn", *v1 + 728, 0);
  GreAcquireSemaphoreInternal(v16 + 7);
  v17 = KeGetCurrentThread();
  v18 = 0LL;
  if ( !(unsigned __int8)KeIsAttachedProcess()
    || (v29 = W32GetCurrentWin32kSessionId(),
        v30 = PsGetCurrentThreadProcess(),
        v29 == (unsigned int)PsGetProcessSessionIdEx(v30)) )
  {
    v19 = (__int64 *)PsGetThreadWin32Thread(v17);
    if ( v19 )
      v18 = *v19;
  }
  result = v18 + 8;
  v23 = (__int64 *)((v18 + 8) & -(__int64)(v18 != 0));
  if ( v23 )
  {
    v24 = *v23;
    if ( (*v23 & 0xFFFFFFFFFFFFFFF8uLL) != 0 && (*v23 & 8) == 0 )
    {
      for ( k = 0LL; k < 0x40; ++k )
      {
        v34 = k;
        if ( !_bittest64(&v24, k) )
          v34 = v5;
        v5 = v34;
      }
      if ( v34 > 3 )
        MicrosoftTelemetryAssertTriggeredNoArgsKM(k, v24, v21);
    }
    LOBYTE(k) = *(_BYTE *)(((v18 + 8) & -(__int64)(v18 != 0)) + 0xB);
    result = (unsigned int)(k + 1);
    *(_BYTE *)(((v18 + 8) & -(__int64)(v18 != 0)) + 0xB) = k + 1;
    if ( !(_BYTE)k )
      *v23 |= 8uLL;
  }
  return result;
}
