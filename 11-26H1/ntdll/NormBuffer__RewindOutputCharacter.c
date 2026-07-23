/*
 * XREFs of NormBuffer__RewindOutputCharacter @ 0x1800AFA7C
 * Callers:
 *     Normalization__NormalizeCharacter @ 0x1800AE3FC (Normalization__NormalizeCharacter.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall NormBuffer__RewindOutputCharacter(__int64 a1)
{
  _WORD *v1; // rax
  __int64 result; // rax

  v1 = (_WORD *)(*(_QWORD *)(a1 + 40) - 2LL);
  *(_QWORD *)(a1 + 40) = v1;
  if ( *v1 > 0xDC00u && *v1 < 0xDFFFu )
    *(_QWORD *)(a1 + 40) = v1 - 1;
  *(_QWORD *)(a1 + 64) = *(_QWORD *)(a1 + 24) - 2LL;
  result = 0LL;
  *(_DWORD *)(a1 + 56) = 0;
  *(_WORD *)(a1 + 72) = 0;
  return result;
}
