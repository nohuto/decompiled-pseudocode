/*
 * XREFs of ?draw_f_tb_no_to_temp_start@@YAXPEAU_GLYPHPOS@@KPEAEKKKK@Z @ 0x1401DBE30
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

void __fastcall draw_f_tb_no_to_temp_start(
        struct _GLYPHPOS *a1,
        int a2,
        unsigned __int8 *a3,
        int a4,
        unsigned int a5,
        unsigned int a6)
{
  __int64 v6; // rsi
  int v8; // edi
  int v10; // ebx
  GLYPHBITS *pgb; // r14
  LONG cx; // eax
  int v13; // ecx
  __int64 v14; // rdx
  unsigned __int8 *v15; // r10
  int v16; // r11d
  int v17; // r9d
  __int64 v18; // r8
  __int64 v19; // rcx

  if ( a2 )
  {
    v6 = 0LL;
    v8 = a2;
    v10 = a1->ptl.x - a4;
    do
    {
      --v8;
      pgb = a1[v6].pgdf->pgb;
      cx = pgb->sizlBitmap.cx;
      v13 = v10 + pgb->ptlOrigin.x;
      v14 = ((_BYTE)v10 + LOBYTE(pgb->ptlOrigin.x)) & 7;
      v15 = &a3[(__int64)v13 >> 3];
      v16 = (cx + 7) >> 3;
      v17 = (cx + (int)v14 + 7) >> 3;
      if ( v17 > 4 )
      {
        v19 = 0LL;
        if ( v17 > v16 )
          v19 = 2LL;
        funcs_14017EE84[((_DWORD)v14 == 0) | (unsigned __int64)v19](pgb->sizlBitmap.cy, v14, a5, pgb->aj, v15, v16, v17);
      }
      else
      {
        v18 = 0LL;
        if ( v17 > v16 )
          v18 = 2LL;
        ((void (__fastcall *)(_QWORD, __int64, _QWORD, BYTE *, unsigned __int8 *, int))funcs_1401AD2D5[((_DWORD)v14 == 0) | (unsigned int)(4 * v17) | (unsigned __int64)v18])(
          (unsigned int)pgb->sizlBitmap.cy,
          v14,
          a5,
          pgb->aj,
          &a3[(__int64)v13 >> 3],
          v16);
      }
      v10 += a6;
      v6 = (unsigned int)(v6 + 1);
    }
    while ( v8 );
  }
}
