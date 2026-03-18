/*
 * XREFs of ?or_all_4_wide_unrotated@@YAXJJJPEAE0J@Z @ 0x1401E0440
 * Callers:
 *     ?draw_nf_ntb_o_to_temp_start@@YAXPEAU_GLYPHPOS@@KPEAEKKKK@Z @ 0x14017ED20 (-draw_nf_ntb_o_to_temp_start@@YAXPEAU_GLYPHPOS@@KPEAEKKKK@Z.c)
 *     ?draw_f_ntb_o_to_temp_start@@YAXPEAU_GLYPHPOS@@KPEAEKKKK@Z @ 0x140223420 (-draw_f_ntb_o_to_temp_start@@YAXPEAU_GLYPHPOS@@KPEAEKKKK@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall or_all_4_wide_unrotated(int a1, __int64 a2, int a3, unsigned __int8 *a4, unsigned __int8 *a5)
{
  int v5; // eax
  unsigned __int8 *v6; // rcx
  unsigned __int8 *v7; // rdx
  int v8; // eax
  unsigned __int8 *v9; // r9
  unsigned __int8 *v10; // rcx
  unsigned __int8 v11; // al
  __int16 v12; // ax

  v5 = 4 * a1;
  v6 = a5;
  v7 = &a4[v5];
  if ( ((unsigned __int8)a5 & 3) != 0 )
  {
    if ( ((unsigned __int8)a5 & 3) == 1LL )
    {
LABEL_9:
      if ( a4 != v7 )
      {
        v9 = a4 + 2;
        v10 = a5 + 2;
        do
        {
          *(v10 - 2) |= *(v9 - 2);
          *(v10 - 1) |= *(v9 - 1);
          v11 = *v9;
          v9 += 4;
          *v10 |= v11;
          v10[1] |= *(v9 - 3);
          v10 += a3;
        }
        while ( v9 - 2 != v7 );
      }
      return;
    }
    if ( ((unsigned __int8)a5 & 3) != 2LL )
    {
      if ( ((unsigned __int8)a5 & 3) != 3LL )
        return;
      goto LABEL_9;
    }
    for ( ; a4 != v7; v6 += a3 )
    {
      *(_WORD *)v6 |= *(_WORD *)a4;
      v12 = *((_WORD *)a4 + 1);
      a4 += 4;
      *((_WORD *)v6 + 1) |= v12;
    }
  }
  else
  {
    for ( ; a4 != v7; v6 += a3 )
    {
      v8 = *(_DWORD *)a4;
      a4 += 4;
      *(_DWORD *)v6 |= v8;
    }
  }
}
