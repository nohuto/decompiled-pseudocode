/*
 * XREFs of PpmHeteroInitializeIntelWpsSupport @ 0x140CDD248
 * Callers:
 *     PoInitHeteroDetection @ 0x140CD4948 (PoInitHeteroDetection.c)
 * Callees:
 *     ?RtlpCopyAffinityEx@@YAXPEAU_KAFFINITY_EX@@G0@Z @ 0x140253210 (-RtlpCopyAffinityEx@@YAXPEAU_KAFFINITY_EX@@G0@Z.c)
 *     MiFreePagesFromMdl @ 0x140347540 (MiFreePagesFromMdl.c)
 *     MmAllocatePagesForMdlEx @ 0x14034A280 (MmAllocatePagesForMdlEx.c)
 *     MmMapLockedPagesSpecifyCache @ 0x14035F0D0 (MmMapLockedPagesSpecifyCache.c)
 *     Feature_WpsInitTableCollection__private_IsEnabledDeviceUsageNoInline @ 0x14060D3CC (Feature_WpsInitTableCollection__private_IsEnabledDeviceUsageNoInline.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 *     PoGetWorkloadClassCount @ 0x140C03D54 (PoGetWorkloadClassCount.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

__int64 PpmHeteroInitializeIntelWpsSupport()
{
  unsigned int v5; // edi
  unsigned __int16 Count; // r8
  _KAFFINITY_EX *p_PackageProcessorSet; // r9
  struct _KAFFINITY_EX *v8; // rbx
  unsigned __int16 v9; // dx
  unsigned __int8 v20; // si
  int v21; // r15d
  PMDL PagesForMdl; // rax
  _QWORD *p_Next; // rbx
  PVOID MappedSystemVa; // r14
  int v25; // ecx
  unsigned int i; // esi
  int v27; // esi
  unsigned int v28; // ebx
  void *Pool2; // rax
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
  RtlpCopyAffinityEx(&v32, 0x20u, (struct _KAFFINITY_EX *)&stru_140FC11F0.WaitRegister);
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
  v9 = 0;
  if ( Count )
  {
    while ( v32.Bitmap[v9] == p_PackageProcessorSet->Bitmap[v9] )
    {
      if ( ++v9 >= Count )
        goto LABEL_11;
    }
    return (unsigned int)-1073741637;
  }
LABEL_11:
  while ( v9 < v8->Count )
  {
    if ( v8->Bitmap[v9] )
      return (unsigned int)-1073741637;
    ++v9;
  }
  _RAX = 7LL;
  __asm { cpuid }
  if ( (_RDX & 0x8000) == 0 )
    return (unsigned int)-1073741637;
  _RAX = 6LL;
  __asm { cpuid }
  v20 = _RDX;
  v21 = _RAX;
  if ( (_RAX & 0x80000) == 0 || (_RDX & 1) == 0 || (_RDX & 2) == 0 )
    return (unsigned int)-1073741637;
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
      *(_QWORD *)&stru_140FC11F0.SchedulerAssistYieldCounter = PpmHeteroHgsUpdateWorker;
      v25 = 0;
      LODWORD(PpmHeteroHgsUpdateDpc) = 787;
      *(&PpmHeteroHgsUpdateDpc + 4) = 0LL;
      *(&PpmHeteroHgsUpdateDpc + 7) = 0LL;
      *(&PpmHeteroHgsUpdateDpc + 2) = 0LL;
      stru_140FC11F0.SchedulerAssistLastYieldBoostTime = 0LL;
      stru_140FC11F0.Spare32 = 0LL;
      for ( i = v20 >> 2; i; i >>= 1 )
        v25 += i & 1;
      v27 = v25 + 2;
      if ( !PoGetWorkloadClassCount((int *)&PpmHeteroWorkloadClasses) )
      {
        LODWORD(PpmHeteroWorkloadClasses) = 1;
        PpmHeteroHgsThreadDisabled = 1;
      }
      PpmHeteroHgsTableEntry = (__int64)MappedSystemVa;
      PpmHeteroHgsCapabilityBits = v27;
      *(_QWORD *)&stru_140FC11F0.AffinityPrimaryGroup = p_Next;
      PpmHeteroRegisterWpsUpdates = (__int64)PpmHeteroRegisterWpsUpdatesIntel;
      v31 = 1LL;
      PpmHeteroWpsParkingTableEntry = 0LL;
      PpmHeteroHgsEnabled = 1;
      PpmHeteroHgsDynamicUpdateEnabled = 1;
      PpmHeteroHgsParkingHintEnabled = 1;
      PpmHeteroHgsVendor = 2;
      if ( (unsigned int)Feature_WpsInitTableCollection__private_IsEnabledDeviceUsageNoInline() )
        PpmHeteroCheckInitTableBit = (__int64)PpmHeteroCheckInitTableBitIntel;
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
        PpmHeteroHgsOldUpdateReason = (PVOID)ExAllocatePool2(
                                               64LL,
                                               (unsigned int)(2 * PpmHeteroWorkloadClasses),
                                               0x704D5050u);
        Pool2 = (void *)ExAllocatePool2(64LL, v28, 0x704D5050u);
        PpmHeteroHgsNewUpdateReason = Pool2;
        PpmHgsUpdateChangeReasonOffset = 8;
        if ( !PpmHeteroHgsOldUpdateReason || !Pool2 )
        {
          PpmHeteroHgsDynamicUpdateReasonEnabled = 0;
          PpmHgsUpdateChangeReasonOffset = 0;
          if ( PpmHeteroHgsOldUpdateReason )
          {
            ExFreePoolWithTag(PpmHeteroHgsOldUpdateReason, 0x704D5050u);
            PpmHeteroHgsOldUpdateReason = 0LL;
          }
          if ( PpmHeteroHgsNewUpdateReason )
          {
            ExFreePoolWithTag(PpmHeteroHgsNewUpdateReason, 0x704D5050u);
            PpmHeteroHgsNewUpdateReason = 0LL;
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
  return v5;
}
