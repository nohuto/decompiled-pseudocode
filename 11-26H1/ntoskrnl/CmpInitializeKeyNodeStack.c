/*
 * XREFs of CmpInitializeKeyNodeStack @ 0x140944138
 * Callers:
 *     CmQueryLayeredKey @ 0x14048BE20 (CmQueryLayeredKey.c)
 *     CmpFullPromoteHiveRootFromKcbStack @ 0x140866A0C (CmpFullPromoteHiveRootFromKcbStack.c)
 *     CmpPromoteSingleKeyFromParentKcbAndChildKeyNode @ 0x140866CE8 (CmpPromoteSingleKeyFromParentKcbAndChildKeyNode.c)
 *     CmpKeyEnumStackInitialize @ 0x140944064 (CmpKeyEnumStackInitialize.c)
 *     CmpDoAccessCheckOnLayeredSubtree @ 0x140946A20 (CmpDoAccessCheckOnLayeredSubtree.c)
 *     CmpPromoteSubtree @ 0x14094717C (CmpPromoteSubtree.c)
 *     CmSaveKey @ 0x140A7EF8C (CmSaveKey.c)
 *     CmpSubtreeEnumeratorInitialize @ 0x140B6541C (CmpSubtreeEnumeratorInitialize.c)
 * Callees:
 *     memset_0 @ 0x140742480 (memset_0.c)
 *     CmpKeyNodeStackEntryInitialize @ 0x140944174 (CmpKeyNodeStackEntryInitialize.c)
 */

__int64 __fastcall CmpInitializeKeyNodeStack(char *a1)
{
  char *v2; // rbx
  __int64 result; // rax
  __int64 v4; // rdx

  memset_0(a1, 0, 0x50uLL);
  v2 = a1 + 8;
  do
  {
    result = CmpKeyNodeStackEntryInitialize(v2);
    v2 += 32;
  }
  while ( v4 != 1 );
  return result;
}
