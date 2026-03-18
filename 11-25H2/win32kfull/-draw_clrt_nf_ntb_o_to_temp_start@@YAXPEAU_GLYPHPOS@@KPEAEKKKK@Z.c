/*
 * XREFs of ?draw_clrt_nf_ntb_o_to_temp_start@@YAXPEAU_GLYPHPOS@@KPEAEKKKK@Z @ 0x1400F9C60
 * Callers:
 *     ?vExpandAndCopyText@@YAXPEAVSURFACE@@PEAU_FONTOBJ@@PEAU_GLYPHPOS@@KPEAEKK00PEAU_RECTL@@4HHK44KPEAU_BRUSHOBJ@@PEAU_POINTL@@@Z @ 0x1400F92A8 (-vExpandAndCopyText@@YAXPEAVSURFACE@@PEAU_FONTOBJ@@PEAU_GLYPHPOS@@KPEAEKK00PEAU_RECTL@@4HHK44KPE.c)
 * Callees:
 *     <none>
 */

void __fastcall draw_clrt_nf_ntb_o_to_temp_start(
        struct _GLYPHPOS *a1,
        __int64 a2,
        unsigned __int8 *a3,
        int a4,
        unsigned int a5,
        unsigned int a6,
        unsigned int a7)
{
  unsigned int v7; // r13d
  int v8; // ebp
  unsigned __int8 *v9; // r14
  int v10; // r12d
  LONG *p_y; // r15
  __int64 v12; // rax
  _DWORD *v13; // rdi
  int v14; // esi
  int v15; // eax
  int v16; // ebp
  unsigned __int8 *v17; // rax
  unsigned __int8 *v18; // rdi
  int v19; // ebx
  __int64 v20; // r8
  __int64 v21; // rcx
  __int64 v22; // rdx
  int v23; // r11d
  __int64 v24; // r8
  unsigned __int8 *v25; // r9
  unsigned int v26; // r11d
  unsigned int v27; // edx
  unsigned int v28; // r10d
  __int64 v29; // [rsp+70h] [rbp+8h]

  v7 = a5;
  v8 = a4;
  v9 = a3;
  v10 = a2;
  p_y = &a1->ptl.y;
  v29 = *(_QWORD *)(W32GetSessionState(a1, a2, a3) + 96);
  do
  {
    v12 = *(_QWORD *)(p_y - 3);
    v13 = *(_DWORD **)v12;
    v14 = *(_DWORD *)(*(_QWORD *)v12 + 12LL);
    if ( !v14 )
      goto LABEL_10;
    v15 = *v13 + *(p_y - 1) - v8;
    v16 = v13[2];
    v17 = &v9[v7 * (__int64)(int)(*p_y + v13[1] - a7) + v15];
    v18 = (unsigned __int8 *)(v13 + 4);
    do
    {
      v19 = v16;
      do
      {
        v20 = *v17;
        v21 = *v18;
        if ( !(_BYTE)v20 )
          goto LABEL_6;
        if ( (_BYTE)v21 )
        {
          v22 = *(_QWORD *)(v29 + 13464);
          v23 = *(unsigned __int8 *)(v22 + 4 * v20);
          v24 = v22 + 4 * v20;
          v25 = (unsigned __int8 *)(v22 + 4 * v21);
          v26 = *v25 + v23;
          v27 = v25[1] + *(unsigned __int8 *)(v24 + 1);
          v28 = v25[2] + *(unsigned __int8 *)(v24 + 2);
          if ( v26 > 6 )
            v26 = 6;
          if ( v27 > 6 )
            v27 = 6;
          if ( v28 > 6 )
            v28 = 6;
          LOBYTE(v21) = byte_140353250[49 * v26 + 7 * v27 + v28];
LABEL_6:
          *v17 = v21;
        }
        ++v17;
        ++v18;
        --v19;
      }
      while ( v19 );
      v17 += (int)(v7 - v16);
      --v14;
    }
    while ( v14 );
    v7 = a5;
    v8 = a4;
    v9 = a3;
LABEL_10:
    p_y += 6;
    --v10;
  }
  while ( v10 );
}
