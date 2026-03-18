/*
 * XREFs of ViAvlAcquireTableLockAtDpcLevelSafe @ 0x1403B83D0
 * Callers:
 *     VfAvlDeleteTreeNode @ 0x1403B7A64 (VfAvlDeleteTreeNode.c)
 *     VfTargetDriversRemove @ 0x1403B7C48 (VfTargetDriversRemove.c)
 *     VfAvlLookupTreeNode @ 0x1403B7E8C (VfAvlLookupTreeNode.c)
 *     VfAvlInsertReservedTreeNode @ 0x1403B86F4 (VfAvlInsertReservedTreeNode.c)
 *     DifEnumeratePluginData @ 0x140640A60 (DifEnumeratePluginData.c)
 *     VfAvlDeleteAllTreeNodes @ 0x140C21FA0 (VfAvlDeleteAllTreeNodes.c)
 *     VfAvlEnumerateNodes @ 0x140C22018 (VfAvlEnumerateNodes.c)
 * Callees:
 *     ViAvlAcquireTableLockAtDpcLevel @ 0x1403B8490 (ViAvlAcquireTableLockAtDpcLevel.c)
 *     ViAvlReleaseTableLockFromDpcLevel @ 0x1403B8560 (ViAvlReleaseTableLockFromDpcLevel.c)
 */

__int64 __fastcall ViAvlAcquireTableLockAtDpcLevelSafe(__int64 a1, __int64 a2)
{
  __int64 result; // rax

  if ( (*(_BYTE *)(a2 + 12) & 2) != 0 && *(_QWORD *)a2 != a1 )
    ViAvlReleaseTableLockFromDpcLevel(*(_QWORD *)a2, a2);
  if ( *(struct _KTHREAD **)(a1 + 136) != KeGetCurrentThread() )
    return ViAvlAcquireTableLockAtDpcLevel(a1, a2);
  result = *(unsigned int *)(a2 + 16);
  *(_DWORD *)(a2 + 16) = result ^ ((unsigned __int8)result ^ (unsigned __int8)(result + 1)) & 0xF;
  return result;
}
