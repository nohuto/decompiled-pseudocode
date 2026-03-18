/*
 * XREFs of ?BltLnkSrcCopyMsk16@@YAXPEAUBLTINFO@@PEAU_BLTLNK_MASKINFO@@PEAK2@Z @ 0x140320FB0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall BltLnkSrcCopyMsk16(struct BLTINFO *a1, struct _BLTLNK_MASKINFO *a2, unsigned int *a3, unsigned int *a4)
{
  struct BLTINFO *v4; // rdi
  int v5; // r15d
  struct _BLTLNK_MASKINFO *v6; // r8
  __int64 v7; // r12
  __int64 v8; // r13
  int v9; // r9d
  __int64 v10; // rsi
  int v11; // r14d
  int v12; // ebp
  _WORD *v13; // r10
  _WORD *v14; // r11
  char v15; // cl
  unsigned int v16; // edx
  int v17; // ebx
  int v18; // eax
  unsigned int v19; // edx
  __int64 v20; // rax
  unsigned __int8 v21; // [rsp+0h] [rbp-48h]
  int v22; // [rsp+4h] [rbp-44h]

  v4 = a1;
  v5 = *((_DWORD *)a1 + 8);
  v6 = a2;
  v7 = *((_QWORD *)a1 + 1);
  v8 = *((_QWORD *)a1 + 2);
  v9 = *((_DWORD *)a2 + 5);
  v10 = *(_QWORD *)a2;
  v22 = *((_DWORD *)a2 + 6);
  v21 = *((_BYTE *)a2 + 36);
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
        v15 = 0;
        v16 = v21 ^ *(unsigned __int8 *)(((__int64)v12 >> 3) + v10);
        v17 = 8 - (v12 & 7);
        v18 = v22 - v12;
        if ( v17 > v11 )
        {
          v17 = v11;
          v15 = 8 - (v12 & 7) - v11;
        }
        if ( v17 > v18 )
        {
          v15 += v17 - v18;
          v17 = v22 - v12;
        }
        v11 -= v17;
        v12 += v17;
        if ( !v16 )
          goto LABEL_39;
        v19 = v16 >> v15;
        switch ( v17 )
        {
          case 1:
            goto LABEL_37;
          case 2:
            goto LABEL_34;
          case 3:
            goto LABEL_31;
          case 4:
            goto LABEL_28;
          case 5:
            goto LABEL_25;
          case 6:
            goto LABEL_22;
          case 7:
            goto LABEL_19;
        }
        if ( v17 == 8 )
          break;
LABEL_39:
        v20 = 2LL * v17;
        v13 = (_WORD *)((char *)v13 + v20);
        v14 = (_WORD *)((char *)v14 + v20);
        if ( v12 == v22 )
          v12 = 0;
        if ( v11 <= 0 )
        {
          v6 = a2;
          v4 = a1;
          goto LABEL_43;
        }
      }
      if ( (v19 & 1) != 0 )
        v14[7] = v13[7];
      v19 >>= 1;
LABEL_19:
      if ( (v19 & 1) != 0 )
        v14[6] = v13[6];
      v19 >>= 1;
LABEL_22:
      if ( (v19 & 1) != 0 )
        v14[5] = v13[5];
      v19 >>= 1;
LABEL_25:
      if ( (v19 & 1) != 0 )
        v14[4] = v13[4];
      v19 >>= 1;
LABEL_28:
      if ( (v19 & 1) != 0 )
        v14[3] = v13[3];
      v19 >>= 1;
LABEL_31:
      if ( (v19 & 1) != 0 )
        v14[2] = v13[2];
      v19 >>= 1;
LABEL_34:
      if ( (v19 & 1) != 0 )
        v14[1] = v13[1];
      v19 >>= 1;
LABEL_37:
      if ( (v19 & 1) != 0 )
        *v14 = *v13;
      goto LABEL_39;
    }
LABEL_43:
    v8 += *((int *)v4 + 11);
    v7 += *((int *)v4 + 10);
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
