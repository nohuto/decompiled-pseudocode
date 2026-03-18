/*
 * XREFs of ?BltLnkSrcCopyMsk32@@YAXPEAUBLTINFO@@PEAU_BLTLNK_MASKINFO@@PEAK2@Z @ 0x1401753E0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall BltLnkSrcCopyMsk32(struct BLTINFO *a1, struct _BLTLNK_MASKINFO *a2, unsigned int *a3, unsigned int *a4)
{
  int v4; // ebp
  struct _BLTLNK_MASKINFO *v5; // r14
  int v6; // r12d
  struct BLTINFO *v7; // rdi
  int v8; // r13d
  __int64 v9; // rdx
  __int64 v10; // r8
  __int64 v11; // r15
  int v12; // r11d
  int v13; // eax
  _DWORD *v14; // r9
  _DWORD *v15; // r10
  int v16; // esi
  int v17; // ebx
  unsigned int v18; // r8d
  char v19; // cl
  unsigned int v20; // r8d
  __int64 v21; // rcx
  unsigned __int8 v22; // [rsp+0h] [rbp-58h]
  __int64 v23; // [rsp+8h] [rbp-50h]
  __int64 v24; // [rsp+10h] [rbp-48h]

  v4 = *((_DWORD *)a2 + 6);
  v5 = a2;
  v6 = *((_DWORD *)a2 + 5);
  v7 = a1;
  v8 = *((_DWORD *)a1 + 8);
  v9 = *((_QWORD *)a1 + 1);
  v10 = *((_QWORD *)a1 + 2);
  v11 = *(_QWORD *)v5;
  v22 = *((_BYTE *)v5 + 36);
  v24 = v9;
  v23 = v10;
  while ( v8 )
  {
    --v8;
    v12 = *((_DWORD *)v7 + 7);
    v13 = *((_DWORD *)v5 + 7);
    v14 = (_DWORD *)(v9 + 4LL * *((int *)v7 + 12));
    v15 = (_DWORD *)(v10 + 4LL * *((int *)v7 + 14));
    if ( v12 > 0 )
    {
      do
      {
        v16 = v4 - v13;
        v17 = v12;
        v18 = v22 ^ *(unsigned __int8 *)(((__int64)v13 >> 3) + v11);
        v19 = 8 - (v13 & 7) - v12;
        if ( 8 - (v13 & 7) <= v12 )
        {
          v17 = 8 - (v13 & 7);
          v19 = 0;
        }
        if ( v17 > v16 )
        {
          v19 = v17 + v19 - v16;
          v17 = v4 - v13;
        }
        v12 -= v17;
        v13 += v17;
        if ( v18 )
        {
          v20 = v18 >> v19;
          if ( v17 == 8 )
          {
            if ( (v20 & 1) != 0 )
              v15[7] = v14[7];
            v20 >>= 1;
LABEL_12:
            if ( (v20 & 1) != 0 )
              v15[6] = v14[6];
            v20 >>= 1;
LABEL_15:
            if ( (v20 & 1) != 0 )
              v15[5] = v14[5];
            v20 >>= 1;
LABEL_18:
            if ( (v20 & 1) != 0 )
              v15[4] = v14[4];
            v20 >>= 1;
LABEL_21:
            if ( (v20 & 1) != 0 )
              v15[3] = v14[3];
            v20 >>= 1;
LABEL_24:
            if ( (v20 & 1) != 0 )
              v15[2] = v14[2];
            v20 >>= 1;
LABEL_27:
            if ( (v20 & 1) != 0 )
              v15[1] = v14[1];
            v20 >>= 1;
LABEL_30:
            if ( (v20 & 1) != 0 )
              *v15 = *v14;
          }
          else
          {
            switch ( v17 )
            {
              case 1:
                goto LABEL_30;
              case 2:
                goto LABEL_27;
              case 3:
                goto LABEL_24;
              case 4:
                goto LABEL_21;
              case 5:
                goto LABEL_18;
              case 6:
                goto LABEL_15;
              case 7:
                goto LABEL_12;
              default:
                break;
            }
          }
        }
        v21 = 4LL * v17;
        v14 = (_DWORD *)((char *)v14 + v21);
        v15 = (_DWORD *)((char *)v15 + v21);
        if ( v13 == v4 )
          v13 = 0;
      }
      while ( v12 > 0 );
      v7 = a1;
      v5 = a2;
      v9 = v24;
      v10 = v23;
    }
    v10 += *((int *)v7 + 11);
    v9 += *((int *)v7 + 10);
    v23 = v10;
    v24 = v9;
    if ( *((int *)v7 + 9) <= 0 )
    {
      if ( v6 )
      {
        --v6;
        v11 += *((int *)v5 + 8);
      }
      else
      {
        v6 = *((_DWORD *)v5 + 4) - 1;
        v11 = *((_QWORD *)v5 + 1) + *((_DWORD *)v5 + 8) * v6;
      }
    }
    else
    {
      ++v6;
      v11 += *((int *)v5 + 8);
      if ( v6 >= *((_DWORD *)v5 + 4) )
      {
        v11 = *((_QWORD *)v5 + 1);
        v6 = 0;
      }
    }
  }
}
