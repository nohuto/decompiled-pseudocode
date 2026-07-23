/*
 * XREFs of CmCompleteRegistryInitialization @ 0x1408547AC
 * Callers:
 *     NtInitializeRegistry @ 0x140855170 (NtInitializeRegistry.c)
 * Callees:
 *     PsGetCurrentServerSiloGlobals @ 0x1402153F0 (PsGetCurrentServerSiloGlobals.c)
 *     PopReleaseRwLock @ 0x14021B1A8 (PopReleaseRwLock.c)
 *     KeWaitForSingleObject @ 0x140277AD0 (KeWaitForSingleObject.c)
 *     PopAcquireRwLockExclusive @ 0x140425310 (PopAcquireRwLockExclusive.c)
 *     KeInitializeEvent @ 0x140460680 (KeInitializeEvent.c)
 *     PopQueueWorkItem @ 0x1404C8890 (PopQueueWorkItem.c)
 *     KeBugCheckEx @ 0x140535E30 (KeBugCheckEx.c)
 *     ZwClose @ 0x1407281A0 (ZwClose.c)
 *     IopCopyBootLogRegistryToFile @ 0x14079722C (IopCopyBootLogRegistryToFile.c)
 *     PnpBootPhaseComplete @ 0x14079EA7C (PnpBootPhaseComplete.c)
 *     PoInitHiberServices @ 0x1407CB3D0 (PoInitHiberServices.c)
 *     PoClearTransitionMarker @ 0x1407CB8BC (PoClearTransitionMarker.c)
 *     PsBootPhaseComplete @ 0x1407F3820 (PsBootPhaseComplete.c)
 *     EtwInitialize @ 0x14082A958 (EtwInitialize.c)
 *     ExNotifyPlatformBinaryExecuted @ 0x140838BBC (ExNotifyPlatformBinaryExecuted.c)
 *     ExpRefreshSystemTime @ 0x14083C564 (ExpRefreshSystemTime.c)
 *     CmpInitializeSystemHivesLoad @ 0x1408514A8 (CmpInitializeSystemHivesLoad.c)
 *     CmpCmdInit @ 0x14085AB84 (CmpCmdInit.c)
 *     CmpCreateRegistryThread @ 0x14085D308 (CmpCreateRegistryThread.c)
 *     CmpLockRegistryExclusive @ 0x1408C8718 (CmpLockRegistryExclusive.c)
 *     RtlLockBootStatusData @ 0x140B14C40 (RtlLockBootStatusData.c)
 *     PopCancelIgnoreBatteryStatusChange @ 0x140B63860 (PopCancelIgnoreBatteryStatusChange.c)
 *     CmpUnlockRegistry @ 0x140C5E970 (CmpUnlockRegistry.c)
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
    if ( !LODWORD(WheapPfaLock.StateSaveArea) )
      CmpInitializeSystemHivesLoad();
    CmpLockRegistryExclusive(v4);
    LOBYTE(v5) = v3;
    CmpCmdInit(v5);
    CmpUnlockRegistry(v6);
    if ( a1 != 1 && !LODWORD(WheapPfaLock.StateSaveArea) )
    {
      LOBYTE(WheapPfaLock.StackLimit) = 1;
      if ( LOBYTE(WheapPfaLock.CurrentRunTime) || (v7 = 0, CmpForceSynchronousMachineHiveLoad) )
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
    PopAcquireRwLockExclusive((unsigned __int64 *)&PopThermalStateTransitionContext, v13, v14, v15);
    byte_140F0FCF4 = 1;
    PopReleaseRwLock((struct _KTHREAD *)&PopThermalStateTransitionContext);
    PopQueueWorkItem((__int64)&PopThermalStateTransitionWorkItem, DelayedWorkQueue);
    PopCancelIgnoreBatteryStatusChange();
    Flink = PsGetCurrentServerSiloGlobals()[64].Flink;
    Flink->Blink = (struct _LIST_ENTRY *)1;
    ExNotifyPlatformBinaryExecuted((__int64)Flink, v17, v18, v19);
    RtlpBootStatHandleLock.SchedulerApc.ApcStateIndex = 1;
    if ( a1 != 1 )
      IopCopyBootLogRegistryToFile();
  }
  else
  {
    return (unsigned int)-1073741790;
  }
  return v1;
}
