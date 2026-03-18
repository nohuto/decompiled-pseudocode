/*
 * XREFs of ?QueryGlyphMetricsPlusBits@PFFOBJ@@QEAAJPEAUDHPDEV__@@PEAU_FONTOBJ@@KKPEAPEAU_GLYPHDATA@@PEAPEAU_GLYPHBITS@@@Z @ 0x1400AA550
 * Callers:
 *     xInsertGlyphbitsRFONTOBJ @ 0x1400A9F50 (xInsertGlyphbitsRFONTOBJ.c)
 *     xInsertMetricsPlusRFONTOBJ @ 0x1400AAEFC (xInsertMetricsPlusRFONTOBJ.c)
 *     ?bInsertGlyphbitsLookaside@RFONTOBJ@@QEAAHPEAU_GLYPHPOS@@K@Z @ 0x1400D1BE8 (-bInsertGlyphbitsLookaside@RFONTOBJ@@QEAAHPEAU_GLYPHPOS@@K@Z.c)
 * Callees:
 *     ??0ATTACHOBJ@@QEAA@PEAVPFFOBJ@@@Z @ 0x1400B0A5C (--0ATTACHOBJ@@QEAA@PEAVPFFOBJ@@@Z.c)
 *     ??1ATTACHOBJ@@QEAA@XZ @ 0x1400B13B0 (--1ATTACHOBJ@@QEAA@XZ.c)
 *     UmfdQueryGlyphMetricsPlusBits @ 0x140109870 (UmfdQueryGlyphMetricsPlusBits.c)
 *     ?ValidateGlyphDataAndBitmap@@YA_NJKPEAX@Z @ 0x140320634 (-ValidateGlyphDataAndBitmap@@YA_NJKPEAX@Z.c)
 */

__int64 __fastcall PFFOBJ::QueryGlyphMetricsPlusBits(
        PFFOBJ *this,
        struct DHPDEV__ *a2,
        struct _FONTOBJ *a3,
        int a4,
        unsigned int a5,
        struct _GLYPHDATA **a6,
        struct _GLYPHBITS **a7)
{
  int v8; // ebp
  int v9; // r14d
  __int64 v11; // rbx
  unsigned int GlyphMetricsPlusBits; // edi
  _BYTE v14[24]; // [rsp+30h] [rbp-18h] BYREF

  v8 = (int)a3;
  v9 = (int)a2;
  v11 = *(_QWORD *)(*(_QWORD *)this + 96LL);
  if ( v11 != *(_QWORD *)(*(_QWORD *)(W32GetSessionState(this, a2, a3) + 96) + 24152LL) )
    return 0xFFFFFFFFLL;
  ATTACHOBJ::ATTACHOBJ((ATTACHOBJ *)v14, this);
  GlyphMetricsPlusBits = UmfdQueryGlyphMetricsPlusBits(v9, v8, a4, a5, (__int64)a6, (__int64)a7);
  if ( !ValidateGlyphDataAndBitmap(GlyphMetricsPlusBits, 1u, *a7) )
    GlyphMetricsPlusBits = -1;
  ATTACHOBJ::~ATTACHOBJ((ATTACHOBJ *)v14);
  return GlyphMetricsPlusBits;
}
