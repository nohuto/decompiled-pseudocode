/*
 * XREFs of ?BltLnkPatMaskCopy32@@YAXPEAUBLTINFO@@KPEAKE@Z @ 0x1401A6610
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall BltLnkPatMaskCopy32(struct BLTINFO *a1, int a2, unsigned int *a3, unsigned __int8 a4)
{
  int v4; // edi
  struct BLTINFO *v5; // r10
  __int64 v6; // rbp
  __int64 v8; // r14
  int v9; // r13d
  int v10; // r15d
  int v11; // ebx
  unsigned int v12; // edx
  int v13; // r9d
  int v14; // esi
  int v15; // r12d
  char v16; // cl
  unsigned int v17; // edx
  _DWORD *v18; // r8

  v4 = *((_DWORD *)a1 + 8);
  v5 = a1;
  v6 = *((_QWORD *)a1 + 1);
  v8 = *((_QWORD *)a1 + 2);
  v9 = a4;
  while ( v4 )
  {
    --v4;
    v14 = *((_DWORD *)v5 + 7);
    v15 = *((_DWORD *)v5 + 12);
    v18 = (_DWORD *)(v8 + 4LL * *((int *)v5 + 14));
    if ( v14 > 0 )
    {
      while ( 1 )
      {
        v10 = v14;
        v11 = v14;
        v12 = v9 ^ *(unsigned __int8 *)(((__int64)v15 >> 3) + v6);
        v13 = 8 - (v15 & 7);
        if ( v13 <= v14 )
          v10 = 8 - (v15 & 7);
        v14 -= v10;
        v15 += v10;
        if ( v12 == 255 )
          goto LABEL_38;
        v16 = v13 - v11;
        if ( v13 <= v11 )
          v16 = 0;
        v17 = v12 >> v16;
        switch ( v10 )
        {
          case 1:
            goto LABEL_36;
          case 2:
            goto LABEL_33;
          case 3:
            goto LABEL_30;
          case 4:
            goto LABEL_27;
          case 5:
            goto LABEL_24;
          case 6:
            goto LABEL_21;
          case 7:
            goto LABEL_18;
        }
        if ( v10 == 8 )
          break;
LABEL_38:
        v18 += v10;
        if ( v14 <= 0 )
        {
          v5 = a1;
          goto LABEL_40;
        }
      }
      if ( (v17 & 1) == 0 )
        v18[7] = a2;
      v17 >>= 1;
LABEL_18:
      if ( (v17 & 1) == 0 )
        v18[6] = a2;
      v17 >>= 1;
LABEL_21:
      if ( (v17 & 1) == 0 )
        v18[5] = a2;
      v17 >>= 1;
LABEL_24:
      if ( (v17 & 1) == 0 )
        v18[4] = a2;
      v17 >>= 1;
LABEL_27:
      if ( (v17 & 1) == 0 )
        v18[3] = a2;
      v17 >>= 1;
LABEL_30:
      if ( (v17 & 1) == 0 )
        v18[2] = a2;
      v17 >>= 1;
LABEL_33:
      if ( (v17 & 1) == 0 )
        v18[1] = a2;
      v17 >>= 1;
LABEL_36:
      if ( (v17 & 1) == 0 )
        *v18 = a2;
      goto LABEL_38;
    }
LABEL_40:
    v8 += *((int *)v5 + 11);
    v6 += *((int *)v5 + 10);
  }
}
