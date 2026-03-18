/*
 * XREFs of ?BltLnkSrcCopyMsk8@@YAXPEAUBLTINFO@@PEAU_BLTLNK_MASKINFO@@PEAK2@Z @ 0x1401C2970
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall BltLnkSrcCopyMsk8(struct BLTINFO *a1, struct _BLTLNK_MASKINFO *a2, unsigned int *a3, unsigned int *a4)
{
  struct BLTINFO *v4; // rbx
  int v5; // r15d
  struct _BLTLNK_MASKINFO *v6; // r8
  __int64 v7; // r13
  __int64 v8; // rcx
  int v9; // r11d
  __int64 v10; // rdi
  _BYTE *v11; // r9
  int v12; // r12d
  _BYTE *v13; // r10
  int v14; // esi
  int v15; // ebp
  int v16; // r14d
  unsigned int v17; // edx
  char v18; // al
  bool v19; // cc
  unsigned int v20; // edx
  unsigned __int8 v21; // [rsp+0h] [rbp-58h]
  int v22; // [rsp+4h] [rbp-54h]
  __int64 v23; // [rsp+10h] [rbp-48h]

  v4 = a1;
  v5 = *((_DWORD *)a1 + 8);
  v6 = a2;
  v7 = *((_QWORD *)a1 + 1);
  v8 = *((_QWORD *)a1 + 2);
  v9 = *((_DWORD *)a2 + 5);
  v10 = *(_QWORD *)a2;
  v22 = *((_DWORD *)a2 + 6);
  v21 = *((_BYTE *)a2 + 36);
  v23 = v8;
  while ( v5 )
  {
    --v5;
    v11 = (_BYTE *)(v7 + *((int *)v4 + 12));
    v12 = *((_DWORD *)v4 + 7);
    v13 = (_BYTE *)(v8 + *((int *)v4 + 14));
    v14 = *((_DWORD *)v6 + 7);
    if ( v12 > 0 )
    {
      while ( 1 )
      {
        v15 = v22 - v14;
        v16 = v12;
        v17 = v21 ^ *(unsigned __int8 *)(((__int64)v14 >> 3) + v10);
        v18 = 8 - (v14 & 7) - v12;
        if ( 8 - (v14 & 7) <= v12 )
        {
          v16 = 8 - (v14 & 7);
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
        v12 -= v15;
        v14 += v15;
        if ( !v17 )
          goto LABEL_11;
        v20 = v17 >> v18;
        switch ( v15 )
        {
          case 1:
            goto LABEL_47;
          case 2:
            goto LABEL_44;
          case 3:
            goto LABEL_41;
          case 4:
            goto LABEL_38;
          case 5:
            goto LABEL_35;
          case 6:
            goto LABEL_32;
          case 7:
            goto LABEL_29;
        }
        if ( v15 == 8 )
          break;
LABEL_11:
        v11 += v15;
        v13 += v15;
        if ( v14 == v22 )
          v14 = 0;
        if ( v12 <= 0 )
        {
          v6 = a2;
          v4 = a1;
          v8 = v23;
          goto LABEL_15;
        }
      }
      if ( (v20 & 1) != 0 )
        v13[7] = v11[7];
      v20 >>= 1;
LABEL_29:
      if ( (v20 & 1) != 0 )
        v13[6] = v11[6];
      v20 >>= 1;
LABEL_32:
      if ( (v20 & 1) != 0 )
        v13[5] = v11[5];
      v20 >>= 1;
LABEL_35:
      if ( (v20 & 1) != 0 )
        v13[4] = v11[4];
      v20 >>= 1;
LABEL_38:
      if ( (v20 & 1) != 0 )
        v13[3] = v11[3];
      v20 >>= 1;
LABEL_41:
      if ( (v20 & 1) != 0 )
        v13[2] = v11[2];
      v20 >>= 1;
LABEL_44:
      if ( (v20 & 1) != 0 )
        v13[1] = v11[1];
      v20 >>= 1;
LABEL_47:
      if ( (v20 & 1) != 0 )
        *v13 = *v11;
      goto LABEL_11;
    }
LABEL_15:
    v8 += *((int *)v4 + 11);
    v7 += *((int *)v4 + 10);
    v23 = v8;
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
