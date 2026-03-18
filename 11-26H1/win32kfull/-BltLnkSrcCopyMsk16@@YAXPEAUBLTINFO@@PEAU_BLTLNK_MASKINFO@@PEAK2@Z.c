/*
 * XREFs of ?BltLnkSrcCopyMsk16@@YAXPEAUBLTINFO@@PEAU_BLTLNK_MASKINFO@@PEAK2@Z @ 0x1403438A0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall BltLnkSrcCopyMsk16(struct BLTINFO *a1, struct _BLTLNK_MASKINFO *a2, unsigned int *a3, unsigned int *a4)
{
  struct BLTINFO *v4; // r10
  int v5; // r15d
  struct _BLTLNK_MASKINFO *v6; // r8
  __int64 v7; // r13
  __int64 v8; // rcx
  int v9; // r9d
  __int64 v10; // rdi
  int v11; // r12d
  int v12; // esi
  _WORD *v13; // r11
  _WORD *v14; // rbx
  int v15; // ebp
  int v16; // r14d
  unsigned int v17; // edx
  char v18; // al
  bool v19; // cc
  unsigned int v20; // edx
  __int64 v21; // rax
  unsigned __int8 v22; // [rsp+0h] [rbp-58h]
  int v23; // [rsp+4h] [rbp-54h]
  __int64 v24; // [rsp+10h] [rbp-48h]

  v4 = a1;
  v5 = *((_DWORD *)a1 + 8);
  v6 = a2;
  v7 = *((_QWORD *)a1 + 1);
  v8 = *((_QWORD *)a1 + 2);
  v9 = *((_DWORD *)a2 + 5);
  v10 = *(_QWORD *)a2;
  v23 = *((_DWORD *)a2 + 6);
  v22 = *((_BYTE *)a2 + 36);
  v24 = v8;
  while ( v5 )
  {
    --v5;
    v11 = *((_DWORD *)v4 + 7);
    v12 = *((_DWORD *)v6 + 7);
    v13 = (_WORD *)(v7 + 2LL * *((int *)v4 + 12));
    v14 = (_WORD *)(v8 + 2LL * *((int *)v4 + 14));
    if ( v11 > 0 )
    {
      while ( 1 )
      {
        v15 = v23 - v12;
        v16 = v11;
        v17 = v22 ^ *(unsigned __int8 *)(((__int64)v12 >> 3) + v10);
        v18 = 8 - (v12 & 7) - v11;
        if ( 8 - (v12 & 7) <= v11 )
        {
          v16 = 8 - (v12 & 7);
          v18 = 0;
        }
        v19 = v16 <= v15;
        if ( v16 > v15 )
        {
          v18 = v16 + v18 - v15;
          v19 = v16 <= v15;
        }
        if ( v19 )
          v15 = v16;
        v11 -= v15;
        v12 += v15;
        if ( !v17 )
          goto LABEL_41;
        v20 = v17 >> v18;
        switch ( v15 )
        {
          case 1:
            goto LABEL_39;
          case 2:
            goto LABEL_36;
          case 3:
            goto LABEL_33;
          case 4:
            goto LABEL_30;
          case 5:
            goto LABEL_27;
          case 6:
            goto LABEL_24;
          case 7:
            goto LABEL_21;
        }
        if ( v15 == 8 )
          break;
LABEL_41:
        v21 = 2LL * v15;
        v13 = (_WORD *)((char *)v13 + v21);
        v14 = (_WORD *)((char *)v14 + v21);
        if ( v12 == v23 )
          v12 = 0;
        if ( v11 <= 0 )
        {
          v6 = a2;
          v4 = a1;
          v8 = v24;
          goto LABEL_45;
        }
      }
      if ( (v20 & 1) != 0 )
        v14[7] = v13[7];
      v20 >>= 1;
LABEL_21:
      if ( (v20 & 1) != 0 )
        v14[6] = v13[6];
      v20 >>= 1;
LABEL_24:
      if ( (v20 & 1) != 0 )
        v14[5] = v13[5];
      v20 >>= 1;
LABEL_27:
      if ( (v20 & 1) != 0 )
        v14[4] = v13[4];
      v20 >>= 1;
LABEL_30:
      if ( (v20 & 1) != 0 )
        v14[3] = v13[3];
      v20 >>= 1;
LABEL_33:
      if ( (v20 & 1) != 0 )
        v14[2] = v13[2];
      v20 >>= 1;
LABEL_36:
      if ( (v20 & 1) != 0 )
        v14[1] = v13[1];
      v20 >>= 1;
LABEL_39:
      if ( (v20 & 1) != 0 )
        *v14 = *v13;
      goto LABEL_41;
    }
LABEL_45:
    v8 += *((int *)v4 + 11);
    v7 += *((int *)v4 + 10);
    v24 = v8;
    if ( *((int *)v4 + 9) <= 0 )
    {
      if ( v9 )
      {
        --v9;
        v10 += *((int *)v6 + 8);
      }
      else
      {
        v9 = *((_DWORD *)v6 + 4) - 1;
        v10 = *((_QWORD *)v6 + 1) + *((_DWORD *)v6 + 8) * v9;
      }
    }
    else
    {
      ++v9;
      v10 += *((int *)v6 + 8);
      if ( v9 >= *((_DWORD *)v6 + 4) )
      {
        v10 = *((_QWORD *)v6 + 1);
        v9 = 0;
      }
    }
  }
}
