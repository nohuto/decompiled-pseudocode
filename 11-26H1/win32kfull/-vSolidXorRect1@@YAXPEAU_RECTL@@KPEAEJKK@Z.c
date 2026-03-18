/*
 * XREFs of ?vSolidXorRect1@@YAXPEAU_RECTL@@KPEAEJKK@Z @ 0x1401BCCD0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall vSolidXorRect1(struct _RECTL *a1, int a2, unsigned __int8 *a3, int a4, unsigned int a5, char a6)
{
  LONG *p_bottom; // rsi
  __int64 v7; // rdi
  char v8; // r15
  int v9; // ebx
  int v10; // r13d
  unsigned int v11; // r10d
  unsigned __int8 *v12; // r14
  int v13; // edx
  __int64 v14; // r11
  __int64 v15; // rax
  __int64 v16; // r13
  __int64 v17; // r12
  int v18; // ecx
  int v19; // r9d
  int v20; // r8d
  unsigned int v21; // edx
  unsigned __int8 *v22; // rcx
  __int64 v23; // r11
  unsigned int v24; // eax
  unsigned int v25; // ecx
  unsigned __int8 *v26; // rdx
  __int64 v27; // rax
  unsigned int v28; // r9d
  unsigned __int8 *v29; // rcx
  __int64 v30; // rax
  unsigned __int8 *v31; // [rsp+50h] [rbp+18h]

  if ( a2 )
  {
    v31 = a3;
    p_bottom = &a1->bottom;
    v7 = a4;
    v8 = 5 - a6;
    v9 = a2;
    while ( 1 )
    {
      v10 = *(p_bottom - 1);
      v11 = *p_bottom - *(p_bottom - 2);
      v12 = &a3[(int)v7 * *(p_bottom - 2)];
      v13 = v10 - *(p_bottom - 3);
      v14 = (unsigned int)(*(p_bottom - 3) >> v8);
      v15 = (*(p_bottom - 3) << a6) & 0x1F;
      v16 = (unsigned int)(v10 >> v8);
      v17 = ((unsigned __int8)(*(p_bottom - 3) << a6) + (unsigned __int8)(v13 << a6)) & 0x1F;
      v18 = *((_DWORD *)&aulMsk + v15);
      v19 = ~*((_DWORD *)&aulMsk + v17);
      if ( (_DWORD)v14 == (_DWORD)v16 )
        break;
      v20 = 0;
      if ( (_DWORD)v15 )
        goto LABEL_16;
LABEL_5:
      if ( !v20 )
      {
        v21 = v16 - v14;
        if ( (_DWORD)v16 != (_DWORD)v14 )
        {
          v22 = &v12[4 * v14];
          if ( v11 )
          {
            v23 = v11;
            do
            {
              v24 = v21;
              do
              {
                *(_DWORD *)v22 ^= a5;
                v22 += 4;
                --v24;
              }
              while ( v24 );
              v22 += v7 - 4LL * v21;
              --v23;
            }
            while ( v23 );
          }
        }
        if ( (_DWORD)v17 )
        {
          v28 = a5 & v19;
          v29 = &v12[4 * v16];
          if ( v11 )
          {
            v30 = v11;
            do
            {
              *(_DWORD *)v29 ^= v28;
              v29 += v7;
              --v30;
            }
            while ( v30 );
          }
        }
      }
      a3 = v31;
      p_bottom += 4;
      if ( !--v9 )
        return;
    }
    v18 &= v19;
    v20 = 1;
LABEL_16:
    v25 = a5 & v18;
    v26 = &v12[4 * v14];
    if ( v11 )
    {
      v27 = v11;
      do
      {
        *(_DWORD *)v26 ^= v25;
        v26 += v7;
        --v27;
      }
      while ( v27 );
    }
    v14 = (unsigned int)(v14 + 1);
    goto LABEL_5;
  }
}
