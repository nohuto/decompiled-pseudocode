/*
 * XREFs of VfAvlFreeNodeNoLock @ 0x1403B7710
 * Callers:
 *     ViDevObjRemove @ 0x140C3092C (ViDevObjRemove.c)
 *     ViRemLockDeleteFirstTreeNode @ 0x140C30D98 (ViRemLockDeleteFirstTreeNode.c)
 *     VfLookasideAdd @ 0x140C3EC54 (VfLookasideAdd.c)
 *     VfLookasideDelete @ 0x140C3ED78 (VfLookasideDelete.c)
 *     VfDeleteResource @ 0x140C406AC (VfDeleteResource.c)
 *     VfTrackResource @ 0x140C407D0 (VfTrackResource.c)
 *     VfCheckForResource @ 0x140C461BC (VfCheckForResource.c)
 * Callees:
 *     ExFreeToNPagedLookasideList @ 0x1403B5A60 (ExFreeToNPagedLookasideList.c)
 *     VfUtilFreePoolCheckIRQL @ 0x1403B7740 (VfUtilFreePoolCheckIRQL.c)
 */

void __fastcall VfAvlFreeNodeNoLock(__int64 a1, void *a2)
{
  if ( *(_DWORD *)(a1 + 28) == 1 )
    ExFreeToNPagedLookasideList((PPAGED_LOOKASIDE_LIST)&stru_140E27B08.ApcStateFill[32], a2);
  else
    VfUtilFreePoolCheckIRQL(a2);
}
