/*
 * XREFs of ?STROBJ_bEnumLinked@@YAHPEAVESTROBJ@@PEAKPEAPEAU_GLYPHPOS@@@Z @ 0x1400DB1C4
 * Callers:
 *     STROBJ_bEnum @ 0x1400DA160 (STROBJ_bEnum.c)
 *     EngTextOut @ 0x1400DA230 (EngTextOut.c)
 * Callees:
 *     ?cGetGlyphDataCache@RFONTOBJ@@QEAAKKPEAU_GLYPHPOS@@@Z @ 0x1400DBEC8 (-cGetGlyphDataCache@RFONTOBJ@@QEAAKKPEAU_GLYPHPOS@@@Z.c)
 *     ?bInsertGlyphbitsLookaside@RFONTOBJ@@QEAAHPEAU_GLYPHPOS@@K@Z @ 0x1402912AC (-bInsertGlyphbitsLookaside@RFONTOBJ@@QEAAHPEAU_GLYPHPOS@@K@Z.c)
 */

__int64 __fastcall STROBJ_bEnumLinked(struct ESTROBJ *a1, unsigned int *a2, struct _GLYPHPOS **a3)
{
  int v3; // eax
  unsigned int v4; // edi
  _DWORD *v8; // rax
  struct _GLYPHPOS **v9; // rsi
  int v10; // ecx
  RFONTOBJ *v11; // rcx
  _DWORD *v14; // r9
  struct _GLYPHPOS *v15; // rax
  int v16; // ecx
  __m128i v17; // xmm1
  __m128i v18; // xmm0
  __m128i v19; // xmm1
  __m128i v20; // xmm0

  v3 = *((_DWORD *)a1 + 12);
  v4 = 0;
  if ( v3 )
  {
    if ( v3 == *(_DWORD *)a1 )
      goto LABEL_13;
    v8 = (_DWORD *)*((_QWORD *)a1 + 27);
    v9 = (struct _GLYPHPOS **)((char *)a1 + 224);
    *((_QWORD *)a1 + 28) += 24LL;
    *((_QWORD *)a1 + 27) = ++v8;
    v10 = *((_DWORD *)a1 + 59);
    if ( *v8 != v10 )
    {
      v19 = _mm_loadu_si128((const __m128i *)((char *)a1 + 216));
      do
      {
        v20 = _mm_add_epi64(_mm_load_si128((const __m128i *)&_xmm), v19);
        *(__m128i *)((char *)a1 + 216) = v20;
        v19 = v20;
      }
      while ( **((_DWORD **)a1 + 27) != v10 );
    }
  }
  else
  {
    v14 = (_DWORD *)*((_QWORD *)a1 + 26);
    v9 = (struct _GLYPHPOS **)((char *)a1 + 224);
    v15 = (struct _GLYPHPOS *)*((_QWORD *)a1 + 8);
    *((_QWORD *)a1 + 27) = v14;
    v16 = *((_DWORD *)a1 + 59);
    *v9 = v15;
    if ( *v14 != v16 )
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
  v11 = (RFONTOBJ *)*((_QWORD *)a1 + 7);
  if ( v11 )
  {
    if ( (*(_DWORD *)(*(_QWORD *)v11 + 84LL) & 1) != 0
       ? (unsigned int)RFONTOBJ::bInsertGlyphbitsLookaside(v11, *v9, *(_DWORD *)(*(_QWORD *)v11 + 88LL)) != 0
       : RFONTOBJ::cGetGlyphDataCache(v11, 1u, *v9) )
    {
      ++*((_DWORD *)a1 + 12);
      *a2 = 1;
      *a3 = *v9;
      LOBYTE(v4) = *((_DWORD *)a1 + 12) < *(_DWORD *)a1;
      return v4;
    }
  }
LABEL_13:
  *a2 = 0;
  return 0LL;
}
