/*
 * XREFs of PpmInitializePepWpsSupport @ 0x1407E82E0
 * Callers:
 *     <none>
 * Callees:
 *     PopExecuteOnTargetProcessors @ 0x14021AA60 (PopExecuteOnTargetProcessors.c)
 *     PpmAcquireLock @ 0x140396D00 (PpmAcquireLock.c)
 *     KeInitializeDpc @ 0x14047B3C0 (KeInitializeDpc.c)
 *     PpmReinitializeHeteroEngine @ 0x140AD89F8 (PpmReinitializeHeteroEngine.c)
 */

__int64 __fastcall PpmInitializePepWpsSupport(char a1, char a2)
{
  unsigned int v2; // ebx
  __int64 v3; // rdx
  unsigned int v4; // r8d
  __int64 v5; // rdx
  __int64 v6; // rcx

  v2 = 0;
  if ( a1 )
  {
    PpmHeteroHgsEnabled = a1;
    PpmHeteroRegisterWpsUpdates = (__int64)PpmHeteroRegisterWpsUpdatesPep;
    PpmHeteroHgsThreadEnabled = 1;
    PpmHeteroHgsCapabilityBits = 2;
    PpmHeteroHgsVendor = 3;
    PpmHeteroHgsDynamicUpdateEnabled = 1;
    PpmHeteroWpsParkingUpdateReasonEnabled = 1;
    PpmHeteroHgsParkingHintEnabled = 1;
    if ( a2 )
      PpmHeteroHgsContainmentState |= 0x10u;
    LODWORD(PpmHeteroWorkloadClasses) = 1;
    KeInitializeDpc((PRKDPC)&PpmHeteroHgsUpdateDpc, (PKDEFERRED_ROUTINE)PpmHeteroHgsUpdateDpcRoutine, 0LL);
    BYTE1(PpmHeteroHgsUpdateDpc) = 3;
    *(_QWORD *)&stru_140FC11F0.SchedulerAssistYieldCounter = PpmHeteroHgsUpdateWorker;
    stru_140FC11F0.SchedulerAssistLastYieldBoostTime = 0LL;
    stru_140FC11F0.Spare32 = 0LL;
    PpmAcquireLock((struct _KTHREAD **)&PpmIdlePolicyLock.ThreadLock, v3, v4);
    PopExecuteOnTargetProcessors((__int64)&PpmCheckRegistered, (__int64)PpmWpsPepProcessorInit, 0LL, 0LL);
    LOBYTE(v5) = 1;
    LOBYTE(v6) = 1;
    PpmReinitializeHeteroEngine(v6, v5);
  }
  else
  {
    return (unsigned int)-1073741637;
  }
  return v2;
}
