/*
 * XREFs of ?STROBJ_bEnumPositionsOnlyLinked@@YAHPEAVESTROBJ@@PEAKPEAPEAU_GLYPHPOS@@@Z @ 0x140252D20
 * Callers:
 *     ?NtGdiSTROBJ_bEnumInternal@@YAHPEAU_STROBJ@@PEAKPEAPEAU_GLYPHPOS@@H@Z @ 0x1400D9450 (-NtGdiSTROBJ_bEnumInternal@@YAHPEAU_STROBJ@@PEAKPEAPEAU_GLYPHPOS@@H@Z.c)
 *     STROBJ_bEnumPositionsOnly @ 0x140252CF0 (STROBJ_bEnumPositionsOnly.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall STROBJ_bEnumPositionsOnlyLinked(struct ESTROBJ *a1, unsigned int *a2, struct _GLYPHPOS **a3)
{
  unsigned int v4; // r11d
  int v5; // ecx
  _DWORD *v8; // r9
  struct _GLYPHPOS **v9; // rdx
  __int64 v10; // rax
  int v11; // r8d
  __m128i v12; // xmm1
  __m128i v13; // xmm0
  _DWORD *v15; // rax
  int v16; // r8d
  __m128i v17; // xmm1
  __m128i v18; // xmm0

  v4 = 0;
  v5 = *((_DWORD *)a1 + 13);
  if ( v5 )
  {
    if ( v5 == *(_DWORD *)a1 )
    {
      *a2 = 0;
      return 0LL;
    }
    v15 = (_DWORD *)*((_QWORD *)a1 + 27);
    v9 = (struct _GLYPHPOS **)((char *)a1 + 224);
    *((_QWORD *)a1 + 28) += 24LL;
    ++v15;
    v16 = *((_DWORD *)a1 + 59);
    *((_QWORD *)a1 + 27) = v15;
    if ( *v15 != v16 )
    {
      v17 = _mm_loadu_si128((const __m128i *)((char *)a1 + 216));
      do
      {
        v18 = _mm_add_epi64(_mm_load_si128((const __m128i *)&_xmm), v17);
        *(__m128i *)((char *)a1 + 216) = v18;
        v17 = v18;
      }
      while ( **((_DWORD **)a1 + 27) != v16 );
    }
  }
  else
  {
    v8 = (_DWORD *)*((_QWORD *)a1 + 26);
    v9 = (struct _GLYPHPOS **)((char *)a1 + 224);
    v10 = *((_QWORD *)a1 + 8);
    v11 = *((_DWORD *)a1 + 59);
    *((_QWORD *)a1 + 27) = v8;
    *((_QWORD *)a1 + 28) = v10;
    if ( *v8 != v11 )
    {
      v12 = _mm_loadu_si128((const __m128i *)((char *)a1 + 216));
      do
      {
        v13 = _mm_add_epi64(_mm_load_si128((const __m128i *)&_xmm), v12);
        *(__m128i *)((char *)a1 + 216) = v13;
        v12 = v13;
      }
      while ( **((_DWORD **)a1 + 27) != v11 );
    }
  }
  *((_DWORD *)a1 + 13) = v5 + 1;
  *a2 = 1;
  *a3 = *v9;
  LOBYTE(v4) = *((_DWORD *)a1 + 13) < *(_DWORD *)a1;
  return v4;
}
