/*
 * XREFs of ?draw_gray_nf_ntb_o_to_temp_start@@YAXPEAU_GLYPHPOS@@KPEAEKKKK@Z @ 0x1401E8BB0
 * Callers:
 *     ?vExpandAndCopyText@@YAXPEAVSURFACE@@PEAU_FONTOBJ@@PEAU_GLYPHPOS@@KPEAEKK00PEAU_RECTL@@4HHK44KPEAU_BRUSHOBJ@@PEAU_POINTL@@@Z @ 0x1400DB4AC (-vExpandAndCopyText@@YAXPEAVSURFACE@@PEAU_FONTOBJ@@PEAU_GLYPHPOS@@KPEAEKK00PEAU_RECTL@@4HHK44KPE.c)
 * Callees:
 *     ?vOrNonAlignedGrayGlyphEven@@YAXPEAU_GLYPHBITS@@IPEAEI@Z @ 0x1401C4440 (-vOrNonAlignedGrayGlyphEven@@YAXPEAU_GLYPHBITS@@IPEAEI@Z.c)
 *     ?vOrAlignedGrayGlyphEven@@YAXPEAU_GLYPHBITS@@IPEAEI@Z @ 0x1401C70D0 (-vOrAlignedGrayGlyphEven@@YAXPEAU_GLYPHBITS@@IPEAEI@Z.c)
 *     ?vOrNonAlignedGrayGlyphOdd@@YAXPEAU_GLYPHBITS@@IPEAEI@Z @ 0x1401D01E0 (-vOrNonAlignedGrayGlyphOdd@@YAXPEAU_GLYPHBITS@@IPEAEI@Z.c)
 *     _guard_dispatch_icall @ 0x14034FDB0 (_guard_dispatch_icall.c)
 */

void __fastcall draw_gray_nf_ntb_o_to_temp_start(
        struct _GLYPHPOS *a1,
        unsigned int a2,
        unsigned __int8 *a3,
        int a4,
        unsigned int a5,
        unsigned int a6,
        unsigned int a7)
{
  unsigned __int64 v9; // rdx
  POINTL *p_ptl; // rdi
  unsigned __int64 v11; // rbx
  struct _GLYPHBITS *v12; // r11

  v9 = 3LL * a2;
  if ( a1 < &a1[v9 / 3] )
  {
    p_ptl = &a1->ptl;
    v11 = (8 * v9 - 1) / 0x18 + 1;
    do
    {
      v12 = **(struct _GLYPHBITS ***)&p_ptl[-1];
      (*(&funcs_1401E8C6B[2 * ((p_ptl->x + v12->ptlOrigin.x - a4) & 1u)] + (v12->sizlBitmap.cx & 1)))(
        v12,
        (unsigned int)(v12->sizlBitmap.cx + 1) >> 1,
        &a3[a5 * (__int64)(int)(p_ptl->y + v12->ptlOrigin.y - a7) + (p_ptl->x + v12->ptlOrigin.x - a4) / 2],
        a5);
      p_ptl += 3;
      --v11;
    }
    while ( v11 );
  }
}
