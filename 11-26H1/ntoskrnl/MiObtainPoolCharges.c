/*
 * XREFs of MiObtainPoolCharges @ 0x140368124
 * Callers:
 *     MiGetPoolPages @ 0x1403677D0 (MiGetPoolPages.c)
 *     MiGetLargePoolPages @ 0x1403D1B98 (MiGetLargePoolPages.c)
 *     MmAllocateIndependentPagesEx @ 0x140B3F88C (MmAllocateIndependentPagesEx.c)
 * Callees:
 *     MiChargePartitionResidentAvailable @ 0x1402D8150 (MiChargePartitionResidentAvailable.c)
 *     MiChargeCommit @ 0x1402D8520 (MiChargeCommit.c)
 *     MiReturnCommit @ 0x14036F050 (MiReturnCommit.c)
 */

__int64 __fastcall MiObtainPoolCharges(unsigned __int64 a1, int a2)
{
  struct _KPRCB *CurrentPrcb; // rdx
  unsigned __int32 CachedResidentAvailable; // eax
  unsigned __int32 v6; // ett
  volatile signed __int64 *p_Dpc; // rax

  if ( !qword_140E3D9D8 )
    return 1LL;
  if ( (unsigned int)MiChargeCommit(&MiSystemPartition, a1, 1u) )
  {
    CurrentPrcb = KeGetCurrentPrcb();
    CachedResidentAvailable = CurrentPrcb->CachedResidentAvailable;
    while ( a1 <= CachedResidentAvailable && CachedResidentAvailable != -1 )
    {
      v6 = CachedResidentAvailable;
      CachedResidentAvailable = _InterlockedCompareExchange(
                                  (volatile signed __int32 *)&CurrentPrcb->CachedResidentAvailable,
                                  CachedResidentAvailable - a1,
                                  CachedResidentAvailable);
      if ( v6 == CachedResidentAvailable )
        goto LABEL_7;
    }
    if ( !(unsigned int)MiChargePartitionResidentAvailable((__int64)&MiSystemPartition, a1, 0LL) )
    {
      MiReturnCommit(&MiSystemPartition, a1, 1LL);
      return 0LL;
    }
LABEL_7:
    p_Dpc = (volatile signed __int64 *)&stru_140E366D8.Timer.Dpc;
    if ( a2 )
      p_Dpc = (volatile signed __int64 *)&stru_140E366D8.Timer.Processor;
    _InterlockedAdd64(p_Dpc, a1);
    return 1LL;
  }
  return 0LL;
}
