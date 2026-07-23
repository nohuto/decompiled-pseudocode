/*
 * XREFs of PpmHeteroInitializeWpsSimSupport @ 0x140CDD1B4
 * Callers:
 *     PoInitHeteroDetection @ 0x140CD4948 (PoInitHeteroDetection.c)
 * Callees:
 *     <none>
 */

__int64 PpmHeteroInitializeWpsSimSupport()
{
  __int64 result; // rax

  *(_QWORD *)&stru_140FC11F0.SchedulerAssistYieldCounter = PpmHeteroHgsUpdateWorker;
  stru_140FC11F0.SchedulerAssistLastYieldBoostTime = 0LL;
  PpmHeteroHgsEnabled = PpmWpsSimulationOverride & 1;
  PpmHeteroRegisterWpsUpdates = (__int64)PpmHeteroRegisterWpsUpdatesSim;
  stru_140FC11F0.Spare32 = 0LL;
  PpmHeteroHgsDynamicUpdateEnabled = (PpmWpsSimulationOverride & 8) != 0;
  PpmHeteroHgsVendor = 15;
  LODWORD(PpmHeteroWorkloadClasses) = ((unsigned __int64)PpmWpsSimulationOverride >> 52) & 0xF;
  if ( (unsigned int)PpmHeteroWorkloadClasses >= 8 )
    LODWORD(PpmHeteroWorkloadClasses) = 8;
  result = 0LL;
  PpmHeteroHgsThreadEnabled = 1;
  PpmHeteroHgsCapabilityBits = HIBYTE(PpmWpsSimulationOverride) & 0xF;
  return result;
}
