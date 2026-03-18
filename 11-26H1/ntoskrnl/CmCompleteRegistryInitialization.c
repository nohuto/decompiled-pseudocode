/*
 * XREFs of CmCompleteRegistryInitialization @ 0x14084E49C
 * Callers:
 *     NtInitializeRegistry @ 0x14084EE60 (NtInitializeRegistry.c)
 * Callees:
 *     PsGetCurrentServerSiloGlobals @ 0x1402150C0 (PsGetCurrentServerSiloGlobals.c)
 *     KeWaitForSingleObject @ 0x140278560 (KeWaitForSingleObject.c)
 *     PopReleaseRwLock @ 0x14043630C (PopReleaseRwLock.c)
 *     PopAcquireRwLockExclusive @ 0x140436378 (PopAcquireRwLockExclusive.c)
 *     KeInitializeEvent @ 0x140466F30 (KeInitializeEvent.c)
 *     PopQueueWorkItem @ 0x1404CEE60 (PopQueueWorkItem.c)
 *     KeBugCheckEx @ 0x1405339B0 (KeBugCheckEx.c)
 *     ZwClose @ 0x1407235D0 (ZwClose.c)
 *     IopCopyBootLogRegistryToFile @ 0x1407946FC (IopCopyBootLogRegistryToFile.c)
 *     PnpBootPhaseComplete @ 0x14079BF3C (PnpBootPhaseComplete.c)
 *     PoInitHiberServices @ 0x1407C8370 (PoInitHiberServices.c)
 *     PoClearTransitionMarker @ 0x1407C881C (PoClearTransitionMarker.c)
 *     PsBootPhaseComplete @ 0x1407EDCC0 (PsBootPhaseComplete.c)
 *     EtwInitialize @ 0x140824718 (EtwInitialize.c)
 *     ExNotifyPlatformBinaryExecuted @ 0x14083297C (ExNotifyPlatformBinaryExecuted.c)
 *     ExpRefreshSystemTime @ 0x140836324 (ExpRefreshSystemTime.c)
 *     CmpInitializeSystemHivesLoad @ 0x14084B198 (CmpInitializeSystemHivesLoad.c)
 *     CmpCmdInit @ 0x140854874 (CmpCmdInit.c)
 *     CmpCreateRegistryThread @ 0x140856F70 (CmpCreateRegistryThread.c)
 *     CmpLockRegistryExclusive @ 0x1408C2148 (CmpLockRegistryExclusive.c)
 *     RtlLockBootStatusData @ 0x140B12DA0 (RtlLockBootStatusData.c)
 *     PopCancelIgnoreBatteryStatusChange @ 0x140B607C0 (PopCancelIgnoreBatteryStatusChange.c)
 *     CmpUnlockRegistry @ 0x140C58970 (CmpUnlockRegistry.c)
 */

__int64 __fastcall CmCompleteRegistryInitialization(__int16 a1)
{
  unsigned int v1; // ebx
  bool v3; // di
  __int64 v4; // rcx
  __int64 v5; // rcx
  __int64 v6; // rcx
  char v7; // di
  __int64 v8; // rdx
  int v9; // eax
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // rdx
  __int64 v14; // r8
  struct _KLOCK_ENTRIES *v15; // r9
  struct _LIST_ENTRY *Flink; // rcx
  __int64 v17; // rdx
  __int64 v18; // r8
  struct _KLOCK_ENTRIES *v19; // r9
  struct _KEVENT Event; // [rsp+30h] [rbp-28h] BYREF
  HANDLE Handle; // [rsp+68h] [rbp+10h] BYREF

  v1 = 0;
  Handle = 0LL;
  memset(&Event, 0, sizeof(Event));
  v3 = a1 == 1;
  if ( _InterlockedExchange((volatile __int32 *)&ExpPlatformBinaryLock.SListFaultAddress, 0) )
  {
    EtwInitialize(3u, 0LL);
    CmCompleteInitMachineConfig(&IopAutoReboot);
    if ( !WheapPfaLock.CurrentRunTime )
      CmpInitializeSystemHivesLoad();
    CmpLockRegistryExclusive(v4);
    LOBYTE(v5) = v3;
    CmpCmdInit(v5);
    CmpUnlockRegistry(v6);
    if ( a1 != 1 && !WheapPfaLock.CurrentRunTime )
    {
      BYTE4(WheapPfaLock.InitialStack) = 1;
      if ( LOBYTE(WheapPfaLock.ThreadLock) || (v7 = 0, CmpForceSynchronousMachineHiveLoad) )
        v7 = 1;
      KeInitializeEvent(&Event, NotificationEvent, 0);
      v9 = CmpCreateRegistryThread(
             &Handle,
             v8,
             CmpFinishSystemHivesLoad,
             (unsigned __int64)&Event & -(__int64)(v7 != 0));
      if ( v9 < 0 )
        KeBugCheckEx(0x74u, 2uLL, 3uLL, 3uLL, v9);
      if ( v7 )
        KeWaitForSingleObject(&Event, Executive, 0, 0, 0LL);
      ZwClose(Handle);
      Handle = 0LL;
    }
    if ( !CmFastBoot )
    {
      ExpRefreshSystemTime();
      PsBootPhaseComplete(v11, v10, v12);
    }
    RtlLockBootStatusData(0LL);
    PnpBootPhaseComplete();
    PoInitHiberServices();
    PoClearTransitionMarker();
    PopAcquireRwLockExclusive(&stru_140F0F620.Spare35[1], v13, v14, v15);
    BYTE4(stru_140F0F620.SystemAffinityTokenListHead.Next) = 1;
    PopReleaseRwLock((struct _KTHREAD *)&stru_140F0F620.Spare35[1]);
    PopQueueWorkItem((__int64)&stru_140F0F620.SavedApcState.ApcListHead[0].Blink, DelayedWorkQueue);
    PopCancelIgnoreBatteryStatusChange();
    Flink = PsGetCurrentServerSiloGlobals()[64].Flink;
    Flink->Blink = (struct _LIST_ENTRY *)1;
    ExNotifyPlatformBinaryExecuted((__int64)Flink, v17, v18, v19);
    RtlpBootStatHandleLock.SchedulerApcFill3[44] = 1;
    if ( a1 != 1 )
      IopCopyBootLogRegistryToFile();
  }
  else
  {
    return (unsigned int)-1073741790;
  }
  return v1;
}
