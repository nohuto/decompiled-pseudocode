/*
 * XREFs of VfAvlFreeNodeNoLock @ 0x1403C1610
 * Callers:
 *     ViDevObjRemove @ 0x140C3693C (ViDevObjRemove.c)
 *     ViRemLockDeleteFirstTreeNode @ 0x140C36DA8 (ViRemLockDeleteFirstTreeNode.c)
 *     VfLookasideAdd @ 0x140C44C64 (VfLookasideAdd.c)
 *     VfLookasideDelete @ 0x140C44D88 (VfLookasideDelete.c)
 *     VfDeleteResource @ 0x140C466BC (VfDeleteResource.c)
 *     VfTrackResource @ 0x140C467E0 (VfTrackResource.c)
 *     VfCheckForResource @ 0x140C4C1CC (VfCheckForResource.c)
 * Callees:
 *     ExFreeToNPagedLookasideList @ 0x1403BF960 (ExFreeToNPagedLookasideList.c)
 *     VfUtilFreePoolCheckIRQL @ 0x1403C1640 (VfUtilFreePoolCheckIRQL.c)
 */

void __fastcall VfAvlFreeNodeNoLock(__int64 a1, void *a2)
{
  if ( *(_DWORD *)(a1 + 28) == 1 )
    ExFreeToNPagedLookasideList((PPAGED_LOOKASIDE_LIST)&stru_140E27C48.ApcStateFill[32], a2);
  else
    VfUtilFreePoolCheckIRQL(a2);
}
