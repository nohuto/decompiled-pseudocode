/*
 * XREFs of ?pgdGetEudcMetricsPlus@RFONTOBJ@@QEAAPEAU_GLYPHDATA@@GPEAV1@@Z @ 0x1400C05AC
 * Callers:
 *     ?wpgdGetLinkMetricsPlus@RFONTOBJ@@QEAAPEAU_GLYPHDATA@@AEAVXDCOBJ@@PEAVESTROBJ@@PEBG2KPEAHH@Z @ 0x1400C0C28 (-wpgdGetLinkMetricsPlus@RFONTOBJ@@QEAAPEAU_GLYPHDATA@@AEAVXDCOBJ@@PEAVESTROBJ@@PEBG2KPEAHH@Z.c)
 *     ?FindLinkedGlyphDataPlus@RFONTOBJ@@QEAAPEAU_GLYPHDATA@@AEAVXDCOBJ@@PEAVESTROBJ@@GKKPEAHHH@Z @ 0x1400C14FC (-FindLinkedGlyphDataPlus@RFONTOBJ@@QEAAPEAU_GLYPHDATA@@AEAVXDCOBJ@@PEAVESTROBJ@@GKKPEAHHH@Z.c)
 * Callees:
 *     ?gprunFindRun@RFONTOBJ@@QEAAPEAUGPRUN@@G@Z @ 0x1400C06B0 (-gprunFindRun@RFONTOBJ@@QEAAPEAUGPRUN@@G@Z.c)
 *     xInsertMetricsPlusRFONTOBJ @ 0x1400C0964 (xInsertMetricsPlusRFONTOBJ.c)
 *     ?bAllocateCache@RFONTOBJ@@QEAAHPEAV1@@Z @ 0x1400C1140 (-bAllocateCache@RFONTOBJ@@QEAAHPEAV1@@Z.c)
 *     ?pgdDefault@RFONTOBJ@@QEAAPEAU_GLYPHDATA@@XZ @ 0x1401C5A68 (-pgdDefault@RFONTOBJ@@QEAAPEAU_GLYPHDATA@@XZ.c)
 */

struct _GLYPHDATA *__fastcall RFONTOBJ::pgdGetEudcMetricsPlus(RFONTOBJ *this, struct RFONTOBJ *a2, struct RFONTOBJ *a3)
{
  int v4; // ebp
  __int64 v5; // rsi
  struct GPRUN *v6; // rdi
  __int64 v7; // r8
  struct GPRUN *Run; // rax
  struct _GLYPHDATA *result; // rax
  __int64 v10; // r14

  v4 = (unsigned __int16)a2;
  if ( !*(_QWORD *)(*(_QWORD *)this + 480LL) && !(unsigned int)RFONTOBJ::bAllocateCache(this, a2) )
    return 0LL;
  v5 = *(_QWORD *)(*(_QWORD *)this + 480LL);
  if ( !*(_DWORD *)v5 )
    return RFONTOBJ::pgdDefault(this);
  v6 = (struct GPRUN *)(v5 + 16);
  v7 = (unsigned int)(v4 - *(_DWORD *)(v5 + 16));
  if ( (unsigned int)v7 < *(_DWORD *)(v5 + 20) )
  {
    result = *(struct _GLYPHDATA **)(*(_QWORD *)(v5 + 24) + 8 * v7);
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
    if ( (v5 || (unsigned int)RFONTOBJ::bAllocateCache(this, a2)) && (unsigned int)xInsertMetricsPlusRFONTOBJ(this) )
      return *(struct _GLYPHDATA **)(*((_QWORD *)v6 + 1) + 8 * v10);
    return 0LL;
  }
  return result;
}
