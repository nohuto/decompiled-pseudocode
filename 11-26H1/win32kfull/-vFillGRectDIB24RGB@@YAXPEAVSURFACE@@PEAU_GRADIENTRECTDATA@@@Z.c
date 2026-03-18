/*
 * XREFs of ?vFillGRectDIB24RGB@@YAXPEAVSURFACE@@PEAU_GRADIENTRECTDATA@@@Z @ 0x14033ED70
 * Callers:
 *     <none>
 * Callees:
 *     memmove @ 0x14034FF00 (memmove.c)
 */

void __fastcall vFillGRectDIB24RGB(struct SURFACE *a1, struct _GRADIENTRECTDATA *a2)
{
  __int64 v3; // r12
  int v4; // r15d
  __int64 v5; // rbx
  __int64 v6; // rdi
  unsigned __int64 v7; // rsi
  __int64 v8; // rax
  __int64 v9; // r13
  __int64 v10; // rdx
  int v11; // ecx
  __int64 v12; // rax
  const void *v13; // r14
  _BYTE *v14; // r8
  _BYTE *v15; // rcx
  unsigned __int64 v16; // rax
  char *i; // rbx
  __int64 v18; // r14
  __int64 v19; // r13
  __int64 v20; // r8
  __int64 v21; // rdx
  __int64 v22; // rax
  _BYTE *v23; // rdx
  __int64 v24; // r11
  __int64 v25; // r12
  _BYTE *v26; // r8
  _BYTE *v27; // rax
  __int64 v29; // [rsp+78h] [rbp+10h]
  __int64 v30; // [rsp+80h] [rbp+18h]
  __int64 v31; // [rsp+88h] [rbp+20h]

  v3 = *((int *)a1 + 22);
  v4 = *((_DWORD *)a2 + 11);
  v5 = *((_QWORD *)a2 + 6);
  v6 = *((_QWORD *)a2 + 7);
  v7 = *((_QWORD *)a2 + 8);
  if ( *((_DWORD *)a2 + 38) )
  {
    v18 = *((_QWORD *)a2 + 10);
    v19 = *((_QWORD *)a2 + 11);
    v20 = *((_QWORD *)a2 + 12);
    v21 = *((_QWORD *)a1 + 10) + *((_DWORD *)a2 + 9) * (int)v3;
    v22 = *((int *)a2 + 45);
    if ( (int)v22 > 0 )
    {
      v5 += v18 * v22;
      v6 += v19 * v22;
      v7 += v20 * *((int *)a2 + 45);
    }
    v23 = (_BYTE *)(3 * *((_DWORD *)a2 + 8) + v21);
    if ( v4 )
    {
      v24 = *((int *)a1 + 22);
      v25 = *((_QWORD *)a2 + 12);
      do
      {
        --v4;
        v26 = v23;
        v27 = &v23[3 * *((_DWORD *)a2 + 10)];
        if ( v23 != v27 )
        {
          do
          {
            *v26 = BYTE6(v5);
            v26[1] = BYTE6(v6);
            v26[2] = BYTE6(v7);
            v26 += 3;
          }
          while ( v26 != v27 );
        }
        v5 += v18;
        v6 += v19;
        v7 += v25;
        v23 += v24;
      }
      while ( v4 );
    }
  }
  else
  {
    v8 = *((int *)a2 + 44);
    v9 = *((_QWORD *)a2 + 6);
    v10 = *((_QWORD *)a2 + 14);
    v29 = v10;
    v30 = *((_QWORD *)a2 + 15);
    v31 = *((_QWORD *)a2 + 16);
    if ( (int)v8 > 0 )
    {
      v9 = v5 + v10 * v8;
      v6 += *((_QWORD *)a2 + 15) * v8;
      v5 = v9;
      v7 += *((_QWORD *)a2 + 16) * v8;
    }
    v11 = *((_DWORD *)a2 + 10);
    if ( (unsigned int)(v11 - 1) <= 0xD05554 )
    {
      v12 = AllocFreeTmpBuffer((unsigned int)(3 * v11));
      v13 = (const void *)v12;
      if ( v12 )
      {
        v14 = (_BYTE *)v12;
        v15 = (_BYTE *)(v12 + 3 * *((_DWORD *)a2 + 10));
        if ( (_BYTE *)v12 != v15 )
        {
          do
          {
            v5 += v29;
            v14[1] = BYTE6(v6);
            v6 += v30;
            *v14 = BYTE6(v9);
            v16 = HIWORD(v7);
            v7 += v31;
            v14[2] = v16;
            BYTE6(v9) = BYTE6(v5);
            v14 += 3;
          }
          while ( v14 != v15 );
        }
        for ( i = (char *)(*((_QWORD *)a1 + 10) + 3 * *((_DWORD *)a2 + 8) + (__int64)(*((_DWORD *)a2 + 9) * (int)v3));
              v4;
              --v4 )
        {
          memmove(i, v13, 3 * *((_DWORD *)a2 + 10));
          i += v3;
        }
        FreeTmpBuffer(v13);
      }
    }
  }
}
