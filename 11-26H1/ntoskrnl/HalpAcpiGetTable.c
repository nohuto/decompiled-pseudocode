/*
 * XREFs of HalpAcpiGetTable @ 0x140344B6C
 * Callers:
 *     HalAcpiGetTableEx @ 0x140344AF0 (HalAcpiGetTableEx.c)
 *     HalMatchAcpiFADTBootArch @ 0x1404F1BA0 (HalMatchAcpiFADTBootArch.c)
 *     HalAcpiGetTable @ 0x14057B8A0 (HalAcpiGetTable.c)
 *     HalMatchAcpiCreatorRevision @ 0x14057B8C0 (HalMatchAcpiCreatorRevision.c)
 *     HalMatchAcpiOemRevision @ 0x14057B940 (HalMatchAcpiOemRevision.c)
 *     HalMatchAcpiRevision @ 0x14057B9C0 (HalMatchAcpiRevision.c)
 *     HalpExtGetAcpiTable @ 0x140589760 (HalpExtGetAcpiTable.c)
 *     HalpInterruptParseAcpiTables @ 0x140592E18 (HalpInterruptParseAcpiTables.c)
 *     HalSocGetAcpiTable @ 0x14059A7D4 (HalSocGetAcpiTable.c)
 *     HalpPowerInitFwPerformanceTableMappings @ 0x140CB4538 (HalpPowerInitFwPerformanceTableMappings.c)
 *     HalpGetHotPlugMemoryInfo @ 0x140CB46F4 (HalpGetHotPlugMemoryInfo.c)
 *     HalpExtInitExtensions @ 0x140CB50D8 (HalpExtInitExtensions.c)
 *     HalpInitializeConfigurationFromMadt @ 0x140CB76B0 (HalpInitializeConfigurationFromMadt.c)
 *     HalpNumaInitializeHmaConfiguration @ 0x140CB79B4 (HalpNumaInitializeHmaConfiguration.c)
 *     HalpNumaInitializeStaticConfiguration @ 0x140CB7A3C (HalpNumaInitializeStaticConfiguration.c)
 *     HalpPciInitializeMmConfigAccess @ 0x140CB91B0 (HalpPciInitializeMmConfigAccess.c)
 *     HalpSetupAcpiPhase0 @ 0x140CB9944 (HalpSetupAcpiPhase0.c)
 *     HalpMiscInitializeAmdSfs @ 0x140CBA6A0 (HalpMiscInitializeAmdSfs.c)
 *     HalpAcpiDetectMachineSpecificActions @ 0x140CBB1BC (HalpAcpiDetectMachineSpecificActions.c)
 *     HalpIommuHsaDiscover @ 0x140CBB5B4 (HalpIommuHsaDiscover.c)
 *     KsepMatchInitAcpiOemInfo @ 0x140CD3600 (KsepMatchInitAcpiOemInfo.c)
 *     CmpGetAcpiBiosVersion @ 0x140CF2D4C (CmpGetAcpiBiosVersion.c)
 *     CmpInitializeMachineDependentConfiguration @ 0x140CF3188 (CmpInitializeMachineDependentConfiguration.c)
 * Callees:
 *     ExAcquireFastMutex @ 0x1402775E0 (ExAcquireFastMutex.c)
 *     KeReleaseGuardedMutex @ 0x1402782B0 (KeReleaseGuardedMutex.c)
 *     HalpAcpiGetTableWork @ 0x140344BEC (HalpAcpiGetTableWork.c)
 *     HalpAcpiTableCacheInit @ 0x140D1082C (HalpAcpiTableCacheInit.c)
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
