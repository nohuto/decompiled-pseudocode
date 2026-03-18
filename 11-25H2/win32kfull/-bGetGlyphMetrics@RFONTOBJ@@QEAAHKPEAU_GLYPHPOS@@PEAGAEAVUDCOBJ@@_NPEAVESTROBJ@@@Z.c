/*
 * XREFs of ?bGetGlyphMetrics@RFONTOBJ@@QEAAHKPEAU_GLYPHPOS@@PEAGAEAVUDCOBJ@@_NPEAVESTROBJ@@@Z @ 0x1400AD5FC
 * Callers:
 *     ?vCharPos_H1@ESTROBJ@@QEAAXAEAVUDCOBJ@@AEAVRFONTOBJ@@JJPEBJVEFLOAT@@@Z @ 0x1400AC520 (-vCharPos_H1@ESTROBJ@@QEAAXAEAVUDCOBJ@@AEAVRFONTOBJ@@JJPEBJVEFLOAT@@@Z.c)
 *     ?vCharPos_H3@ESTROBJ@@QEAAXAEAVUDCOBJ@@AEAVRFONTOBJ@@JJJJJVEFLOAT@@PEBH@Z @ 0x1400ACAC0 (-vCharPos_H3@ESTROBJ@@QEAAXAEAVUDCOBJ@@AEAVRFONTOBJ@@JJJJJVEFLOAT@@PEBH@Z.c)
 *     ?bGetGlyphMetricsPlus@RFONTOBJ@@QEAAHKPEAU_GLYPHPOS@@PEAGPEAHAEAVUDCOBJ@@PEAVESTROBJ@@@Z @ 0x1400AD0B0 (-bGetGlyphMetricsPlus@RFONTOBJ@@QEAAHKPEAU_GLYPHPOS@@PEAGPEAHAEAVUDCOBJ@@PEAVESTROBJ@@@Z.c)
 *     ?GrepGetCharWidthW@@YAHAEAVUDCOBJ@@IIPEAGKPEAXW4EntryPoint@RFONTOBJ@@@Z @ 0x1400BDFAC (-GrepGetCharWidthW@@YAHAEAVUDCOBJ@@IIPEAGKPEAXW4EntryPoint@RFONTOBJ@@@Z.c)
 *     ?bGetWidthTable@RFONTOBJ@@QEAAHAEAVUDCOBJ@@KPEAGK1@Z @ 0x1400BE658 (-bGetWidthTable@RFONTOBJ@@QEAAHAEAVUDCOBJ@@KPEAGK1@Z.c)
 *     ?bGetWidthData@RFONTOBJ@@QEAAHPEAU_WIDTHDATA@@AEAVUDCOBJ@@@Z @ 0x1400BEDC0 (-bGetWidthData@RFONTOBJ@@QEAAHPEAU_WIDTHDATA@@AEAVUDCOBJ@@@Z.c)
 *     ?bTextExtent@RFONTOBJ@@QEAAHAEAVUDCOBJ@@PEAGHJJJJIPEAUtagSIZE@@@Z @ 0x1400BF550 (-bTextExtent@RFONTOBJ@@QEAAHAEAVUDCOBJ@@PEAGHJJJJIPEAUtagSIZE@@@Z.c)
 * Callees:
 *     ?wpgdGetLinkMetricsPlus@RFONTOBJ@@QEAAPEAU_GLYPHDATA@@AEAVUDCOBJ@@PEAVESTROBJ@@PEBG2KPEAHH@Z @ 0x14001681C (-wpgdGetLinkMetricsPlus@RFONTOBJ@@QEAAPEAU_GLYPHDATA@@AEAVUDCOBJ@@PEAVESTROBJ@@PEBG2KPEAHH@Z.c)
 *     ?pgdDefault@RFONTOBJ@@QEAAPEAU_GLYPHDATA@@XZ @ 0x1400A8F1C (-pgdDefault@RFONTOBJ@@QEAAPEAU_GLYPHDATA@@XZ.c)
 *     ?gprunFindRun@RFONTOBJ@@QEAAPEAUGPRUN@@G@Z @ 0x1400AD350 (-gprunFindRun@RFONTOBJ@@QEAAPEAUGPRUN@@G@Z.c)
 *     ?bAllocateCache@RFONTOBJ@@QEAAHPEAV1@@Z @ 0x1400ADF94 (-bAllocateCache@RFONTOBJ@@QEAAHPEAV1@@Z.c)
 *     xInsertMetricsRFONTOBJ @ 0x1400AE350 (xInsertMetricsRFONTOBJ.c)
 */

__int64 __fastcall RFONTOBJ::bGetGlyphMetrics(
        RFONTOBJ *this,
        struct RFONTOBJ *a2,
        struct _GLYPHPOS *a3,
        char *a4,
        struct UDCOBJ *a5,
        bool a6,
        struct ESTROBJ *a7)
{
  __int64 v8; // rbp
  char *v11; // r13
  _DWORD *v12; // r14
  unsigned __int16 *v13; // rax
  struct GPRUN *v14; // r14
  int v15; // r12d
  __int64 v16; // r9
  struct _GLYPHDATA *v17; // r8
  __int64 v18; // r15
  struct GPRUN *Run; // rax
  struct _GLYPHDATA *LinkMetricsPlus; // rax
  char *v22; // [rsp+40h] [rbp-38h]
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
    v13 = (unsigned __int16 *)&a4[2 * v8];
    v14 = (struct GPRUN *)(v12 + 4);
    v23 = v13;
    while ( 1 )
    {
      if ( a4 >= (char *)v13 )
        return 1LL;
      v15 = *(unsigned __int16 *)a4;
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
          v18 = (unsigned int)v16;
          if ( !*(_QWORD *)(*(_QWORD *)this + 480LL) && !(unsigned int)RFONTOBJ::bAllocateCache(this, a2)
            || !(unsigned int)xInsertMetricsRFONTOBJ(this) )
          {
            return 0LL;
          }
          v11 = v22;
          v17 = *(struct _GLYPHDATA **)(*((_QWORD *)v14 + 1) + 8 * v18);
        }
        goto LABEL_8;
      }
      v24 = 0;
      if ( a6 )
        LinkMetricsPlus = RFONTOBJ::pgdDefault(this, a2);
      else
        LinkMetricsPlus = RFONTOBJ::wpgdGetLinkMetricsPlus(this, a5, a7, a4, v11, v8, &v24, 0);
      v17 = LinkMetricsPlus;
      if ( !LinkMetricsPlus )
        return 0LL;
LABEL_8:
      a4 += 2;
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
    a3->pgdf = (GLYPHDEF *)RFONTOBJ::pgdDefault(this, a2);
    ++a3;
  }
  return 1LL;
}
