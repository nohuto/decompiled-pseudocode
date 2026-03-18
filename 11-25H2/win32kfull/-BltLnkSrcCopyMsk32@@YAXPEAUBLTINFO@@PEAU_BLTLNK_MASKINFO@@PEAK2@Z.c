/*
 * XREFs of ?BltLnkSrcCopyMsk32@@YAXPEAUBLTINFO@@PEAU_BLTLNK_MASKINFO@@PEAK2@Z @ 0x1401512F0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall BltLnkSrcCopyMsk32(struct BLTINFO *a1, struct _BLTLNK_MASKINFO *a2, unsigned int *a3, unsigned int *a4)
{
  struct BLTINFO *v4; // rdi
  int v5; // r15d
  struct _BLTLNK_MASKINFO *v6; // r8
  __int64 v7; // r12
  __int64 v8; // r13
  int v9; // r9d
  __int64 v10; // rsi
  char v11; // cl
  unsigned int v12; // edx
  int v13; // ebx
  int v14; // eax
  int v15; // r14d
  int v16; // ebp
  unsigned int v17; // edx
  __int64 v18; // rax
  _DWORD *v19; // r10
  _DWORD *v20; // r11
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
    v15 = *((_DWORD *)v4 + 7);
    v16 = *((_DWORD *)v6 + 7);
    v19 = (_DWORD *)(v7 + 4LL * *((int *)v4 + 12));
    v20 = (_DWORD *)(v8 + 4LL * *((int *)v4 + 14));
    if ( v15 <= 0 )
      goto LABEL_42;
    do
    {
      v11 = 0;
      v12 = v21 ^ *(unsigned __int8 *)(((__int64)v16 >> 3) + v10);
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
        v17 = v12 >> v11;
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
                        goto LABEL_38;
                      if ( (v17 & 1) != 0 )
                        v20[7] = v19[7];
                      v17 >>= 1;
                    }
                    if ( (v17 & 1) != 0 )
                      v20[6] = v19[6];
                    v17 >>= 1;
                  }
                  if ( (v17 & 1) != 0 )
                    v20[5] = v19[5];
                  v17 >>= 1;
                }
                if ( (v17 & 1) != 0 )
                  v20[4] = v19[4];
                v17 >>= 1;
              }
              if ( (v17 & 1) != 0 )
                v20[3] = v19[3];
              v17 >>= 1;
            }
            if ( (v17 & 1) != 0 )
              v20[2] = v19[2];
            v17 >>= 1;
          }
          if ( (v17 & 1) != 0 )
            v20[1] = v19[1];
          v17 >>= 1;
        }
        if ( (v17 & 1) != 0 )
          *v20 = *v19;
      }
LABEL_38:
      v18 = 4LL * v13;
      v19 = (_DWORD *)((char *)v19 + v18);
      v20 = (_DWORD *)((char *)v20 + v18);
      if ( v16 == v22 )
        v16 = 0;
    }
    while ( v15 > 0 );
    v6 = a2;
    v4 = a1;
LABEL_42:
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
