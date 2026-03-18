/*
 * XREFs of ?GetMaxGlyphSize@RFONTOBJ@@QEBA_KXZ @ 0x1403413F0
 * Callers:
 *     xInsertMetricsPlusRFONTOBJ @ 0x1400C0964 (xInsertMetricsPlusRFONTOBJ.c)
 *     xInsertGlyphbitsRFONTOBJ @ 0x1402063E4 (xInsertGlyphbitsRFONTOBJ.c)
 *     ?bInsertGlyphbitsLookaside@RFONTOBJ@@QEAAHPEAU_GLYPHPOS@@K@Z @ 0x1402912AC (-bInsertGlyphbitsLookaside@RFONTOBJ@@QEAAHPEAU_GLYPHPOS@@K@Z.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall RFONTOBJ::GetMaxGlyphSize(RFONTOBJ *this)
{
  __int64 v1; // rax

  v1 = *(_QWORD *)this;
  if ( (*(_DWORD *)(*(_QWORD *)this + 12LL) & 0x20000000) != 0 )
    return *(_QWORD *)(v1 + 640);
  else
    return *(_QWORD *)(v1 + 632);
}
