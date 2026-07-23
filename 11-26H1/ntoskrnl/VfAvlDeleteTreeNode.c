/*
 * XREFs of VfAvlDeleteTreeNode @ 0x1403C1964
 * Callers:
 *     ViDevObjRemove @ 0x140C3693C (ViDevObjRemove.c)
 *     ViRemLockDeleteFirstTreeNode @ 0x140C36DA8 (ViRemLockDeleteFirstTreeNode.c)
 *     VfLookasideAdd @ 0x140C44C64 (VfLookasideAdd.c)
 *     VfLookasideDelete @ 0x140C44D88 (VfLookasideDelete.c)
 *     VfDeleteResource @ 0x140C466BC (VfDeleteResource.c)
 *     VfTrackResource @ 0x140C467E0 (VfTrackResource.c)
 *     VfCheckForResource @ 0x140C4C1CC (VfCheckForResource.c)
 * Callees:
 *     ViAvlTableIndex @ 0x1403C22A8 (ViAvlTableIndex.c)
 *     ViAvlAcquireTableLockAtDpcLevelSafe @ 0x1403C22D0 (ViAvlAcquireTableLockAtDpcLevelSafe.c)
 *     ViAvlRaiseIrqlSafe @ 0x1403C2338 (ViAvlRaiseIrqlSafe.c)
 *     ViAvlReleaseTableLockFromDpcLevel @ 0x1403C2460 (ViAvlReleaseTableLockFromDpcLevel.c)
 *     RtlDeleteElementGenericTableAvl @ 0x1403C2960 (RtlDeleteElementGenericTableAvl.c)
 */

__int64 __fastcall VfAvlDeleteTreeNode(__int64 *a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v6; // rbx
  __int64 v7; // rdi
  __int64 v8; // rcx
  __int64 v9; // rbx
  __int64 Buffer; // [rsp+20h] [rbp-18h] BYREF
  __int64 v12; // [rsp+28h] [rbp-10h]

  Buffer = a3;
  if ( a4 )
    v12 = a4;
  else
    v12 = *a1;
  v6 = ViAvlTableIndex(a1, a3);
  ViAvlRaiseIrqlSafe(a2);
  v7 = 192 * v6;
  ViAvlAcquireTableLockAtDpcLevelSafe(192 * v6 + a1[2], a2);
  RtlDeleteElementGenericTableAvl((PRTL_AVL_TABLE)(192 * v6 + a1[2]), &Buffer);
  _InterlockedDecrement64(a1 + 1);
  v8 = a1[2];
  v9 = *(_QWORD *)(v8 + 192 * v6 + 112);
  *(_QWORD *)(v8 + v7 + 112) = 0LL;
  ViAvlReleaseTableLockFromDpcLevel(v7 + a1[2], a2);
  return v9;
}
