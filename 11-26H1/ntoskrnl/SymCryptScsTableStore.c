/*
 * XREFs of SymCryptScsTableStore @ 0x1405777A4
 * Callers:
 *     SymCryptModExpWindowed @ 0x14057034C (SymCryptModExpWindowed.c)
 * Callees:
 *     SymCryptScsTableStoreC @ 0x14057782C (SymCryptScsTableStoreC.c)
 */

__int64 __fastcall SymCryptScsTableStore(__int64 a1, int a2, const __m128i *a3)
{
  __int64 result; // rax
  unsigned int v4; // edx

  if ( *(_DWORD *)(a1 + 12) != 128 )
    return SymCryptScsTableStoreC();
  result = *(_QWORD *)(a1 + 16);
  v4 = a2 << 7;
  *(__m128i *)(v4 + result) = _mm_loadu_si128(a3);
  *(__m128i *)(v4 + result + 16) = _mm_loadu_si128(a3 + 1);
  *(__m128i *)(v4 + result + 32) = _mm_loadu_si128(a3 + 2);
  *(__m128i *)(v4 + result + 48) = _mm_loadu_si128(a3 + 3);
  *(__m128i *)(v4 + result + 64) = _mm_loadu_si128(a3 + 4);
  *(__m128i *)(v4 + result + 80) = _mm_loadu_si128(a3 + 5);
  *(__m128i *)(v4 + result + 96) = _mm_loadu_si128(a3 + 6);
  *(__m128i *)(v4 + result + 112) = _mm_loadu_si128(a3 + 7);
  return result;
}
