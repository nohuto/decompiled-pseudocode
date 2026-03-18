/*
 * XREFs of ?or_all_2_wide_rotated_no_last@@YAXJJJPEAE0J@Z @ 0x140185600
 * Callers:
 *     ?draw_nf_ntb_o_to_temp_start@@YAXPEAU_GLYPHPOS@@KPEAEKKKK@Z @ 0x14017ED20 (-draw_nf_ntb_o_to_temp_start@@YAXPEAU_GLYPHPOS@@KPEAEKKKK@Z.c)
 *     ?draw_f_ntb_o_to_temp_start@@YAXPEAU_GLYPHPOS@@KPEAEKKKK@Z @ 0x140223420 (-draw_f_ntb_o_to_temp_start@@YAXPEAU_GLYPHPOS@@KPEAEKKKK@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall or_all_2_wide_rotated_no_last(int a1, char a2, int a3, unsigned __int8 *a4, unsigned __int8 *a5)
{
  unsigned __int8 *v5; // r10
  __int64 v6; // rdi
  char v8; // r11
  char v10; // dl
  unsigned __int8 v11; // al

  v5 = &a4[a1];
  v6 = a3;
  v8 = 8 - a2;
  do
  {
    v10 = *a4;
    v11 = *a4++;
    *a5 |= v11 >> a2;
    a5[1] |= v10 << v8;
    a5 += v6;
  }
  while ( a4 != v5 );
}
