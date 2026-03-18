/*
 * XREFs of ?vFillGRectDIB32RGB@@YAXPEAVSURFACE@@PEAU_GRADIENTRECTDATA@@@Z @ 0x14021B2B0
 * Callers:
 *     <none>
 * Callees:
 *     memmove @ 0x14034FF00 (memmove.c)
 */

void __fastcall vFillGRectDIB32RGB(struct SURFACE *a1, struct _GRADIENTRECTDATA *a2)
{
  __int64 v2; // r12
  int v4; // r13d
  __int64 v5; // rbx
  unsigned __int64 v6; // rsi
  __int64 v7; // rbp
  __int64 v8; // rax
  int v9; // ecx
  int *v10; // r15
  __int64 v11; // rax
  __int64 v12; // r9
  __int64 v13; // r10
  __int64 v14; // r11
  int *v15; // rdi
  int *v16; // r8
  unsigned __int8 v17; // rax^6
  int v18; // edx
  unsigned __int64 v19; // rax
  char *v20; // rdi
  char *v21; // rbx
  __int64 v22; // rax
  __int64 v23; // r15
  __int64 v24; // r8
  void *v25; // r11
  unsigned int v26; // r10d
  unsigned __int64 v27; // r9
  __int64 v28; // [rsp+60h] [rbp+8h]
  __int64 v29; // [rsp+60h] [rbp+8h]
  __int64 v30; // [rsp+68h] [rbp+10h]

  v2 = *((int *)a1 + 22);
  v4 = *((_DWORD *)a2 + 11);
  v5 = *((_QWORD *)a2 + 6);
  v6 = *((_QWORD *)a2 + 7);
  v7 = *((_QWORD *)a2 + 8);
  if ( !*((_DWORD *)a2 + 38) )
  {
    v8 = *((_QWORD *)a1 + 10) + *((_DWORD *)a2 + 9) * (int)v2;
    v9 = *((_DWORD *)a2 + 10);
    v28 = v8;
    if ( v9 > 0 && v9 <= 10240000 )
    {
      v10 = (int *)AllocFreeTmpBuffer((unsigned int)(4 * v9));
      if ( v10 )
      {
        v11 = *((int *)a2 + 44);
        v12 = *((_QWORD *)a2 + 14);
        v13 = *((_QWORD *)a2 + 15);
        v14 = *((_QWORD *)a2 + 16);
        if ( (int)v11 > 0 )
        {
          v5 += v12 * v11;
          v6 += v13 * v11;
          v7 += v14 * *((int *)a2 + 44);
        }
        v15 = v10;
        v16 = &v10[*((int *)a2 + 10)];
        if ( v10 != v16 )
        {
          do
          {
            v17 = BYTE6(v7);
            v7 += v14;
            v18 = v17;
            v19 = HIWORD(v6);
            v6 += v13;
            BYTE6(v19) = BYTE6(v5);
            v5 += v12;
            *v15++ = BYTE6(v19) | (((unsigned __int8)v19 | (v18 << 8)) << 8);
          }
          while ( v15 != v16 );
        }
        v20 = (char *)(v28 + 4LL * *((int *)a2 + 8));
        v21 = &v20[(int)v2 * v4];
        while ( v20 != v21 )
        {
          memmove(v20, v10, 4 * *((_DWORD *)a2 + 10));
          v20 += v2;
        }
        FreeTmpBuffer(v10);
      }
    }
    return;
  }
  v22 = *((int *)a2 + 45);
  v23 = *((_QWORD *)a2 + 10);
  v29 = *((_QWORD *)a2 + 11);
  v30 = *((_QWORD *)a2 + 12);
  if ( (int)v22 > 0 )
  {
    v5 += v23 * v22;
    v6 += *((_QWORD *)a2 + 11) * v22;
    v7 += *((_QWORD *)a2 + 12) * v22;
  }
  v24 = *((_QWORD *)a1 + 10) + 4 * *((_DWORD *)a2 + 8) + (__int64)(*((_DWORD *)a2 + 9) * (int)v2);
  if ( v4 )
  {
    while ( 1 )
    {
      --v4;
      v25 = (void *)v24;
      v26 = BYTE6(v5) | ((BYTE6(v6) | (BYTE6(v7) << 8)) << 8);
      v27 = (unsigned __int64)(4 * *((_DWORD *)a2 + 10)) >> 2;
      if ( v27 )
      {
        if ( (v24 & 4) == 0 )
          goto LABEL_22;
        *(_DWORD *)v24 = v26;
        if ( --v27 )
          break;
      }
LABEL_24:
      v7 += v30;
      v5 += v23;
      v24 += v2;
      v6 += v29;
      if ( !v4 )
        return;
    }
    v25 = (void *)(v24 + 4);
LABEL_22:
    memset64(v25, v26 | ((unsigned __int64)v26 << 32), v27 >> 1);
    if ( (v27 & 1) != 0 )
      *((_DWORD *)v25 + v27 - 1) = v26;
    goto LABEL_24;
  }
}
