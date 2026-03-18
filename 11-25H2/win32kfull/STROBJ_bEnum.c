/*
 * XREFs of STROBJ_bEnum @ 0x1400A9C00
 * Callers:
 *     EngTextOut @ 0x140012BD0 (EngTextOut.c)
 *     ?bTextToPathWorkhorse@ESTROBJ@@QEAAHAEAVEPATHOBJ@@@Z @ 0x1400A94F8 (-bTextToPathWorkhorse@ESTROBJ@@QEAAHAEAVEPATHOBJ@@@Z.c)
 *     ?NtGdiSTROBJ_bEnumInternal@@YAHPEAU_STROBJ@@PEAKPEAPEAU_GLYPHPOS@@H@Z @ 0x1400A9830 (-NtGdiSTROBJ_bEnumInternal@@YAHPEAU_STROBJ@@PEAKPEAPEAU_GLYPHPOS@@H@Z.c)
 *     ?STROBJ_bEnumCheckBounds@@YAHPEAU_STROBJ@@PEAKPEAPEAU_GLYPHPOS@@PEAU_RECTL@@@Z @ 0x1400A9A18 (-STROBJ_bEnumCheckBounds@@YAHPEAU_STROBJ@@PEAKPEAPEAU_GLYPHPOS@@PEAU_RECTL@@@Z.c)
 *     bOutOfBounds @ 0x1400DA5E0 (bOutOfBounds.c)
 *     vStringBitmapTextOut @ 0x14030DFF8 (vStringBitmapTextOut.c)
 * Callees:
 *     ?cGetGlyphData@RFONTOBJ@@QEAAKKPEAU_GLYPHPOS@@@Z @ 0x1400A9BB0 (-cGetGlyphData@RFONTOBJ@@QEAAKKPEAU_GLYPHPOS@@@Z.c)
 *     ?STROBJ_bEnumLinked@@YAHPEAVESTROBJ@@PEAKPEAPEAU_GLYPHPOS@@@Z @ 0x1400A9CCC (-STROBJ_bEnumLinked@@YAHPEAVESTROBJ@@PEAKPEAPEAU_GLYPHPOS@@@Z.c)
 *     vGetPosInfo @ 0x1400A9EC8 (vGetPosInfo.c)
 */

BOOL __stdcall STROBJ_bEnum(STROBJ *pstro, ULONG *pc, PGLYPHPOS *ppgpos)
{
  int pwszOrg; // eax
  ULONG cGlyphs; // edx
  __int64 v9; // rax
  BOOL v10; // edi
  unsigned int v11; // edx
  struct _GLYPHPOS *v12; // rbp
  RFONTOBJ *v13; // rcx
  ULONG GlyphData; // r9d
  __int64 v15; // rdx

  pwszOrg = (int)pstro[4].pwszOrg;
  if ( (pwszOrg & 0x1400) != 0 )
    return STROBJ_bEnumLinked((struct ESTROBJ *)pstro, pc, ppgpos);
  cGlyphs = pstro->cGlyphs;
  if ( (pwszOrg & 2) != 0 )
  {
    *pc = cGlyphs;
    *ppgpos = *(PGLYPHPOS *)&pstro[1].rclBkGround.top;
    return 0;
  }
  v9 = pstro[1].cGlyphs;
  v10 = 0;
  v11 = cGlyphs - v9;
  if ( !v11
    || (v12 = (struct _GLYPHPOS *)(*(_QWORD *)&pstro[1].rclBkGround.top + 24 * v9),
        (v13 = *(RFONTOBJ **)&pstro[1].ulCharInc) == 0LL)
    || (GlyphData = RFONTOBJ::cGetGlyphData(v13, v11, v12)) == 0 )
  {
    *pc = 0;
    return 0;
  }
  v15 = pstro[1].cGlyphs;
  if ( (_DWORD)v15 )
  {
    if ( pstro->ulCharInc )
      vGetPosInfo(pstro, v15, &v12->ptl);
  }
  pstro[1].cGlyphs += GlyphData;
  *pc = GlyphData;
  *ppgpos = v12;
  LOBYTE(v10) = pstro[1].cGlyphs < pstro->cGlyphs;
  return v10;
}
