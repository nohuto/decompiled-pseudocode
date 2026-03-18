/*
 * XREFs of PpmHeteroInitializeIntelWpsSupport @ 0x140CD6EF4
 * Callers:
 *     PoInitHeteroDetection @ 0x140CCE7E8 (PoInitHeteroDetection.c)
 * Callees:
 *     ?RtlpCopyAffinityEx@@YAXPEAU_KAFFINITY_EX@@G0@Z @ 0x1402518B0 (-RtlpCopyAffinityEx@@YAXPEAU_KAFFINITY_EX@@G0@Z.c)
 *     MiFreePagesFromMdl @ 0x1403454C0 (MiFreePagesFromMdl.c)
 *     MmAllocatePagesForMdlEx @ 0x140348200 (MmAllocatePagesForMdlEx.c)
 *     MmMapLockedPagesSpecifyCache @ 0x14035D330 (MmMapLockedPagesSpecifyCache.c)
 *     __security_check_cookie @ 0x140722910 (__security_check_cookie.c)
 *     memset_0 @ 0x14073D880 (memset_0.c)
 *     PoGetWorkloadClassCount @ 0x140BFDD08 (PoGetWorkloadClassCount.c)
 *     ExAllocatePool2 @ 0x140C10430 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140C10E50 (ExFreePoolWithTag.c)
 */

__int64 PpmHeteroInitializeIntelWpsSupport()
{
  unsigned int v5; // edi
  unsigned __int16 Count; // r8
  _KAFFINITY_EX *p_PackageProcessorSet; // r9
  struct _KAFFINITY_EX *v8; // rbx
  unsigned __int16 i; // dx
  unsigned __int8 v20; // si
  int v21; // r15d
  PMDL PagesForMdl; // rax
  _QWORD *p_Next; // rbx
  PVOID MappedSystemVa; // r14
  int v25; // ecx
  unsigned int j; // esi
  int v27; // esi
  unsigned int v28; // ebx
  ULONG_PTR Pool2; // rax
  unsigned __int64 v31; // [rsp+30h] [rbp-D0h]
  struct _KAFFINITY_EX v32; // [rsp+40h] [rbp-C0h] BYREF

  memset_0(&v32.8, 0, sizeof(v32.8));
  _RAX = 0LL;
  __asm { cpuid }
  if ( (unsigned int)_RAX < 7 )
    return (unsigned int)-1073741637;
  *(_QWORD *)&v32.Count = 2097153LL;
  v5 = 0;
  memset_0(&v32.8, 0, sizeof(v32.8));
  RtlpCopyAffinityEx(&v32, 0x20u, (struct _KAFFINITY_EX *)&stru_140FC01F0.WaitRegister);
  Count = v32.Count;
  p_PackageProcessorSet = &KeGetCurrentPrcb()->PackageProcessorSet;
  if ( v32.Count >= p_PackageProcessorSet->Count )
  {
    v8 = &v32;
    Count = p_PackageProcessorSet->Count;
  }
  else
  {
    v8 = p_PackageProcessorSet;
  }
  for ( i = 0; i < Count; ++i )
  {
    if ( v32.Bitmap[i] != p_PackageProcessorSet->Bitmap[i] )
      return (unsigned int)-1073741637;
  }
  while ( i < v8->Count )
  {
    if ( v8->Bitmap[i] )
      return (unsigned int)-1073741637;
    ++i;
  }
  _RAX = 7LL;
  __asm { cpuid }
  if ( (_RDX & 0x8000) == 0 )
    return (unsigned int)-1073741637;
  _RAX = 6LL;
  __asm { cpuid }
  v20 = _RDX;
  v21 = _RAX;
  if ( (_RAX & 0x80000) == 0 )
    return (unsigned int)-1073741637;
  if ( (_RDX & 1) != 0 && (_RDX & 2) != 0 )
  {
    PagesForMdl = MmAllocatePagesForMdlEx(
                    0LL,
                    (PHYSICAL_ADDRESS)-1LL,
                    0LL,
                    ((((unsigned int)_RDX >> 8) & 0xF) + 1) << 12,
                    MmCached,
                    0x24u);
    p_Next = &PagesForMdl->Next;
    if ( PagesForMdl )
    {
      if ( (PagesForMdl->MdlFlags & 5) != 0 )
        MappedSystemVa = PagesForMdl->MappedSystemVa;
      else
        MappedSystemVa = MmMapLockedPagesSpecifyCache(PagesForMdl, 0, MmCached, 0LL, 0, 0x40000000u);
      if ( MappedSystemVa )
      {
        __writemsr(0x17D0u, (p_Next[6] << 12) | 1LL);
        *(&PpmHeteroHgsUpdateDpc + 3) = (ULONG_PTR)PpmHeteroHgsUpdateDpcRoutine;
        *(_QWORD *)&stru_140FC01F0.SchedulerAssistYieldCounter = PpmHeteroHgsUpdateWorker;
        v25 = 0;
        LODWORD(PpmHeteroHgsUpdateDpc) = 787;
        *(&PpmHeteroHgsUpdateDpc + 4) = 0LL;
        *(&PpmHeteroHgsUpdateDpc + 7) = 0LL;
        *(&PpmHeteroHgsUpdateDpc + 2) = 0LL;
        stru_140FC01F0.SchedulerAssistLastYieldBoostTime = 0LL;
        stru_140FC01F0.Spare32 = 0LL;
        for ( j = v20 >> 2; j; j >>= 1 )
          v25 += j & 1;
        v27 = v25 + 2;
        if ( !PoGetWorkloadClassCount(&PpmHeteroWorkloadClasses) )
        {
          PpmHeteroWorkloadClasses = 1;
          PpmHeteroHgsThreadDisabled = 1;
        }
        PpmHeteroHgsTableEntry = (__int64)MappedSystemVa;
        PpmHeteroHgsCapabilityBits = v27;
        *(_QWORD *)&stru_140FC01F0.AffinityPrimaryGroup = p_Next;
        PopSleepstudySessionLock.ThreadLock = (unsigned __int64)PpmHeteroRegisterWpsUpdatesIntel;
        v31 = 1LL;
        PpmHeteroWpsParkingTableEntry = 0LL;
        PpmHeteroHgsEnabled = 1;
        PpmHeteroHgsDynamicUpdateEnabled = 1;
        PpmHeteroHgsParkingHintEnabled = 1;
        PpmHeteroHgsVendor = 2;
        if ( !PpmHeteroHgsThreadDisabled && (v21 & 0x800000) != 0 )
        {
          LODWORD(v31) = 3;
          PpmHeteroHgsThreadEnabled = 1;
        }
        __writemsr(0x17D1u, v31);
        if ( PpmHeteroHgsThreadEnabled )
        {
          KiHgsPlusEnabled = 1;
          PpmHeteroHgsDynamicUpdateReasonEnabled = 1;
          PpmHeteroWpsParkingUpdateReasonEnabled = 0;
          v28 = 2 * PpmHeteroWorkloadClasses;
          PopSleepstudySessionLock.KernelStack = (void *)ExAllocatePool2(
                                                           64LL,
                                                           (unsigned int)(2 * PpmHeteroWorkloadClasses),
                                                           0x704D5050u);
          Pool2 = ExAllocatePool2(64LL, v28, 0x704D5050u);
          *(_QWORD *)&PopSleepstudySessionLock.CurrentRunTime = Pool2;
          LODWORD(PopSleepstudySessionLock.CycleTime) = 8;
          if ( !PopSleepstudySessionLock.KernelStack || !Pool2 )
          {
            PpmHeteroHgsDynamicUpdateReasonEnabled = 0;
            LODWORD(PopSleepstudySessionLock.CycleTime) = 0;
            if ( PopSleepstudySessionLock.KernelStack )
            {
              ExFreePoolWithTag(PopSleepstudySessionLock.KernelStack, 0x704D5050u);
              PopSleepstudySessionLock.KernelStack = 0LL;
            }
            if ( *(_QWORD *)&PopSleepstudySessionLock.CurrentRunTime )
            {
              ExFreePoolWithTag(*(PVOID *)&PopSleepstudySessionLock.CurrentRunTime, 0x704D5050u);
              *(_QWORD *)&PopSleepstudySessionLock.CurrentRunTime = 0LL;
            }
          }
        }
      }
      else
      {
        v5 = -1073741670;
        MiFreePagesFromMdl((ULONG_PTR)p_Next, 0, 0, 0);
        ExFreePoolWithTag(p_Next, 0);
      }
    }
    else
    {
      return (unsigned int)-1073741670;
    }
  }
  else
  {
    return (unsigned int)-1073741637;
  }
  return v5;
}
