/*
 * XREFs of ViAvlReleaseTableLockFromDpcLevel @ 0x1403EB950
 * Callers:
 *     VfAvlDeleteTreeNode @ 0x1403EA604 (VfAvlDeleteTreeNode.c)
 *     VfAvlInsertReservedTreeNode @ 0x1403EA7E8 (VfAvlInsertReservedTreeNode.c)
 *     VfTargetDriversRemove @ 0x1403EB31C (VfTargetDriversRemove.c)
 *     VfAvlLookupTreeNode @ 0x1403EB534 (VfAvlLookupTreeNode.c)
 *     ViAvlAcquireTableLockAtDpcLevelSafe @ 0x1403EB720 (ViAvlAcquireTableLockAtDpcLevelSafe.c)
 *     VfAvlCleanupLockContext @ 0x1403EB8EC (VfAvlCleanupLockContext.c)
 *     DifEnumeratePluginData @ 0x1406045C0 (DifEnumeratePluginData.c)
 *     VfAvlDeleteAllTreeNodes @ 0x140B73BCC (VfAvlDeleteAllTreeNodes.c)
 *     VfAvlEnumerateNodes @ 0x140B73C44 (VfAvlEnumerateNodes.c)
 * Callees:
 *     ExReleaseSpinLockSharedFromDpcLevel @ 0x1402B5440 (ExReleaseSpinLockSharedFromDpcLevel.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x14031F890 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 */

__int64 __fastcall ViAvlReleaseTableLockFromDpcLevel(__int64 a1, __int64 a2)
{
  volatile LONG *v4; // rcx
  __int64 result; // rax

  if ( (*(_DWORD *)(a2 + 16) & 0xF) == 1 )
  {
    v4 = (volatile LONG *)(a1 + 128);
    if ( (*(_BYTE *)(a2 + 12) & 4) != 0 )
    {
      *(_QWORD *)(a1 + 136) = 0LL;
      ExReleaseSpinLockExclusiveFromDpcLevel(v4);
    }
    else
    {
      ExReleaseSpinLockSharedFromDpcLevel(v4);
    }
    *(_BYTE *)(a2 + 12) &= ~2u;
    *(_QWORD *)a2 = 0LL;
  }
  result = *(unsigned int *)(a2 + 16);
  *(_DWORD *)(a2 + 16) = result ^ ((unsigned __int8)result ^ (unsigned __int8)(result - 1)) & 0xF;
  return result;
}
