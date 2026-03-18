/*
 * XREFs of HalpAcpiGetTable @ 0x140342AEC
 * Callers:
 *     HalAcpiGetTableEx @ 0x140342A70 (HalAcpiGetTableEx.c)
 *     HalMatchAcpiFADTBootArch @ 0x1404F8590 (HalMatchAcpiFADTBootArch.c)
 *     HalAcpiGetTable @ 0x140579370 (HalAcpiGetTable.c)
 *     HalMatchAcpiCreatorRevision @ 0x140579390 (HalMatchAcpiCreatorRevision.c)
 *     HalMatchAcpiOemRevision @ 0x140579410 (HalMatchAcpiOemRevision.c)
 *     HalMatchAcpiRevision @ 0x140579490 (HalMatchAcpiRevision.c)
 *     HalpExtGetAcpiTable @ 0x140587240 (HalpExtGetAcpiTable.c)
 *     HalpInterruptParseAcpiTables @ 0x140590698 (HalpInterruptParseAcpiTables.c)
 *     HalSocGetAcpiTable @ 0x140598054 (HalSocGetAcpiTable.c)
 *     HalpPowerInitFwPerformanceTableMappings @ 0x140CAE4F8 (HalpPowerInitFwPerformanceTableMappings.c)
 *     HalpGetHotPlugMemoryInfo @ 0x140CAE6B4 (HalpGetHotPlugMemoryInfo.c)
 *     HalpExtInitExtensions @ 0x140CAF098 (HalpExtInitExtensions.c)
 *     HalpInitializeConfigurationFromMadt @ 0x140CB1670 (HalpInitializeConfigurationFromMadt.c)
 *     HalpNumaInitializeHmaConfiguration @ 0x140CB1974 (HalpNumaInitializeHmaConfiguration.c)
 *     HalpNumaInitializeStaticConfiguration @ 0x140CB19FC (HalpNumaInitializeStaticConfiguration.c)
 *     HalpPciInitializeMmConfigAccess @ 0x140CB3170 (HalpPciInitializeMmConfigAccess.c)
 *     HalpSetupAcpiPhase0 @ 0x140CB3904 (HalpSetupAcpiPhase0.c)
 *     HalpMiscInitializeAmdSfs @ 0x140CB4660 (HalpMiscInitializeAmdSfs.c)
 *     HalpAcpiDetectMachineSpecificActions @ 0x140CB517C (HalpAcpiDetectMachineSpecificActions.c)
 *     HalpIommuHsaDiscover @ 0x140CB5574 (HalpIommuHsaDiscover.c)
 *     KsepMatchInitAcpiOemInfo @ 0x140CCD4A0 (KsepMatchInitAcpiOemInfo.c)
 *     CmpGetAcpiBiosVersion @ 0x140CECA48 (CmpGetAcpiBiosVersion.c)
 *     CmpInitializeMachineDependentConfiguration @ 0x140CECE84 (CmpInitializeMachineDependentConfiguration.c)
 * Callees:
 *     ExAcquireFastMutex @ 0x140278070 (ExAcquireFastMutex.c)
 *     KeReleaseGuardedMutex @ 0x140278D40 (KeReleaseGuardedMutex.c)
 *     HalpAcpiGetTableWork @ 0x140342B6C (HalpAcpiGetTableWork.c)
 *     HalpAcpiTableCacheInit @ 0x140D0A55C (HalpAcpiTableCacheInit.c)
 */

__int64 __fastcall HalpAcpiGetTable(__int64 a1, int a2, int a3, int a4)
{
  __int64 TableWork; // rdi

  if ( a1 )
  {
    if ( (int)HalpAcpiTableCacheInit() < 0 )
      return 0LL;
  }
  else
  {
    ExAcquireFastMutex(&HalpAcpiTableCacheLock);
  }
  TableWork = HalpAcpiGetTableWork(a1, a2, a3, a4);
  if ( !a1 )
    KeReleaseGuardedMutex(&HalpAcpiTableCacheLock);
  return TableWork;
}
