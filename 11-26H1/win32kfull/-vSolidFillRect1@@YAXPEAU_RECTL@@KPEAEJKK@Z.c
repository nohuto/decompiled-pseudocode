/*
 * XREFs of ?vSolidFillRect1@@YAXPEAU_RECTL@@KPEAEJKK@Z @ 0x140132600
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall vSolidFillRect1(struct _RECTL *a1, int a2, unsigned __int8 *a3, int a4, unsigned int a5, char a6)
{
  int v6; // r12d
  char v7; // bp
  unsigned __int8 *v8; // rdi
  char v9; // r10
  int v10; // r15d
  LONG *p_bottom; // r13
  int v12; // r14d
  int v13; // r11d
  unsigned __int8 *v14; // rbx
  int v15; // edi
  int v16; // edx
  unsigned int v17; // r14d
  __int64 v18; // r9
  int v19; // r10d
  int v20; // r8d
  unsigned __int8 *v21; // rdx
  unsigned int v22; // ebp
  int v23; // ebx
  unsigned __int64 v24; // r12
  unsigned int v25; // r10d
  unsigned __int8 *v26; // r11
  __int64 v27; // r9
  unsigned int v28; // eax
  unsigned int *v29; // rcx
  int v30; // edx
  int v31; // r8d
  unsigned int i; // edx
  unsigned int *j; // rcx
  unsigned int *v34; // rcx
  unsigned int v35; // edi
  int v36; // r10d
  int v37; // edx
  int v38; // [rsp+0h] [rbp-58h]
  unsigned __int8 *v39; // [rsp+10h] [rbp-48h]

  if ( a2 )
  {
    v6 = a4;
    v7 = a6;
    v8 = a3;
    v9 = 5 - a6;
    v10 = a2;
    p_bottom = &a1->bottom;
    do
    {
      v12 = *(p_bottom - 1);
      v13 = *p_bottom - *(p_bottom - 2);
      v38 = v13;
      v14 = &v8[v6 * *(p_bottom - 2)];
      v15 = *(p_bottom - 3);
      v39 = v14;
      v16 = v12 - v15;
      v17 = v12 >> v9;
      v18 = (unsigned int)(v15 >> v9);
      v19 = *((_DWORD *)&aulMsk + ((v15 << v7) & 0x1F));
      v20 = *((_DWORD *)&aulMsk + (((unsigned __int8)(v15 << v7) + (unsigned __int8)(v16 << v7)) & 0x1F));
      if ( (_DWORD)v18 == v17 )
      {
        v29 = (unsigned int *)&v14[4 * v18];
        v30 = v19 & ~v20;
        v31 = ~v30;
        for ( i = a5 & v30; v13; --v13 )
        {
          *v29 = i | v31 & *v29;
          v29 = (unsigned int *)((char *)v29 + v6);
        }
      }
      else
      {
        if ( v19 != -1 )
        {
          v34 = (unsigned int *)&v14[4 * v18];
          v35 = a5 & v19;
          v36 = ~v19;
          v37 = *p_bottom - *(p_bottom - 2);
          if ( v13 )
          {
            do
            {
              *v34 = v35 | v36 & *v34;
              v34 = (unsigned int *)((char *)v34 + v6);
              --v37;
            }
            while ( v37 );
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
              v26 = v21;
              if ( ((unsigned __int8)v21 & 4) != 0 )
              {
                *(_DWORD *)v21 = a5;
                v26 = v21 + 4;
                v25 = v22 - 1;
              }
              v27 = v25 >> 1;
              v28 = v25 >> 4;
              if ( v25 >> 4 )
              {
                v27 &= 7u;
                memset64(v26, v24, (8LL * v28) & 0x1FFFFFFFFFFFFFFFLL);
                v26 += 64 * (unsigned __int64)v28;
              }
              if ( (_DWORD)v27 )
              {
                memset64(v26, v24, v27 & 0x1FFFFFFFFFFFFFFFLL);
                v26 += 8 * v27;
              }
              if ( (v25 & 1) != 0 )
                *(_DWORD *)v26 = a5;
              v21 += a4;
            }
            while ( v23 );
            v13 = v38;
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
        v7 = a6;
      }
      v9 = 5 - a6;
      p_bottom += 4;
      v8 = a3;
      --v10;
    }
    while ( v10 );
  }
}
