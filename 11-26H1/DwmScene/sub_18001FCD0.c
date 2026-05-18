/*
 * XREFs of sub_18001FCD0 @ 0x18001FCD0
 * Callers:
 *     sub_18001F05C @ 0x18001F05C (sub_18001F05C.c)
 *     sub_18001FA20 @ 0x18001FA20 (sub_18001FA20.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_18001FCD0(const __m128i *a1, const __m128i *a2, unsigned __int64 a3)
{
  unsigned __int64 v3; // r9
  const __m128i *v7; // r10
  unsigned __int64 v8; // rcx
  unsigned __int64 i; // rcx
  unsigned __int64 v13; // rcx
  __int64 result; // rax
  unsigned __int16 v15; // dx
  unsigned __int64 v16; // rcx
  unsigned __int64 v17; // rdx
  unsigned __int64 v18; // rax
  unsigned __int64 v19; // rax
  bool v20; // cf
  __int16 *v21; // rax
  signed __int64 v22; // r11
  unsigned __int16 v23; // cx

  v3 = 0LL;
  _RAX = a1;
  v7 = a2;
  if ( dword_1801C8468 && a3 >= 0x10 )
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
      if ( v8 > a3 )
      {
        __asm { vzeroupper }
        goto LABEL_7;
      }
    }
    _BitScanForward((unsigned int *)&v13, ~_EDX);
    result = a1->m128i_i16[(v13 >> 1) + v3] < (unsigned int)a2->m128i_i16[(v13 >> 1) + v3] ? -1 : 1;
    __asm { vzeroupper }
  }
  else
  {
LABEL_7:
    for ( i = v3 + 8; i <= a3; i += 8LL )
    {
      v15 = _mm_movemask_epi8(_mm_cmpeq_epi16(_mm_loadu_si128(v7), _mm_loadu_si128(_RAX)));
      if ( v15 != 0xFFFF )
      {
        _BitScanForward((unsigned int *)&v19, ~v15);
        v17 = (v19 >> 1) + v3;
        v18 = v17;
LABEL_16:
        v20 = a1->m128i_i16[v17] < (unsigned int)a2->m128i_i16[v18];
        return v20 ? -1 : 1;
      }
      v3 += 8LL;
      ++_RAX;
      ++v7;
    }
    if ( v3 + 4 <= a3 )
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
    if ( v3 < a3 )
    {
      v21 = &a2->m128i_i16[v3];
      v22 = (char *)a1 - (char *)a2;
      while ( 1 )
      {
        v23 = *(__int16 *)((char *)v21 + v22);
        v20 = v23 < (unsigned __int16)*v21;
        if ( v23 != *v21 )
          break;
        ++v3;
        ++v21;
        if ( v3 >= a3 )
          return 0LL;
      }
      return v20 ? -1 : 1;
    }
    return 0LL;
  }
  return result;
}
