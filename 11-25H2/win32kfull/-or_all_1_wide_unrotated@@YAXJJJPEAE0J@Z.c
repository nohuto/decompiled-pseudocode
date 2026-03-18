/*
 * XREFs of ?or_all_1_wide_unrotated@@YAXJJJPEAE0J@Z @ 0x14019F4E0
 * Callers:
 *     ?draw_nf_ntb_o_to_temp_start@@YAXPEAU_GLYPHPOS@@KPEAEKKKK@Z @ 0x14017ED20 (-draw_nf_ntb_o_to_temp_start@@YAXPEAU_GLYPHPOS@@KPEAEKKKK@Z.c)
 *     ?draw_f_ntb_o_to_temp_start@@YAXPEAU_GLYPHPOS@@KPEAEKKKK@Z @ 0x140223420 (-draw_f_ntb_o_to_temp_start@@YAXPEAU_GLYPHPOS@@KPEAEKKKK@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall or_all_1_wide_unrotated(int a1, __int64 a2, int a3, char *a4, unsigned __int8 *a5)
{
  __int64 v5; // rdx
  unsigned __int8 *v7; // rdx
  char v8; // al

  v5 = a1;
  v7 = (unsigned __int8 *)&a4[v5];
  do
  {
    v8 = *a4++;
    *a5 |= v8;
    a5 += a3;
  }
  while ( a4 != (char *)v7 );
}
