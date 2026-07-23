/*
 * XREFs of MiReturnCloneCharges @ 0x14036E844
 * Callers:
 *     MiHandleForkValidPrivatePte @ 0x1402ECE40 (MiHandleForkValidPrivatePte.c)
 *     MiHandleForkTransitionPte @ 0x1402F04A0 (MiHandleForkTransitionPte.c)
 *     MiDecrementCloneBlock @ 0x14036BFF0 (MiDecrementCloneBlock.c)
 * Callees:
 *     MiReturnCommit @ 0x14036F050 (MiReturnCommit.c)
 *     MiReturnCrossPartitionCharges @ 0x14036FF88 (MiReturnCrossPartitionCharges.c)
 *     MiReturnResident @ 0x140370060 (MiReturnResident.c)
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
