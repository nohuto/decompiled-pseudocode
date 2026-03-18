/*
 * XREFs of SmmGetSiblingBlock @ 0x140069FBC
 * Callers:
 *     SmmCoalesceBlocks @ 0x14009CB04 (SmmCoalesceBlocks.c)
 *     SmmReleaseBlock @ 0x14009CEDC (SmmReleaseBlock.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall SmmGetSiblingBlock(__int64 a1, __int64 *a2)
{
  unsigned __int64 v2; // r10
  __int64 v3; // r8
  __int64 v5; // rcx

  v2 = (unsigned __int64)a2[4] >> 53;
  v3 = a2[4] & 0xFFFFFFFFFFFFFLL;
  if ( ((2 * (1LL << v2) - 1) & v3) != 0 )
  {
    v5 = a2[1];
  }
  else
  {
    if ( (unsigned __int64)(v3 + (1LL << v2)) >= *(_QWORD *)(a1 + 1248) >> 12 )
      return 0LL;
    v5 = *a2;
  }
  if ( (((unsigned __int8)v2 ^ (unsigned __int8)(*(_QWORD *)(v5 + 32) >> 53)) & 0x3F) != 0 )
    return 0LL;
  return v5;
}
