/*
 * XREFs of MiUpdateShareCount @ 0x14041BF70
 * Callers:
 *     MmCheckCachedPageStates @ 0x1402C8850 (MmCheckCachedPageStates.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiUpdateShareCount(__int64 a1, __int64 a2)
{
  __int64 result; // rax

  result = a2 + (*(_QWORD *)(a1 + 24) & 0x3FFFFFFFFFFFFFFFLL);
  *(_QWORD *)(a1 + 24) = result ^ (*(_QWORD *)(a1 + 24) ^ result) & 0xC000000000000000uLL;
  return result;
}
