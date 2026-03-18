/*
 * XREFs of ViAvlTableIndex @ 0x1403B83A8
 * Callers:
 *     VfAvlDeleteTreeNode @ 0x1403B7A64 (VfAvlDeleteTreeNode.c)
 *     VfAvlLookupTreeNode @ 0x1403B7E8C (VfAvlLookupTreeNode.c)
 *     VfAvlInsertReservedTreeNode @ 0x1403B86F4 (VfAvlInsertReservedTreeNode.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall ViAvlTableIndex(__int64 a1, unsigned __int64 a2)
{
  unsigned int v3; // edx

  v3 = *(_DWORD *)(a1 + 24);
  if ( v3 == 1 )
    return 0LL;
  else
    return (a2 >> 12) % v3;
}
