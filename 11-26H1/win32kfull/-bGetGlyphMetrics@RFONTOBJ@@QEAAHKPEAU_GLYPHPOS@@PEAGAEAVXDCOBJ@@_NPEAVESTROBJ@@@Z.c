/*
 * XREFs of ?bGetGlyphMetrics@RFONTOBJ@@QEAAHKPEAU_GLYPHPOS@@PEAGAEAVXDCOBJ@@_NPEAVESTROBJ@@@Z @ 0x1400C015C
 * Callers:
 *     ?vCharPos_H3@ESTROBJ@@QEAAXAEAVXDCOBJ@@AEAVRFONTOBJ@@JJJJJVEFLOAT@@PEBH@Z @ 0x1400BF628 (-vCharPos_H3@ESTROBJ@@QEAAXAEAVXDCOBJ@@AEAVRFONTOBJ@@JJJJJVEFLOAT@@PEBH@Z.c)
 *     ?vCharPos_H1@ESTROBJ@@QEAAXAEAVXDCOBJ@@AEAVRFONTOBJ@@JJPEBJVEFLOAT@@@Z @ 0x1400BFBEC (-vCharPos_H1@ESTROBJ@@QEAAXAEAVXDCOBJ@@AEAVRFONTOBJ@@JJPEBJVEFLOAT@@@Z.c)
 *     ?bGetGlyphMetricsPlus@RFONTOBJ@@QEAAHKPEAU_GLYPHPOS@@PEAGPEAHAEAVXDCOBJ@@PEAVESTROBJ@@@Z @ 0x1400C034C (-bGetGlyphMetricsPlus@RFONTOBJ@@QEAAHKPEAU_GLYPHPOS@@PEAGPEAHAEAVXDCOBJ@@PEAVESTROBJ@@@Z.c)
 *     ?bGetWidthTable@RFONTOBJ@@QEAAHAEAVDCOBJ@@KPEAGK1@Z @ 0x1400FA384 (-bGetWidthTable@RFONTOBJ@@QEAAHAEAVDCOBJ@@KPEAGK1@Z.c)
 *     ?bTextExtent@RFONTOBJ@@QEAAHAEAVDCOBJ@@PEAGHJJJJIPEAUtagSIZE@@@Z @ 0x1401C4E90 (-bTextExtent@RFONTOBJ@@QEAAHAEAVDCOBJ@@PEAGHJJJJIPEAUtagSIZE@@@Z.c)
 *     ?GrepGetCharWidthW@@YAHAEAVDCOBJ@@IIPEAGKPEAX@Z @ 0x1401C524C (-GrepGetCharWidthW@@YAHAEAVDCOBJ@@IIPEAGKPEAX@Z.c)
 *     ?bGetWidthData@RFONTOBJ@@QEAAHPEAU_WIDTHDATA@@AEAVDCOBJ@@@Z @ 0x1401C55B8 (-bGetWidthData@RFONTOBJ@@QEAAHPEAU_WIDTHDATA@@AEAVDCOBJ@@@Z.c)
 *     ?GrepGetCharABCWidthsW@@YAHAEAVDCOBJ@@IKPEAGKPEAX@Z @ 0x1401D5AD0 (-GrepGetCharABCWidthsW@@YAHAEAVDCOBJ@@IKPEAGKPEAX@Z.c)
 * Callees:
 *     ?gprunFindRun@RFONTOBJ@@QEAAPEAUGPRUN@@G@Z @ 0x1400C06B0 (-gprunFindRun@RFONTOBJ@@QEAAPEAUGPRUN@@G@Z.c)
 *     ?wpgdGetLinkMetricsPlus@RFONTOBJ@@QEAAPEAU_GLYPHDATA@@AEAVXDCOBJ@@PEAVESTROBJ@@PEBG2KPEAHH@Z @ 0x1400C0C28 (-wpgdGetLinkMetricsPlus@RFONTOBJ@@QEAAPEAU_GLYPHDATA@@AEAVXDCOBJ@@PEAVESTROBJ@@PEBG2KPEAHH@Z.c)
 *     ?bAllocateCache@RFONTOBJ@@QEAAHPEAV1@@Z @ 0x1400C1140 (-bAllocateCache@RFONTOBJ@@QEAAHPEAV1@@Z.c)
 *     xInsertMetricsRFONTOBJ @ 0x1400C21D8 (xInsertMetricsRFONTOBJ.c)
 *     ?pgdDefault@RFONTOBJ@@QEAAPEAU_GLYPHDATA@@XZ @ 0x1401C5A68 (-pgdDefault@RFONTOBJ@@QEAAPEAU_GLYPHDATA@@XZ.c)
 */

__int64 __fastcall RFONTOBJ::bGetGlyphMetrics(
        RFONTOBJ *this,
        struct RFONTOBJ *a2,
        struct _GLYPHPOS *a3,
        unsigned __int16 *a4,
        struct XDCOBJ *a5,
        bool a6,
        struct ESTROBJ *a7)
{
  __int64 v8; // rsi
  const unsigned __int16 *v11; // r12
  _DWORD *v12; // rbp
  unsigned __int16 *v13; // rax
  struct GPRUN *v14; // rbp
  int v15; // r15d
  __int64 v16; // r9
  struct _GLYPHDATA *v17; // r8
  __int64 v19; // r12
  struct GPRUN *Run; // rax
  struct _GLYPHDATA *LinkMetricsPlus; // rax
  unsigned __int16 *v22; // [rsp+40h] [rbp-38h]
  unsigned __int16 *v23; // [rsp+48h] [rbp-30h]
  int v24; // [rsp+80h] [rbp+8h] BYREF

  v8 = (unsigned int)a2;
  if ( !*(_QWORD *)(*(_QWORD *)this + 480LL) && !(unsigned int)RFONTOBJ::bAllocateCache(this, a2) )
    return 0LL;
  v11 = a4;
  v22 = a4;
  v12 = *(_DWORD **)(*(_QWORD *)this + 480LL);
  if ( *v12 )
  {
    v13 = &a4[v8];
    v14 = (struct GPRUN *)(v12 + 4);
    v23 = v13;
    while ( 1 )
    {
      if ( a4 >= v13 )
        return 1LL;
      v15 = *a4;
      v16 = (unsigned int)(v15 - *(_DWORD *)v14);
      if ( (unsigned int)v16 < *((_DWORD *)v14 + 1) )
        break;
      Run = RFONTOBJ::gprunFindRun(this, v15);
      v14 = Run;
      v16 = (unsigned int)(v15 - *(_DWORD *)Run);
      if ( (unsigned int)v16 < *((_DWORD *)Run + 1) )
      {
        _mm_lfence();
        v17 = *(struct _GLYPHDATA **)(*((_QWORD *)Run + 1) + 8 * v16);
LABEL_7:
        if ( !v17 )
        {
          v19 = (unsigned int)v16;
          if ( !*(_QWORD *)(*(_QWORD *)this + 480LL) && !(unsigned int)RFONTOBJ::bAllocateCache(this, a2)
            || !(unsigned int)xInsertMetricsRFONTOBJ(this) )
          {
            return 0LL;
          }
          v17 = *(struct _GLYPHDATA **)(*((_QWORD *)v14 + 1) + 8 * v19);
          v11 = v22;
        }
        goto LABEL_8;
      }
      v24 = 0;
      if ( a6 )
        LinkMetricsPlus = RFONTOBJ::pgdDefault(this);
      else
        LinkMetricsPlus = RFONTOBJ::wpgdGetLinkMetricsPlus(this, a5, a7, a4, v11, v8, &v24, 0);
      v17 = LinkMetricsPlus;
      if ( !LinkMetricsPlus )
        return 0LL;
LABEL_8:
      ++a4;
      a3->hg = v17->hg;
      v13 = v23;
      a3->pgdf = &v17->gdf;
      ++a3;
    }
    _mm_lfence();
    v17 = *(struct _GLYPHDATA **)(*((_QWORD *)v14 + 1) + 8 * v16);
    goto LABEL_7;
  }
  for ( ; (_DWORD)v8; LODWORD(v8) = v8 - 1 )
  {
    a3->hg = *(_DWORD *)(*(_QWORD *)this + 456LL);
    a3->pgdf = (GLYPHDEF *)RFONTOBJ::pgdDefault(this);
    ++a3;
  }
  return 1LL;
}
