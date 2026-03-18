/*
 * XREFs of ?draw_f_ntb_o_to_temp_start@@YAXPEAU_GLYPHPOS@@KPEAEKKKK@Z @ 0x14025AA30
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

void __fastcall draw_f_ntb_o_to_temp_start(
        struct _GLYPHPOS *a1,
        int a2,
        unsigned __int8 *a3,
        int a4,
        unsigned int a5,
        unsigned int a6,
        unsigned int a7)
{
  __int64 v7; // rsi
  int v8; // ebx
  int v9; // r14d
  int v10; // edi
  GLYPHBITS *pgb; // r11
  LONG cx; // eax
  __int64 v14; // rdx
  int v15; // r10d
  int v16; // r9d
  unsigned __int8 *v17; // r12
  __int64 v18; // r8
  __int64 v19; // rcx
  unsigned __int8 *v20; // [rsp+80h] [rbp+18h]

  if ( a2 )
  {
    v20 = a3;
    v7 = 0LL;
    v8 = a1->ptl.x - a4;
    v9 = a1->ptl.y - a7;
    v10 = a2;
    do
    {
      --v10;
      pgb = a1[v7].pgdf->pgb;
      cx = pgb->sizlBitmap.cx;
      v14 = ((_BYTE)v8 + LOBYTE(pgb->ptlOrigin.x)) & 7;
      v15 = (cx + 7) >> 3;
      v16 = (cx + (int)v14 + 7) >> 3;
      v17 = &a3[(int)(a5 * (v9 + pgb->ptlOrigin.y)) + ((__int64)(v8 + pgb->ptlOrigin.x) >> 3)];
      if ( v16 > 4 )
      {
        v19 = 0LL;
        if ( v16 > v15 )
          v19 = 2LL;
        funcs_1401B518B[((_DWORD)v14 == 0) | (unsigned __int64)v19](pgb->sizlBitmap.cy, v14, a5, pgb->aj, v17, v15, v16);
      }
      else
      {
        v18 = 0LL;
        if ( v16 > v15 )
          v18 = 2LL;
        ((void (__fastcall *)(_QWORD, __int64, _QWORD, BYTE *, unsigned __int8 *, int))funcs_1401B5117[((_DWORD)v14 == 0) | (unsigned int)(4 * v16) | (unsigned __int64)v18])(
          (unsigned int)pgb->sizlBitmap.cy,
          v14,
          a5,
          pgb->aj,
          v17,
          v15);
      }
      v8 += a6;
      v7 = (unsigned int)(v7 + 1);
      a3 = v20;
    }
    while ( v10 );
  }
}
