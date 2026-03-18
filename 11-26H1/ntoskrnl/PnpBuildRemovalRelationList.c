/*
 * XREFs of PnpBuildRemovalRelationList @ 0x1409128B0
 * Callers:
 *     PnpProcessQueryRemoveAndEject @ 0x140911B30 (PnpProcessQueryRemoveAndEject.c)
 * Callees:
 *     IopSortRelationListForRemove @ 0x14090F5A8 (IopSortRelationListForRemove.c)
 *     IopAllocateRelationList @ 0x140911808 (IopAllocateRelationList.c)
 *     IopFreeRelationList @ 0x140913A50 (IopFreeRelationList.c)
 *     PnpProcessRelation @ 0x140913D04 (PnpProcessRelation.c)
 */

__int64 __fastcall PnpBuildRemovalRelationList(__int64 a1, unsigned int a2, int a3, _QWORD *a4)
{
  __int64 v4; // rax
  __int64 v8; // r14
  _BYTE *BugCheckParameter3; // rax
  void *v10; // rbx
  int v11; // edi

  v4 = *(_QWORD *)(a1 + 312);
  *a4 = 0LL;
  v8 = *(_QWORD *)(v4 + 40);
  BugCheckParameter3 = IopAllocateRelationList(a2);
  v10 = BugCheckParameter3;
  if ( !BugCheckParameter3 )
    return 3221225626LL;
  v11 = PnpProcessRelation(v8, a2, 2, a3, (ULONG_PTR)BugCheckParameter3);
  if ( v11 < 0 )
  {
    IopFreeRelationList(v10);
  }
  else
  {
    *a4 = v10;
    IopSortRelationListForRemove((__int64)v10);
  }
  return (unsigned int)v11;
}
