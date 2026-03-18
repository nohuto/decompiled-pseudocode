/*
 * XREFs of strnlen @ 0x1401A359C
 * Callers:
 *     ?BuildBatch@CApplicationChannel@DirectComposition@@IEAA_NPEAPEAVCBatch@2@0K_NAEAVCMilCommandBatchParser@12@PEAII@Z @ 0x1400227BC (-BuildBatch@CApplicationChannel@DirectComposition@@IEAA_NPEAPEAVCBatch@2@0K_NAEAVCMilCommandBatc.c)
 *     ?EmitDescriptionCommand@CApplicationChannel@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z @ 0x1400DD07C (-EmitDescriptionCommand@CApplicationChannel@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z.c)
 * Callees:
 *     <none>
 */

size_t __cdecl strnlen(const char *Str, size_t MaxCount)
{
  __int64 v2; // r8
  __int64 v4; // rax
  bool v5; // cf
  const char *v6; // r8
  size_t v7; // r10
  size_t v8; // rdx
  __m128i *v9; // rdx
  size_t v10; // r10

  v2 = (unsigned __int8)Str & 0xF;
  v4 = 16 - v2;
  v5 = v2 != 0;
  v6 = Str;
  v7 = v4 & -(__int64)v5;
  if ( MaxCount < v7 )
    v7 = MaxCount;
  if ( Str != &Str[v7] )
  {
    do
    {
      if ( !*v6 )
        break;
      ++v6;
    }
    while ( v6 != &Str[v7] );
  }
  v8 = v6 - Str;
  if ( v6 - Str == v7 )
  {
    v9 = (__m128i *)v6;
    v10 = (size_t)&v6[MaxCount - v7 - (((_BYTE)MaxCount - (_BYTE)v7) & 0xF)];
    if ( v6 != (const char *)v10 )
    {
      do
      {
        if ( _mm_movemask_epi8(_mm_cmpeq_epi8((__m128i)0LL, *v9)) )
          break;
        ++v9;
      }
      while ( v9 != (__m128i *)v10 );
    }
    while ( v9 != (__m128i *)&Str[MaxCount] && v9->m128i_i8[0] )
      v9 = (__m128i *)((char *)v9 + 1);
    return (char *)v9 - Str;
  }
  return v8;
}
