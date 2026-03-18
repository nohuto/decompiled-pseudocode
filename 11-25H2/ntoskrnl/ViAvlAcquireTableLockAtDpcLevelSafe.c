/*
 * XREFs of ViAvlAcquireTableLockAtDpcLevelSafe @ 0x1403EB720
 * Callers:
 *     VfAvlDeleteTreeNode @ 0x1403EA604 (VfAvlDeleteTreeNode.c)
 *     VfAvlInsertReservedTreeNode @ 0x1403EA7E8 (VfAvlInsertReservedTreeNode.c)
 *     VfTargetDriversRemove @ 0x1403EB31C (VfTargetDriversRemove.c)
 *     VfAvlLookupTreeNode @ 0x1403EB534 (VfAvlLookupTreeNode.c)
 *     DifEnumeratePluginData @ 0x1406045C0 (DifEnumeratePluginData.c)
 *     VfAvlDeleteAllTreeNodes @ 0x140B73BCC (VfAvlDeleteAllTreeNodes.c)
 *     VfAvlEnumerateNodes @ 0x140B73C44 (VfAvlEnumerateNodes.c)
 * Callees:
 *     ViAvlReleaseTableLockFromDpcLevel @ 0x1403EB950 (ViAvlReleaseTableLockFromDpcLevel.c)
 *     ViAvlAcquireTableLockAtDpcLevel @ 0x1403EBB54 (ViAvlAcquireTableLockAtDpcLevel.c)
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
