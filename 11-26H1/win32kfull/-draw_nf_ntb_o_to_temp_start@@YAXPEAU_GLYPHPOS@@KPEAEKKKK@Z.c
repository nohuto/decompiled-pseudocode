/*
 * XREFs of ?draw_nf_ntb_o_to_temp_start@@YAXPEAU_GLYPHPOS@@KPEAEKKKK@Z @ 0x1401B5030
 * Callers:
 *     ?vExpandAndCopyText@@YAXPEAVSURFACE@@PEAU_FONTOBJ@@PEAU_GLYPHPOS@@KPEAEKK00PEAU_RECTL@@4HHK44KPEAU_BRUSHOBJ@@PEAU_POINTL@@@Z @ 0x1400DB4AC (-vExpandAndCopyText@@YAXPEAVSURFACE@@PEAU_FONTOBJ@@PEAU_GLYPHPOS@@KPEAEKK00PEAU_RECTL@@4HHK44KPE.c)
 * Callees:
 *     ?vSrcCopyDummy@@YAXPEAUBLTINFO@@@Z @ 0x14016D630 (-vSrcCopyDummy@@YAXPEAUBLTINFO@@@Z.c)
 *     ?or_all_2_wide_rotated_no_last@@YAXJJJPEAE0J@Z @ 0x1401B9B80 (-or_all_2_wide_rotated_no_last@@YAXJJJPEAE0J@Z.c)
 *     ?or_all_2_wide_rotated_need_last@@YAXJJJPEAE0J@Z @ 0x1401B9F50 (-or_all_2_wide_rotated_need_last@@YAXJJJPEAE0J@Z.c)
 *     ?or_all_3_wide_rotated_no_last@@YAXJJJPEAE0J@Z @ 0x1401BE630 (-or_all_3_wide_rotated_no_last@@YAXJJJPEAE0J@Z.c)
 *     ?or_all_1_wide_rotated_need_last@@YAXJJJPEAE0J@Z @ 0x1401BEF40 (-or_all_1_wide_rotated_need_last@@YAXJJJPEAE0J@Z.c)
 *     ?or_all_N_wide_rotated_need_last@@YAXJJJPEAE0JJ@Z @ 0x1401C86B0 (-or_all_N_wide_rotated_need_last@@YAXJJJPEAE0JJ@Z.c)
 *     ?or_all_1_wide_unrotated@@YAXJJJPEAE0J@Z @ 0x1401D0290 (-or_all_1_wide_unrotated@@YAXJJJPEAE0J@Z.c)
 *     ?or_all_N_wide_rotated_no_last@@YAXJJJPEAE0JJ@Z @ 0x1401DCB60 (-or_all_N_wide_rotated_no_last@@YAXJJJPEAE0JJ@Z.c)
 *     ?or_all_2_wide_unrotated@@YAXJJJPEAE0J@Z @ 0x1401DDFF0 (-or_all_2_wide_unrotated@@YAXJJJPEAE0J@Z.c)
 *     ?or_all_3_wide_rotated_need_last@@YAXJJJPEAE0J@Z @ 0x1401ED380 (-or_all_3_wide_rotated_need_last@@YAXJJJPEAE0J@Z.c)
 *     ?or_all_4_wide_rotated_no_last@@YAXJJJPEAE0J@Z @ 0x1401EE7A0 (-or_all_4_wide_rotated_no_last@@YAXJJJPEAE0J@Z.c)
 *     ?or_all_4_wide_rotated_need_last@@YAXJJJPEAE0J@Z @ 0x1401FEF80 (-or_all_4_wide_rotated_need_last@@YAXJJJPEAE0J@Z.c)
 *     ?or_all_3_wide_unrotated@@YAXJJJPEAE0J@Z @ 0x140207FF0 (-or_all_3_wide_unrotated@@YAXJJJPEAE0J@Z.c)
 *     ?or_all_N_wide_unrotated@@YAXJJJPEAE0JJ@Z @ 0x140208360 (-or_all_N_wide_unrotated@@YAXJJJPEAE0JJ@Z.c)
 *     ?or_all_4_wide_unrotated@@YAXJJJPEAE0J@Z @ 0x140211680 (-or_all_4_wide_unrotated@@YAXJJJPEAE0J@Z.c)
 *     _guard_dispatch_icall @ 0x14034FDB0 (_guard_dispatch_icall.c)
 */

void __fastcall draw_nf_ntb_o_to_temp_start(
        struct _GLYPHPOS *a1,
        int a2,
        unsigned __int8 *a3,
        int a4,
        unsigned int a5,
        unsigned int a6,
        unsigned int a7)
{
  int v9; // ebx
  __int64 v11; // rdi
  GLYPHBITS *pgb; // r14
  LONG cx; // eax
  unsigned int v14; // r10d
  int v15; // r11d
  int v16; // r9d
  __int64 v17; // r8
  __int64 v18; // rcx

  if ( a2 )
  {
    v9 = a2;
    v11 = 0LL;
    do
    {
      --v9;
      pgb = a1[v11].pgdf->pgb;
      cx = pgb->sizlBitmap.cx;
      v14 = (LOBYTE(pgb->ptlOrigin.x) + LOBYTE(a1[v11].ptl.x) - (_BYTE)a4) & 7;
      v15 = (cx + 7) >> 3;
      v16 = (int)(cx + v14 + 7) >> 3;
      if ( v16 > 4 )
      {
        v18 = 0LL;
        if ( v16 > v15 )
          v18 = 2LL;
        funcs_1401B518B[(v14 == 0) | (unsigned __int64)v18](
          pgb->sizlBitmap.cy,
          v14,
          a5,
          pgb->aj,
          &a3[(int)(a5 * (a1[v11].ptl.y + pgb->ptlOrigin.y - a7))
            + ((__int64)(pgb->ptlOrigin.x + a1[v11].ptl.x - a4) >> 3)],
          v15,
          v16);
      }
      else
      {
        v17 = 0LL;
        if ( v16 > v15 )
          v17 = 2LL;
        ((void (__fastcall *)(_QWORD, _QWORD, _QWORD, BYTE *, unsigned __int8 *, int))funcs_1401B5117[(v14 == 0) | (unsigned int)(4 * v16) | (unsigned __int64)v17])(
          (unsigned int)pgb->sizlBitmap.cy,
          v14,
          a5,
          pgb->aj,
          &a3[(int)(a5 * (a1[v11].ptl.y + pgb->ptlOrigin.y - a7))
            + ((__int64)(pgb->ptlOrigin.x + a1[v11].ptl.x - a4) >> 3)],
          v15);
      }
      v11 = (unsigned int)(v11 + 1);
    }
    while ( v9 );
  }
}
