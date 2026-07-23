/*
 * XREFs of PpmHeteroInitializeAmdWpsSupport @ 0x140CDD668
 * Callers:
 *     PoInitHeteroDetection @ 0x140CD4948 (PoInitHeteroDetection.c)
 * Callees:
 *     Feature_ExtendedWpsTables__private_IsEnabledDeviceUsageNoInline @ 0x14060D2B8 (Feature_ExtendedWpsTables__private_IsEnabledDeviceUsageNoInline.c)
 *     PoGetWorkloadClassCount @ 0x140C03D54 (PoGetWorkloadClassCount.c)
 */

__int64 PpmHeteroInitializeAmdWpsSupport()
{
  unsigned int v0; // edi
  int v1; // r9d
  int v7; // r8d
  char v8; // si

  v0 = 0;
  v1 = 0;
  _RAX = 2147483686LL;
  __asm { cpuid }
  v7 = _RAX;
  if ( !(_WORD)_RBX )
    return (unsigned int)-1073741637;
  v8 = 1;
  while ( (_RCX & 0xFF00) != 0x100 )
  {
    ++v1;
    _RAX = 2147483686LL;
    __asm { cpuid }
    v7 = _RAX;
    if ( !(_WORD)_RBX )
      return (unsigned int)-1073741637;
  }
  if ( (v7 & 0x40000000) == 0 )
    return (unsigned int)-1073741637;
  _RAX = 2147483681LL;
  __asm { cpuid }
  if ( (_RAX & 0x400000) != 0 )
  {
    PpmHeteroHgsCapabilityBits = 2;
    PpmHeteroRegisterWpsUpdates = (__int64)PpmHeteroRegisterWpsUpdatesAmd;
    PpmHeteroHgsDynamicUpdateEnabled = 0;
    *(&PpmHeteroHgsUpdateDpc + 3) = (ULONG_PTR)PpmHeteroHgsUpdateDpcRoutine;
    *(_QWORD *)&stru_140FC11F0.SchedulerAssistYieldCounter = PpmHeteroHgsUpdateWorker;
    PpmHeteroHgsDynamicUpdateReasonEnabled = 0;
    PpmHeteroHgsParkingHintEnabled = 0;
    PpmHeteroWpsParkingUpdateReasonEnabled = 0;
    PpmHeteroHgsEnabled = 1;
    PpmHeteroHgsVendor = 1;
    LODWORD(PpmHeteroHgsUpdateDpc) = 787;
    *(&PpmHeteroHgsUpdateDpc + 4) = 0LL;
    *(&PpmHeteroHgsUpdateDpc + 7) = 0LL;
    *(&PpmHeteroHgsUpdateDpc + 2) = 0LL;
    stru_140FC11F0.SchedulerAssistLastYieldBoostTime = 0LL;
    stru_140FC11F0.Spare32 = 0LL;
    if ( PoGetWorkloadClassCount((int *)&PpmHeteroWorkloadClasses) )
    {
      KiHgsPlusEnabled = 1;
    }
    else
    {
      LODWORD(PpmHeteroWorkloadClasses) = 1;
      v8 = 0;
    }
    PpmHeteroHgsThreadEnabled = v8;
    Feature_ExtendedWpsTables__private_IsEnabledDeviceUsageNoInline();
  }
  else
  {
    return (unsigned int)-1073741637;
  }
  return v0;
}
