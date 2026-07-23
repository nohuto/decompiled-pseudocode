/*
 * XREFs of MiChargeResident @ 0x14031A5D0
 * Callers:
 *     ?SmStWorker@?$SMKM_STORE@USM_TRAITS@@@@SAXPEAX@Z @ 0x14020BEAC (-SmStWorker@-$SMKM_STORE@USM_TRAITS@@@@SAXPEAX@Z.c)
 *     MiAcquireNonPagedResources @ 0x1402D6AD0 (MiAcquireNonPagedResources.c)
 *     MiObtainFaultCharges @ 0x1402D83D0 (MiObtainFaultCharges.c)
 *     MiCreateLargePfnList @ 0x1402F23FC (MiCreateLargePfnList.c)
 *     MiLockVirtualMemoryVa @ 0x14031AC40 (MiLockVirtualMemoryVa.c)
 *     MiObtainSystemCharges @ 0x14033CB70 (MiObtainSystemCharges.c)
 *     MiGetCloneCharges @ 0x14036B234 (MiGetCloneCharges.c)
 *     MmChargeResources @ 0x1403962F0 (MmChargeResources.c)
 *     SmAcquireReleaseCharges @ 0x140396390 (SmAcquireReleaseCharges.c)
 *     MiGetSubsectionCharges @ 0x1404AFE30 (MiGetSubsectionCharges.c)
 *     MiCreateUserPhysicalViewCharges @ 0x140773E70 (MiCreateUserPhysicalViewCharges.c)
 *     MmObtainChargesToLockPagedPool @ 0x14077E6B0 (MmObtainChargesToLockPagedPool.c)
 *     MiInitializeSystemWorkingSetList @ 0x14086DAB4 (MiInitializeSystemWorkingSetList.c)
 *     MiCreatePagingFileCommit @ 0x1409894E4 (MiCreatePagingFileCommit.c)
 *     MiInsertVadCharges @ 0x140996DA0 (MiInsertVadCharges.c)
 *     MiConstructLoaderEntry @ 0x140AA535C (MiConstructLoaderEntry.c)
 *     MmCreateProcessAddressSpace @ 0x140ABF9A0 (MmCreateProcessAddressSpace.c)
 *     MiInitializePartialVad @ 0x140AC26F4 (MiInitializePartialVad.c)
 * Callees:
 *     MiChargePartitionResidentAvailable @ 0x1402D8150 (MiChargePartitionResidentAvailable.c)
 */

__int64 __fastcall MiChargeResident(ULONG *a1, unsigned __int64 a2, __int64 a3)
{
  struct _KPRCB *CurrentPrcb; // r9
  unsigned __int32 CachedResidentAvailable; // eax
  unsigned __int32 v5; // ett

  if ( a1 == &MiSystemPartition )
  {
    CurrentPrcb = KeGetCurrentPrcb();
    CachedResidentAvailable = CurrentPrcb->CachedResidentAvailable;
    while ( a2 <= CachedResidentAvailable && CachedResidentAvailable != -1 )
    {
      v5 = CachedResidentAvailable;
      CachedResidentAvailable = _InterlockedCompareExchange(
                                  (volatile signed __int32 *)&CurrentPrcb->CachedResidentAvailable,
                                  CachedResidentAvailable - a2,
                                  CachedResidentAvailable);
      if ( v5 == CachedResidentAvailable )
        return 1LL;
    }
  }
  return MiChargePartitionResidentAvailable((__int64)a1, a2, a3);
}
