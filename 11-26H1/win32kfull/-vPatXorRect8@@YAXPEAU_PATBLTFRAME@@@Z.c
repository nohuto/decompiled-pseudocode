/*
 * XREFs of ?vPatXorRect8@@YAXPEAU_PATBLTFRAME@@@Z @ 0x1401DC7D0
 * Callers:
 *     <none>
 * Callees:
 *     vFetchAndMerge @ 0x1401DCAEC (vFetchAndMerge.c)
 *     vFetchShiftAndMerge @ 0x140343268 (vFetchShiftAndMerge.c)
 */

void __fastcall vPatXorRect8(struct _PATBLTFRAME *a1)
{
  _DWORD *v1; // r14
  int v2; // r12d
  int v4; // r9d
  int v5; // r12d
  __int64 v6; // rcx
  unsigned int v7; // r10d
  unsigned int v8; // r12d
  unsigned int v9; // r9d
  int v10; // eax
  unsigned int v11; // r13d
  unsigned int v12; // esi
  int v13; // r8d
  int v14; // eax
  int v15; // edi
  int v16; // r15d
  unsigned int v17; // r8d
  int v18; // r15d
  __int64 v19; // rdx
  int v20; // r14d
  int v21; // eax
  int v22; // ecx
  int v23; // r11d
  _DWORD *v24; // rcx
  __int64 v25; // rdx
  int v26; // r14d
  int v27; // r12d
  __int64 v28; // rax
  __int64 v29; // rcx
  int v30; // r10d
  _DWORD *v31; // r8
  __int64 v32; // r9
  __int64 v33; // rdx
  __int128 v34; // [rsp+20h] [rbp-30h] BYREF
  __int128 v35; // [rsp+30h] [rbp-20h]
  __int64 v36; // [rsp+40h] [rbp-10h]
  unsigned int v37; // [rsp+90h] [rbp+40h]
  __int64 v38; // [rsp+A0h] [rbp+50h]

  v1 = (_DWORD *)*((_QWORD *)a1 + 3);
  v2 = *((_DWORD *)a1 + 12);
  v36 = 0LL;
  v4 = *v1 * v2;
  v5 = v1[2] * v2;
  v34 = 0LL;
  v35 = 0LL;
  v6 = v4 & 3;
  v38 = v5 & 3;
  v7 = dword_1403625F0[v6];
  v8 = v5 & 0xFFFFFFFC;
  v9 = v4 & 0xFFFFFFFC;
  v37 = v8;
  v10 = v9 - *((_DWORD *)a1 + 8);
  v11 = ~dword_1403625F0[v38];
  if ( v10 < 0 )
    v12 = *((_DWORD *)a1 + 10) - (unsigned int)~v10 % *((_DWORD *)a1 + 10) - 1;
  else
    v12 = (unsigned int)v10 % *((_DWORD *)a1 + 10);
  v13 = v1[1];
  v14 = v13 - *((_DWORD *)a1 + 9);
  if ( v14 < 0 )
    v15 = *((_DWORD *)a1 + 11) - (unsigned int)~v14 % *((_DWORD *)a1 + 11) - 1;
  else
    v15 = (unsigned int)v14 % *((_DWORD *)a1 + 11);
  if ( v9 == v8 )
  {
    v7 &= v11;
    v16 = 1;
  }
  else
  {
    v16 = 0;
    if ( !(_DWORD)v6 )
    {
LABEL_7:
      DWORD2(v35) = (v8 - v9) >> 2;
      if ( DWORD2(v35) )
      {
        v17 = *((_DWORD *)a1 + 10);
        v18 = v15;
        HIDWORD(v35) = v17;
        v12 %= v17;
        v19 = *((_QWORD *)a1 + 3);
        *(_QWORD *)&v35 = __PAIR64__(v17, v12);
        v20 = *(_DWORD *)(v19 + 4);
        v21 = *((_DWORD *)a1 + 5) * v15;
        *(_QWORD *)&v34 = *(_QWORD *)a1 + v9 + (__int64)(*((_DWORD *)a1 + 4) * v20);
        *((_QWORD *)&v34 + 1) = *((_QWORD *)a1 + 1) + v21;
        v22 = *(_DWORD *)(v19 + 12);
        if ( (((unsigned __int8)v12 | (unsigned __int8)v17) & 3) != 0 )
        {
          if ( v20 < v22 )
          {
            do
            {
              vFetchShiftAndMerge(&v34);
              if ( ++v18 == *((_DWORD *)a1 + 11) )
              {
                v18 = 0;
                *((_QWORD *)&v34 + 1) = *((_QWORD *)a1 + 1);
              }
              else
              {
                *((_QWORD *)&v34 + 1) += *((int *)a1 + 5);
              }
              ++v20;
              *(_QWORD *)&v34 = *((int *)a1 + 4) + (_QWORD)v34;
              v28 = *((_QWORD *)a1 + 3);
              LODWORD(v35) = v12;
            }
            while ( v20 < *(_DWORD *)(v28 + 12) );
          }
        }
        else
        {
          HIDWORD(v35) = v17 >> 2;
          if ( v20 < v22 )
          {
            do
            {
              vFetchAndMerge(&v34);
              if ( ++v18 == *((_DWORD *)a1 + 11) )
              {
                v18 = 0;
                *((_QWORD *)&v34 + 1) = *((_QWORD *)a1 + 1);
              }
              else
              {
                *((_QWORD *)&v34 + 1) += *((int *)a1 + 5);
              }
              ++v20;
              *(_QWORD *)&v34 = *((int *)a1 + 4) + (_QWORD)v34;
            }
            while ( v20 < *(_DWORD *)(*((_QWORD *)a1 + 3) + 12LL) );
          }
        }
      }
      if ( (_DWORD)v38 )
      {
        v29 = *((_QWORD *)a1 + 3);
        v30 = *(_DWORD *)(v29 + 4);
        v31 = (_DWORD *)(*(_QWORD *)a1 + v8 + (__int64)(*((_DWORD *)a1 + 4) * v30));
        v32 = *((_QWORD *)a1 + 1) + *((_DWORD *)a1 + 5) * v15;
        v33 = (v12 + 4 * DWORD2(v35)) % *((_DWORD *)a1 + 10);
        if ( v30 < *(_DWORD *)(v29 + 12) )
        {
          do
          {
            ++v15;
            *v31 ^= v11 & *(_DWORD *)(v33 + v32);
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
            v31 = (_DWORD *)((char *)v31 + *((int *)a1 + 4));
          }
          while ( v30 < *(_DWORD *)(*((_QWORD *)a1 + 3) + 12LL) );
        }
      }
      return;
    }
  }
  v23 = v15;
  v24 = (_DWORD *)(*(_QWORD *)a1 + v9 + (__int64)(*((_DWORD *)a1 + 4) * v13));
  v25 = *((_QWORD *)a1 + 1) + *((_DWORD *)a1 + 5) * v15;
  if ( v13 < v1[3] )
  {
    do
    {
      v26 = v23 + 1;
      *v24 ^= v7 & *(_DWORD *)(v25 + v12);
      v27 = *((_DWORD *)a1 + 11);
      if ( v23 + 1 == v27 )
        v25 = *((_QWORD *)a1 + 1);
      else
        v25 += *((int *)a1 + 5);
      v23 = 0;
      v24 = (_DWORD *)((char *)v24 + *((int *)a1 + 4));
      ++v13;
      if ( v26 != v27 )
        v23 = v26;
    }
    while ( v13 < *(_DWORD *)(*((_QWORD *)a1 + 3) + 12LL) );
    v8 = v37;
  }
  if ( !v16 )
  {
    v9 += 4;
    v12 += 4;
    goto LABEL_7;
  }
}
