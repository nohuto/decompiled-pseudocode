/*
 * XREFs of MiReturnCloneCharges @ 0x14036CAA4
 * Callers:
 *     MiHandleForkValidPrivatePte @ 0x14030ADC0 (MiHandleForkValidPrivatePte.c)
 *     MiHandleForkTransitionPte @ 0x14030E420 (MiHandleForkTransitionPte.c)
 *     MiDecrementCloneBlock @ 0x14036A250 (MiDecrementCloneBlock.c)
 * Callees:
 *     MiReturnCommit @ 0x14036D2B0 (MiReturnCommit.c)
 *     MiReturnCrossPartitionCharges @ 0x14036E1E8 (MiReturnCrossPartitionCharges.c)
 *     MiReturnResident @ 0x14036E2C0 (MiReturnResident.c)
 */

__int64 __fastcall MiReturnCloneCharges(__int64 a1, char a2)
{
  __int64 result; // rax

  if ( (a2 & 1) != 0 )
    result = MiReturnCommit(a1, 1LL, 0LL);
  if ( (a2 & 2) != 0 )
  {
    result = MiReturnCommit(a1, 1LL, 0LL);
    _InterlockedDecrement64((volatile signed __int64 *)(a1 + 23480));
  }
  if ( (a2 & 4) != 0 )
  {
    MiReturnResident(a1, 1LL);
    return MiReturnCrossPartitionCharges(a1, 6LL, 0LL, 1LL);
  }
  return result;
}
