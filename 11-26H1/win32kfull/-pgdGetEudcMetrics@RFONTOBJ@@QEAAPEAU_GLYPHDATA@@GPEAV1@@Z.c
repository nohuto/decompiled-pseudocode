/*
 * XREFs of ?pgdGetEudcMetrics@RFONTOBJ@@QEAAPEAU_GLYPHDATA@@GPEAV1@@Z @ 0x1401C5990
 * Callers:
 *     ?wpgdGetLinkMetricsPlus@RFONTOBJ@@QEAAPEAU_GLYPHDATA@@AEAVXDCOBJ@@PEAVESTROBJ@@PEBG2KPEAHH@Z @ 0x1400C0C28 (-wpgdGetLinkMetricsPlus@RFONTOBJ@@QEAAPEAU_GLYPHDATA@@AEAVXDCOBJ@@PEAVESTROBJ@@PEBG2KPEAHH@Z.c)
 *     ?FindLinkedGlyphDataPlus@RFONTOBJ@@QEAAPEAU_GLYPHDATA@@AEAVXDCOBJ@@PEAVESTROBJ@@GKKPEAHHH@Z @ 0x1400C14FC (-FindLinkedGlyphDataPlus@RFONTOBJ@@QEAAPEAU_GLYPHDATA@@AEAVXDCOBJ@@PEAVESTROBJ@@GKKPEAHHH@Z.c)
 *     ?GrepGetGlyphOutline@@YAKAEAVDCOBJ@@GIPEAU_GLYPHMETRICS@@KPEAXPEAU_MAT2@@H@Z @ 0x14010CB48 (-GrepGetGlyphOutline@@YAKAEAVDCOBJ@@GIPEAU_GLYPHMETRICS@@KPEAXPEAU_MAT2@@H@Z.c)
 * Callees:
 *     ?gprunFindRun@RFONTOBJ@@QEAAPEAUGPRUN@@G@Z @ 0x1400C06B0 (-gprunFindRun@RFONTOBJ@@QEAAPEAUGPRUN@@G@Z.c)
 *     ?bAllocateCache@RFONTOBJ@@QEAAHPEAV1@@Z @ 0x1400C1140 (-bAllocateCache@RFONTOBJ@@QEAAHPEAV1@@Z.c)
 *     ?bInsertMetrics@RFONTOBJ@@QEAAHPEAPEAU_GLYPHDATA@@G@Z @ 0x1400C2180 (-bInsertMetrics@RFONTOBJ@@QEAAHPEAPEAU_GLYPHDATA@@G@Z.c)
 *     ?pgdDefault@RFONTOBJ@@QEAAPEAU_GLYPHDATA@@XZ @ 0x1401C5A68 (-pgdDefault@RFONTOBJ@@QEAAPEAU_GLYPHDATA@@XZ.c)
 */

struct _GLYPHDATA *__fastcall RFONTOBJ::pgdGetEudcMetrics(RFONTOBJ *this, struct RFONTOBJ *a2, struct RFONTOBJ *a3)
{
  int v4; // esi
  _DWORD *v5; // rbx
  struct GPRUN *v6; // rbx
  __int64 v7; // r8
  struct GPRUN *Run; // rax
  struct _GLYPHDATA *result; // rax
  __int64 v10; // rbp

  v4 = (unsigned __int16)a2;
  if ( !*(_QWORD *)(*(_QWORD *)this + 480LL) && !(unsigned int)RFONTOBJ::bAllocateCache(this, a2) )
    return 0LL;
  v5 = *(_DWORD **)(*(_QWORD *)this + 480LL);
  if ( !*v5 )
    return RFONTOBJ::pgdDefault(this);
  v6 = (struct GPRUN *)(v5 + 4);
  v7 = (unsigned int)(v4 - *(_DWORD *)v6);
  if ( (unsigned int)v7 < *((_DWORD *)v6 + 1) )
  {
    result = *(struct _GLYPHDATA **)(*((_QWORD *)v6 + 1) + 8 * v7);
  }
  else
  {
    Run = RFONTOBJ::gprunFindRun(this, v4);
    v6 = Run;
    v7 = (unsigned int)(v4 - *(_DWORD *)Run);
    if ( (unsigned int)v7 >= *((_DWORD *)Run + 1) )
      return 0LL;
    result = *(struct _GLYPHDATA **)(*((_QWORD *)Run + 1) + 8 * v7);
  }
  if ( !result )
  {
    v10 = (unsigned int)v7;
    if ( (unsigned int)RFONTOBJ::bInsertMetrics(this, (struct _GLYPHDATA **)(*((_QWORD *)v6 + 1) + 8 * v7)) )
      return *(struct _GLYPHDATA **)(*((_QWORD *)v6 + 1) + 8 * v10);
    return 0LL;
  }
  return result;
}
