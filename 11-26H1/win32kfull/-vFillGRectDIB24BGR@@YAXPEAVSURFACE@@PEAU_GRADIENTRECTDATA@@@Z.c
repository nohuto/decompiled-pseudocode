/*
 * XREFs of ?vFillGRectDIB24BGR@@YAXPEAVSURFACE@@PEAU_GRADIENTRECTDATA@@@Z @ 0x1401E2E60
 * Callers:
 *     <none>
 * Callees:
 *     memmove @ 0x14034FF00 (memmove.c)
 */

void __fastcall vFillGRectDIB24BGR(struct SURFACE *a1, struct _GRADIENTRECTDATA *a2)
{
  __int64 v3; // r12
  int v4; // r15d
  unsigned __int64 v5; // rdi
  __int64 v6; // rsi
  __int64 v7; // rbx
  __int64 v8; // r14
  __int64 v9; // r13
  __int64 v10; // r8
  __int64 v11; // rdx
  __int64 v12; // rax
  _BYTE *v13; // rdx
  __int64 v14; // r11
  __int64 v15; // r12
  _BYTE *v16; // r8
  _BYTE *v17; // rax
  __int64 v18; // rax
  __int64 v19; // r13
  __int64 v20; // rdx
  __int64 v21; // r9
  int v22; // ecx
  __int64 v23; // rax
  const void *v24; // r14
  _BYTE *v25; // r8
  _BYTE *v26; // rcx
  unsigned __int64 v27; // rax
  char *i; // rbx
  __int64 v30; // [rsp+78h] [rbp+10h]
  __int64 v31; // [rsp+80h] [rbp+18h]
  __int64 v32; // [rsp+88h] [rbp+20h]

  v3 = *((int *)a1 + 22);
  v4 = *((_DWORD *)a2 + 11);
  v5 = *((_QWORD *)a2 + 6);
  v6 = *((_QWORD *)a2 + 7);
  v7 = *((_QWORD *)a2 + 8);
  if ( *((_DWORD *)a2 + 38) )
  {
    v8 = *((_QWORD *)a2 + 10);
    v9 = *((_QWORD *)a2 + 11);
    v10 = *((_QWORD *)a2 + 12);
    v11 = *((_QWORD *)a1 + 10) + *((_DWORD *)a2 + 9) * (int)v3;
    v12 = *((int *)a2 + 45);
    if ( (int)v12 > 0 )
    {
      v5 += v8 * v12;
      v6 += v9 * v12;
      v7 += v10 * *((int *)a2 + 45);
    }
    v13 = (_BYTE *)(3 * *((_DWORD *)a2 + 8) + v11);
    if ( v4 )
    {
      v14 = *((int *)a1 + 22);
      v15 = *((_QWORD *)a2 + 12);
      do
      {
        --v4;
        v16 = v13;
        v17 = &v13[3 * *((_DWORD *)a2 + 10)];
        if ( v13 != v17 )
        {
          do
          {
            *v16 = BYTE6(v7);
            v16[1] = BYTE6(v6);
            v16[2] = BYTE6(v5);
            v16 += 3;
          }
          while ( v16 != v17 );
        }
        v5 += v8;
        v6 += v9;
        v7 += v15;
        v13 += v14;
      }
      while ( v4 );
    }
  }
  else
  {
    v18 = *((int *)a2 + 44);
    v19 = *((_QWORD *)a2 + 8);
    v20 = *((_QWORD *)a2 + 14);
    v21 = *((_QWORD *)a2 + 16);
    v30 = v20;
    v31 = *((_QWORD *)a2 + 15);
    v32 = v21;
    if ( (int)v18 > 0 )
    {
      v5 += v20 * v18;
      v6 += *((_QWORD *)a2 + 15) * v18;
      v19 = v21 * v18 + v7;
      v7 = v19;
    }
    v22 = *((_DWORD *)a2 + 10);
    if ( (unsigned int)(v22 - 1) <= 0xD05554 )
    {
      v23 = AllocFreeTmpBuffer((unsigned int)(3 * v22));
      v24 = (const void *)v23;
      if ( v23 )
      {
        v25 = (_BYTE *)v23;
        v26 = (_BYTE *)(v23 + 3 * *((_DWORD *)a2 + 10));
        if ( (_BYTE *)v23 != v26 )
        {
          do
          {
            v7 += v32;
            v25[1] = BYTE6(v6);
            v6 += v31;
            *v25 = BYTE6(v19);
            v27 = HIWORD(v5);
            v5 += v30;
            v25[2] = v27;
            BYTE6(v19) = BYTE6(v7);
            v25 += 3;
          }
          while ( v25 != v26 );
        }
        for ( i = (char *)(*((_QWORD *)a1 + 10) + 3 * *((_DWORD *)a2 + 8) + (__int64)(*((_DWORD *)a2 + 9) * (int)v3));
              v4;
              --v4 )
        {
          memmove(i, v24, 3 * *((_DWORD *)a2 + 10));
          i += v3;
        }
        FreeTmpBuffer(v24);
      }
    }
  }
}
