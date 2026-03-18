/*
 * XREFs of RtlInsertHeadCircularList @ 0x140447AE0
 * Callers:
 *     ExpAcquireResourceSharedLite @ 0x1402B4158 (ExpAcquireResourceSharedLite.c)
 *     ExReleaseResourceLite @ 0x1402B4CF0 (ExReleaseResourceLite.c)
 *     SepFilterCheck @ 0x1402B7790 (SepFilterCheck.c)
 *     ExReleaseResourceAndLeaveCriticalRegion @ 0x1402B8340 (ExReleaseResourceAndLeaveCriticalRegion.c)
 *     ExpReleaseResourceForThreadLite @ 0x1402B9360 (ExpReleaseResourceForThreadLite.c)
 *     ExpAcquireSharedStarveExclusive @ 0x1402E1B68 (ExpAcquireSharedStarveExclusive.c)
 *     ExAcquireSharedWaitForExclusive @ 0x14043AF30 (ExAcquireSharedWaitForExclusive.c)
 *     VrpWaitForDiffHiveEntryTransitionOwnerToLeave @ 0x140B50E94 (VrpWaitForDiffHiveEntryTransitionOwnerToLeave.c)
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
