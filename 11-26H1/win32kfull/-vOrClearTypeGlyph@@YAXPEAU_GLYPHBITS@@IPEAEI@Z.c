/*
 * XREFs of ?vOrClearTypeGlyph@@YAXPEAU_GLYPHBITS@@IPEAEI@Z @ 0x14030F570
 * Callers:
 *     ?draw_clrt_f_ntb_o_to_temp_start@@YAXPEAU_GLYPHPOS@@KPEAEKKKK@Z @ 0x14030F400 (-draw_clrt_f_ntb_o_to_temp_start@@YAXPEAU_GLYPHPOS@@KPEAEKKKK@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall vOrClearTypeGlyph(struct _GLYPHBITS *a1, __int64 a2, unsigned __int8 *a3, unsigned int a4)
{
  BYTE *aj; // rbp
  unsigned int cx; // r8d
  unsigned __int8 *v7; // rsi
  __int64 v8; // rax
  __int64 v9; // r12
  __int64 v10; // r13
  unsigned __int8 *v11; // r15
  unsigned __int8 *v12; // rdi
  __int64 v13; // r14
  unsigned __int8 v14; // al
  __int64 SessionState; // rax
  __int64 v16; // rdx
  __int64 v17; // r8
  __int64 v18; // r9
  unsigned int v19; // r11d
  unsigned int v20; // ecx
  unsigned int v21; // r10d
  unsigned int v22; // eax
  __int64 v23; // [rsp+50h] [rbp+8h]

  aj = a1->aj;
  cx = a1->sizlBitmap.cx;
  v7 = &a3[a1->sizlBitmap.cy * a4];
  if ( a3 >= v7 )
    return;
  v8 = cx;
  v9 = a4;
  v23 = cx;
  v10 = (unsigned int)a2;
  do
  {
    v11 = &a3[v8];
    v12 = a3;
    if ( a3 >= &a3[v8] )
      goto LABEL_17;
    v13 = aj - a3;
    do
    {
      v14 = v12[v13];
      if ( *v12 )
      {
        if ( !v14 )
          goto LABEL_15;
        SessionState = W32GetSessionState((_DWORD)a1, a2);
        v16 = *v12;
        v17 = v12[v13];
        v18 = *(_QWORD *)(*(_QWORD *)(SessionState + 96) + 13456LL);
        v19 = *(unsigned __int8 *)(v18 + 4 * v16) + *(unsigned __int8 *)(v18 + 4 * v17);
        v20 = *(unsigned __int8 *)(v18 + 4 * v16 + 1) + *(unsigned __int8 *)(v18 + 4 * v17 + 1);
        v21 = *(unsigned __int8 *)(v18 + 4 * v16 + 2) + *(unsigned __int8 *)(v18 + 4 * v17 + 2);
        a2 = 6LL;
        if ( v19 > 6 )
          v19 = 6;
        if ( v20 > 6 )
          v20 = 6;
        if ( v21 > 6 )
          v21 = 6;
        v22 = v20 + 7 * v19;
        a1 = (struct _GLYPHBITS *)byte_140360DB0;
        v14 = byte_140360DB0[7 * v22 + v21];
      }
      *v12 = v14;
LABEL_15:
      ++v12;
    }
    while ( v12 < v11 );
    v8 = v23;
LABEL_17:
    a3 += v9;
    aj += v10;
  }
  while ( a3 < v7 );
}
