/*
 * XREFs of ?or_all_3_wide_rotated_need_last@@YAXJJJPEAE0J@Z @ 0x1401C6E30
 * Callers:
 *     ?draw_nf_ntb_o_to_temp_start@@YAXPEAU_GLYPHPOS@@KPEAEKKKK@Z @ 0x14017ED20 (-draw_nf_ntb_o_to_temp_start@@YAXPEAU_GLYPHPOS@@KPEAEKKKK@Z.c)
 *     ?draw_f_ntb_o_to_temp_start@@YAXPEAU_GLYPHPOS@@KPEAEKKKK@Z @ 0x140223420 (-draw_f_ntb_o_to_temp_start@@YAXPEAU_GLYPHPOS@@KPEAEKKKK@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall or_all_3_wide_rotated_need_last(int a1, char a2, int a3, unsigned __int8 *a4, unsigned __int8 *a5)
{
  __int64 v5; // rbx
  unsigned __int8 *v7; // r10
  unsigned __int8 *v8; // r8
  int v9; // eax
  int v10; // edx
  unsigned int v11; // edx

  v5 = a3;
  v7 = &a4[3 * a1];
  v8 = a5 + 2;
  do
  {
    v9 = a4[2];
    v10 = (a4[1] | (*a4 << 8)) << 8;
    a4 += 3;
    v11 = (v9 | (unsigned int)v10) >> a2;
    *v8 |= v11;
    *(v8 - 2) |= BYTE2(v11);
    *(v8 - 1) |= BYTE1(v11);
    v8 += v5;
  }
  while ( a4 != v7 );
}
