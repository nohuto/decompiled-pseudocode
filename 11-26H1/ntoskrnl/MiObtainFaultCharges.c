/*
 * XREFs of MiObtainFaultCharges @ 0x1402F6350
 * Callers:
 *     MiSwitchToTransition @ 0x1402A2130 (MiSwitchToTransition.c)
 *     MiMigratePfn @ 0x1402F6990 (MiMigratePfn.c)
 *     MiGetPageForHeader @ 0x14033897C (MiGetPageForHeader.c)
 *     MiPickClusterForMappedFileFault @ 0x14036FB98 (MiPickClusterForMappedFileFault.c)
 *     MiAllocatePageFileReadResources @ 0x1403719F8 (MiAllocatePageFileReadResources.c)
 *     MiResolveMappedFileFaultByCopying @ 0x1404893DC (MiResolveMappedFileFaultByCopying.c)
 *     MiPrefetchPagesViable @ 0x1404C4104 (MiPrefetchPagesViable.c)
 *     MiPrivateFixup @ 0x14051D784 (MiPrivateFixup.c)
 *     MiPfPrepareSequentialReadList @ 0x140A50EA0 (MiPfPrepareSequentialReadList.c)
 *     MiPfPrepareReadList @ 0x140A51E30 (MiPfPrepareReadList.c)
 * Callees:
 *     MiChargePartitionResidentAvailable @ 0x1402F60D0 (MiChargePartitionResidentAvailable.c)
 *     MiChargeCommit @ 0x1402F64A0 (MiChargeCommit.c)
 *     MiChargeResident @ 0x1403185A0 (MiChargeResident.c)
 *     MiReturnFaultCharges @ 0x140338D0C (MiReturnFaultCharges.c)
 */

unsigned __int64 __fastcall MiObtainFaultCharges(ULONG *a1, unsigned __int64 a2, char a3, __int64 a4)
{
  struct _KPRCB *CurrentPrcb; // rdx
  unsigned __int32 CachedResidentAvailable; // eax
  unsigned __int32 v9; // ett
  unsigned __int64 v10; // rdi
  __int64 v12; // r8

  while ( 1 )
  {
    if ( a1 == &MiSystemPartition )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      CachedResidentAvailable = CurrentPrcb->CachedResidentAvailable;
      while ( a2 <= CachedResidentAvailable && CachedResidentAvailable != -1 )
      {
        v9 = CachedResidentAvailable;
        CachedResidentAvailable = _InterlockedCompareExchange(
                                    (volatile signed __int32 *)&CurrentPrcb->CachedResidentAvailable,
                                    CachedResidentAvailable - a2,
                                    CachedResidentAvailable);
        if ( v9 == CachedResidentAvailable )
          goto LABEL_6;
      }
    }
    v12 = 1LL;
    if ( a2 != 1 )
      v12 = 1024LL;
    if ( (unsigned int)MiChargePartitionResidentAvailable((__int64)a1, a2, v12) )
      break;
    a2 >>= 1;
    if ( !a2 )
      goto LABEL_21;
  }
LABEL_6:
  if ( a2 )
    goto LABEL_7;
LABEL_21:
  if ( (a3 & 2) == 0 )
    return 0LL;
  a2 = 1LL;
  MiChargeResident(a1, 1LL, 0xFFFFFFFFLL);
LABEL_7:
  if ( (a3 & 1) == 0 )
    return a2;
  v10 = a2;
  while ( !(unsigned int)MiChargeCommit(a1, v10, 1LL, a4) )
  {
    v10 >>= 1;
    if ( !v10 )
    {
      if ( (a3 & 2) != 0 )
      {
        v10 = 1LL;
        MiChargeCommit(a1, 1LL, 4LL, a4);
      }
      break;
    }
  }
  if ( v10 != a2 )
    MiReturnFaultCharges(a1, a2 - v10, 0LL);
  return v10;
}
