/*
 * XREFs of wmemcmp @ 0x1800B5A20
 * Callers:
 *     ?compare@?$_WChar_traits@G@std@@SAHQEBG0_K@Z @ 0x1800230CC (-compare@-$_WChar_traits@G@std@@SAHQEBG0_K@Z.c)
 * Callees:
 *     <none>
 */

int __cdecl wmemcmp(const wchar_t *S1, const wchar_t *S2, size_t N)
{
  size_t v3; // r9
  const __m128i *v7; // r10
  size_t v8; // rcx
  size_t i; // rcx
  unsigned __int64 v13; // rcx
  int result; // eax
  unsigned __int16 v15; // dx
  unsigned __int64 v16; // rcx
  unsigned __int64 v17; // rdx
  unsigned __int64 v18; // rax
  unsigned __int64 v19; // rax
  bool v20; // cf
  const wchar_t *v21; // rax
  signed __int64 v22; // r11
  wchar_t v23; // cx

  v3 = 0LL;
  _RAX = (const __m128i *)S1;
  v7 = (const __m128i *)S2;
  if ( Avx2WmemEnabledWeakValue && N >= 0x10 )
  {
    v8 = 16LL;
    while ( 1 )
    {
      __asm
      {
        vmovdqu ymm1, ymmword ptr [rax]
        vpcmpeqw ymm1, ymm1, ymmword ptr [r10]
        vpmovmskb edx, ymm1
      }
      if ( _EDX != -1 )
        break;
      v3 += 16LL;
      v8 += 16LL;
      _RAX += 2;
      v7 += 2;
      if ( v8 > N )
      {
        __asm { vzeroupper }
        goto LABEL_7;
      }
    }
    _BitScanForward((unsigned int *)&v13, ~_EDX);
    result = S1[(v13 >> 1) + v3] < S2[(v13 >> 1) + v3] ? -1 : 1;
    __asm { vzeroupper }
  }
  else
  {
LABEL_7:
    for ( i = v3 + 8; i <= N; i += 8LL )
    {
      v15 = _mm_movemask_epi8(_mm_cmpeq_epi16(_mm_loadu_si128(v7), _mm_loadu_si128(_RAX)));
      if ( v15 != 0xFFFF )
      {
        _BitScanForward((unsigned int *)&v19, ~v15);
        v17 = (v19 >> 1) + v3;
        v18 = v17;
LABEL_16:
        v20 = S1[v17] < S2[v18];
        return v20 ? -1 : 1;
      }
      v3 += 8LL;
      ++_RAX;
      ++v7;
    }
    if ( v3 + 4 <= N )
    {
      if ( _RAX->m128i_i64[0] != v7->m128i_i64[0] )
      {
        _BitScanForward64(&v16, _RAX->m128i_i64[0] ^ v7->m128i_i64[0]);
        v17 = (v16 >> 4) + v3;
        v18 = v17;
        goto LABEL_16;
      }
      v3 += 4LL;
    }
    if ( v3 < N )
    {
      v21 = &S2[v3];
      v22 = (char *)S1 - (char *)S2;
      while ( 1 )
      {
        v23 = *(const wchar_t *)((char *)v21 + v22);
        v20 = v23 < *v21;
        if ( v23 != *v21 )
          break;
        ++v3;
        ++v21;
        if ( v3 >= N )
          return 0;
      }
      return v20 ? -1 : 1;
    }
    return 0;
  }
  return result;
}
