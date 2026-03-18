/*
 * XREFs of ?draw_nf_ntb_o_to_temp_start@@YAXPEAU_GLYPHPOS@@KPEAEKKKK@Z @ 0x14017ED20
 * Callers:
 *     ?vExpandAndCopyText@@YAXPEAVSURFACE@@PEAU_FONTOBJ@@PEAU_GLYPHPOS@@KPEAEKK00PEAU_RECTL@@4HHK44KPEAU_BRUSHOBJ@@PEAU_POINTL@@@Z @ 0x1400F92A8 (-vExpandAndCopyText@@YAXPEAVSURFACE@@PEAU_FONTOBJ@@PEAU_GLYPHPOS@@KPEAEKK00PEAU_RECTL@@4HHK44KPE.c)
 * Callees:
 *     ?or_all_2_wide_rotated_no_last@@YAXJJJPEAE0J@Z @ 0x140185600 (-or_all_2_wide_rotated_no_last@@YAXJJJPEAE0J@Z.c)
 *     ?or_all_2_wide_rotated_need_last@@YAXJJJPEAE0J@Z @ 0x140185C00 (-or_all_2_wide_rotated_need_last@@YAXJJJPEAE0J@Z.c)
 *     ?or_all_N_wide_rotated_need_last@@YAXJJJPEAE0JJ@Z @ 0x14018BC40 (-or_all_N_wide_rotated_need_last@@YAXJJJPEAE0JJ@Z.c)
 *     ?or_all_3_wide_rotated_no_last@@YAXJJJPEAE0J@Z @ 0x140193430 (-or_all_3_wide_rotated_no_last@@YAXJJJPEAE0J@Z.c)
 *     ?or_all_1_wide_rotated_need_last@@YAXJJJPEAE0J@Z @ 0x1401953E0 (-or_all_1_wide_rotated_need_last@@YAXJJJPEAE0J@Z.c)
 *     ?or_all_1_wide_unrotated@@YAXJJJPEAE0J@Z @ 0x14019F4E0 (-or_all_1_wide_unrotated@@YAXJJJPEAE0J@Z.c)
 *     ?or_all_N_wide_rotated_no_last@@YAXJJJPEAE0JJ@Z @ 0x1401A8DC0 (-or_all_N_wide_rotated_no_last@@YAXJJJPEAE0JJ@Z.c)
 *     ?or_all_2_wide_unrotated@@YAXJJJPEAE0J@Z @ 0x1401AE110 (-or_all_2_wide_unrotated@@YAXJJJPEAE0J@Z.c)
 *     ?or_all_4_wide_rotated_no_last@@YAXJJJPEAE0J@Z @ 0x1401C4CE0 (-or_all_4_wide_rotated_no_last@@YAXJJJPEAE0J@Z.c)
 *     ?or_all_3_wide_rotated_need_last@@YAXJJJPEAE0J@Z @ 0x1401C6E30 (-or_all_3_wide_rotated_need_last@@YAXJJJPEAE0J@Z.c)
 *     ?or_all_4_wide_rotated_need_last@@YAXJJJPEAE0J@Z @ 0x1401CA1D0 (-or_all_4_wide_rotated_need_last@@YAXJJJPEAE0J@Z.c)
 *     ?or_all_3_wide_unrotated@@YAXJJJPEAE0J@Z @ 0x1401DCEF0 (-or_all_3_wide_unrotated@@YAXJJJPEAE0J@Z.c)
 *     ?or_all_4_wide_unrotated@@YAXJJJPEAE0J@Z @ 0x1401E0440 (-or_all_4_wide_unrotated@@YAXJJJPEAE0J@Z.c)
 *     ?or_all_N_wide_unrotated@@YAXJJJPEAE0JJ@Z @ 0x1401E3920 (-or_all_N_wide_unrotated@@YAXJJJPEAE0JJ@Z.c)
 *     ?vSrcCopyDummy@@YAXPEAUBLTINFO@@@Z @ 0x14020E030 (-vSrcCopyDummy@@YAXPEAUBLTINFO@@@Z.c)
 *     _guard_dispatch_icall @ 0x140342490 (_guard_dispatch_icall.c)
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
  __int64 v7; // rdi
  int v10; // ebx
  GLYPHBITS *pgb; // rbp
  unsigned int v13; // r10d
  int v14; // r11d
  int v15; // r9d
  int v16; // r11d
  __int64 v17; // r8
  __int64 v18; // rcx

  if ( a2 )
  {
    v7 = 0LL;
    v10 = a2;
    do
    {
      --v10;
      pgb = a1[v7].pgdf->pgb;
      v13 = (LOBYTE(pgb->ptlOrigin.x) + LOBYTE(a1[v7].ptl.x) - (_BYTE)a4) & 7;
      v14 = pgb->sizlBitmap.cx + 7;
      v15 = (int)(v13 + v14) >> 3;
      v16 = v14 >> 3;
      if ( v15 > 4 )
      {
        v18 = 0LL;
        if ( v15 > v16 )
          v18 = 2LL;
        funcs_14017EE84[(v13 == 0) | (unsigned __int64)v18](
          pgb->sizlBitmap.cy,
          v13,
          a5,
          pgb->aj,
          &a3[(int)(a5 * (a1[v7].ptl.y + pgb->ptlOrigin.y - a7))
            + ((__int64)(pgb->ptlOrigin.x + a1[v7].ptl.x - a4) >> 3)],
          v16,
          v15);
      }
      else
      {
        v17 = 0LL;
        if ( v15 > v16 )
          v17 = 2LL;
        ((void (__fastcall *)(_QWORD, _QWORD, _QWORD, BYTE *, unsigned __int8 *, int))funcs_14017EE0B[(v13 == 0) | (unsigned int)(4 * v15) | (unsigned __int64)v17])(
          (unsigned int)pgb->sizlBitmap.cy,
          v13,
          a5,
          pgb->aj,
          &a3[(int)(a5 * (a1[v7].ptl.y + pgb->ptlOrigin.y - a7))
            + ((__int64)(pgb->ptlOrigin.x + a1[v7].ptl.x - a4) >> 3)],
          v16);
      }
      v7 = (unsigned int)(v7 + 1);
    }
    while ( v10 );
  }
}
