/*
 * XREFs of ?vPatNotRect8@@YAXPEAU_PATBLTFRAME@@@Z @ 0x140237A90
 * Callers:
 *     <none>
 * Callees:
 *     vFetchNotAndCopy @ 0x140237D9C (vFetchNotAndCopy.c)
 *     vFetchShiftNotAndCopy @ 0x1403432EC (vFetchShiftNotAndCopy.c)
 */

void __fastcall vPatNotRect8(struct _PATBLTFRAME *a1)
{
  int v1; // r15d
  _DWORD *v3; // rcx
  int v4; // r9d
  int v5; // r15d
  __int64 v6; // r10
  unsigned int v7; // r8d
  unsigned int v8; // r9d
  unsigned int v9; // r15d
  int v10; // eax
  unsigned int v11; // r13d
  unsigned int v12; // edi
  int v13; // r11d
  int v14; // eax
  int v15; // esi
  int v16; // r12d
  int v17; // r14d
  unsigned int *v18; // rdx
  __int64 v19; // r10
  int v20; // ecx
  int v21; // r13d
  unsigned int v22; // r8d
  int v23; // r15d
  __int64 v24; // rdx
  int v25; // r14d
  int v26; // eax
  int v27; // ecx
  __int64 v28; // rax
  __int64 v29; // rcx
  int v30; // r10d
  unsigned int *v31; // r8
  __int64 v32; // r9
  __int64 v33; // r11
  __int128 v34; // [rsp+20h] [rbp-38h] BYREF
  __int128 v35; // [rsp+30h] [rbp-28h]
  __int64 v36; // [rsp+40h] [rbp-18h]
  unsigned int v37; // [rsp+A0h] [rbp+48h]
  unsigned int v38; // [rsp+B0h] [rbp+58h]
  __int64 v39; // [rsp+B8h] [rbp+60h]

  v1 = *((_DWORD *)a1 + 12);
  v36 = 0LL;
  v3 = (_DWORD *)*((_QWORD *)a1 + 3);
  v34 = 0LL;
  v35 = 0LL;
  v4 = *v3 * v1;
  v5 = v3[2] * v1;
  v6 = v4 & 3;
  v39 = v5 & 3;
  v7 = dword_1403625F0[v6];
  v8 = v4 & 0xFFFFFFFC;
  v9 = v5 & 0xFFFFFFFC;
  v10 = v8 - *((_DWORD *)a1 + 8);
  v11 = ~dword_1403625F0[v39];
  v38 = v11;
  v37 = v9;
  if ( v10 >= 0 )
    v12 = (unsigned int)v10 % *((_DWORD *)a1 + 10);
  else
    v12 = *((_DWORD *)a1 + 10) - (unsigned int)~v10 % *((_DWORD *)a1 + 10) - 1;
  v13 = v3[1];
  v14 = v13 - *((_DWORD *)a1 + 9);
  if ( v14 >= 0 )
    v15 = (unsigned int)v14 % *((_DWORD *)a1 + 11);
  else
    v15 = *((_DWORD *)a1 + 11) - (unsigned int)~v14 % *((_DWORD *)a1 + 11) - 1;
  if ( v8 == v9 )
  {
    v7 &= v11;
    v16 = 1;
  }
  else
  {
    v16 = 0;
    if ( !(_DWORD)v6 )
    {
LABEL_20:
      DWORD2(v35) = (v9 - v8) >> 2;
      if ( DWORD2(v35) )
      {
        v22 = *((_DWORD *)a1 + 10);
        v23 = v15;
        HIDWORD(v35) = v22;
        v12 %= v22;
        v24 = *((_QWORD *)a1 + 3);
        *(_QWORD *)&v35 = __PAIR64__(v22, v12);
        v25 = *(_DWORD *)(v24 + 4);
        v26 = *((_DWORD *)a1 + 5) * v15;
        *(_QWORD *)&v34 = *(_QWORD *)a1 + v8 + (__int64)(*((_DWORD *)a1 + 4) * v25);
        *((_QWORD *)&v34 + 1) = *((_QWORD *)a1 + 1) + v26;
        v27 = *(_DWORD *)(v24 + 12);
        if ( (((unsigned __int8)v12 | (unsigned __int8)v22) & 3) != 0 )
        {
          if ( v25 < v27 )
          {
            do
            {
              vFetchShiftNotAndCopy(&v34);
              if ( ++v23 == *((_DWORD *)a1 + 11) )
              {
                v23 = 0;
                *((_QWORD *)&v34 + 1) = *((_QWORD *)a1 + 1);
              }
              else
              {
                *((_QWORD *)&v34 + 1) += *((int *)a1 + 5);
              }
              ++v25;
              *(_QWORD *)&v34 = *((int *)a1 + 4) + (_QWORD)v34;
              v28 = *((_QWORD *)a1 + 3);
              LODWORD(v35) = v12;
            }
            while ( v25 < *(_DWORD *)(v28 + 12) );
          }
        }
        else
        {
          HIDWORD(v35) = v22 >> 2;
          if ( v25 < v27 )
          {
            do
            {
              vFetchNotAndCopy(&v34);
              if ( ++v23 == *((_DWORD *)a1 + 11) )
              {
                v23 = 0;
                *((_QWORD *)&v34 + 1) = *((_QWORD *)a1 + 1);
              }
              else
              {
                *((_QWORD *)&v34 + 1) += *((int *)a1 + 5);
              }
              ++v25;
              *(_QWORD *)&v34 = *((int *)a1 + 4) + (_QWORD)v34;
            }
            while ( v25 < *(_DWORD *)(*((_QWORD *)a1 + 3) + 12LL) );
          }
        }
        v9 = v37;
      }
      if ( (_DWORD)v39 )
      {
        v29 = *((_QWORD *)a1 + 3);
        v30 = *(_DWORD *)(v29 + 4);
        v31 = (unsigned int *)(*(_QWORD *)a1 + v9 + (__int64)(*((_DWORD *)a1 + 4) * v30));
        v32 = *((_QWORD *)a1 + 1) + *((_DWORD *)a1 + 5) * v15;
        if ( v30 < *(_DWORD *)(v29 + 12) )
        {
          v33 = (v12 + 4 * DWORD2(v35)) % *((_DWORD *)a1 + 10);
          do
          {
            ++v15;
            *v31 = *v31 & ~v11 | v11 & ~*(_DWORD *)(v33 + v32);
            if ( v15 == *((_DWORD *)a1 + 11) )
            {
              v32 = *((_QWORD *)a1 + 1);
              v15 = 0;
            }
            else
            {
              v32 += *((int *)a1 + 5);
            }
            ++v30;
            v31 = (unsigned int *)((char *)v31 + *((int *)a1 + 4));
          }
          while ( v30 < *(_DWORD *)(*((_QWORD *)a1 + 3) + 12LL) );
        }
      }
      return;
    }
  }
  v17 = v15;
  v18 = (unsigned int *)(*(_QWORD *)a1 + v8 + (__int64)(*((_DWORD *)a1 + 4) * v13));
  v19 = *((_QWORD *)a1 + 1) + *((_DWORD *)a1 + 5) * v15;
  if ( v13 < v3[3] )
  {
    do
    {
      *v18 = *v18 & ~v7 | v7 & ~*(_DWORD *)(v12 + v19);
      v20 = v17 + 1;
      v21 = *((_DWORD *)a1 + 11);
      if ( v17 + 1 == v21 )
        v19 = *((_QWORD *)a1 + 1);
      else
        v19 += *((int *)a1 + 5);
      v17 = 0;
      v18 = (unsigned int *)((char *)v18 + *((int *)a1 + 4));
      ++v13;
      if ( v20 != v21 )
        v17 = v20;
    }
    while ( v13 < *(_DWORD *)(*((_QWORD *)a1 + 3) + 12LL) );
    v11 = v38;
  }
  if ( !v16 )
  {
    v8 += 4;
    v12 += 4;
    goto LABEL_20;
  }
}
