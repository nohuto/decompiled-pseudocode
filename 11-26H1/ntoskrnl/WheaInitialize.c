/*
 * XREFs of WheaInitialize @ 0x140CE7AB8
 * Callers:
 *     IoInitSystemPreDrivers @ 0x140CBACA0 (IoInitSystemPreDrivers.c)
 * Callees:
 *     KeAbPreAcquire @ 0x1402781A0 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x140279A70 (KeAbPostRelease.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14027DEB0 (ExfAcquirePushLockExclusiveEx.c)
 *     KeGetPrcb @ 0x1402916D0 (KeGetPrcb.c)
 *     KeLeaveCriticalRegion @ 0x1402C3AE0 (KeLeaveCriticalRegion.c)
 *     ExfTryToWakePushLock @ 0x1403170A0 (ExfTryToWakePushLock.c)
 *     ?KiAbpSetEntryValue@AutoBoost@@YAXPECEEK@Z @ 0x140444460 (-KiAbpSetEntryValue@AutoBoost@@YAXPECEEK@Z.c)
 *     KeBugCheckEx @ 0x1405339B0 (KeBugCheckEx.c)
 *     WheapCheckForAndReportErrorsFromPreviousSession @ 0x1406D4708 (WheapCheckForAndReportErrorsFromPreviousSession.c)
 *     WheapCheckForClzeroSupport @ 0x1406D4824 (WheapCheckForClzeroSupport.c)
 *     WheapCallErrorSourceInitialize @ 0x1406D67EC (WheapCallErrorSourceInitialize.c)
 *     WheapInitializeWorkQueue @ 0x1406D7F60 (WheapInitializeWorkQueue.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1407311E0 (_guard_dispatch_icall_no_overrides.c)
 *     ExGetPrmInterface @ 0x14083ED30 (ExGetPrmInterface.c)
 *     WheapLogInitEvent @ 0x140849228 (WheapLogInitEvent.c)
 *     WheaInitializeRegChangeNotify @ 0x140849894 (WheaInitializeRegChangeNotify.c)
 *     WheapInitWnfCallbacks @ 0x14084A47C (WheapInitWnfCallbacks.c)
 *     IoWMIRegistrationControl @ 0x140ACD740 (IoWMIRegistrationControl.c)
 *     WheapCreatePerProcessorInfo @ 0x140CE8088 (WheapCreatePerProcessorInfo.c)
 *     WheapInitializeErrorSourceTable @ 0x140CE8128 (WheapInitializeErrorSourceTable.c)
 *     WheapInitializePshedInterface @ 0x140CE8288 (WheapInitializePshedInterface.c)
 *     WheapQueryPshedForErrorSources @ 0x140CE82F8 (WheapQueryPshedForErrorSources.c)
 *     WheapInitializeEventing @ 0x140CE84C0 (WheapInitializeEventing.c)
 *     WheapLoadPolicy @ 0x140CE85FC (WheapLoadPolicy.c)
 */

__int64 __fastcall WheaInitialize(__int64 a1, unsigned int a2)
{
  unsigned int v2; // esi
  ULONG_PTR v3; // r12
  int v5; // eax
  int PerProcessorInfo; // eax
  int v7; // eax
  unsigned int v8; // r14d
  unsigned int *v9; // rbx
  int v10; // eax
  __int64 v11; // rax
  int v12; // eax
  int v13; // eax
  struct _KLOCK_ENTRIES *v14; // r9
  struct _KTHREAD *CurrentThread; // rax
  AutoBoost *v16; // rax
  volatile unsigned __int8 *v17; // rdx
  signed __int8 v18; // cf
  AutoBoost *v19; // rsi
  unsigned int v20; // r14d
  int v21; // eax
  unsigned int i; // esi
  __int64 Prcb; // rax
  __int64 j; // rsi
  int v25; // eax
  __int64 v26; // rsi
  int v27; // r13d
  bool v28; // zf
  int v29; // eax
  ULONG_PTR BugCheckParameter4; // [rsp+20h] [rbp-10h]
  ULONG_PTR BugCheckParameter4a; // [rsp+20h] [rbp-10h]
  unsigned int v33; // [rsp+78h] [rbp+48h] BYREF
  PVOID Address; // [rsp+80h] [rbp+50h] BYREF
  __int64 v35; // [rsp+88h] [rbp+58h] BYREF

  v2 = 0;
  v3 = a2;
  Address = 0LL;
  v35 = 0LL;
  v33 = 0;
  if ( a2 )
  {
    WheapInitializePshedInterface();
    WheapConfigTableLock.SListFaultAddress = &WheapConfigTableLock.Header.WaitListHead.Blink;
    WheapConfigTableLock.Header.WaitListHead.Blink = (struct _LIST_ENTRY *)&WheapConfigTableLock.Header.WaitListHead.Blink;
    v12 = PshedInitialize(a1, &v35);
    if ( v12 < 0 )
      KeBugCheckEx(0x122u, 3uLL, v12, 0LL, 0LL);
    WheapInitializeWorkQueue();
    WheapInitWnfCallbacks();
    v13 = WheapQueryPshedForErrorSources(&v33, &Address);
    if ( v13 < 0 )
      KeBugCheckEx(0x122u, 5uLL, v13, v3, 0LL);
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    v16 = (AutoBoost *)KeAbPreAcquire((__int64)&WheapConfigTableLock, 0LL, 0LL, v14);
    v18 = _interlockedbittestandset64(&WheapConfigTableLock.Header.Lock, 0LL);
    v19 = v16;
    if ( v18 )
      ExfAcquirePushLockExclusiveEx((unsigned __int64 *)&WheapConfigTableLock, v16, (__int64)&WheapConfigTableLock);
    if ( v19 )
    {
      if ( (KiAbpGlobalState & 1) != 0 )
      {
        LOBYTE(v17) = 2;
        AutoBoost::KiAbpSetEntryValue((AutoBoost *)((char *)v19 + 33), v17, 1);
      }
      else
      {
        *((_BYTE *)v19 + 10) = 1;
      }
    }
    v20 = v33;
    v21 = WheapInitializeErrorSourceTable(v33, Address);
    if ( v21 < 0 )
      KeBugCheckEx(0x122u, 7uLL, v21, 0LL, 0LL);
    PshedFreeMemory(Address);
    for ( i = 0;
          i < (unsigned int)KeNumberProcessors_0;
          *(_QWORD *)(*(_QWORD *)(Prcb + 35808) + 8LL) = &WheapErrorSourceTable )
    {
      Prcb = KeGetPrcb(i++);
      **(_DWORD **)(Prcb + 35808) = v20;
      *(_QWORD *)(*(_QWORD *)(Prcb + 35808) + 16LL) = &WheapConfigTableLock.QuantumTarget;
    }
    for ( j = qword_140EEEDC8; (__int64 *)j != &qword_140EEEDC8; j = *(_QWORD *)j )
    {
      if ( *(_DWORD *)(j + 104) == 7 )
      {
        *(_DWORD *)(j + 108) = 2;
        v25 = WheapCallErrorSourceInitialize(j, v3);
        if ( v25 < 0 )
        {
          BugCheckParameter4a = *(int *)(j + 104);
          *(_DWORD *)(j + 108) = 1;
          KeBugCheckEx(0x122u, 6uLL, v25, v3, BugCheckParameter4a);
        }
      }
    }
    WheapCheckForClzeroSupport();
    if ( (*(_BYTE *)(*(_QWORD *)(a1 + 240) + 2648LL) & 4) == 0 && PshedIsSystemWheaEnabled() )
      WheapCheckForAndReportErrorsFromPreviousSession();
    v26 = qword_140EEEDC8;
    v27 = 1;
    while ( (__int64 *)v26 != &qword_140EEEDC8 )
    {
      v28 = *(_DWORD *)(v26 + 104) == 7;
      *(_DWORD *)(v26 + 124) = v27;
      if ( !v28 && !*(_BYTE *)(v26 + 88) && *(_DWORD *)(v26 + 108) == 1 )
      {
        *(_DWORD *)(v26 + 108) = 2;
        v29 = WheapCallErrorSourceInitialize(v26, v3);
        if ( v29 < 0 )
        {
          BugCheckParameter4 = *(int *)(v26 + 104);
          *(_DWORD *)(v26 + 108) = 1;
          KeBugCheckEx(0x122u, 6uLL, v29, v3, BugCheckParameter4);
        }
      }
      v26 = *(_QWORD *)v26;
      ++v27;
    }
    if ( (int)ExGetPrmInterface(1, (__int64)&CmpCallbackListLock.SavedApcState.ApcListHead[1]) >= 0 )
      WheapPrmInitialized = 1;
    WheapLogInitEvent();
    CmpCallbackListLock.WaitBlock[1].Object = WheaWmiDispatch;
    IoWMIRegistrationControl((PDEVICE_OBJECT)&CmpCallbackListLock.WaitBlockFill11[80], 0x80000001);
    WheaInitializeRegChangeNotify();
    WheapInitializationComplete = 1;
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&WheapConfigTableLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)&WheapConfigTableLock.Header.Lock);
    KeAbPostRelease((unsigned __int64)&WheapConfigTableLock);
    KeLeaveCriticalRegion();
  }
  else
  {
    WheapConfigTableLock.ApcState.ApcListHead[1].Blink = 0LL;
    *(_DWORD *)&WheapConfigTableLock.ApcStateFill[32] = 0;
    WheapErrorRecordId = MEMORY[0xFFFFF78000000014];
    WheapLoadPolicy();
    if ( (*(_DWORD *)(*(_QWORD *)(a1 + 240) + 132LL) & 2) == 0 )
      WheapPreviousSessionFailure = 1;
    v5 = PshedInitialize(a1, &v35);
    if ( v5 < 0 )
      KeBugCheckEx(0x122u, 3uLL, v5, 0LL, 0LL);
    PerProcessorInfo = WheapCreatePerProcessorInfo();
    if ( PerProcessorInfo < 0 )
      KeBugCheckEx(0x122u, 4uLL, PerProcessorInfo, 0LL, 0LL);
    v7 = WheapQueryPshedForErrorSources(&v33, &Address);
    if ( v7 < 0 )
      KeBugCheckEx(0x122u, 5uLL, v7, 0LL, 0LL);
    WheapErrorSourceTable = 1279410516LL;
    stru_140EEEDD8.Header.WaitListHead.Blink = &stru_140EEEDD8.Header.WaitListHead;
    qword_140EEEDD0 = (__int64)&qword_140EEEDC8;
    qword_140EEEDC8 = (__int64)&qword_140EEEDC8;
    stru_140EEEDD8.Header.WaitListHead.Flink = &stru_140EEEDD8.Header.WaitListHead;
    dword_140EEEDC0 = 1;
    LOWORD(stru_140EEEDD8.Header.Lock) = 1;
    stru_140EEEDD8.Header.Size = 6;
    stru_140EEEDD8.Header.SignalState = 1;
    WheapInitializeEventing();
    v8 = v33;
    v9 = (unsigned int *)Address;
    if ( v33 )
    {
      do
      {
        v10 = guard_dispatch_icall_no_overrides(0LL, (__int64)v9);
        if ( v10 < 0 )
          KeBugCheckEx(0x122u, 6uLL, v10, 0LL, (int)v9[2]);
        v11 = *v9;
        ++v2;
        v9[3] = 2;
        v9 = (unsigned int *)((char *)v9 + v11);
      }
      while ( v2 < v8 );
    }
    PshedFreeMemory(Address);
  }
  return 0LL;
}
