/*
 * XREFs of ?vFillGRectDIB24Bitfields@@YAXPEAVSURFACE@@PEAU_GRADIENTRECTDATA@@@Z @ 0x14031BA10
 * Callers:
 *     <none>
 * Callees:
 *     memmove @ 0x140342600 (memmove.c)
 */

void __fastcall vFillGRectDIB24Bitfields(struct SURFACE *a1, struct _GRADIENTRECTDATA *a2)
{
  int v2; // r13d
  struct _GRADIENTRECTDATA *v3; // rbx
  __int64 v4; // r11
  int v5; // edi
  __int64 v6; // r14
  __int64 v7; // r15
  __int64 v8; // r12
  __int64 v9; // rax
  _BYTE *v10; // rbp
  const void *v11; // r11
  _BYTE *v12; // rsi
  _BYTE *v13; // rdi
  int v14; // eax
  char *v15; // rsi
  int v16; // edi
  __int64 v17; // rax
  __int64 v18; // rsi
  __int64 v19; // rbp
  __int64 v20; // r13
  int v21; // eax
  __int64 v22; // [rsp+20h] [rbp-78h]
  __int64 v23; // [rsp+30h] [rbp-68h]
  __int64 v24; // [rsp+38h] [rbp-60h]
  __int64 v25; // [rsp+40h] [rbp-58h]
  _BYTE *v26; // [rsp+48h] [rbp-50h]
  int v27; // [rsp+A0h] [rbp+8h]
  __int64 v28; // [rsp+A0h] [rbp+8h]
  __int64 v30; // [rsp+A8h] [rbp+10h]
  __int64 v31; // [rsp+B0h] [rbp+18h]
  _BYTE *v32; // [rsp+B8h] [rbp+20h]
  __int64 v33; // [rsp+B8h] [rbp+20h]

  v2 = *((_DWORD *)a1 + 22);
  v3 = a2;
  v4 = *((_QWORD *)a2 + 21);
  v5 = *((_DWORD *)a2 + 11);
  v6 = *((_QWORD *)a2 + 6);
  v7 = *((_QWORD *)a2 + 7);
  v8 = *((_QWORD *)a2 + 8);
  v22 = v4;
  v27 = v5;
  if ( *((_DWORD *)a2 + 38) )
  {
    v17 = *((int *)a2 + 45);
    v30 = *((_QWORD *)a2 + 10);
    v28 = *((_QWORD *)a2 + 11);
    v31 = *((_QWORD *)a2 + 12);
    if ( (int)v17 > 0 )
    {
      v6 += *((_QWORD *)a2 + 10) * v17;
      v7 += *((_QWORD *)a2 + 11) * v17;
      v8 += *((_QWORD *)a2 + 12) * v17;
    }
    v18 = *((_QWORD *)a1 + 10) + 3 * *((_DWORD *)a2 + 8) + (__int64)(*((_DWORD *)a2 + 9) * v2);
    if ( v5 )
    {
      v33 = *((int *)a1 + 22);
      do
      {
        --v5;
        v19 = v18;
        v20 = v18 + 3 * *((_DWORD *)v3 + 10);
        v21 = XEPALOBJ::ulDispatchGFPEFunction(v4, *(unsigned int *)(*(_QWORD *)v4 + 100LL));
        if ( v18 != v20 )
        {
          do
          {
            *(_WORD *)v19 = v21;
            *(_BYTE *)(v19 + 2) = BYTE2(v21);
            v19 += 3LL;
          }
          while ( v19 != v20 );
        }
        v6 += v30;
        v7 += v28;
        v8 += v31;
        v18 += v33;
        v4 = v22;
      }
      while ( v5 );
    }
  }
  else
  {
    v24 = *((_QWORD *)a2 + 15);
    v9 = *((int *)a2 + 44);
    v25 = *((_QWORD *)a2 + 16);
    if ( (int)v9 > 0 )
    {
      v6 += *((_QWORD *)a2 + 14) * v9;
      v7 += *((_QWORD *)a2 + 15) * v9;
      v8 += *((_QWORD *)a2 + 16) * v9;
    }
    v10 = (_BYTE *)(*((_QWORD *)a1 + 10) + *((_DWORD *)a2 + 9) * v2 + 3 * *((_DWORD *)a2 + 8));
    v11 = v10;
    v32 = v10;
    v26 = v10;
    v12 = v10;
    if ( v10 != &v10[3 * *((_DWORD *)a2 + 10)] )
    {
      v23 = *((_QWORD *)a2 + 14);
      v13 = &v10[3 * *((_DWORD *)a2 + 10)];
      do
      {
        v14 = XEPALOBJ::ulDispatchGFPEFunction(v22, *(unsigned int *)(*(_QWORD *)v22 + 100LL));
        *v10 = v14;
        v6 += v23;
        v7 += v24;
        v8 += v25;
        v10[1] = BYTE1(v14);
        v10[2] = BYTE2(v14);
        v10 += 3;
      }
      while ( v10 != v13 );
      v12 = v26;
      v3 = a2;
      v11 = v26;
      v5 = v27;
    }
    v15 = &v12[v2];
    v16 = v5 - 1;
    while ( v16 > 0 )
    {
      --v16;
      memmove(v15, v11, 3 * *((_DWORD *)v3 + 10));
      v11 = v32;
      v15 += v2;
    }
  }
}
