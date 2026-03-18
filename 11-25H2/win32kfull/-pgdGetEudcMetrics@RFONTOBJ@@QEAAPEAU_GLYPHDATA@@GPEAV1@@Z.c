/*
 * XREFs of ?pgdGetEudcMetrics@RFONTOBJ@@QEAAPEAU_GLYPHDATA@@GPEAV1@@Z @ 0x1400A8E44
 * Callers:
 *     ?wpgdGetLinkMetricsPlus@RFONTOBJ@@QEAAPEAU_GLYPHDATA@@AEAVUDCOBJ@@PEAVESTROBJ@@PEBG2KPEAHH@Z @ 0x14001681C (-wpgdGetLinkMetricsPlus@RFONTOBJ@@QEAAPEAU_GLYPHDATA@@AEAVUDCOBJ@@PEAVESTROBJ@@PEBG2KPEAHH@Z.c)
 *     ?FindLinkedGlyphDataPlus@RFONTOBJ@@QEAAPEAU_GLYPHDATA@@AEAVUDCOBJ@@PEAVESTROBJ@@GKKPEAHHH@Z @ 0x1400AD7F0 (-FindLinkedGlyphDataPlus@RFONTOBJ@@QEAAPEAU_GLYPHDATA@@AEAVUDCOBJ@@PEAVESTROBJ@@GKKPEAHHH@Z.c)
 *     ?GrepGetGlyphOutline@@YAKAEAVUDCOBJ@@GIPEAU_GLYPHMETRICS@@KPEAXPEAU_MAT2@@HW4EntryPoint@RFONTOBJ@@@Z @ 0x1400AEFB4 (-GrepGetGlyphOutline@@YAKAEAVUDCOBJ@@GIPEAU_GLYPHMETRICS@@KPEAXPEAU_MAT2@@HW4EntryPoint@RFONTOBJ.c)
 * Callees:
 *     ?pgdDefault@RFONTOBJ@@QEAAPEAU_GLYPHDATA@@XZ @ 0x1400A8F1C (-pgdDefault@RFONTOBJ@@QEAAPEAU_GLYPHDATA@@XZ.c)
 *     ?gprunFindRun@RFONTOBJ@@QEAAPEAUGPRUN@@G@Z @ 0x1400AD350 (-gprunFindRun@RFONTOBJ@@QEAAPEAUGPRUN@@G@Z.c)
 *     ?bAllocateCache@RFONTOBJ@@QEAAHPEAV1@@Z @ 0x1400ADF94 (-bAllocateCache@RFONTOBJ@@QEAAHPEAV1@@Z.c)
 *     ?bInsertMetrics@RFONTOBJ@@QEAAHPEAPEAU_GLYPHDATA@@G@Z @ 0x1400AE654 (-bInsertMetrics@RFONTOBJ@@QEAAHPEAPEAU_GLYPHDATA@@G@Z.c)
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
    if ( (unsigned int)RFONTOBJ::bInsertMetrics(this, (struct _GLYPHDATA **)(*((_QWORD *)v6 + 1) + 8 * v7), v4) )
      return *(struct _GLYPHDATA **)(*((_QWORD *)v6 + 1) + 8 * v10);
    return 0LL;
  }
  return result;
}
