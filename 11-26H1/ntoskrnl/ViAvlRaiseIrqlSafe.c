/*
 * XREFs of ViAvlRaiseIrqlSafe @ 0x1403C2338
 * Callers:
 *     VfAvlDeleteTreeNode @ 0x1403C1964 (VfAvlDeleteTreeNode.c)
 *     VfTargetDriversRemove @ 0x1403C1B48 (VfTargetDriversRemove.c)
 *     VfAvlLookupTreeNode @ 0x1403C1D8C (VfAvlLookupTreeNode.c)
 *     VfAvlInsertReservedTreeNode @ 0x1403C25F4 (VfAvlInsertReservedTreeNode.c)
 *     DifEnumeratePluginData @ 0x140644640 (DifEnumeratePluginData.c)
 *     VfAvlDeleteAllTreeNodes @ 0x140C27FB0 (VfAvlDeleteAllTreeNodes.c)
 *     VfAvlEnumerateNodes @ 0x140C28028 (VfAvlEnumerateNodes.c)
 * Callees:
 *     KiRaiseIrqlProcessIrqlFlags @ 0x140523094 (KiRaiseIrqlProcessIrqlFlags.c)
 */

__int64 __fastcall ViAvlRaiseIrqlSafe(__int64 a1)
{
  __int64 v1; // rbx
  __int64 result; // rax
  unsigned __int8 CurrentIrql; // di

  v1 = a1;
  result = KeGetCurrentIrql();
  if ( (unsigned __int8)result < 2u && (*(_BYTE *)(a1 + 12) & 1) == 0 )
  {
    CurrentIrql = KeGetCurrentIrql();
    if ( CurrentIrql != 2 )
      __writecr8(2uLL);
    if ( KiIrqlFlags )
    {
      LOBYTE(a1) = CurrentIrql;
      result = KiRaiseIrqlProcessIrqlFlags(a1, 2LL);
    }
    *(_BYTE *)(v1 + 12) |= 1u;
    *(_BYTE *)(v1 + 8) = CurrentIrql;
  }
  return result;
}
