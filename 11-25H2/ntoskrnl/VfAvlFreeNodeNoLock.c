/*
 * XREFs of VfAvlFreeNodeNoLock @ 0x140604708
 * Callers:
 *     VfTargetDriversRemove @ 0x1403EB31C (VfTargetDriversRemove.c)
 *     ViDevObjRemove @ 0x140B824BC (ViDevObjRemove.c)
 *     ViRemLockDeleteFirstTreeNode @ 0x140B82924 (ViRemLockDeleteFirstTreeNode.c)
 *     VfLookasideAdd @ 0x140B8FE64 (VfLookasideAdd.c)
 *     VfLookasideDelete @ 0x140B8FF88 (VfLookasideDelete.c)
 *     VfDeleteResource @ 0x140B918AC (VfDeleteResource.c)
 *     VfTrackResource @ 0x140B919D0 (VfTrackResource.c)
 *     VfCheckForResource @ 0x140B971F8 (VfCheckForResource.c)
 * Callees:
 *     ExFreeToNPagedLookasideList @ 0x1403739F0 (ExFreeToNPagedLookasideList.c)
 *     VfUtilFreePoolCheckIRQL @ 0x1404BBAB0 (VfUtilFreePoolCheckIRQL.c)
 */

void __fastcall VfAvlFreeNodeNoLock(__int64 a1, _SLIST_ENTRY *a2)
{
  if ( *(_DWORD *)(a1 + 28) == 1 )
    ExFreeToNPagedLookasideList(&ViAvlNodeLookaside, a2);
  else
    VfUtilFreePoolCheckIRQL(a2);
}
