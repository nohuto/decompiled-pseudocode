/*
 * XREFs of ?STROBJ_bEnumCheckBounds@@YAHPEAU_STROBJ@@PEAKPEAPEAU_GLYPHPOS@@PEAU_RECTL@@@Z @ 0x1400D9F98
 * Callers:
 *     EngTextOut @ 0x1400DA230 (EngTextOut.c)
 * Callees:
 *     vGetPosInfo @ 0x1400D9EC8 (vGetPosInfo.c)
 *     ?bGlyphOutOfBounds@@YAHPEAVESTROBJ@@PEAU_GLYPHPOS@@PEAU_RECTL@@K@Z @ 0x1400D9EF8 (-bGlyphOutOfBounds@@YAHPEAVESTROBJ@@PEAU_GLYPHPOS@@PEAU_RECTL@@K@Z.c)
 *     STROBJ_bEnum @ 0x1400DA160 (STROBJ_bEnum.c)
 */

__int64 __fastcall STROBJ_bEnumCheckBounds(struct _STROBJ *a1, ULONG *pc, PGLYPHPOS *ppgpos, struct _RECTL *a4)
{
  PGLYPHPOS *v5; // rbx
  ULONG *v6; // r12
  ULONG cGlyphs; // r15d
  BOOL v9; // eax
  PGLYPHPOS v10; // rdx
  unsigned int v11; // r13d
  unsigned int v12; // ebp
  unsigned int v13; // ebx
  __int64 v14; // rsi
  int v15; // r14d
  struct _RECTL *v17; // r8
  struct _GLYPHPOS *v18; // [rsp+20h] [rbp-58h]
  BOOL v19; // [rsp+80h] [rbp+8h]

  v5 = ppgpos;
  v6 = pc;
  while ( 1 )
  {
    cGlyphs = a1[1].cGlyphs;
    v9 = STROBJ_bEnum(a1, v6, v5);
    v10 = *v5;
    v11 = v9;
    v12 = *v6;
    v13 = 0;
    v19 = v9;
    v18 = v10;
    if ( *v6 )
      break;
LABEL_9:
    if ( !v11 )
    {
      *v6 = 0;
      return 0LL;
    }
    v5 = ppgpos;
  }
  while ( 1 )
  {
    v14 = v13 + 1;
    if ( !(unsigned int)bGlyphOutOfBounds((struct ESTROBJ *)a1, &v10[v13], a4, cGlyphs + v13) )
      break;
    v10 = v18;
    ++v13;
    if ( (unsigned int)v14 >= v12 )
      goto LABEL_9;
  }
  v15 = 1;
  if ( (unsigned int)v14 < v12 )
  {
    v17 = a4;
    do
    {
      if ( (unsigned int)bGlyphOutOfBounds((struct ESTROBJ *)a1, &v18[v14], v17, (unsigned int)v14 + cGlyphs) )
        break;
      ++v15;
      v14 = (unsigned int)(v14 + 1);
    }
    while ( (unsigned int)v14 < v12 );
    v6 = pc;
    v11 = v19;
  }
  if ( v15 + v13 < v12 )
    v11 = 1;
  a1[1].cGlyphs = v13 + v15 + cGlyphs;
  *ppgpos += v13;
  *v6 = v15;
  if ( ((__int64)a1[4].pwszOrg & 0x1400) == 0 && (cGlyphs || v13) )
  {
    if ( a1->ulCharInc )
      vGetPosInfo((__int64)a1, cGlyphs + v13, &(*ppgpos)->ptl);
  }
  return v11;
}
