/*
 * XREFs of ?bGetGlyphMetricsPlus@RFONTOBJ@@QEAAHKPEAU_GLYPHPOS@@PEAGPEAHAEAVUDCOBJ@@PEAVESTROBJ@@@Z @ 0x1400AD0B0
 * Callers:
 *     ?vCharPos_G1@ESTROBJ@@QEAAXAEAVUDCOBJ@@AEAVRFONTOBJ@@JJPEBJPEAJ@Z @ 0x1400AA14C (-vCharPos_G1@ESTROBJ@@QEAAXAEAVUDCOBJ@@AEAVRFONTOBJ@@JJPEBJPEAJ@Z.c)
 *     ?vCharPos_G4@ESTROBJ@@QEAAXAEAVUDCOBJ@@AEAVRFONTOBJ@@JJPEAJ@Z @ 0x1400AA670 (-vCharPos_G4@ESTROBJ@@QEAAXAEAVUDCOBJ@@AEAVRFONTOBJ@@JJPEAJ@Z.c)
 *     ?vCharPos_G2@ESTROBJ@@QEAAXAEAVUDCOBJ@@AEAVRFONTOBJ@@JJJJJPEAJ@Z @ 0x1400BF9D0 (-vCharPos_G2@ESTROBJ@@QEAAXAEAVUDCOBJ@@AEAVRFONTOBJ@@JJJJJPEAJ@Z.c)
 *     ?vCharPos_H4@ESTROBJ@@QEAAXAEAVUDCOBJ@@AEAVRFONTOBJ@@JJPEAJVEFLOAT@@3@Z @ 0x1401B0FA8 (-vCharPos_H4@ESTROBJ@@QEAAXAEAVUDCOBJ@@AEAVRFONTOBJ@@JJPEAJVEFLOAT@@3@Z.c)
 *     ?vCharPos_H2@ESTROBJ@@QEAAXAEAVUDCOBJ@@AEAVRFONTOBJ@@JJVEFLOAT@@@Z @ 0x1401CE6D0 (-vCharPos_H2@ESTROBJ@@QEAAXAEAVUDCOBJ@@AEAVRFONTOBJ@@JJVEFLOAT@@@Z.c)
 *     ?vInitSimple@ESTROBJ@@QEAAXPEBGJAEAVUDCOBJ@@AEAVRFONTOBJ@@JJPEAX@Z @ 0x140216C14 (-vInitSimple@ESTROBJ@@QEAAXPEBGJAEAVUDCOBJ@@AEAVRFONTOBJ@@JJPEAX@Z.c)
 *     ?vCharPos_G3@ESTROBJ@@QEAAXAEAVUDCOBJ@@AEAVRFONTOBJ@@JJJJJPEBJPEAJ@Z @ 0x140230D24 (-vCharPos_G3@ESTROBJ@@QEAAXAEAVUDCOBJ@@AEAVRFONTOBJ@@JJJJJPEBJPEAJ@Z.c)
 * Callees:
 *     ?wpgdGetLinkMetricsPlus@RFONTOBJ@@QEAAPEAU_GLYPHDATA@@AEAVUDCOBJ@@PEAVESTROBJ@@PEBG2KPEAHH@Z @ 0x14001681C (-wpgdGetLinkMetricsPlus@RFONTOBJ@@QEAAPEAU_GLYPHDATA@@AEAVUDCOBJ@@PEAVESTROBJ@@PEBG2KPEAHH@Z.c)
 *     ?pgdDefault@RFONTOBJ@@QEAAPEAU_GLYPHDATA@@XZ @ 0x1400A8F1C (-pgdDefault@RFONTOBJ@@QEAAPEAU_GLYPHDATA@@XZ.c)
 *     ?bInsertGlyphbits@RFONTOBJ@@QEAAHPEAU_GLYPHDATA@@K@Z @ 0x1400A9EF8 (-bInsertGlyphbits@RFONTOBJ@@QEAAHPEAU_GLYPHDATA@@K@Z.c)
 *     xInsertMetricsPlusRFONTOBJ @ 0x1400AAEFC (xInsertMetricsPlusRFONTOBJ.c)
 *     ?gprunFindRun@RFONTOBJ@@QEAAPEAUGPRUN@@G@Z @ 0x1400AD350 (-gprunFindRun@RFONTOBJ@@QEAAPEAUGPRUN@@G@Z.c)
 *     ?bGetGlyphMetrics@RFONTOBJ@@QEAAHKPEAU_GLYPHPOS@@PEAGAEAVUDCOBJ@@_NPEAVESTROBJ@@@Z @ 0x1400AD5FC (-bGetGlyphMetrics@RFONTOBJ@@QEAAHKPEAU_GLYPHPOS@@PEAGAEAVUDCOBJ@@_NPEAVESTROBJ@@@Z.c)
 *     ?bAllocateCache@RFONTOBJ@@QEAAHPEAV1@@Z @ 0x1400ADF94 (-bAllocateCache@RFONTOBJ@@QEAAHPEAV1@@Z.c)
 */

__int64 __fastcall RFONTOBJ::bGetGlyphMetricsPlus(
        RFONTOBJ *this,
        struct RFONTOBJ *a2,
        struct _GLYPHPOS *a3,
        unsigned __int16 *a4,
        int *a5,
        struct UDCOBJ *a6,
        struct ESTROBJ *a7)
{
  __int64 v9; // r12
  __int64 v11; // r8
  _DWORD *v12; // rbp
  int *v13; // r15
  bool v14; // zf
  struct GPRUN *v15; // rbp
  unsigned __int16 *v16; // r14
  int v17; // ebx
  unsigned __int64 v18; // rdx
  __int64 v19; // rbx
  struct _GLYPHDATA *v20; // rbx
  __int64 result; // rax
  struct GPRUN *Run; // rax
  __int64 v23; // r15
  unsigned __int16 v24; // bx
  struct _GLYPHDATA **v25; // r12
  unsigned __int16 *v26; // [rsp+90h] [rbp+8h]
  int v27; // [rsp+98h] [rbp+10h]

  v27 = (int)a2;
  v9 = (unsigned int)a2;
  if ( !*(_QWORD *)(*(_QWORD *)this + 480LL) && !(unsigned int)RFONTOBJ::bAllocateCache(this, a2) )
    return 0LL;
  v11 = *(_QWORD *)this;
  if ( (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)this + 104LL) + 1808LL) & 0x40000000) != 0 && *(_DWORD *)(v11 + 88) == 1 )
  {
    if ( a5 )
      *a5 = 0;
    return RFONTOBJ::bGetGlyphMetrics(this, v9, a3, a4, a6, 0, a7);
  }
  v12 = *(_DWORD **)(v11 + 480);
  v13 = a5;
  v26 = a4;
  v14 = *v12 == 0;
  *a5 = 1;
  if ( !v14 )
  {
    v15 = (struct GPRUN *)(v12 + 4);
    v16 = &a4[v9];
    while ( 1 )
    {
      if ( a4 >= v16 )
        return 1LL;
      v17 = *a4;
      v18 = (unsigned int)(v17 - *(_DWORD *)v15);
      if ( (unsigned int)v18 >= *((_DWORD *)v15 + 1) )
      {
        Run = RFONTOBJ::gprunFindRun(this, v17);
        v15 = Run;
        v18 = (unsigned int)(v17 - *(_DWORD *)Run);
        if ( (unsigned int)v18 >= *((_DWORD *)Run + 1) )
        {
          result = (__int64)RFONTOBJ::wpgdGetLinkMetricsPlus(this, a6, a7, (char *)a4, (char *)v26, v9, v13, 1);
          v20 = (struct _GLYPHDATA *)result;
          if ( !result )
            return result;
          goto LABEL_9;
        }
        _mm_lfence();
        v19 = *((_QWORD *)Run + 1);
      }
      else
      {
        _mm_lfence();
        v19 = *((_QWORD *)v15 + 1);
      }
      v20 = *(struct _GLYPHDATA **)(v19 + 8 * v18);
      if ( !v20 )
      {
        v23 = 8 * v18;
        v24 = *a4;
        v25 = (struct _GLYPHDATA **)(8 * v18 + *((_QWORD *)v15 + 1));
        if ( !*(_QWORD *)(*(_QWORD *)this + 480LL)
          && !(unsigned int)RFONTOBJ::bAllocateCache(this, (struct RFONTOBJ *)v18)
          || !(unsigned int)xInsertMetricsPlusRFONTOBJ(this, v25, v24) )
        {
          return 0LL;
        }
        LODWORD(v9) = v27;
        v20 = *(struct _GLYPHDATA **)(v23 + *((_QWORD *)v15 + 1));
        v13 = a5;
      }
LABEL_9:
      if ( !v20->gdf.pgb
        && *v13
        && *(_DWORD *)(*(_QWORD *)this + 88LL)
        && !(unsigned int)RFONTOBJ::bInsertGlyphbits(this, v20) )
      {
        *v13 = 0;
      }
      ++a4;
      a3->hg = v20->hg;
      a3->pgdf = &v20->gdf;
      ++a3;
    }
  }
  for ( ; (_DWORD)v9; LODWORD(v9) = v9 - 1 )
  {
    a3->hg = *(_DWORD *)(*(_QWORD *)this + 456LL);
    a3->pgdf = (GLYPHDEF *)RFONTOBJ::pgdDefault(this, a2);
    ++a3;
  }
  return 1LL;
}
