/*
 * XREFs of RtlInsertHeadCircularList @ 0x1404405D0
 * Callers:
 *     ExpAcquireSharedStarveExclusive @ 0x1402C3C28 (ExpAcquireSharedStarveExclusive.c)
 *     ExpAcquireResourceSharedLite @ 0x1402FEE28 (ExpAcquireResourceSharedLite.c)
 *     ExReleaseResourceLite @ 0x1402FF9C0 (ExReleaseResourceLite.c)
 *     SepFilterCheck @ 0x140302450 (SepFilterCheck.c)
 *     ExReleaseResourceAndLeaveCriticalRegion @ 0x140303000 (ExReleaseResourceAndLeaveCriticalRegion.c)
 *     ExpReleaseResourceForThreadLite @ 0x140304020 (ExpReleaseResourceForThreadLite.c)
 *     ExAcquireSharedWaitForExclusive @ 0x14042D7E0 (ExAcquireSharedWaitForExclusive.c)
 *     VrpWaitForDiffHiveEntryTransitionOwnerToLeave @ 0x140B5372C (VrpWaitForDiffHiveEntryTransitionOwnerToLeave.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlInsertHeadCircularList(__int64 *a1, _QWORD *a2)
{
  __int64 result; // rax
  _QWORD *v3; // r8

  result = *a1;
  if ( *a1 )
  {
    v3 = *(_QWORD **)(result + 8);
    if ( *v3 != result )
      __fastfail(3u);
    *a2 = result;
    a2[1] = v3;
    *v3 = a2;
    *(_QWORD *)(result + 8) = a2;
    *a1 = (__int64)a2;
  }
  else
  {
    a2[1] = a2;
    *a2 = a2;
    *a1 = (__int64)a2;
  }
  return result;
}
