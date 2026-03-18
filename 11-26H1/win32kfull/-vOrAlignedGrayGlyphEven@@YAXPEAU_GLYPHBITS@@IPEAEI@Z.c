/*
 * XREFs of ?vOrAlignedGrayGlyphEven@@YAXPEAU_GLYPHBITS@@IPEAEI@Z @ 0x1401C70D0
 * Callers:
 *     ?draw_gray_nf_ntb_o_to_temp_start@@YAXPEAU_GLYPHPOS@@KPEAEKKKK@Z @ 0x1401E8BB0 (-draw_gray_nf_ntb_o_to_temp_start@@YAXPEAU_GLYPHPOS@@KPEAEKKKK@Z.c)
 *     ?draw_gray_f_ntb_o_to_temp_start@@YAXPEAU_GLYPHPOS@@KPEAEKKKK@Z @ 0x14030F4A0 (-draw_gray_f_ntb_o_to_temp_start@@YAXPEAU_GLYPHPOS@@KPEAEKKKK@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall vOrAlignedGrayGlyphEven(struct _GLYPHBITS *a1, unsigned int a2, unsigned __int8 *a3, unsigned int a4)
{
  BYTE *aj; // r10
  __int64 v5; // r11
  unsigned __int8 *i; // rbx
  unsigned __int8 *j; // rcx

  aj = a1->aj;
  v5 = (unsigned int)(a1->sizlBitmap.cx + 1) >> 1;
  for ( i = &a3[a1->sizlBitmap.cy * a4]; a3 < i; aj += a2 )
  {
    for ( j = a3; j < &a3[v5]; ++j )
      *j |= j[aj - a3];
    a3 += a4;
  }
}
