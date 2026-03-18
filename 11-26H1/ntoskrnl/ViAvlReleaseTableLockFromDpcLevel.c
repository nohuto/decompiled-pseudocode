/*
 * XREFs of ViAvlReleaseTableLockFromDpcLevel @ 0x1403B8560
 * Callers:
 *     VfAvlDeleteTreeNode @ 0x1403B7A64 (VfAvlDeleteTreeNode.c)
 *     VfTargetDriversRemove @ 0x1403B7C48 (VfTargetDriversRemove.c)
 *     VfAvlLookupTreeNode @ 0x1403B7E8C (VfAvlLookupTreeNode.c)
 *     ViAvlAcquireTableLockAtDpcLevelSafe @ 0x1403B83D0 (ViAvlAcquireTableLockAtDpcLevelSafe.c)
 *     VfAvlCleanupLockContext @ 0x1403B84FC (VfAvlCleanupLockContext.c)
 *     VfAvlInsertReservedTreeNode @ 0x1403B86F4 (VfAvlInsertReservedTreeNode.c)
 *     DifEnumeratePluginData @ 0x140640A60 (DifEnumeratePluginData.c)
 *     VfAvlDeleteAllTreeNodes @ 0x140C21FA0 (VfAvlDeleteAllTreeNodes.c)
 *     VfAvlEnumerateNodes @ 0x140C22018 (VfAvlEnumerateNodes.c)
 * Callees:
 *     ExReleaseSpinLockSharedFromDpcLevel @ 0x1402DC6D0 (ExReleaseSpinLockSharedFromDpcLevel.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x1402DECD0 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 */

__int64 __fastcall ViAvlReleaseTableLockFromDpcLevel(__int64 a1, __int64 a2)
{
  __int64 result; // rax
  volatile LONG *v5; // rcx

  if ( (*(_DWORD *)(a2 + 16) & 0xF) == 1 )
  {
    v5 = (volatile LONG *)(a1 + 128);
    if ( (*(_BYTE *)(a2 + 12) & 4) != 0 )
    {
      *(_QWORD *)(a1 + 136) = 0LL;
      ExReleaseSpinLockExclusiveFromDpcLevel(v5);
    }
    else
    {
      ExReleaseSpinLockSharedFromDpcLevel(v5);
    }
    *(_BYTE *)(a2 + 12) &= ~2u;
    *(_QWORD *)a2 = 0LL;
  }
  result = *(unsigned int *)(a2 + 16);
  *(_DWORD *)(a2 + 16) = result ^ ((unsigned __int8)result ^ (unsigned __int8)(result - 1)) & 0xF;
  return result;
}
