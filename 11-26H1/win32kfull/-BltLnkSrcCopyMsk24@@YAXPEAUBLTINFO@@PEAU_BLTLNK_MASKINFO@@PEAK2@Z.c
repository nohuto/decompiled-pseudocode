/*
 * XREFs of ?BltLnkSrcCopyMsk24@@YAXPEAUBLTINFO@@PEAU_BLTLNK_MASKINFO@@PEAK2@Z @ 0x1401E9DE0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall BltLnkSrcCopyMsk24(struct BLTINFO *a1, struct _BLTLNK_MASKINFO *a2, unsigned int *a3, unsigned int *a4)
{
  struct _BLTLNK_MASKINFO *v4; // r10
  __int64 v5; // r9
  struct BLTINFO *v6; // rbx
  int v7; // r11d
  int v8; // ebp
  __int64 v9; // r13
  __int64 v10; // rdi
  int v11; // r14d
  int v12; // r15d
  unsigned int v13; // r9d
  char v14; // al
  bool v15; // cc
  int v16; // r12d
  int v17; // esi
  __int64 v18; // rcx
  _BYTE *v19; // rdx
  _BYTE *v20; // r8
  unsigned int v21; // r9d
  unsigned __int8 v22; // [rsp+0h] [rbp-58h]
  int v23; // [rsp+4h] [rbp-54h]
  __int64 v24; // [rsp+10h] [rbp-48h]

  v4 = a2;
  v5 = *((_QWORD *)a1 + 2);
  v6 = a1;
  v7 = *((_DWORD *)a2 + 5);
  v8 = *((_DWORD *)a1 + 8);
  v9 = *((_QWORD *)a1 + 1);
  v10 = *(_QWORD *)a2;
  v23 = *((_DWORD *)a2 + 6);
  v22 = *((_BYTE *)a2 + 36);
  v24 = v5;
  while ( v8 )
  {
    --v8;
    v16 = *((_DWORD *)v6 + 7);
    v17 = *((_DWORD *)v4 + 7);
    v19 = (_BYTE *)(v9 + 3 * *((_DWORD *)v6 + 12));
    v20 = (_BYTE *)(v5 + 3 * *((_DWORD *)v6 + 14));
    if ( v16 <= 0 )
      goto LABEL_13;
    do
    {
      v11 = v23 - v17;
      v12 = v16;
      v13 = v22 ^ *(unsigned __int8 *)(((__int64)v17 >> 3) + v10);
      v14 = 8 - (v17 & 7) - v16;
      if ( 8 - (v17 & 7) <= v16 )
      {
        v12 = 8 - (v17 & 7);
        v14 = 0;
      }
      v15 = v12 <= v11;
      if ( v12 > v11 )
      {
        v14 = v12 + v14 - v11;
        v15 = v12 <= v11;
      }
      if ( v15 )
        v11 = v12;
      v16 -= v11;
      v17 += v11;
      if ( v13 )
      {
        v21 = v13 >> v14;
        if ( v11 != 1 )
        {
          if ( v11 != 2 )
          {
            if ( v11 != 3 )
            {
              if ( v11 != 4 )
              {
                if ( v11 != 5 )
                {
                  if ( v11 != 6 )
                  {
                    if ( v11 != 7 )
                    {
                      if ( v11 != 8 )
                        goto LABEL_9;
                      if ( (v21 & 1) != 0 )
                      {
                        v20[23] = v19[23];
                        v20[22] = v19[22];
                        v20[21] = v19[21];
                      }
                      v21 >>= 1;
                    }
                    if ( (v21 & 1) != 0 )
                    {
                      v20[20] = v19[20];
                      v20[19] = v19[19];
                      v20[18] = v19[18];
                    }
                    v21 >>= 1;
                  }
                  if ( (v21 & 1) != 0 )
                  {
                    v20[17] = v19[17];
                    v20[16] = v19[16];
                    v20[15] = v19[15];
                  }
                  v21 >>= 1;
                }
                if ( (v21 & 1) != 0 )
                {
                  v20[14] = v19[14];
                  v20[13] = v19[13];
                  v20[12] = v19[12];
                }
                v21 >>= 1;
              }
              if ( (v21 & 1) != 0 )
              {
                v20[11] = v19[11];
                v20[10] = v19[10];
                v20[9] = v19[9];
              }
              v21 >>= 1;
            }
            if ( (v21 & 1) != 0 )
            {
              v20[8] = v19[8];
              v20[7] = v19[7];
              v20[6] = v19[6];
            }
            v21 >>= 1;
          }
          if ( (v21 & 1) != 0 )
          {
            v20[5] = v19[5];
            v20[4] = v19[4];
            v20[3] = v19[3];
          }
          v21 >>= 1;
        }
        if ( (v21 & 1) != 0 )
        {
          v20[2] = v19[2];
          v20[1] = v19[1];
          *v20 = *v19;
        }
      }
LABEL_9:
      v18 = 3 * v11;
      v19 += v18;
      v20 += v18;
      if ( v17 == v23 )
        v17 = 0;
    }
    while ( v16 > 0 );
    v4 = a2;
    v6 = a1;
    v5 = v24;
LABEL_13:
    v5 += *((int *)v6 + 11);
    v9 += *((int *)v6 + 10);
    v24 = v5;
    if ( *((int *)v6 + 9) <= 0 )
    {
      if ( v7 )
      {
        --v7;
        v10 += *((int *)v4 + 8);
      }
      else
      {
        v7 = *((_DWORD *)v4 + 4) - 1;
        v10 = *((_QWORD *)v4 + 1) + *((_DWORD *)v4 + 8) * v7;
      }
    }
    else
    {
      ++v7;
      v10 += *((int *)v4 + 8);
      if ( v7 >= *((_DWORD *)v4 + 4) )
      {
        v10 = *((_QWORD *)v4 + 1);
        v7 = 0;
      }
    }
  }
}
