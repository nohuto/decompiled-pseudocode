/*
 * XREFs of RtlpAllocateDirPrefixBlock @ 0x18015B758
 * Callers:
 *     RtlpEnsureTailingSlashAndAddToList @ 0x18011D4E0 (RtlpEnsureTailingSlashAndAddToList.c)
 * Callees:
 *     RtlAllocateHeap_0 @ 0x18002DF50 (RtlAllocateHeap_0.c)
 */

_WORD *__fastcall RtlpAllocateDirPrefixBlock(unsigned __int16 a1)
{
  _WORD *result; // rax

  result = RtlAllocateHeap_0(LdrpHeap, NtdllBaseTag + 0x40000, a1 + 32LL);
  if ( result )
  {
    result[8] = 0;
    *((_QWORD *)result + 3) = result + 16;
    result[9] = a1;
  }
  return result;
}
