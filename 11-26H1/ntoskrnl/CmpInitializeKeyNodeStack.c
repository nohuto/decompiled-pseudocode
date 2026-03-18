/*
 * XREFs of CmpInitializeKeyNodeStack @ 0x140982128
 * Callers:
 *     CmQueryLayeredKey @ 0x1404922D0 (CmQueryLayeredKey.c)
 *     CmpFullPromoteHiveRootFromKcbStack @ 0x14086071C (CmpFullPromoteHiveRootFromKcbStack.c)
 *     CmpPromoteSingleKeyFromParentKcbAndChildKeyNode @ 0x1408609F8 (CmpPromoteSingleKeyFromParentKcbAndChildKeyNode.c)
 *     CmpKeyEnumStackInitialize @ 0x140982054 (CmpKeyEnumStackInitialize.c)
 *     CmpDoAccessCheckOnLayeredSubtree @ 0x140984A10 (CmpDoAccessCheckOnLayeredSubtree.c)
 *     CmpPromoteSubtree @ 0x140985174 (CmpPromoteSubtree.c)
 *     CmSaveKey @ 0x140A7626C (CmSaveKey.c)
 *     CmpSubtreeEnumeratorInitialize @ 0x140B6237C (CmpSubtreeEnumeratorInitialize.c)
 * Callees:
 *     memset_0 @ 0x14073D880 (memset_0.c)
 *     CmpKeyNodeStackEntryInitialize @ 0x140982164 (CmpKeyNodeStackEntryInitialize.c)
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
