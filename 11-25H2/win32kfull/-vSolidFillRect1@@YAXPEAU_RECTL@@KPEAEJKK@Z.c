/*
 * XREFs of ?vSolidFillRect1@@YAXPEAU_RECTL@@KPEAEJKK@Z @ 0x14012E430
 * Callers:
 *     ?vDIBSolidBlt@@YAXPEAVSURFACE@@PEAU_RECTL@@PEAU_CLIPOBJ@@KH@Z @ 0x140081DA8 (-vDIBSolidBlt@@YAXPEAVSURFACE@@PEAU_RECTL@@PEAU_CLIPOBJ@@KH@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall vSolidFillRect1(struct _RECTL *a1, int a2, unsigned __int8 *a3, int a4, unsigned int a5, char a6)
{
  int v6; // r15d
  unsigned __int8 *v7; // rdi
  int v8; // r14d
  char v9; // si
  char v10; // r9
  LONG *p_bottom; // r12
  int v12; // ebp
  int v13; // r13d
  unsigned __int8 *v14; // r11
  int v15; // edi
  int v16; // edx
  unsigned int v17; // ebp
  __int64 v18; // r10
  int v19; // r9d
  int v20; // r8d
  unsigned __int8 *v21; // rdx
  unsigned int v22; // esi
  int v23; // r11d
  unsigned __int64 v24; // r15
  unsigned int v25; // r10d
  __m128 *v26; // r9
  __int64 v27; // rax
  unsigned int v28; // ecx
  __m128 v29; // xmm0
  unsigned int *v30; // rcx
  int v31; // edx
  int v32; // r9d
  unsigned int i; // edx
  unsigned int *j; // rcx
  unsigned int *v35; // rcx
  unsigned int v36; // edi
  int v37; // r9d
  int v38; // edx
  unsigned __int8 *v39; // [rsp+8h] [rbp-40h]

  if ( a2 )
  {
    v6 = a4;
    v7 = a3;
    v8 = a2;
    v9 = a6;
    v10 = 5 - a6;
    p_bottom = &a1->bottom;
    do
    {
      v12 = *(p_bottom - 1);
      v13 = *p_bottom - *(p_bottom - 2);
      v14 = &v7[v6 * *(p_bottom - 2)];
      v15 = *(p_bottom - 3);
      v16 = v12 - v15;
      v39 = v14;
      v17 = v12 >> v10;
      v18 = (unsigned int)(v15 >> v10);
      v19 = *((_DWORD *)&aulMsk + ((v15 << v9) & 0x1F));
      v20 = *((_DWORD *)&aulMsk + (((unsigned __int8)(v15 << v9) + (unsigned __int8)(v16 << v9)) & 0x1F));
      if ( (_DWORD)v18 == v17 )
      {
        v30 = (unsigned int *)&v14[4 * v18];
        v31 = ~v20 & v19;
        v32 = ~v31;
        for ( i = a5 & v31; v13; --v13 )
        {
          *v30 = i | v32 & *v30;
          v30 = (unsigned int *)((char *)v30 + v6);
        }
      }
      else
      {
        if ( v19 != -1 )
        {
          v35 = (unsigned int *)&v14[4 * v18];
          v36 = a5 & v19;
          v37 = ~v19;
          v38 = *p_bottom - *(p_bottom - 2);
          if ( v13 )
          {
            do
            {
              *v35 = v36 | v37 & *v35;
              v35 = (unsigned int *)((char *)v35 + v6);
              --v38;
            }
            while ( v38 );
          }
          v18 = (unsigned int)(v18 + 1);
        }
        v21 = &v14[4 * v18];
        v22 = v17 - v18;
        if ( v17 != (_DWORD)v18 )
        {
          v23 = v13;
          if ( v13 )
          {
            v24 = a5 | ((unsigned __int64)a5 << 32);
            do
            {
              --v23;
              v25 = v22;
              v26 = (__m128 *)v21;
              if ( ((unsigned __int8)v21 & 4) != 0 )
              {
                *(_DWORD *)v21 = a5;
                v26 = (__m128 *)(v21 + 4);
                v25 = v22 - 1;
              }
              v27 = v25 >> 1;
              v28 = v25 >> 4;
              if ( v25 >> 4 )
              {
                v27 &= 7u;
                do
                {
                  v29 = _mm_movelh_ps((__m128)v24, (__m128)v24);
                  *v26 = v29;
                  v26[1] = v29;
                  v26[2] = v29;
                  v26[3] = v29;
                  v26 += 4;
                  --v28;
                }
                while ( v28 );
              }
              if ( (_DWORD)v27 )
              {
                memset64(v26, v24, v27 & 0x1FFFFFFFFFFFFFFFLL);
                v26 = (__m128 *)((char *)v26 + 8 * v27);
              }
              if ( (v25 & 1) != 0 )
                v26->m128_i32[0] = a5;
              v21 += a4;
            }
            while ( v23 );
            v6 = a4;
          }
          v14 = v39;
        }
        if ( v20 != -1 )
        {
          for ( j = (unsigned int *)&v14[4 * v17]; v13; --v13 )
          {
            *j = a5 & ~v20 | v20 & *j;
            j = (unsigned int *)((char *)j + v6);
          }
        }
        v9 = a6;
      }
      v10 = 5 - a6;
      p_bottom += 4;
      v7 = a3;
      --v8;
    }
    while ( v8 );
  }
}
