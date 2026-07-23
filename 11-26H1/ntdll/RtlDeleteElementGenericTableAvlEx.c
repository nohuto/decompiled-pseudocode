/*
 * XREFs of RtlDeleteElementGenericTableAvlEx @ 0x1800BB990
 * Callers:
 *     <none>
 * Callees:
 *     DeleteNodeFromTree @ 0x1800BB9F0 (DeleteNodeFromTree.c)
 *     RealPredecessor @ 0x1800BBB90 (RealPredecessor.c)
 */

__int64 __fastcall RtlDeleteElementGenericTableAvlEx(__int64 a1, __int64 a2)
{
  if ( a2 == *(_QWORD *)(a1 + 56) )
    *(_QWORD *)(a1 + 56) = RealPredecessor(a2);
  ++*(_DWORD *)(a1 + 64);
  DeleteNodeFromTree(a1, a2);
  --*(_DWORD *)(a1 + 44);
  *(_DWORD *)(a1 + 40) = 0;
  *(_QWORD *)(a1 + 32) = 0LL;
  return (*(__int64 (__fastcall **)(__int64, __int64))(a1 + 88))(a1, a2);
}
