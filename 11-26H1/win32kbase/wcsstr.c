/*
 * XREFs of wcsstr @ 0x1401C7178
 * Callers:
 *     ?DrvGetRegistryHandleFromDeviceMap@@YAPEAXPEAUtagGRAPHICS_DEVICE@@W4_DISP_DRIVER_REGISTRY_TYPE@@PEBKPEAGKPEAJ@Z @ 0x140040BF0 (-DrvGetRegistryHandleFromDeviceMap@@YAPEAXPEAUtagGRAPHICS_DEVICE@@W4_DISP_DRIVER_REGISTRY_TYPE@@.c)
 *     rimReadSingleDigitizerToMonitorMappings @ 0x1400E47F0 (rimReadSingleDigitizerToMonitorMappings.c)
 *     ?ParseReserved@@YAKREBGPEBG@Z @ 0x1401C9D68 (-ParseReserved@@YAKREBGPEBG@Z.c)
 *     InitCreateUserSubsystem @ 0x1402F3C80 (InitCreateUserSubsystem.c)
 * Callees:
 *     <none>
 */

wchar_t *__cdecl wcsstr(const wchar_t *Str, const wchar_t *SubStr)
{
  __int64 v3; // rcx
  unsigned int v4; // edi
  __m128i v5; // xmm4
  __m128i v6; // xmm1
  unsigned int v7; // eax
  unsigned __int64 v8; // rcx
  const __m128i *v9; // r9
  const __m128i *i; // r10
  __m128i v11; // xmm2
  unsigned int v12; // eax
  unsigned __int64 v13; // rcx
  __int64 v14; // rcx
  __m128i inserted; // xmm0
  wchar_t v16; // r9
  const wchar_t *v17; // r10
  wchar_t v18; // di
  wchar_t *v19; // rax
  __m128i v20; // xmm1
  unsigned __int8 v21; // cf
  const __m128i *v22; // r9
  const __m128i *j; // r10
  __m128i v24; // xmm1
  __m128i v25; // xmm2
  unsigned __int8 v26; // sf
  __int64 v27; // rax

  if ( !*SubStr )
    return (wchar_t *)Str;
  v3 = 8LL;
  if ( (_isa_info & 8) == 0 )
  {
    v4 = *SubStr;
    if ( (_WORD)v4 )
    {
      v5 = _mm_shuffle_epi32(_mm_shufflelo_epi16(_mm_cvtsi32_si128(v4), 0), 0);
      while ( 1 )
      {
        if ( ((unsigned __int16)Str & 0xFFFu) > 0xFF0uLL )
          goto LABEL_9;
        v6 = _mm_loadu_si128((const __m128i *)Str);
        v7 = _mm_movemask_epi8((__m128i)_mm_or_ps(
                                          (__m128)_mm_cmpeq_epi16(v6, v5),
                                          (__m128)_mm_cmpeq_epi16(v6, (__m128i)0LL)));
        if ( v7 )
        {
          _BitScanForward((unsigned int *)&v8, v7);
          Str += v8 >> 1;
LABEL_9:
          if ( !*Str )
            return 0LL;
          if ( (_WORD)v4 == *Str )
          {
            v9 = (const __m128i *)Str;
            for ( i = (const __m128i *)SubStr; ; i = (const __m128i *)((char *)i + 2) )
            {
              while ( 2 )
              {
                if ( ((unsigned __int16)i & 0xFFFu) <= 0xFF0uLL && ((unsigned __int16)v9 & 0xFFFu) <= 0xFF0uLL )
                {
                  v11 = _mm_loadu_si128(i);
                  v12 = _mm_movemask_epi8((__m128i)_mm_or_ps(
                                                     (__m128)_mm_cmpeq_epi16(
                                                               _mm_cmpeq_epi16(v11, _mm_loadu_si128(v9)),
                                                               (__m128i)0LL),
                                                     (__m128)_mm_cmpeq_epi16(v11, (__m128i)0LL)));
                  if ( !v12 )
                  {
                    ++v9;
                    ++i;
                    continue;
                  }
                  _BitScanForward((unsigned int *)&v13, v12);
                  v14 = 2 * (v13 >> 1);
                  v9 = (const __m128i *)((char *)v9 + v14);
                  i = (const __m128i *)((char *)i + v14);
                }
                break;
              }
              if ( !i->m128i_i16[0] )
                return (wchar_t *)Str;
              if ( v9->m128i_i16[0] != i->m128i_i16[0] )
                break;
              v9 = (const __m128i *)((char *)v9 + 2);
            }
          }
          ++Str;
        }
        else
        {
          Str += 8;
        }
      }
    }
    return (wchar_t *)Str;
  }
  if ( ((unsigned __int16)SubStr & 0xFFFu) > 0xFF0uLL )
  {
    v16 = *SubStr;
    inserted = 0LL;
    v17 = SubStr;
    do
    {
      v18 = v16;
      inserted = _mm_insert_epi16(_mm_srli_si128(inserted, 2), v16, 7);
      v19 = (wchar_t *)(v17 + 1);
      if ( v16 )
        v16 = *v19;
      if ( !v18 )
        v19 = (wchar_t *)v17;
      v17 = v19;
      --v3;
    }
    while ( v3 );
  }
  else
  {
    inserted = _mm_loadu_si128((const __m128i *)SubStr);
  }
  while ( 1 )
  {
    while ( ((unsigned __int16)Str & 0xFFFu) > 0xFF0uLL )
    {
      if ( !*Str )
        return 0LL;
      if ( *Str == *SubStr )
        goto LABEL_36;
LABEL_46:
      ++Str;
    }
    v20 = _mm_loadu_si128((const __m128i *)Str);
    v21 = _mm_cmpistrc(inserted, v20, 13);
    if ( v21 | _mm_cmpistrz(inserted, v20, 13) )
      break;
    Str += 8;
  }
  if ( v21 )
  {
    Str += _mm_cmpistri(inserted, v20, 13);
LABEL_36:
    v22 = (const __m128i *)Str;
    for ( j = (const __m128i *)SubStr; ; j = (const __m128i *)((char *)j + v27) )
    {
      if ( ((unsigned __int16)v22 & 0xFFFu) > 0xFF0uLL || ((unsigned __int16)j & 0xFFFu) > 0xFF0uLL )
      {
        if ( !j->m128i_i16[0] )
          return (wchar_t *)Str;
        if ( v22->m128i_i16[0] != j->m128i_i16[0] )
          goto LABEL_46;
        v27 = 2LL;
      }
      else
      {
        v24 = _mm_loadu_si128(v22);
        v25 = _mm_loadu_si128(j);
        v26 = _mm_cmpistrs(v25, v24, 13);
        if ( !_mm_cmpistro(v25, v24, 13) )
          goto LABEL_46;
        if ( v26 )
          return (wchar_t *)Str;
        v27 = 16LL;
      }
      v22 = (const __m128i *)((char *)v22 + v27);
    }
  }
  return 0LL;
}
