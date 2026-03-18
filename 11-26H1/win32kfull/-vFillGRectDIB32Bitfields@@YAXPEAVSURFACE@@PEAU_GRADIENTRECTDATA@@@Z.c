/*
 * XREFs of ?vFillGRectDIB32Bitfields@@YAXPEAVSURFACE@@PEAU_GRADIENTRECTDATA@@@Z @ 0x14020FD80
 * Callers:
 *     <none>
 * Callees:
 *     memmove @ 0x14034FF00 (memmove.c)
 */

void __fastcall vFillGRectDIB32Bitfields(struct SURFACE *a1, struct _GRADIENTRECTDATA *a2)
{
  int v2; // r13d
  struct _GRADIENTRECTDATA *v3; // rbx
  __int64 v4; // rdi
  int v5; // ebp
  __int64 v6; // r14
  __int64 v7; // r15
  __int64 v8; // r12
  __int64 v9; // rax
  __int64 v10; // rsi
  __int64 v11; // r13
  unsigned int v12; // eax
  void *v13; // r9
  unsigned __int64 v14; // r8
  __int64 v15; // rax
  char *v16; // rcx
  char *v17; // rdi
  char *v18; // rsi
  char *v19; // rbp
  __int64 v20; // r13
  __int64 v21; // rbx
  char *v22; // rdi
  int v23; // ebp
  char *v24; // [rsp+20h] [rbp-78h]
  __int64 v25; // [rsp+40h] [rbp-58h]
  __int64 v26; // [rsp+48h] [rbp-50h]
  char *v27; // [rsp+48h] [rbp-50h]
  int v28; // [rsp+A0h] [rbp+8h]
  __int64 v29; // [rsp+A0h] [rbp+8h]
  int v31; // [rsp+B0h] [rbp+18h]
  __int64 v32; // [rsp+B0h] [rbp+18h]
  __int64 v33; // [rsp+B8h] [rbp+20h]

  v2 = *((_DWORD *)a1 + 22);
  v3 = a2;
  v31 = v2;
  v4 = *((_QWORD *)a2 + 21);
  v5 = *((_DWORD *)a2 + 11);
  v6 = *((_QWORD *)a2 + 6);
  v7 = *((_QWORD *)a2 + 7);
  v8 = *((_QWORD *)a2 + 8);
  v33 = v4;
  v28 = v5;
  if ( *((_DWORD *)a2 + 38) )
  {
    v9 = *((int *)a2 + 45);
    v29 = *((_QWORD *)a2 + 11);
    v32 = *((_QWORD *)a2 + 12);
    if ( (int)v9 > 0 )
    {
      v6 += *((_QWORD *)a2 + 10) * v9;
      v7 += *((_QWORD *)a2 + 11) * v9;
      v8 += *((_QWORD *)a2 + 12) * v9;
    }
    v10 = *((_QWORD *)a1 + 10) + 4 * *((_DWORD *)a2 + 8) + (__int64)(*((_DWORD *)a2 + 9) * v2);
    if ( v5 )
    {
      v26 = *((int *)a1 + 22);
      v11 = *((_QWORD *)a2 + 10);
      while ( 1 )
      {
        --v5;
        v12 = XEPALOBJ::ulDispatchGFPEFunction(v4, *(unsigned int *)(*(_QWORD *)v4 + 100LL));
        v13 = (void *)v10;
        v14 = (unsigned __int64)(4 * *((_DWORD *)v3 + 10)) >> 2;
        if ( v14 )
        {
          if ( (v10 & 4) == 0 )
            goto LABEL_8;
          *(_DWORD *)v10 = v12;
          if ( --v14 )
            break;
        }
LABEL_10:
        v7 += v29;
        v6 += v11;
        v8 += v32;
        v10 += v26;
        if ( !v5 )
          return;
      }
      v13 = (void *)(v10 + 4);
LABEL_8:
      memset64(v13, v12 | ((unsigned __int64)v12 << 32), v14 >> 1);
      v4 = v33;
      if ( (v14 & 1) != 0 )
        *((_DWORD *)v13 + v14 - 1) = v12;
      goto LABEL_10;
    }
  }
  else
  {
    v15 = *((int *)a2 + 44);
    if ( (int)v15 > 0 )
    {
      v6 += *((_QWORD *)a2 + 14) * v15;
      v7 += *((_QWORD *)a2 + 15) * v15;
      v8 += *((_QWORD *)a2 + 16) * *((int *)a2 + 44);
    }
    v16 = (char *)(*((_QWORD *)a1 + 10) + *((_DWORD *)a2 + 9) * v2 + 4LL * *((int *)a2 + 8));
    v24 = v16;
    v17 = v16;
    v27 = v16;
    v18 = v16;
    if ( v16 != &v16[4 * *((int *)a2 + 10)] )
    {
      v25 = *((_QWORD *)a2 + 16);
      v19 = &v16[4 * *((int *)a2 + 10)];
      v20 = *((_QWORD *)a2 + 14);
      v21 = *((_QWORD *)a2 + 15);
      do
      {
        v6 += v20;
        v7 += v21;
        v8 += v25;
        *(_DWORD *)v18 = XEPALOBJ::ulDispatchGFPEFunction(v33, *(unsigned int *)(*(_QWORD *)v33 + 100LL));
        v18 += 4;
      }
      while ( v18 != v19 );
      v17 = v27;
      v3 = a2;
      v16 = v27;
      v5 = v28;
      v2 = v31;
    }
    v22 = &v17[v2];
    v23 = v5 - 1;
    while ( v23 > 0 )
    {
      --v23;
      memmove(v22, v16, 4 * *((_DWORD *)v3 + 10));
      v16 = v24;
      v22 += v2;
    }
  }
}
