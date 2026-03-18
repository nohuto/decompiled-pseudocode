/*
 * XREFs of VfAvlInsertReservedTreeNode @ 0x1403B86F4
 * Callers:
 *     VfTargetDriversAdd @ 0x1403B7B18 (VfTargetDriversAdd.c)
 *     ViDevObjAdd @ 0x140C30898 (ViDevObjAdd.c)
 *     VerifierIoInitializeRemoveLockEx @ 0x140C30AB0 (VerifierIoInitializeRemoveLockEx.c)
 *     VfLookasideAdd @ 0x140C3EC54 (VfLookasideAdd.c)
 *     VfTrackResource @ 0x140C407D0 (VfTrackResource.c)
 * Callees:
 *     ViAvlTableIndex @ 0x1403B83A8 (ViAvlTableIndex.c)
 *     ViAvlAcquireTableLockAtDpcLevelSafe @ 0x1403B83D0 (ViAvlAcquireTableLockAtDpcLevelSafe.c)
 *     ViAvlRaiseIrqlSafe @ 0x1403B8438 (ViAvlRaiseIrqlSafe.c)
 *     ViAvlReleaseTableLockFromDpcLevel @ 0x1403B8560 (ViAvlReleaseTableLockFromDpcLevel.c)
 *     RtlInsertElementGenericTableAvl @ 0x1403B88C0 (RtlInsertElementGenericTableAvl.c)
 */

__int64 __fastcall VfAvlInsertReservedTreeNode(__int64 a1, __int64 a2, unsigned __int64 *a3)
{
  unsigned __int64 v6; // rbx
  BOOLEAN NewElement; // [rsp+30h] [rbp+8h] BYREF

  v6 = ViAvlTableIndex(a1, *a3);
  ViAvlRaiseIrqlSafe(a2);
  v6 *= 192LL;
  ViAvlAcquireTableLockAtDpcLevelSafe(v6 + *(_QWORD *)(a1 + 16), a2);
  *(_QWORD *)(v6 + *(_QWORD *)(a1 + 16) + 104) = a3;
  RtlInsertElementGenericTableAvl((PRTL_AVL_TABLE)(v6 + *(_QWORD *)(a1 + 16)), a3, 8u, &NewElement);
  _InterlockedIncrement64((volatile signed __int64 *)(a1 + 8));
  return ViAvlReleaseTableLockFromDpcLevel(v6 + *(_QWORD *)(a1 + 16), a2);
}
