/*
 * XREFs of ?draw_clrt_nf_ntb_o_to_temp_start@@YAXPEAU_GLYPHPOS@@KPEAEKKKK@Z @ 0x140131CF0
 * Callers:
 *     <none>
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
  int v8; // edi
  unsigned __int8 *v9; // r14
  int v10; // r12d
  LONG *p_y; // r15
  __int64 v12; // rax
  _DWORD *v13; // rbx
  int v14; // esi
  int v15; // ebp
  unsigned __int8 *v16; // rcx
  int v17; // eax
  unsigned __int8 *v18; // rbx
  unsigned __int8 *v19; // rax
  int v20; // edi
  __int64 v21; // r8
  __int64 v22; // rcx
  __int64 v23; // rdx
  int v24; // r11d
  __int64 v25; // r8
  unsigned __int8 *v26; // r9
  unsigned int v27; // r11d
  unsigned int v28; // edx
  unsigned int v29; // r10d
  __int64 v30; // [rsp+70h] [rbp+8h]

  v7 = a5;
  v8 = a4;
  v9 = a3;
  v10 = a2;
  p_y = &a1->ptl.y;
  v30 = *(_QWORD *)(W32GetSessionState(a1, a2, a3) + 96);
  do
  {
    v12 = *(_QWORD *)(p_y - 3);
    v13 = *(_DWORD **)v12;
    v14 = *(_DWORD *)(*(_QWORD *)v12 + 12LL);
    if ( !v14 )
      goto LABEL_10;
    v15 = v13[2];
    v16 = &v9[v7 * (__int64)(int)(*p_y + v13[1] - a7)];
    v17 = *v13 + *(p_y - 1) - v8;
    v18 = (unsigned __int8 *)(v13 + 4);
    v19 = &v16[v17];
    do
    {
      v20 = v15;
      do
      {
        v21 = *v19;
        v22 = *v18;
        if ( !(_BYTE)v21 )
          goto LABEL_6;
        if ( (_BYTE)v22 )
        {
          v23 = *(_QWORD *)(v30 + 13456);
          v24 = *(unsigned __int8 *)(v23 + 4 * v21);
          v25 = v23 + 4 * v21;
          v26 = (unsigned __int8 *)(v23 + 4 * v22);
          v27 = *v26 + v24;
          v28 = v26[1] + *(unsigned __int8 *)(v25 + 1);
          v29 = v26[2] + *(unsigned __int8 *)(v25 + 2);
          if ( v27 > 6 )
            v27 = 6;
          if ( v28 > 6 )
            v28 = 6;
          if ( v29 > 6 )
            v29 = 6;
          LOBYTE(v22) = byte_140360DB0[49 * v27 + 7 * v28 + v29];
LABEL_6:
          *v19 = v22;
        }
        ++v19;
        ++v18;
        --v20;
      }
      while ( v20 );
      v19 += (int)(v7 - v15);
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
