/*
 * XREFs of strnlen @ 0x140539F20
 * Callers:
 *     EtwpGetEventNameFromEventMetadata @ 0x1404140D0 (EtwpGetEventNameFromEventMetadata.c)
 *     EtwpSetProviderTraitsCommon @ 0x140919184 (EtwpSetProviderTraitsCommon.c)
 *     EtwpGetProviderGroupFromTraits @ 0x140919460 (EtwpGetProviderGroupFromTraits.c)
 *     EtwpAllocateEventNameFilter @ 0x140AA2F10 (EtwpAllocateEventNameFilter.c)
 * Callees:
 *     <none>
 */

size_t __cdecl strnlen(const char *Str, size_t MaxCount)
{
  size_t v4; // r10
  const char *i; // rdx
  size_t v6; // rcx
  __m128i *v7; // rcx
  __m128i *v8; // r8

  v4 = (16LL - ((unsigned __int8)Str & 0xF)) & -(__int64)(((unsigned __int8)Str & 0xF) != 0LL);
  if ( MaxCount < v4 )
    v4 = MaxCount;
  for ( i = Str; i != &Str[v4]; ++i )
  {
    if ( !*i )
      break;
  }
  v6 = i - Str;
  if ( i - Str == v4 )
  {
    v7 = (__m128i *)i;
    v8 = (__m128i *)&i[MaxCount - v4 - (((_BYTE)MaxCount - (_BYTE)v4) & 0xF)];
    if ( i != (const char *)v8 )
    {
      do
      {
        if ( _mm_movemask_epi8(_mm_cmpeq_epi8((__m128i)0LL, *v7)) )
          break;
        ++v7;
      }
      while ( v7 != v8 );
    }
    while ( v7 != (__m128i *)&Str[MaxCount] && v7->m128i_i8[0] )
      v7 = (__m128i *)((char *)v7 + 1);
    return (char *)v7 - Str;
  }
  return v6;
}
