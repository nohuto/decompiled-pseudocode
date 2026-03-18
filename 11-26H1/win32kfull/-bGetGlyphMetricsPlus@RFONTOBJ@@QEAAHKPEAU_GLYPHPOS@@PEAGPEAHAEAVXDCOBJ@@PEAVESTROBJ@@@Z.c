/*
 * XREFs of ?bGetGlyphMetricsPlus@RFONTOBJ@@QEAAHKPEAU_GLYPHPOS@@PEAGPEAHAEAVXDCOBJ@@PEAVESTROBJ@@@Z @ 0x1400C034C
 * Callers:
 *     ?vCharPos_G2@ESTROBJ@@QEAAXAEAVXDCOBJ@@AEAVRFONTOBJ@@JJJJJPEAJ@Z @ 0x14010C304 (-vCharPos_G2@ESTROBJ@@QEAAXAEAVXDCOBJ@@AEAVRFONTOBJ@@JJJJJPEAJ@Z.c)
 *     ?vCharPos_G1@ESTROBJ@@QEAAXAEAVXDCOBJ@@AEAVRFONTOBJ@@JJPEBJPEAJ@Z @ 0x1401DB290 (-vCharPos_G1@ESTROBJ@@QEAAXAEAVXDCOBJ@@AEAVRFONTOBJ@@JJPEBJPEAJ@Z.c)
 *     ?vCharPos_H4@ESTROBJ@@QEAAXAEAVXDCOBJ@@AEAVRFONTOBJ@@JJPEAJVEFLOAT@@3@Z @ 0x140208540 (-vCharPos_H4@ESTROBJ@@QEAAXAEAVXDCOBJ@@AEAVRFONTOBJ@@JJPEAJVEFLOAT@@3@Z.c)
 *     ?vCharPos_H2@ESTROBJ@@QEAAXAEAVXDCOBJ@@AEAVRFONTOBJ@@JJVEFLOAT@@@Z @ 0x140211FC4 (-vCharPos_H2@ESTROBJ@@QEAAXAEAVXDCOBJ@@AEAVRFONTOBJ@@JJVEFLOAT@@@Z.c)
 *     ?vCharPos_G4@ESTROBJ@@QEAAXAEAVXDCOBJ@@AEAVRFONTOBJ@@JJPEAJ@Z @ 0x14022788C (-vCharPos_G4@ESTROBJ@@QEAAXAEAVXDCOBJ@@AEAVRFONTOBJ@@JJPEAJ@Z.c)
 *     ?vCharPos_G3@ESTROBJ@@QEAAXAEAVXDCOBJ@@AEAVRFONTOBJ@@JJJJJPEBJPEAJ@Z @ 0x140335178 (-vCharPos_G3@ESTROBJ@@QEAAXAEAVXDCOBJ@@AEAVRFONTOBJ@@JJJJJPEBJPEAJ@Z.c)
 *     ?vInitSimple@ESTROBJ@@QEAAXPEBGJAEAVDCOBJ@@AEAVRFONTOBJ@@JJPEAX@Z @ 0x1403356D8 (-vInitSimple@ESTROBJ@@QEAAXPEBGJAEAVDCOBJ@@AEAVRFONTOBJ@@JJPEAX@Z.c)
 * Callees:
 *     ?bGetGlyphMetrics@RFONTOBJ@@QEAAHKPEAU_GLYPHPOS@@PEAGAEAVXDCOBJ@@_NPEAVESTROBJ@@@Z @ 0x1400C015C (-bGetGlyphMetrics@RFONTOBJ@@QEAAHKPEAU_GLYPHPOS@@PEAGAEAVXDCOBJ@@_NPEAVESTROBJ@@@Z.c)
 *     ?gprunFindRun@RFONTOBJ@@QEAAPEAUGPRUN@@G@Z @ 0x1400C06B0 (-gprunFindRun@RFONTOBJ@@QEAAPEAUGPRUN@@G@Z.c)
 *     ?wpgdGetLinkMetricsPlus@RFONTOBJ@@QEAAPEAU_GLYPHDATA@@AEAVXDCOBJ@@PEAVESTROBJ@@PEBG2KPEAHH@Z @ 0x1400C0C28 (-wpgdGetLinkMetricsPlus@RFONTOBJ@@QEAAPEAU_GLYPHDATA@@AEAVXDCOBJ@@PEAVESTROBJ@@PEBG2KPEAHH@Z.c)
 *     ?bAllocateCache@RFONTOBJ@@QEAAHPEAV1@@Z @ 0x1400C1140 (-bAllocateCache@RFONTOBJ@@QEAAHPEAV1@@Z.c)
 *     ?pgdDefault@RFONTOBJ@@QEAAPEAU_GLYPHDATA@@XZ @ 0x1401C5A68 (-pgdDefault@RFONTOBJ@@QEAAPEAU_GLYPHDATA@@XZ.c)
 *     ?bInsertMetricsPlus@RFONTOBJ@@QEAAHPEAPEAU_GLYPHDATA@@G@Z @ 0x1401C5AE4 (-bInsertMetricsPlus@RFONTOBJ@@QEAAHPEAPEAU_GLYPHDATA@@G@Z.c)
 *     ?bInsertGlyphbits@RFONTOBJ@@QEAAHPEAU_GLYPHDATA@@K@Z @ 0x14020638C (-bInsertGlyphbits@RFONTOBJ@@QEAAHPEAU_GLYPHDATA@@K@Z.c)
 */

__int64 __fastcall RFONTOBJ::bGetGlyphMetricsPlus(
        RFONTOBJ *this,
        struct RFONTOBJ *a2,
        struct _GLYPHPOS *a3,
        unsigned __int16 *a4,
        int *a5,
        struct XDCOBJ *a6,
        struct ESTROBJ *a7)
{
  __int64 v9; // r14
  __int64 v11; // rdx
  _DWORD *v12; // r15
  bool v13; // zf
  struct GPRUN *v14; // r15
  unsigned __int16 *v15; // r13
  int v16; // ebp
  __int64 v17; // r8
  struct _GLYPHDATA *LinkMetricsPlus; // rbp
  struct GPRUN *Run; // rax
  __int64 v21; // rbp
  unsigned __int16 *v22; // [rsp+40h] [rbp-38h]
  unsigned __int16 *v23; // [rsp+80h] [rbp+8h]

  v9 = (unsigned int)a2;
  if ( !*(_QWORD *)(*(_QWORD *)this + 480LL) && !(unsigned int)RFONTOBJ::bAllocateCache(this, a2) )
    return 0LL;
  v11 = *(_QWORD *)this;
  if ( (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)this + 104LL) + 1808LL) & 0x40000000) != 0 && *(_DWORD *)(v11 + 88) == 1 )
  {
    if ( a5 )
      *a5 = 0;
    return RFONTOBJ::bGetGlyphMetrics(this, (struct RFONTOBJ *)(unsigned int)v9, a3, a4, a6, 0, a7);
  }
  v12 = *(_DWORD **)(v11 + 480);
  v23 = a4;
  v22 = a4;
  v13 = *v12 == 0;
  *a5 = 1;
  if ( !v13 )
  {
    v14 = (struct GPRUN *)(v12 + 4);
    v15 = &a4[v9];
    while ( 1 )
    {
      if ( a4 >= v15 )
        return 1LL;
      v16 = *a4;
      v17 = (unsigned int)(v16 - *(_DWORD *)v14);
      if ( (unsigned int)v17 >= *((_DWORD *)v14 + 1) )
      {
        Run = RFONTOBJ::gprunFindRun(this, v16);
        v14 = Run;
        v17 = (unsigned int)(v16 - *(_DWORD *)Run);
        if ( (unsigned int)v17 >= *((_DWORD *)Run + 1) )
        {
          LinkMetricsPlus = RFONTOBJ::wpgdGetLinkMetricsPlus(this, a6, a7, a4, v23, v9, a5, 1);
          if ( !LinkMetricsPlus )
            return 0LL;
          goto LABEL_9;
        }
        _mm_lfence();
        LinkMetricsPlus = *(struct _GLYPHDATA **)(*((_QWORD *)Run + 1) + 8 * v17);
      }
      else
      {
        _mm_lfence();
        LinkMetricsPlus = *(struct _GLYPHDATA **)(*((_QWORD *)v14 + 1) + 8 * v17);
      }
      if ( !LinkMetricsPlus )
      {
        v21 = (unsigned int)v17;
        if ( !(unsigned int)RFONTOBJ::bInsertMetricsPlus(
                              this,
                              (struct _GLYPHDATA **)(*((_QWORD *)v14 + 1) + 8 * v17),
                              *a4) )
          return 0LL;
        LinkMetricsPlus = *(struct _GLYPHDATA **)(*((_QWORD *)v14 + 1) + 8 * v21);
      }
LABEL_9:
      if ( !LinkMetricsPlus->gdf.pgb
        && *a5
        && *(_DWORD *)(*(_QWORD *)this + 88LL)
        && !(unsigned int)RFONTOBJ::bInsertGlyphbits(this, LinkMetricsPlus, a4 == v22) )
      {
        *a5 = 0;
      }
      ++a4;
      a3->hg = LinkMetricsPlus->hg;
      a3->pgdf = &LinkMetricsPlus->gdf;
      ++a3;
    }
  }
  for ( ; (_DWORD)v9; LODWORD(v9) = v9 - 1 )
  {
    a3->hg = *(_DWORD *)(*(_QWORD *)this + 456LL);
    a3->pgdf = (GLYPHDEF *)RFONTOBJ::pgdDefault(this);
    ++a3;
  }
  return 1LL;
}
