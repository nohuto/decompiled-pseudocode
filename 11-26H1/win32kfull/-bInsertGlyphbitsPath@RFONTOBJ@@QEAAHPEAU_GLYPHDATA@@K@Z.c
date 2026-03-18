/*
 * XREFs of ?bInsertGlyphbitsPath@RFONTOBJ@@QEAAHPEAU_GLYPHDATA@@K@Z @ 0x1402601C0
 * Callers:
 *     xInsertGlyphbitsRFONTOBJ @ 0x1402063E4 (xInsertGlyphbitsRFONTOBJ.c)
 * Callees:
 *     ?QueryFontData@PFFOBJ@@QEAAJPEAUDHPDEV__@@PEAU_FONTOBJ@@KKPEAU_GLYPHDATA@@PEAXK@Z @ 0x1400FC304 (-QueryFontData@PFFOBJ@@QEAAJPEAUDHPDEV__@@PEAU_FONTOBJ@@KKPEAU_GLYPHDATA@@PEAXK@Z.c)
 *     ?pgbCheckGlyphCache@RFONTOBJ@@QEAAPEAX_K@Z @ 0x140183EE0 (-pgbCheckGlyphCache@RFONTOBJ@@QEAAPEAX_K@Z.c)
 *     ?vInit@EPATHFONTOBJ@@QEAAXK@Z @ 0x1401841FC (-vInit@EPATHFONTOBJ@@QEAAXK@Z.c)
 *     ?vFlushCache@RFONTOBJ@@QEAAXXZ @ 0x1402925C8 (-vFlushCache@RFONTOBJ@@QEAAXXZ.c)
 */

__int64 __fastcall RFONTOBJ::bInsertGlyphbitsPath(RFONTOBJ *this, struct _GLYPHDATA *a2, int a3)
{
  __int64 v3; // r15
  struct _FONTOBJ *v7; // r8
  struct DHPDEV__ *v8; // rdx
  unsigned int v9; // r14d
  EPATHFONTOBJ *v10; // rax
  GLYPHDEF v11; // rbx
  EPATHOBJ *v12; // rcx
  __int64 v14; // [rsp+40h] [rbp-A8h] BYREF
  int v15; // [rsp+50h] [rbp-98h] BYREF
  __int64 v16; // [rsp+58h] [rbp-90h]

  v3 = *(_QWORD *)this;
  PATHMEMOBJ::PATHMEMOBJ((PATHMEMOBJ *)&v15);
  if ( !v16
    || (v7 = *(struct _FONTOBJ **)this,
        v8 = *(struct DHPDEV__ **)(*(_QWORD *)this + 112LL),
        v14 = *(_QWORD *)(*(_QWORD *)this + 128LL),
        (unsigned int)PFFOBJ::QueryFontData((PFFOBJ *)&v14, v8, v7, 2u, a2->hg, 0LL, &v15, 0) == -1) )
  {
LABEL_8:
    PATHMEMOBJ::~PATHMEMOBJ((PATHMEMOBJ *)&v15);
    return 0LL;
  }
  else
  {
    v9 = EPATHOBJ::cjSize((EPATHOBJ *)&v15) + 424;
    while ( 1 )
    {
      v10 = (EPATHFONTOBJ *)RFONTOBJ::pgbCheckGlyphCache(this, v9);
      v11.pgb = (GLYPHBITS *)v10;
      if ( v10 )
        break;
      if ( !a3 )
        goto LABEL_8;
      RFONTOBJ::vFlushCache(this);
      a3 = 0;
    }
    EPATHFONTOBJ::vInit(v10, v9);
    EPATHOBJ::bClone(v12, (const struct EPATHOBJ *)&v15);
    a2->gdf = v11;
    *(_QWORD *)(v3 + 584) += v9;
    PATHMEMOBJ::~PATHMEMOBJ((PATHMEMOBJ *)&v15);
    return 1LL;
  }
}
