/*
 * XREFs of ?draw_nf_tb_no_to_temp_start@@YAXPEAU_GLYPHPOS@@KPEAEKKKK@Z @ 0x1401DCC00
 * Callers:
 *     ?vExpandAndCopyText@@YAXPEAVSURFACE@@PEAU_FONTOBJ@@PEAU_GLYPHPOS@@KPEAEKK00PEAU_RECTL@@4HHK44KPEAU_BRUSHOBJ@@PEAU_POINTL@@@Z @ 0x1400DB4AC (-vExpandAndCopyText@@YAXPEAVSURFACE@@PEAU_FONTOBJ@@PEAU_GLYPHPOS@@KPEAEKK00PEAU_RECTL@@4HHK44KPE.c)
 * Callees:
 *     ?vSrcCopyDummy@@YAXPEAUBLTINFO@@@Z @ 0x14016D630 (-vSrcCopyDummy@@YAXPEAUBLTINFO@@@Z.c)
 *     ?or_all_1_wide_rotated_need_last@@YAXJJJPEAE0J@Z @ 0x1401BEF40 (-or_all_1_wide_rotated_need_last@@YAXJJJPEAE0J@Z.c)
 *     ?or_all_N_wide_rotated_need_last@@YAXJJJPEAE0JJ@Z @ 0x1401C86B0 (-or_all_N_wide_rotated_need_last@@YAXJJJPEAE0JJ@Z.c)
 *     ?or_first_2_wide_rotated_no_last@@YAXJJJPEAE0J@Z @ 0x1401D1DC0 (-or_first_2_wide_rotated_no_last@@YAXJJJPEAE0J@Z.c)
 *     ?or_all_N_wide_rotated_no_last@@YAXJJJPEAE0JJ@Z @ 0x1401DCB60 (-or_all_N_wide_rotated_no_last@@YAXJJJPEAE0JJ@Z.c)
 *     ?or_first_2_wide_rotated_need_last@@YAXJJJPEAE0J@Z @ 0x1401EF520 (-or_first_2_wide_rotated_need_last@@YAXJJJPEAE0J@Z.c)
 *     ?mov_first_1_wide_unrotated@@YAXJJJPEAE0J@Z @ 0x1401F0FD0 (-mov_first_1_wide_unrotated@@YAXJJJPEAE0J@Z.c)
 *     ?or_all_N_wide_unrotated@@YAXJJJPEAE0JJ@Z @ 0x140208360 (-or_all_N_wide_unrotated@@YAXJJJPEAE0JJ@Z.c)
 *     ?or_first_3_wide_rotated_no_last@@YAXJJJPEAE0J@Z @ 0x14020CF70 (-or_first_3_wide_rotated_no_last@@YAXJJJPEAE0J@Z.c)
 *     ?or_first_3_wide_rotated_need_last@@YAXJJJPEAE0J@Z @ 0x14020F190 (-or_first_3_wide_rotated_need_last@@YAXJJJPEAE0J@Z.c)
 *     ?mov_first_2_wide_unrotated@@YAXJJJPEAE0J@Z @ 0x140216950 (-mov_first_2_wide_unrotated@@YAXJJJPEAE0J@Z.c)
 *     ?or_first_4_wide_rotated_no_last@@YAXJJJPEAE0J@Z @ 0x140266670 (-or_first_4_wide_rotated_no_last@@YAXJJJPEAE0J@Z.c)
 *     ?mov_first_3_wide_unrotated@@YAXJJJPEAE0J@Z @ 0x140342F90 (-mov_first_3_wide_unrotated@@YAXJJJPEAE0J@Z.c)
 *     ?mov_first_4_wide_unrotated@@YAXJJJPEAE0J@Z @ 0x140342FD0 (-mov_first_4_wide_unrotated@@YAXJJJPEAE0J@Z.c)
 *     ?or_first_4_wide_rotated_need_last@@YAXJJJPEAE0J@Z @ 0x140343080 (-or_first_4_wide_rotated_need_last@@YAXJJJPEAE0J@Z.c)
 *     _guard_dispatch_icall @ 0x14034FDB0 (_guard_dispatch_icall.c)
 */

void __fastcall draw_nf_tb_no_to_temp_start(struct _GLYPHPOS *a1, int a2, unsigned __int8 *a3, int a4, unsigned int a5)
{
  __int64 v5; // rdi
  int v8; // ebx
  GLYPHBITS *pgb; // r14
  unsigned __int8 *aj; // r9
  LONG cx; // eax
  unsigned int v13; // r10d
  unsigned __int8 *v14; // rsi
  int v15; // r11d
  int v16; // edx
  __int64 v17; // r8
  __int64 v18; // rcx

  if ( a2 )
  {
    v5 = 0LL;
    v8 = a2;
    do
    {
      --v8;
      pgb = a1[v5].pgdf->pgb;
      aj = pgb->aj;
      cx = pgb->sizlBitmap.cx;
      v13 = (LOBYTE(pgb->ptlOrigin.x) + LOBYTE(a1[v5].ptl.x) - (_BYTE)a4) & 7;
      v14 = &a3[(__int64)(pgb->ptlOrigin.x + a1[v5].ptl.x - a4) >> 3];
      v15 = (cx + 7) >> 3;
      v16 = (int)(cx + v13 + 7) >> 3;
      if ( v16 > 4 )
      {
        v18 = 0LL;
        if ( v16 > v15 )
          v18 = 2LL;
        funcs_1401B518B[(v13 == 0) | (unsigned __int64)v18](
          pgb->sizlBitmap.cy,
          v13,
          a5,
          aj,
          v14,
          v15,
          (int)(cx + v13 + 7) >> 3);
      }
      else
      {
        v17 = 0LL;
        if ( v16 > v15 )
          v17 = 2LL;
        ((void (__fastcall *)(_QWORD, _QWORD, _QWORD, unsigned __int8 *, unsigned __int8 *, int))funcs_1401DCCCA[(v13 == 0) | (unsigned int)(4 * v16) | (unsigned __int64)v17])(
          (unsigned int)pgb->sizlBitmap.cy,
          v13,
          a5,
          aj,
          v14,
          v15);
      }
      v5 = (unsigned int)(v5 + 1);
    }
    while ( v8 );
  }
}
