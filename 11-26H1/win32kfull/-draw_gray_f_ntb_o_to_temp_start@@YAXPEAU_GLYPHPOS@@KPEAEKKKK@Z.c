/*
 * XREFs of ?draw_gray_f_ntb_o_to_temp_start@@YAXPEAU_GLYPHPOS@@KPEAEKKKK@Z @ 0x14030F4A0
 * Callers:
 *     ?vExpandAndCopyText@@YAXPEAVSURFACE@@PEAU_FONTOBJ@@PEAU_GLYPHPOS@@KPEAEKK00PEAU_RECTL@@4HHK44KPEAU_BRUSHOBJ@@PEAU_POINTL@@@Z @ 0x1400DB4AC (-vExpandAndCopyText@@YAXPEAVSURFACE@@PEAU_FONTOBJ@@PEAU_GLYPHPOS@@KPEAEKK00PEAU_RECTL@@4HHK44KPE.c)
 * Callees:
 *     ?vOrNonAlignedGrayGlyphEven@@YAXPEAU_GLYPHBITS@@IPEAEI@Z @ 0x1401C4440 (-vOrNonAlignedGrayGlyphEven@@YAXPEAU_GLYPHBITS@@IPEAEI@Z.c)
 *     ?vOrAlignedGrayGlyphEven@@YAXPEAU_GLYPHBITS@@IPEAEI@Z @ 0x1401C70D0 (-vOrAlignedGrayGlyphEven@@YAXPEAU_GLYPHBITS@@IPEAEI@Z.c)
 *     ?vOrNonAlignedGrayGlyphOdd@@YAXPEAU_GLYPHBITS@@IPEAEI@Z @ 0x1401D01E0 (-vOrNonAlignedGrayGlyphOdd@@YAXPEAU_GLYPHBITS@@IPEAEI@Z.c)
 *     _guard_dispatch_icall @ 0x14034FDB0 (_guard_dispatch_icall.c)
 */

void __fastcall draw_gray_f_ntb_o_to_temp_start(
        struct _GLYPHPOS *a1,
        int a2,
        unsigned __int8 *a3,
        int a4,
        unsigned int a5,
        unsigned int a6,
        unsigned int a7)
{
  int v8; // edi
  int v9; // esi
  struct _GLYPHPOS *v10; // rbx
  struct _GLYPHPOS *v11; // rbp
  struct _GLYPHBITS *pgb; // r11

  v8 = a1->ptl.x - a4;
  v9 = a1->ptl.y - a7;
  v10 = a1;
  v11 = &a1[a2];
  if ( a1 < v11 )
  {
    do
    {
      pgb = v10->pgdf->pgb;
      (*(&funcs_1401E8C6B[2 * ((v8 + pgb->ptlOrigin.x) & 1u)] + (pgb->sizlBitmap.cx & 1)))(
        pgb,
        (unsigned int)(pgb->sizlBitmap.cx + 1) >> 1,
        &a3[a5 * (__int64)(v9 + pgb->ptlOrigin.y) + (v8 + pgb->ptlOrigin.x) / 2],
        a5);
      v8 += a6;
      ++v10;
    }
    while ( v10 < v11 );
  }
}
