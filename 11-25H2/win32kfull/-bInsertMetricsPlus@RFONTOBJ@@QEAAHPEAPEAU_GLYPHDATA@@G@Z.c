/*
 * XREFs of ?bInsertMetricsPlus@RFONTOBJ@@QEAAHPEAPEAU_GLYPHDATA@@G@Z @ 0x1400AA618
 * Callers:
 *     ?pgdDefault@RFONTOBJ@@QEAAPEAU_GLYPHDATA@@XZ @ 0x1400A8F1C (-pgdDefault@RFONTOBJ@@QEAAPEAU_GLYPHDATA@@XZ.c)
 *     ?vCharPos_H1@ESTROBJ@@QEAAXAEAVUDCOBJ@@AEAVRFONTOBJ@@JJPEBJVEFLOAT@@@Z @ 0x1400AC520 (-vCharPos_H1@ESTROBJ@@QEAAXAEAVUDCOBJ@@AEAVRFONTOBJ@@JJPEBJVEFLOAT@@@Z.c)
 * Callees:
 *     xInsertMetricsPlusRFONTOBJ @ 0x1400AAEFC (xInsertMetricsPlusRFONTOBJ.c)
 *     ?bAllocateCache@RFONTOBJ@@QEAAHPEAV1@@Z @ 0x1400ADF94 (-bAllocateCache@RFONTOBJ@@QEAAHPEAV1@@Z.c)
 */

__int64 __fastcall RFONTOBJ::bInsertMetricsPlus(RFONTOBJ *this, struct _GLYPHDATA **a2)
{
  __int64 result; // rax

  if ( *(_QWORD *)(*(_QWORD *)this + 480LL) )
    return xInsertMetricsPlusRFONTOBJ(this);
  result = RFONTOBJ::bAllocateCache(this, (struct RFONTOBJ *)a2);
  if ( (_DWORD)result )
    return xInsertMetricsPlusRFONTOBJ(this);
  return result;
}
