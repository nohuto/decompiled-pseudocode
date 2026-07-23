/*
 * XREFs of strnlen @ 0x18012C7F0
 * Callers:
 *     _strlwr_s @ 0x1801285E0 (_strlwr_s.c)
 *     _strupr_s @ 0x180128710 (_strupr_s.c)
 * Callees:
 *     <none>
 */

size_t __cdecl strnlen(const char *String, size_t MaxCount)
{
  const char *v6; // rdx
  size_t v7; // r11
  size_t v8; // rcx
  __m128i *v9; // rcx
  __m128i *v10; // r8
  size_t v12; // r11
  __m128i *v13; // r8

  v6 = String;
  if ( (_isa_info & 0x10) != 0 )
  {
    v7 = (32LL - ((unsigned __int8)String & 0x1F)) & -(__int64)(((unsigned __int8)String & 0x1F) != 0LL);
    if ( MaxCount < v7 )
      v7 = MaxCount;
    if ( String != &String[v7] )
    {
      do
      {
        if ( !*v6 )
          break;
        ++v6;
      }
      while ( v6 != &String[v7] );
    }
    v8 = v6 - String;
    if ( v6 - String == v7 )
    {
      v9 = (__m128i *)v6;
      v10 = (__m128i *)&v6[MaxCount - v7 - (((_BYTE)MaxCount - (_BYTE)v7) & 0x1F)];
      if ( v6 != (const char *)v10 )
      {
        do
        {
          __asm
          {
            vpxor   xmm1, xmm1, xmm1
            vpcmpeqb ymm1, ymm1, ymmword ptr [rcx]
            vpmovmskb eax, ymm1
          }
          __asm { vzeroupper }
          if ( _EAX )
            break;
          v9 += 2;
        }
        while ( v9 != v10 );
      }
      while ( v9 != (__m128i *)&String[MaxCount] && v9->m128i_i8[0] )
        v9 = (__m128i *)((char *)v9 + 1);
      return (char *)v9 - String;
    }
  }
  else
  {
    v12 = (16LL - ((unsigned __int8)String & 0xF)) & -(__int64)(((unsigned __int8)String & 0xF) != 0LL);
    if ( MaxCount < v12 )
      v12 = MaxCount;
    if ( String != &String[v12] )
    {
      do
      {
        if ( !*v6 )
          break;
        ++v6;
      }
      while ( v6 != &String[v12] );
    }
    v8 = v6 - String;
    if ( v6 - String == v12 )
    {
      v9 = (__m128i *)v6;
      v13 = (__m128i *)&v6[MaxCount - v12 - (((_BYTE)MaxCount - (_BYTE)v12) & 0xF)];
      if ( v6 != (const char *)v13 )
      {
        do
        {
          if ( _mm_movemask_epi8(_mm_cmpeq_epi8((__m128i)0LL, *v9)) )
            break;
          ++v9;
        }
        while ( v9 != v13 );
      }
      while ( v9 != (__m128i *)&String[MaxCount] && v9->m128i_i8[0] )
        v9 = (__m128i *)((char *)v9 + 1);
      return (char *)v9 - String;
    }
  }
  return v8;
}
