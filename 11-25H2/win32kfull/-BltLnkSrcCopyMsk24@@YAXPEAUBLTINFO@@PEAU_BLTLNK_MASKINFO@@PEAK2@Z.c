/*
 * XREFs of ?BltLnkSrcCopyMsk24@@YAXPEAUBLTINFO@@PEAU_BLTLNK_MASKINFO@@PEAK2@Z @ 0x1401B81F0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall BltLnkSrcCopyMsk24(struct BLTINFO *a1, struct _BLTLNK_MASKINFO *a2, unsigned int *a3, unsigned int *a4)
{
  struct _BLTLNK_MASKINFO *v4; // r10
  int v5; // r11d
  struct BLTINFO *v6; // rsi
  __int64 v7; // rdi
  int v8; // r15d
  __int64 v9; // r12
  __int64 v10; // r13
  char v11; // cl
  unsigned int v12; // edx
  int v13; // ebx
  int v14; // eax
  int v15; // r14d
  int v16; // ebp
  __int64 v17; // rcx
  _BYTE *v18; // r8
  _BYTE *v19; // r9
  unsigned int v20; // edx
  unsigned __int8 v21; // [rsp+0h] [rbp-48h]
  int v22; // [rsp+4h] [rbp-44h]

  v4 = a2;
  v5 = *((_DWORD *)a2 + 5);
  v6 = a1;
  v7 = *(_QWORD *)a2;
  v8 = *((_DWORD *)a1 + 8);
  v9 = *((_QWORD *)a1 + 1);
  v10 = *((_QWORD *)a1 + 2);
  v22 = *((_DWORD *)a2 + 6);
  v21 = *((_BYTE *)a2 + 36);
  while ( v8 )
  {
    --v8;
    v15 = *((_DWORD *)v6 + 7);
    v16 = *((_DWORD *)v4 + 7);
    v18 = (_BYTE *)(v9 + 3 * *((_DWORD *)v6 + 12));
    v19 = (_BYTE *)(v10 + 3 * *((_DWORD *)v6 + 14));
    if ( v15 <= 0 )
      goto LABEL_11;
    do
    {
      v11 = 0;
      v12 = v21 ^ *(unsigned __int8 *)(((__int64)v16 >> 3) + v7);
      v13 = 8 - (v16 & 7);
      v14 = v22 - v16;
      if ( v13 > v15 )
      {
        v13 = v15;
        v11 = 8 - (v16 & 7) - v15;
      }
      if ( v13 > v14 )
      {
        v11 += v13 - v14;
        v13 = v22 - v16;
      }
      v15 -= v13;
      v16 += v13;
      if ( v12 )
      {
        v20 = v12 >> v11;
        if ( v13 != 1 )
        {
          if ( v13 != 2 )
          {
            if ( v13 != 3 )
            {
              if ( v13 != 4 )
              {
                if ( v13 != 5 )
                {
                  if ( v13 != 6 )
                  {
                    if ( v13 != 7 )
                    {
                      if ( v13 != 8 )
                        goto LABEL_7;
                      if ( (v20 & 1) != 0 )
                      {
                        v19[23] = v18[23];
                        v19[22] = v18[22];
                        v19[21] = v18[21];
                      }
                      v20 >>= 1;
                    }
                    if ( (v20 & 1) != 0 )
                    {
                      v19[20] = v18[20];
                      v19[19] = v18[19];
                      v19[18] = v18[18];
                    }
                    v20 >>= 1;
                  }
                  if ( (v20 & 1) != 0 )
                  {
                    v19[17] = v18[17];
                    v19[16] = v18[16];
                    v19[15] = v18[15];
                  }
                  v20 >>= 1;
                }
                if ( (v20 & 1) != 0 )
                {
                  v19[14] = v18[14];
                  v19[13] = v18[13];
                  v19[12] = v18[12];
                }
                v20 >>= 1;
              }
              if ( (v20 & 1) != 0 )
              {
                v19[11] = v18[11];
                v19[10] = v18[10];
                v19[9] = v18[9];
              }
              v20 >>= 1;
            }
            if ( (v20 & 1) != 0 )
            {
              v19[8] = v18[8];
              v19[7] = v18[7];
              v19[6] = v18[6];
            }
            v20 >>= 1;
          }
          if ( (v20 & 1) != 0 )
          {
            v19[5] = v18[5];
            v19[4] = v18[4];
            v19[3] = v18[3];
          }
          v20 >>= 1;
        }
        if ( (v20 & 1) != 0 )
        {
          v19[2] = v18[2];
          v19[1] = v18[1];
          *v19 = *v18;
        }
      }
LABEL_7:
      v17 = 3 * v13;
      v18 += v17;
      v19 += v17;
      if ( v16 == v22 )
        v16 = 0;
    }
    while ( v15 > 0 );
    v4 = a2;
    v6 = a1;
LABEL_11:
    v10 += *((int *)v6 + 11);
    v9 += *((int *)v6 + 10);
    if ( *((int *)v6 + 9) <= 0 )
    {
      if ( v5 )
      {
        --v5;
        v7 += *((int *)v4 + 8);
      }
      else
      {
        v5 = *((_DWORD *)v4 + 4) - 1;
        v7 = *((_QWORD *)v4 + 1) + *((_DWORD *)v4 + 8) * v5;
      }
    }
    else
    {
      ++v5;
      v7 += *((int *)v4 + 8);
      if ( v5 >= *((_DWORD *)v4 + 4) )
      {
        v7 = *((_QWORD *)v4 + 1);
        v5 = 0;
      }
    }
  }
}
