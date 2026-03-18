/*
 * XREFs of ?vGradientFill32RGB@@YAXPEAVSURFACE@@PEAU_TRIANGLEDATA@@@Z @ 0x1403403F0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall vGradientFill32RGB(struct SURFACE *a1, struct _TRIANGLEDATA *a2)
{
  int v4; // ebx
  char *v5; // r14
  int v6; // edi
  __int64 v7; // r13
  __int64 v8; // r11
  __int64 v9; // r12
  int v10; // esi
  int v11; // ebp
  unsigned __int64 v12; // rax
  unsigned __int64 v13; // rcx
  unsigned __int64 v14; // rdx
  int v15; // r9d
  _DWORD *v16; // rsi
  unsigned __int64 v17; // rbp
  unsigned __int64 v18; // r8
  int v19; // r9d
  int v20; // r9d
  unsigned __int64 v21; // r8
  __int64 v22; // [rsp+0h] [rbp-58h]
  int v23; // [rsp+68h] [rbp+10h]
  __int64 v24; // [rsp+70h] [rbp+18h]
  __int64 v25; // [rsp+78h] [rbp+20h]

  v4 = *((_DWORD *)a2 + 28);
  v5 = (char *)a2 + 168;
  v6 = *((_DWORD *)a2 + 3);
  v7 = *((_QWORD *)a2 + 2);
  v8 = *((_QWORD *)a1 + 10) + v4 * *((_DWORD *)a1 + 22);
  v24 = *((_QWORD *)a2 + 3);
  v25 = *((_QWORD *)a2 + 4);
  if ( v6 >= *((_DWORD *)a2 + 29) )
    v6 = *((_DWORD *)a2 + 29);
  v23 = v6;
  if ( v4 < v6 )
  {
    v9 = *((int *)a1 + 22);
    v22 = v9;
    do
    {
      v10 = *(_DWORD *)v5;
      v11 = *((_DWORD *)v5 + 1);
      v12 = *((_QWORD *)v5 + 1);
      if ( *(_DWORD *)v5 <= *(_DWORD *)a2 )
        v10 = *(_DWORD *)a2;
      v13 = *((_QWORD *)v5 + 2);
      v14 = *((_QWORD *)v5 + 3);
      if ( v11 >= *((_DWORD *)a2 + 2) )
        v11 = *((_DWORD *)a2 + 2);
      if ( *((_QWORD *)a1 + 9) <= (unsigned __int64)(v8 + v10) && v10 < v11 )
      {
        v15 = *(_DWORD *)a2 - *(_DWORD *)v5;
        v16 = (_DWORD *)(v8 + 4LL * v10);
        v17 = v8 + 4LL * v11;
        if ( v15 > 0 )
        {
          v12 += v7 * v15;
          v13 += v24 * v15;
          v14 += v25 * v15;
        }
        if ( (unsigned __int64)v16 < v17 )
        {
          do
          {
            v18 = v13;
            v13 += v24;
            v19 = HIBYTE(v14) << 8;
            v14 += v25;
            v20 = HIBYTE(v18) | v19;
            v21 = HIBYTE(v12);
            v12 += v7;
            *v16++ = v21 | (v20 << 8);
          }
          while ( (unsigned __int64)v16 < v17 );
          v6 = v23;
          v9 = v22;
        }
      }
      v8 += v9;
      v5 += 40;
      ++v4;
    }
    while ( v4 < v6 );
  }
}
