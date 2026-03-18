/*
 * XREFs of ?draw_nf_tb_no_to_temp_start@@YAXPEAU_GLYPHPOS@@KPEAEKKKK@Z @ 0x1401AD210
 * Callers:
 *     ?vExpandAndCopyText@@YAXPEAVSURFACE@@PEAU_FONTOBJ@@PEAU_GLYPHPOS@@KPEAEKK00PEAU_RECTL@@4HHK44KPEAU_BRUSHOBJ@@PEAU_POINTL@@@Z @ 0x1400F92A8 (-vExpandAndCopyText@@YAXPEAVSURFACE@@PEAU_FONTOBJ@@PEAU_GLYPHPOS@@KPEAEKK00PEAU_RECTL@@4HHK44KPE.c)
 * Callees:
 *     ?or_all_N_wide_rotated_need_last@@YAXJJJPEAE0JJ@Z @ 0x14018BC40 (-or_all_N_wide_rotated_need_last@@YAXJJJPEAE0JJ@Z.c)
 *     ?or_all_1_wide_rotated_need_last@@YAXJJJPEAE0J@Z @ 0x1401953E0 (-or_all_1_wide_rotated_need_last@@YAXJJJPEAE0J@Z.c)
 *     ?or_first_2_wide_rotated_no_last@@YAXJJJPEAE0J@Z @ 0x1401A6240 (-or_first_2_wide_rotated_no_last@@YAXJJJPEAE0J@Z.c)
 *     ?or_all_N_wide_rotated_no_last@@YAXJJJPEAE0JJ@Z @ 0x1401A8DC0 (-or_all_N_wide_rotated_no_last@@YAXJJJPEAE0JJ@Z.c)
 *     ?mov_first_1_wide_unrotated@@YAXJJJPEAE0J@Z @ 0x1401C67B0 (-mov_first_1_wide_unrotated@@YAXJJJPEAE0J@Z.c)
 *     ?or_first_2_wide_rotated_need_last@@YAXJJJPEAE0J@Z @ 0x1401D8730 (-or_first_2_wide_rotated_need_last@@YAXJJJPEAE0J@Z.c)
 *     ?or_first_3_wide_rotated_need_last@@YAXJJJPEAE0J@Z @ 0x1401D9080 (-or_first_3_wide_rotated_need_last@@YAXJJJPEAE0J@Z.c)
 *     ?or_all_N_wide_unrotated@@YAXJJJPEAE0JJ@Z @ 0x1401E3920 (-or_all_N_wide_unrotated@@YAXJJJPEAE0JJ@Z.c)
 *     ?or_first_3_wide_rotated_no_last@@YAXJJJPEAE0J@Z @ 0x1401FFB80 (-or_first_3_wide_rotated_no_last@@YAXJJJPEAE0J@Z.c)
 *     ?mov_first_2_wide_unrotated@@YAXJJJPEAE0J@Z @ 0x140205170 (-mov_first_2_wide_unrotated@@YAXJJJPEAE0J@Z.c)
 *     ?vSrcCopyDummy@@YAXPEAUBLTINFO@@@Z @ 0x14020E030 (-vSrcCopyDummy@@YAXPEAUBLTINFO@@@Z.c)
 *     ?or_first_4_wide_rotated_no_last@@YAXJJJPEAE0J@Z @ 0x140231D50 (-or_first_4_wide_rotated_no_last@@YAXJJJPEAE0J@Z.c)
 *     ?mov_first_3_wide_unrotated@@YAXJJJPEAE0J@Z @ 0x140320430 (-mov_first_3_wide_unrotated@@YAXJJJPEAE0J@Z.c)
 *     ?mov_first_4_wide_unrotated@@YAXJJJPEAE0J@Z @ 0x140320470 (-mov_first_4_wide_unrotated@@YAXJJJPEAE0J@Z.c)
 *     ?or_first_4_wide_rotated_need_last@@YAXJJJPEAE0J@Z @ 0x140320520 (-or_first_4_wide_rotated_need_last@@YAXJJJPEAE0J@Z.c)
 *     _guard_dispatch_icall @ 0x140342490 (_guard_dispatch_icall.c)
 */

void __fastcall draw_nf_tb_no_to_temp_start(struct _GLYPHPOS *a1, int a2, unsigned __int8 *a3, int a4, unsigned int a5)
{
  __int64 v5; // rdi
  int v8; // ebx
  GLYPHBITS *pgb; // rsi
  LONG cx; // eax
  __int64 v12; // rdx
  unsigned __int8 *v13; // r11
  int v14; // r9d
  int v15; // r10d
  __int64 v16; // r8
  __int64 v17; // rcx

  if ( a2 )
  {
    v5 = 0LL;
    v8 = a2;
    do
    {
      --v8;
      pgb = a1[v5].pgdf->pgb;
      cx = pgb->sizlBitmap.cx;
      v12 = (LOBYTE(pgb->ptlOrigin.x) + LOBYTE(a1[v5].ptl.x) - (_BYTE)a4) & 7;
      v13 = &a3[(__int64)(pgb->ptlOrigin.x + a1[v5].ptl.x - a4) >> 3];
      v14 = ((int)v12 + cx + 7) >> 3;
      v15 = (cx + 7) >> 3;
      if ( v14 > 4 )
      {
        v17 = 0LL;
        if ( v14 > v15 )
          v17 = 2LL;
        funcs_14017EE84[((_DWORD)v12 == 0) | (unsigned __int64)v17](pgb->sizlBitmap.cy, v12, a5, pgb->aj, v13, v15, v14);
      }
      else
      {
        v16 = 0LL;
        if ( v14 > v15 )
          v16 = 2LL;
        ((void (__fastcall *)(_QWORD, __int64, _QWORD, BYTE *, unsigned __int8 *, int))funcs_1401AD2D5[((_DWORD)v12 == 0) | (unsigned int)(4 * v14) | (unsigned __int64)v16])(
          (unsigned int)pgb->sizlBitmap.cy,
          v12,
          a5,
          pgb->aj,
          v13,
          v15);
      }
      v5 = (unsigned int)(v5 + 1);
    }
    while ( v8 );
  }
}
