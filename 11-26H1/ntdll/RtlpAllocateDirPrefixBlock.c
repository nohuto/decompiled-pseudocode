/*
 * XREFs of RtlpAllocateDirPrefixBlock @ 0x18015B898
 * Callers:
 *     RtlpEnsureTailingSlashAndAddToList @ 0x18011D730 (RtlpEnsureTailingSlashAndAddToList.c)
 * Callees:
 *     RtlAllocateHeap_0 @ 0x1800439E0 (RtlAllocateHeap_0.c)
 */

__int64 __fastcall RtlpAllocateDirPrefixBlock(__int16 a1)
{
  __int64 result; // rax

  result = RtlAllocateHeap_0();
  if ( result )
  {
    *(_WORD *)(result + 16) = 0;
    *(_QWORD *)(result + 24) = result + 32;
    *(_WORD *)(result + 18) = a1;
  }
  return result;
}
