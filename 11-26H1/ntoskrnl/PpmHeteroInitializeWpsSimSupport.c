/*
 * XREFs of PpmHeteroInitializeWpsSimSupport @ 0x140CD6E60
 * Callers:
 *     PoInitHeteroDetection @ 0x140CCE7E8 (PoInitHeteroDetection.c)
 * Callees:
 *     <none>
 */

__int64 PpmHeteroInitializeWpsSimSupport()
{
  __int64 result; // rax

  *(_QWORD *)&stru_140FC01F0.SchedulerAssistYieldCounter = PpmHeteroHgsUpdateWorker;
  stru_140FC01F0.SchedulerAssistLastYieldBoostTime = 0LL;
  PpmHeteroHgsEnabled = PpmWpsSimulationOverride & 1;
  PopSleepstudySessionLock.ThreadLock = (unsigned __int64)PpmHeteroRegisterWpsUpdatesSim;
  stru_140FC01F0.Spare32 = 0LL;
  PpmHeteroHgsDynamicUpdateEnabled = (PpmWpsSimulationOverride & 8) != 0;
  PpmHeteroHgsVendor = 15;
  PpmHeteroWorkloadClasses = ((unsigned __int64)PpmWpsSimulationOverride >> 52) & 0xF;
  if ( (unsigned int)PpmHeteroWorkloadClasses >= 8 )
    PpmHeteroWorkloadClasses = 8;
  result = 0LL;
  PpmHeteroHgsThreadEnabled = 1;
  PpmHeteroHgsCapabilityBits = HIBYTE(PpmWpsSimulationOverride) & 0xF;
  return result;
}
