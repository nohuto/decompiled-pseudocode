/*
 * XREFs of MiGetCloneCharges @ 0x14036B234
 * Callers:
 *     MiCombineInitialInstance @ 0x1402EB42C (MiCombineInitialInstance.c)
 *     MiHandleForkValidPrivatePte @ 0x1402ECE40 (MiHandleForkValidPrivatePte.c)
 *     MiHandleForkPagefilePte @ 0x1402EEED4 (MiHandleForkPagefilePte.c)
 *     MiHandleForkTransitionPte @ 0x1402F04A0 (MiHandleForkTransitionPte.c)
 *     MiReferenceCloneProto @ 0x14036C348 (MiReferenceCloneProto.c)
 *     MiIncrementCombinedPte @ 0x14036C478 (MiIncrementCombinedPte.c)
 *     MiWriteSharedDemandZeroPte @ 0x140494784 (MiWriteSharedDemandZeroPte.c)
 * Callees:
 *     MiChargeCommit @ 0x1402D8520 (MiChargeCommit.c)
 *     MiChargeResident @ 0x14031A5D0 (MiChargeResident.c)
 *     MiReturnCommit @ 0x14036F050 (MiReturnCommit.c)
 *     MiReturnResident @ 0x140370060 (MiReturnResident.c)
 *     MiGetCrossPartitionCharges @ 0x1404AFEC8 (MiGetCrossPartitionCharges.c)
 */

__int64 __fastcall MiGetCloneCharges(__int64 a1, char a2)
{
  int v4; // edi

  v4 = a2 & 1;
  if ( (a2 & 1) == 0 || (unsigned int)MiChargeCommit((ULONG *)a1, 1uLL, 0) )
  {
    if ( (a2 & 2) != 0 )
    {
      if ( !(unsigned int)MiChargeCommit((ULONG *)a1, 1uLL, 0) )
      {
        if ( v4 )
          MiReturnCommit(a1, 1LL, 0LL);
        return 0LL;
      }
      _InterlockedAdd64((volatile signed __int64 *)(a1 + 23480), 1uLL);
    }
    if ( (a2 & 4) == 0 )
      return 1LL;
    if ( (unsigned int)MiChargeResident((ULONG *)a1, 1uLL, 0LL) )
    {
      if ( (int)MiGetCrossPartitionCharges(a1, 6LL, 0LL, 1LL) >= 0 )
        return 1LL;
      if ( v4 )
        MiReturnCommit(a1, 1LL, 0LL);
      if ( (a2 & 2) != 0 )
      {
        MiReturnCommit(a1, 1LL, 0LL);
        _InterlockedDecrement64((volatile signed __int64 *)(a1 + 23480));
      }
      MiReturnResident(a1, 1LL);
    }
    else
    {
      if ( v4 )
        MiReturnCommit(a1, 1LL, 0LL);
      if ( (a2 & 2) != 0 )
      {
        MiReturnCommit(a1, 1LL, 0LL);
        _InterlockedDecrement64((volatile signed __int64 *)(a1 + 23480));
      }
    }
  }
  return 0LL;
}
