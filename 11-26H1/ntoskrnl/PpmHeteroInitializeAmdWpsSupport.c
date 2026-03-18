/*
 * XREFs of PpmHeteroInitializeAmdWpsSupport @ 0x140CD72F8
 * Callers:
 *     PoInitHeteroDetection @ 0x140CCE7E8 (PoInitHeteroDetection.c)
 * Callees:
 *     PoGetWorkloadClassCount @ 0x140BFDD08 (PoGetWorkloadClassCount.c)
 */

__int64 PpmHeteroInitializeAmdWpsSupport()
{
  unsigned int v0; // edi
  int v1; // r8d
  char v2; // si

  v0 = 0;
  v1 = 0;
  v2 = 1;
  while ( 1 )
  {
    _RAX = 2147483686LL;
    __asm { cpuid }
    if ( !(_WORD)_RBX )
      return (unsigned int)-1073741637;
    if ( (_RCX & 0xFF00) == 0x100 )
      break;
    ++v1;
  }
  if ( (_RAX & 0x40000000) == 0 )
    return (unsigned int)-1073741637;
  _RAX = 2147483681LL;
  __asm { cpuid }
  if ( (_RAX & 0x400000) == 0 )
    return (unsigned int)-1073741637;
  PpmHeteroHgsCapabilityBits = 2;
  PopSleepstudySessionLock.ThreadLock = (unsigned __int64)PpmHeteroRegisterWpsUpdatesAmd;
  PpmHeteroHgsDynamicUpdateEnabled = 0;
  *(&PpmHeteroHgsUpdateDpc + 3) = (ULONG_PTR)PpmHeteroHgsUpdateDpcRoutine;
  *(_QWORD *)&stru_140FC01F0.SchedulerAssistYieldCounter = PpmHeteroHgsUpdateWorker;
  PpmHeteroHgsDynamicUpdateReasonEnabled = 0;
  PpmHeteroHgsParkingHintEnabled = 0;
  PpmHeteroWpsParkingUpdateReasonEnabled = 0;
  PpmHeteroHgsEnabled = 1;
  PpmHeteroHgsVendor = 1;
  LODWORD(PpmHeteroHgsUpdateDpc) = 787;
  *(&PpmHeteroHgsUpdateDpc + 4) = 0LL;
  *(&PpmHeteroHgsUpdateDpc + 7) = 0LL;
  *(&PpmHeteroHgsUpdateDpc + 2) = 0LL;
  stru_140FC01F0.SchedulerAssistLastYieldBoostTime = 0LL;
  stru_140FC01F0.Spare32 = 0LL;
  if ( PoGetWorkloadClassCount(&PpmHeteroWorkloadClasses) )
  {
    KiHgsPlusEnabled = 1;
  }
  else
  {
    PpmHeteroWorkloadClasses = 1;
    v2 = 0;
  }
  PpmHeteroHgsThreadEnabled = v2;
  return v0;
}
