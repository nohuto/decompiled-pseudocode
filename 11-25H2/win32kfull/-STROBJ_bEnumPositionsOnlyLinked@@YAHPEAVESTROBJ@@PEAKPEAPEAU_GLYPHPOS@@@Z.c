/*
 * XREFs of ?STROBJ_bEnumPositionsOnlyLinked@@YAHPEAVESTROBJ@@PEAKPEAPEAU_GLYPHPOS@@@Z @ 0x1400A8D40
 * Callers:
 *     STROBJ_bEnumPositionsOnly @ 0x1400A8D10 (STROBJ_bEnumPositionsOnly.c)
 *     ?NtGdiSTROBJ_bEnumInternal@@YAHPEAU_STROBJ@@PEAKPEAPEAU_GLYPHPOS@@H@Z @ 0x1400A9830 (-NtGdiSTROBJ_bEnumInternal@@YAHPEAU_STROBJ@@PEAKPEAPEAU_GLYPHPOS@@H@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall STROBJ_bEnumPositionsOnlyLinked(struct ESTROBJ *a1, unsigned int *a2, struct _GLYPHPOS **a3)
{
  int v3; // ebx
  unsigned int v4; // r11d
  _DWORD *v7; // r9
  __int64 v8; // rax
  int v9; // ecx
  __m128i v10; // xmm1
  __m128i v11; // xmm0
  int v13; // r8d
  __m128i si128; // xmm2
  __m128i v15; // xmm1
  __m128i v16; // xmm0

  v3 = *((_DWORD *)a1 + 13);
  v4 = 0;
  if ( v3 )
  {
    if ( v3 == *(_DWORD *)a1 )
    {
      *a2 = 0;
      return 0LL;
    }
    v13 = *((_DWORD *)a1 + 59);
    si128 = _mm_load_si128((const __m128i *)&_xmm);
    v15 = _mm_add_epi64(_mm_loadu_si128((const __m128i *)((char *)a1 + 216)), si128);
    for ( *(__m128i *)((char *)a1 + 216) = v15; **((_DWORD **)a1 + 27) != v13; v15 = v16 )
    {
      v16 = _mm_add_epi64(si128, v15);
      *(__m128i *)((char *)a1 + 216) = v16;
    }
  }
  else
  {
    v7 = (_DWORD *)*((_QWORD *)a1 + 26);
    v8 = *((_QWORD *)a1 + 8);
    *((_QWORD *)a1 + 27) = v7;
    *((_QWORD *)a1 + 28) = v8;
    v9 = *((_DWORD *)a1 + 59);
    if ( *v7 != v9 )
    {
      v10 = _mm_loadu_si128((const __m128i *)((char *)a1 + 216));
      do
      {
        v11 = _mm_add_epi64(_mm_load_si128((const __m128i *)&_xmm), v10);
        *(__m128i *)((char *)a1 + 216) = v11;
        v10 = v11;
      }
      while ( **((_DWORD **)a1 + 27) != v9 );
    }
  }
  *((_DWORD *)a1 + 13) = v3 + 1;
  *a2 = 1;
  *a3 = (struct _GLYPHPOS *)*((_QWORD *)a1 + 28);
  LOBYTE(v4) = *((_DWORD *)a1 + 13) < *(_DWORD *)a1;
  return v4;
}
