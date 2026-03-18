/*
 * XREFs of ViAvlTableIndex @ 0x1403EB6F8
 * Callers:
 *     VfAvlDeleteTreeNode @ 0x1403EA604 (VfAvlDeleteTreeNode.c)
 *     VfAvlInsertReservedTreeNode @ 0x1403EA7E8 (VfAvlInsertReservedTreeNode.c)
 *     VfAvlLookupTreeNode @ 0x1403EB534 (VfAvlLookupTreeNode.c)
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
