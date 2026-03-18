/*
 * XREFs of WheaInitialize @ 0x140C32E30
 * Callers:
 *     IoInitSystemPreDrivers @ 0x140C0996C (IoInitSystemPreDrivers.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x140206F00 (KeLeaveCriticalRegion.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14029AB60 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x14029B110 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x14029BE00 (KeAbPostRelease.c)
 *     KeGetPrcb @ 0x1403B0CC0 (KeGetPrcb.c)
 *     ExfTryToWakePushLock @ 0x1403D62D0 (ExfTryToWakePushLock.c)
 *     KeBugCheckEx @ 0x1404F9280 (KeBugCheckEx.c)
 *     WheapCheckForAndReportErrorsFromPreviousSession @ 0x14064F7E4 (WheapCheckForAndReportErrorsFromPreviousSession.c)
 *     WheapCallErrorSourceInitialize @ 0x140651744 (WheapCallErrorSourceInitialize.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406A8B20 (_guard_dispatch_icall_no_overrides.c)
 *     memset_0 @ 0x1406B4D40 (memset_0.c)
 *     ExGetPrmInterface @ 0x1407AFA60 (ExGetPrmInterface.c)
 *     WheapLogInitEvent @ 0x1407B8B98 (WheapLogInitEvent.c)
 *     WheaInitializeRegChangeNotify @ 0x1407B91FC (WheaInitializeRegChangeNotify.c)
 *     WheapInitWnfCallbacks @ 0x1407B9DD4 (WheapInitWnfCallbacks.c)
 *     IoWMIRegistrationControl @ 0x1409B8940 (IoWMIRegistrationControl.c)
 *     WheapCreatePerProcessorInfo @ 0x140C3348C (WheapCreatePerProcessorInfo.c)
 *     WheapInitializeErrorSourceTable @ 0x140C3352C (WheapInitializeErrorSourceTable.c)
 *     WheapQueryPshedForErrorSources @ 0x140C3368C (WheapQueryPshedForErrorSources.c)
 *     WheapInitializeEventing @ 0x140C33838 (WheapInitializeEventing.c)
 *     WheapLoadPolicy @ 0x140C33974 (WheapLoadPolicy.c)
 */

__int64 __fastcall WheaInitialize(__int64 a1, unsigned int a2)
{
  ULONG_PTR v2; // r12
  int v4; // eax
  int PerProcessorInfo; // eax
  int v6; // eax
  unsigned int *v7; // rbx
  unsigned int k; // edi
  int v9; // eax
  __int64 v10; // rax
  int v11; // eax
  int v12; // eax
  struct _KTHREAD *CurrentThread; // rax
  __int64 *v14; // rax
  __int64 *v15; // rbx
  int v16; // eax
  unsigned int i; // ebx
  __int64 Prcb; // rax
  __int64 j; // rbx
  int v20; // eax
  __int64 v31; // rbx
  int v32; // r13d
  bool v33; // zf
  int v34; // eax
  ULONG_PTR BugCheckParameter4; // [rsp+20h] [rbp-20h]
  ULONG_PTR BugCheckParameter4a; // [rsp+20h] [rbp-20h]
  unsigned int v38; // [rsp+88h] [rbp+48h] BYREF
  PVOID Address; // [rsp+90h] [rbp+50h] BYREF
  __int64 v40; // [rsp+98h] [rbp+58h] BYREF

  v2 = a2;
  Address = 0LL;
  v40 = 0LL;
  v38 = 0;
  if ( a2 )
  {
    qword_140EF97D8 = (__int64)&WheapPrevErrList;
    WheapPrevErrList = (__int64)&WheapPrevErrList;
    v11 = PshedInitialize(a1, &v40);
    if ( v11 < 0 )
      KeBugCheckEx(0x122u, 3uLL, v11, 0LL, 0LL);
    memset_0(&WheapWorkQueue, 0, 0x88uLL);
    qword_140EF97E8 = (__int64)&WheapWorkQueue;
    qword_140EF9818 = (__int64)WheapWorkQueueDpcRoutine;
    WheapWorkQueue = (__int64)&WheapWorkQueue;
    qword_140EF9850 = (__int64)WheapWorkQueueWorkerRoutine;
    qword_140EF9860 = (__int64)WheapProcessWorkQueueItem;
    qword_140EF97F0 = 0LL;
    dword_140EF9800 = 275;
    qword_140EF9820 = (__int64)&WheapWorkQueue;
    qword_140EF9838 = 0LL;
    qword_140EF9810 = 0LL;
    qword_140EF9858 = (__int64)&WheapWorkQueue;
    qword_140EF9840 = 0LL;
    WheapInitWnfCallbacks();
    v12 = WheapQueryPshedForErrorSources(&v38, &Address);
    if ( v12 < 0 )
      KeBugCheckEx(0x122u, 5uLL, v12, v2, 0LL);
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    v14 = KeAbPreAcquire((__int64)&WheapConfigTableLock, 0LL);
    v15 = v14;
    if ( _interlockedbittestandset64((volatile signed __int32 *)&WheapConfigTableLock, 0LL) )
      ExfAcquirePushLockExclusiveEx(&WheapConfigTableLock, v14, (__int64)&WheapConfigTableLock);
    if ( v15 )
      *((_BYTE *)v15 + 10) = 1;
    v16 = WheapInitializeErrorSourceTable(v38, Address);
    if ( v16 < 0 )
      KeBugCheckEx(0x122u, 7uLL, v16, 0LL, 0LL);
    PshedFreeMemory(Address);
    for ( i = 0;
          i < (unsigned int)KeNumberProcessors_0;
          *(_QWORD *)(*(_QWORD *)(Prcb + 35744) + 8LL) = &WheapErrorSourceTable )
    {
      Prcb = KeGetPrcb(i++);
      **(_DWORD **)(Prcb + 35744) = v38;
      *(_QWORD *)(*(_QWORD *)(Prcb + 35744) + 16LL) = &WheapWorkQueue;
    }
    for ( j = qword_140EEEA50; (__int64 *)j != &qword_140EEEA50; j = *(_QWORD *)j )
    {
      if ( *(_DWORD *)(j + 104) == 7 )
      {
        *(_DWORD *)(j + 108) = 2;
        v20 = WheapCallErrorSourceInitialize(j, v2);
        if ( v20 < 0 )
        {
          BugCheckParameter4 = *(int *)(j + 104);
          *(_DWORD *)(j + 108) = 1;
          KeBugCheckEx(0x122u, 6uLL, v20, v2, BugCheckParameter4);
        }
      }
    }
    if ( KeGetCurrentPrcb()->CpuVendor == 1 )
    {
      _RAX = 0x80000000LL;
      __asm { cpuid }
      if ( (unsigned int)_RAX >= 0x80000008 )
      {
        _RAX = 2147483656LL;
        __asm { cpuid }
        if ( (_RBX & 1) != 0 )
          WheapClearPoisonSupported = 1;
      }
    }
    if ( (*(_BYTE *)(*(_QWORD *)(a1 + 240) + 2648LL) & 4) == 0 && PshedIsSystemWheaEnabled() )
      WheapCheckForAndReportErrorsFromPreviousSession();
    v31 = qword_140EEEA50;
    v32 = 1;
    while ( (__int64 *)v31 != &qword_140EEEA50 )
    {
      v33 = *(_DWORD *)(v31 + 104) == 7;
      *(_DWORD *)(v31 + 124) = v32;
      if ( !v33 && !*(_BYTE *)(v31 + 88) && *(_DWORD *)(v31 + 108) == 1 )
      {
        *(_DWORD *)(v31 + 108) = 2;
        v34 = WheapCallErrorSourceInitialize(v31, v2);
        if ( v34 < 0 )
        {
          BugCheckParameter4a = *(int *)(v31 + 104);
          *(_DWORD *)(v31 + 108) = 1;
          KeBugCheckEx(0x122u, 6uLL, v34, v2, BugCheckParameter4a);
        }
      }
      v31 = *(_QWORD *)v31;
      ++v32;
    }
    if ( (int)ExGetPrmInterface(1, (__int64)&WheapDispatchPtr.DeviceQueue.Lock) >= 0 )
      WheapPrmInitialized = 1;
    WheapLogInitEvent();
    *(_QWORD *)&WheapDispatchPtr.Type = WheaWmiDispatch;
    IoWMIRegistrationControl(&WheapDispatchPtr, 0x80000001);
    WheaInitializeRegChangeNotify();
    WheapInitializationComplete = 1;
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&WheapConfigTableLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)&WheapConfigTableLock);
    KeAbPostRelease((ULONG_PTR)&WheapConfigTableLock);
    KeLeaveCriticalRegion();
  }
  else
  {
    WheapStatus = 0LL;
    dword_140EF9878 = 0;
    WheapErrorRecordId = MEMORY[0xFFFFF78000000014];
    WheapLoadPolicy();
    if ( (*(_DWORD *)(*(_QWORD *)(a1 + 240) + 132LL) & 2) == 0 )
      WheapPreviousSessionFailure = 1;
    v4 = PshedInitialize(a1, &v40);
    if ( v4 < 0 )
      KeBugCheckEx(0x122u, 3uLL, v4, 0LL, 0LL);
    PerProcessorInfo = WheapCreatePerProcessorInfo();
    if ( PerProcessorInfo < 0 )
      KeBugCheckEx(0x122u, 4uLL, PerProcessorInfo, 0LL, 0LL);
    v6 = WheapQueryPshedForErrorSources(&v38, &Address);
    if ( v6 < 0 )
      KeBugCheckEx(0x122u, 5uLL, v6, 0LL, 0LL);
    WheapErrorSourceTable = 1279410516LL;
    qword_140EEEA58 = (__int64)&qword_140EEEA50;
    qword_140EEEA50 = (__int64)&qword_140EEEA50;
    dword_140EEEA48 = 1;
    LOWORD(stru_140EEEA60.Header.Lock) = 1;
    stru_140EEEA60.Header.Size = 6;
    stru_140EEEA60.Header.SignalState = 1;
    stru_140EEEA60.Header.WaitListHead.Blink = &stru_140EEEA60.Header.WaitListHead;
    stru_140EEEA60.Header.WaitListHead.Flink = &stru_140EEEA60.Header.WaitListHead;
    WheapInitializeEventing();
    v7 = (unsigned int *)Address;
    for ( k = 0; k < v38; ++k )
    {
      v9 = guard_dispatch_icall_no_overrides(0LL);
      if ( v9 < 0 )
        KeBugCheckEx(0x122u, 6uLL, v9, 0LL, (int)v7[2]);
      v10 = *v7;
      v7[3] = 2;
      v7 = (unsigned int *)((char *)v7 + v10);
    }
    PshedFreeMemory(Address);
  }
  return 0LL;
}
