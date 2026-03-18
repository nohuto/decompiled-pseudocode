/*
 * XREFs of ?QueryGlyphMetricsPlusBits@PFFOBJ@@QEAAJPEAUDHPDEV__@@PEAU_FONTOBJ@@KKPEAPEAU_GLYPHDATA@@PEAPEAU_GLYPHBITS@@@Z @ 0x1400FC8C8
 * Callers:
 *     xInsertMetricsPlusRFONTOBJ @ 0x1400C0964 (xInsertMetricsPlusRFONTOBJ.c)
 *     xInsertGlyphbitsRFONTOBJ @ 0x1402063E4 (xInsertGlyphbitsRFONTOBJ.c)
 *     ?bInsertGlyphbitsLookaside@RFONTOBJ@@QEAAHPEAU_GLYPHPOS@@K@Z @ 0x1402912AC (-bInsertGlyphbitsLookaside@RFONTOBJ@@QEAAHPEAU_GLYPHPOS@@K@Z.c)
 * Callees:
 *     EngUnmapFontFileFD @ 0x1400C2BE0 (EngUnmapFontFileFD.c)
 *     ?ValidateGlyphDataAndBitmap@@YA_NJKPEAX@Z @ 0x1400FC27C (-ValidateGlyphDataAndBitmap@@YA_NJKPEAX@Z.c)
 *     ??0ATTACHOBJ@@QEAA@PEAVPFFOBJ@@@Z @ 0x1400FC44C (--0ATTACHOBJ@@QEAA@PEAVPFFOBJ@@@Z.c)
 *     UmfdQueryGlyphMetricsPlusBits @ 0x1400FCAAC (UmfdQueryGlyphMetricsPlusBits.c)
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
  unsigned int GlyphMetricsPlusBits; // esi
  ULONG_PTR *v13; // rbx
  __int64 v14; // rdi
  ULONG_PTR *v16; // rbx
  __int64 v17; // rdi
  ULONG_PTR *v18; // [rsp+30h] [rbp-18h] BYREF
  unsigned int v19; // [rsp+38h] [rbp-10h]

  v8 = (int)a3;
  v9 = (int)a2;
  v11 = *(_QWORD *)(*(_QWORD *)this + 96LL);
  if ( v11 != *(_QWORD *)(*(_QWORD *)(W32GetSessionState(this, a2, a3) + 96) + 24136LL) )
    return 0xFFFFFFFFLL;
  ATTACHOBJ::ATTACHOBJ((ATTACHOBJ *)&v18, this);
  GlyphMetricsPlusBits = UmfdQueryGlyphMetricsPlusBits(v9, v8, a4, a5, (__int64)a6, (__int64)a7);
  if ( !ValidateGlyphDataAndBitmap(GlyphMetricsPlusBits, 1, *a7) )
  {
    if ( v19 )
    {
      v13 = v18;
      v14 = v19;
      do
      {
        EngUnmapFontFileFD(*v13++);
        --v14;
      }
      while ( v14 );
    }
    return 0xFFFFFFFFLL;
  }
  if ( v19 )
  {
    v16 = v18;
    v17 = v19;
    do
    {
      EngUnmapFontFileFD(*v16++);
      --v17;
    }
    while ( v17 );
  }
  return GlyphMetricsPlusBits;
}
