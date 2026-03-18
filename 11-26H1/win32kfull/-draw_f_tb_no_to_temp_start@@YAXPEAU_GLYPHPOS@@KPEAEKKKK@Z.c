/*
 * XREFs of ?draw_f_tb_no_to_temp_start@@YAXPEAU_GLYPHPOS@@KPEAEKKKK@Z @ 0x14020DA10
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

void __fastcall draw_f_tb_no_to_temp_start(
        struct _GLYPHPOS *a1,
        int a2,
        unsigned __int8 *a3,
        int a4,
        unsigned int a5,
        unsigned int a6)
{
  LONG x; // esi
  __int64 v7; // rdi
  int v10; // ebx
  GLYPHBITS *pgb; // r15
  unsigned __int8 *aj; // r9
  LONG cx; // eax
  unsigned int v15; // r10d
  unsigned __int8 *v16; // r14
  int v17; // r11d
  int v18; // edx
  __int64 v19; // r8
  __int64 v20; // rcx

  if ( a2 )
  {
    x = a1->ptl.x;
    v7 = 0LL;
    v10 = a2;
    do
    {
      --v10;
      pgb = a1[v7].pgdf->pgb;
      aj = pgb->aj;
      cx = pgb->sizlBitmap.cx;
      v15 = (LOBYTE(pgb->ptlOrigin.x) + (_BYTE)x - (_BYTE)a4) & 7;
      v16 = &a3[(__int64)(pgb->ptlOrigin.x + x - a4) >> 3];
      v17 = (cx + 7) >> 3;
      v18 = (int)(cx + v15 + 7) >> 3;
      if ( v18 > 4 )
      {
        v20 = 0LL;
        if ( v18 > v17 )
          v20 = 2LL;
        funcs_1401B518B[(v15 == 0) | (unsigned __int64)v20](
          pgb->sizlBitmap.cy,
          v15,
          a5,
          aj,
          v16,
          v17,
          (int)(cx + v15 + 7) >> 3);
      }
      else
      {
        v19 = 0LL;
        if ( v18 > v17 )
          v19 = 2LL;
        ((void (__fastcall *)(_QWORD, _QWORD, _QWORD, unsigned __int8 *, unsigned __int8 *, int))funcs_1401DCCCA[(v15 == 0) | (unsigned int)(4 * v18) | (unsigned __int64)v19])(
          (unsigned int)pgb->sizlBitmap.cy,
          v15,
          a5,
          aj,
          v16,
          v17);
      }
      x += a6;
      v7 = (unsigned int)(v7 + 1);
    }
    while ( v10 );
  }
}
