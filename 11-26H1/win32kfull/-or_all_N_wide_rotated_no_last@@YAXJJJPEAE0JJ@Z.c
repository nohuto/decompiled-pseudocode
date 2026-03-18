/*
 * XREFs of ?or_all_N_wide_rotated_no_last@@YAXJJJPEAE0JJ@Z @ 0x1401DCB60
 * Callers:
 *     ?draw_nf_ntb_o_to_temp_start@@YAXPEAU_GLYPHPOS@@KPEAEKKKK@Z @ 0x1401B5030 (-draw_nf_ntb_o_to_temp_start@@YAXPEAU_GLYPHPOS@@KPEAEKKKK@Z.c)
 *     ?draw_nf_tb_no_to_temp_start@@YAXPEAU_GLYPHPOS@@KPEAEKKKK@Z @ 0x1401DCC00 (-draw_nf_tb_no_to_temp_start@@YAXPEAU_GLYPHPOS@@KPEAEKKKK@Z.c)
 *     ?draw_f_tb_no_to_temp_start@@YAXPEAU_GLYPHPOS@@KPEAEKKKK@Z @ 0x14020DA10 (-draw_f_tb_no_to_temp_start@@YAXPEAU_GLYPHPOS@@KPEAEKKKK@Z.c)
 *     ?draw_f_ntb_o_to_temp_start@@YAXPEAU_GLYPHPOS@@KPEAEKKKK@Z @ 0x14025AA30 (-draw_f_ntb_o_to_temp_start@@YAXPEAU_GLYPHPOS@@KPEAEKKKK@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall or_all_N_wide_rotated_no_last(
        int a1,
        char a2,
        int a3,
        unsigned __int8 *a4,
        unsigned __int8 *a5,
        int a6,
        int a7)
{
  unsigned __int8 *v7; // r10
  char v8; // di
  unsigned __int8 *v10; // rbx
  __int64 v11; // rsi
  unsigned __int8 *v12; // r11
  char v13; // r8
  char v14; // dl
  unsigned __int8 v15; // al

  v7 = a5;
  v8 = 8 - a2;
  v10 = &a5[a3 * a1];
  v11 = a3 - a7;
  do
  {
    v12 = &v7[a7 - 1];
    v13 = 0;
    do
    {
      v14 = *a4;
      v15 = *a4++;
      *v7++ |= v13 | (v15 >> a2);
      v13 = v14 << v8;
    }
    while ( v7 != v12 );
    *v7 |= v13;
    v7 += v11 + 1;
  }
  while ( v7 != v10 );
}
