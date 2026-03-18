/*
 * XREFs of PpmInitializePepWpsSupport @ 0x1407E3250
 * Callers:
 *     <none>
 * Callees:
 *     PpmAcquireLock @ 0x140394F80 (PpmAcquireLock.c)
 *     PopExecuteOnTargetProcessors @ 0x140428780 (PopExecuteOnTargetProcessors.c)
 *     KeInitializeDpc @ 0x140481A50 (KeInitializeDpc.c)
 *     PpmReinitializeHeteroEngine @ 0x140A9CE8C (PpmReinitializeHeteroEngine.c)
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
    PopSleepstudySessionLock.ThreadLock = (unsigned __int64)PpmHeteroRegisterWpsUpdatesPep;
    PpmHeteroHgsThreadEnabled = 1;
    PpmHeteroHgsCapabilityBits = 2;
    PpmHeteroHgsVendor = 3;
    PpmHeteroHgsDynamicUpdateEnabled = 1;
    PpmHeteroWpsParkingUpdateReasonEnabled = 1;
    PpmHeteroHgsParkingHintEnabled = 1;
    if ( a2 )
      PpmHeteroHgsContainmentState |= 0x10u;
    PpmHeteroWorkloadClasses = 1;
    KeInitializeDpc((PRKDPC)&PpmHeteroHgsUpdateDpc, (PKDEFERRED_ROUTINE)PpmHeteroHgsUpdateDpcRoutine, 0LL);
    BYTE1(PpmHeteroHgsUpdateDpc) = 3;
    *(_QWORD *)&stru_140FC01F0.SchedulerAssistYieldCounter = PpmHeteroHgsUpdateWorker;
    stru_140FC01F0.SchedulerAssistLastYieldBoostTime = 0LL;
    stru_140FC01F0.Spare32 = 0LL;
    PpmAcquireLock((struct _KTHREAD **)&stru_140F10070.SchedulerAssistLastYieldBoostTime, v3, v4);
    PopExecuteOnTargetProcessors((__int64)PpmCheckRegistered, (__int64)PpmWpsPepProcessorInit, 0LL, 0LL);
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
