/*
 * XREFs of RtlpHpLfhSubsegmentFree @ 0x18009480C
 * Callers:
 *     RtlpHpLfhOwnerCleanup @ 0x180094734 (RtlpHpLfhOwnerCleanup.c)
 *     RtlpHpLfhBucketAddSubsegment @ 0x180094ED0 (RtlpHpLfhBucketAddSubsegment.c)
 * Callees:
 *     RtlpLogHeapSubSegmentFree @ 0x180017D3C (RtlpLogHeapSubSegmentFree.c)
 *     RtlpHpLfhSubsegmentCountEmptyUnits @ 0x1800958D0 (RtlpHpLfhSubsegmentCountEmptyUnits.c)
 *     RtlpHpLfhContextUpdateFreeCommitCount @ 0x180095998 (RtlpHpLfhContextUpdateFreeCommitCount.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180170020 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall RtlpHpLfhSubsegmentFree(__int64 *a1, __int64 a2, volatile signed __int64 *a3)
{
  int v6; // eax
  unsigned int v7; // esi
  __int64 result; // rax
  __int64 v9; // rcx

  _InterlockedDecrement64(a3 + 8);
  _InterlockedAdd64(a3 + 7, -*(__int16 *)(a2 + 34));
  v6 = RtlpHpLfhSubsegmentCountEmptyUnits(a2);
  if ( v6 )
    RtlpHpLfhContextUpdateFreeCommitCount(
      a1,
      a2,
      -(__int64)((unsigned __int64)(unsigned int)(v6 << 12 << *(_BYTE *)(a2 + 38)) >> 12));
  v7 = HIBYTE(*(unsigned __int16 *)(a2 + 38)) << 12 << *(_WORD *)(a2 + 38);
  ((void (__fastcall *)(_QWORD, __int64, _QWORD, _QWORD))((unsigned __int64)a1 ^ RtlpHpHeapGlobals ^ a1[2]))(
    *a1,
    a2,
    v7,
    0LL);
  result = *a1;
  v9 = *(_QWORD *)(*a1 + 56);
  if ( *(char *)(v9 + 20) < 0 )
    return RtlpLogHeapSubSegmentFree(
             v9,
             a2,
             v7,
             (unsigned __int16)RtlpBucketBlockSizes[(*(unsigned __int8 *)a3 >> 1) + 1],
             2);
  return result;
}
