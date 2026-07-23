/*
 * XREFs of RtlpHpLfhSubsegmentFree @ 0x14034B3E0
 * Callers:
 *     RtlpHpLfhBucketAddSubsegment @ 0x14034B2B0 (RtlpHpLfhBucketAddSubsegment.c)
 *     RtlpHpLfhOwnerCleanup @ 0x14063CA5C (RtlpHpLfhOwnerCleanup.c)
 * Callees:
 *     RtlpHpLfhSubsegmentCountEmptyUnits @ 0x14034BD40 (RtlpHpLfhSubsegmentCountEmptyUnits.c)
 *     RtlpHpLfhContextUpdateFreeCommitCount @ 0x14034BD8C (RtlpHpLfhContextUpdateFreeCommitCount.c)
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall RtlpHpLfhSubsegmentFree(_QWORD *a1, __int64 a2, __int64 a3)
{
  int v5; // eax

  _InterlockedDecrement64((volatile signed __int64 *)(a3 + 64));
  _InterlockedAdd64((volatile signed __int64 *)(a3 + 56), -*(__int16 *)(a2 + 34));
  v5 = RtlpHpLfhSubsegmentCountEmptyUnits(a2);
  if ( v5 )
    RtlpHpLfhContextUpdateFreeCommitCount(
      a1,
      a2,
      -(__int64)((unsigned __int64)(unsigned int)(v5 << 12 << *(_BYTE *)(a2 + 38)) >> 12));
  return guard_dispatch_icall_no_overrides(*a1, a2, HIBYTE(*(unsigned __int16 *)(a2 + 38)) << 12 << *(_WORD *)(a2 + 38));
}
