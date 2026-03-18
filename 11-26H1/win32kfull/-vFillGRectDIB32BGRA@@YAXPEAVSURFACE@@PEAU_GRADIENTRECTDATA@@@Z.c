/*
 * XREFs of ?vFillGRectDIB32BGRA@@YAXPEAVSURFACE@@PEAU_GRADIENTRECTDATA@@@Z @ 0x1401B6920
 * Callers:
 *     <none>
 * Callees:
 *     memmove @ 0x14034FF00 (memmove.c)
 */

void __fastcall vFillGRectDIB32BGRA(struct SURFACE *a1, struct _GRADIENTRECTDATA *a2)
{
  int v3; // r14d
  int v4; // ebp
  __int64 v5; // r15
  int v6; // ecx
  int *v7; // rsi
  __int64 v8; // rax
  unsigned __int64 v9; // rcx
  __int64 v10; // rdx
  __int64 v11; // rdi
  __int64 v12; // r8
  __int64 v13; // r13
  int *v14; // r11
  int *v15; // r12
  __int64 v16; // rbp
  unsigned __int8 v17; // rax^6
  int v18; // r10d
  unsigned __int64 v19; // rax
  int v20; // r9d
  char *v21; // rdi
  char *i; // rbp
  __int64 v23; // rax
  __int64 v24; // r11
  __int64 v25; // rsi
  __int64 v26; // rdx
  __int64 v27; // r8
  __int64 v28; // r9
  __int64 v29; // r10
  __int64 v30; // r12
  __int64 v31; // r13
  __int64 v32; // r11
  void *v33; // r15
  unsigned int v34; // r14d
  unsigned __int64 v35; // rsi
  __int64 v36; // [rsp+20h] [rbp-58h]
  __int64 v37; // [rsp+80h] [rbp+8h]
  int v38; // [rsp+88h] [rbp+10h]
  __int64 v39; // [rsp+88h] [rbp+10h]
  __int64 v40; // [rsp+90h] [rbp+18h]
  __int64 v41; // [rsp+98h] [rbp+20h]

  v3 = *((_DWORD *)a1 + 22);
  v4 = *((_DWORD *)a2 + 11);
  v38 = v4;
  if ( !*((_DWORD *)a2 + 38) )
  {
    v5 = *((_QWORD *)a1 + 10) + *((_DWORD *)a2 + 9) * v3;
    v6 = *((_DWORD *)a2 + 10);
    if ( (unsigned int)(v6 - 1) <= 0x9C3FFF )
    {
      v7 = (int *)AllocFreeTmpBuffer((unsigned int)(4 * v6));
      if ( v7 )
      {
        v8 = *((int *)a2 + 44);
        v9 = *((_QWORD *)a2 + 6);
        v10 = *((_QWORD *)a2 + 7);
        v11 = *((_QWORD *)a2 + 8);
        v12 = *((_QWORD *)a2 + 9);
        v13 = *((_QWORD *)a2 + 14);
        v36 = *((_QWORD *)a2 + 17);
        if ( (int)v8 > 0 )
        {
          v9 += v13 * v8;
          v10 += *((_QWORD *)a2 + 15) * v8;
          v11 += *((_QWORD *)a2 + 16) * v8;
          v12 += *((_QWORD *)a2 + 17) * v8;
        }
        v14 = v7;
        v15 = &v7[*((int *)a2 + 10)];
        if ( v7 != v15 )
        {
          v41 = *((_QWORD *)a2 + 16);
          v16 = *((_QWORD *)a2 + 15);
          do
          {
            v17 = BYTE6(v12);
            v12 += v36;
            v18 = v17;
            v19 = HIWORD(v9);
            v9 += v13;
            BYTE6(v19) = BYTE6(v10);
            v10 += v16;
            v20 = BYTE6(v19);
            BYTE6(v19) = BYTE6(v11);
            v11 += v41;
            *v14++ = BYTE6(v19) | ((v20 | (((unsigned __int8)v19 | (v18 << 8)) << 8)) << 8);
          }
          while ( v14 != v15 );
          v4 = v38;
        }
        v21 = (char *)(v5 + 4LL * *((int *)a2 + 8));
        for ( i = &v21[v3 * v4]; v21 != i; v21 += v3 )
          memmove(v21, v7, 4 * *((_DWORD *)a2 + 10));
        FreeTmpBuffer(v7);
      }
    }
    return;
  }
  v23 = *((int *)a2 + 45);
  v24 = *((_QWORD *)a2 + 12);
  v25 = *((_QWORD *)a2 + 13);
  v26 = *((_QWORD *)a2 + 6);
  v27 = *((_QWORD *)a2 + 7);
  v28 = *((_QWORD *)a2 + 8);
  v29 = *((_QWORD *)a2 + 9);
  v30 = *((_QWORD *)a2 + 10);
  v31 = *((_QWORD *)a2 + 11);
  v37 = *((_QWORD *)a2 + 12);
  v39 = v25;
  if ( (int)v23 > 0 )
  {
    v26 += v30 * v23;
    v27 += v31 * v23;
    v28 += v24 * v23;
    v29 += v25 * v23;
  }
  v32 = *((_QWORD *)a1 + 10) + 4 * *((_DWORD *)a2 + 8) + (__int64)(*((_DWORD *)a2 + 9) * v3);
  if ( v4 )
  {
    v40 = *((int *)a1 + 22);
    while ( 1 )
    {
      --v4;
      v33 = (void *)v32;
      v34 = BYTE6(v28) | ((BYTE6(v27) | ((BYTE6(v26) | (BYTE6(v29) << 8)) << 8)) << 8);
      v35 = (unsigned __int64)(4 * *((_DWORD *)a2 + 10)) >> 2;
      if ( v35 )
      {
        if ( (v32 & 4) == 0 )
          goto LABEL_19;
        *(_DWORD *)v32 = v34;
        if ( --v35 )
          break;
      }
LABEL_21:
      v28 += v37;
      v26 += v30;
      v29 += v39;
      v27 += v31;
      v32 += v40;
      if ( !v4 )
        return;
    }
    v33 = (void *)(v32 + 4);
LABEL_19:
    memset64(v33, v34 | ((unsigned __int64)v34 << 32), v35 >> 1);
    if ( (v35 & 1) != 0 )
      *((_DWORD *)v33 + v35 - 1) = v34;
    goto LABEL_21;
  }
}
