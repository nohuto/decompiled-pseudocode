/*
 * XREFs of LinkNodeClearPossibleData @ 0x1400C42AC
 * Callers:
 *     IrqArbpQueryConflictIsa @ 0x1400BE8CC (IrqArbpQueryConflictIsa.c)
 *     IrqArbpPrepareForTestOrConflict @ 0x1400C379C (IrqArbpPrepareForTestOrConflict.c)
 *     IrqArbCommitAllocation @ 0x1400C38C0 (IrqArbCommitAllocation.c)
 * Callees:
 *     <none>
 */

__int64 *LinkNodeClearPossibleData()
{
  __int64 v0; // rcx
  __int64 *result; // rax

  v0 = LinkNodeListHead - 56;
  for ( result = (__int64 *)LinkNodeListHead; &LinkNodeListHead != result; v0 = (__int64)(result - 7) )
  {
    result = *(__int64 **)(v0 + 56);
    *(_DWORD *)(v0 + 36) = 0;
    *(_DWORD *)(v0 + 28) = 0;
  }
  return result;
}
