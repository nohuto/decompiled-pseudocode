/*
 * XREFs of ?vPatXorRow8@@YAXPEAU_PATBLTFRAME@@JH@Z @ 0x1401DC5E0
 * Callers:
 *     <none>
 * Callees:
 *     vFetchAndMerge @ 0x1401DCAEC (vFetchAndMerge.c)
 *     vFetchShiftAndMerge @ 0x140343268 (vFetchShiftAndMerge.c)
 */

void __fastcall vPatXorRow8(struct _PATBLTFRAME *a1, int a2, int a3)
{
  _DWORD *v3; // r13
  int v4; // eax
  int v5; // r15d
  __int64 v7; // r14
  int v8; // r9d
  int v9; // edi
  __int64 v10; // r9
  int v11; // r8d
  int v12; // r12d
  int v13; // r8d
  char v14; // al
  __int64 v15; // r12
  __int64 v16; // rcx
  __int64 v17; // r8
  int v18; // eax
  unsigned int v19; // r11d
  unsigned int v20; // r10d
  unsigned int v21; // esi
  unsigned int v22; // ecx
  __int128 v23; // [rsp+20h] [rbp-30h] BYREF
  __int128 v24; // [rsp+30h] [rbp-20h]
  __int64 v25; // [rsp+40h] [rbp-10h]
  __int64 v26; // [rsp+90h] [rbp+40h]
  unsigned int v27; // [rsp+98h] [rbp+48h]

  v3 = (_DWORD *)*((_QWORD *)a1 + 3);
  v25 = 0LL;
  v4 = *((_DWORD *)a1 + 4) * a2;
  v5 = a3;
  v23 = 0LL;
  v24 = 0LL;
  v7 = *(_QWORD *)a1 + v4;
  v8 = a2 - *((_DWORD *)a1 + 9);
  if ( v8 >= 0 )
    v9 = (unsigned int)v8 % *((_DWORD *)a1 + 11);
  else
    v9 = *((_DWORD *)a1 + 11) - (unsigned int)~v8 % *((_DWORD *)a1 + 11) - 1;
  v10 = *((_QWORD *)a1 + 1) + *((_DWORD *)a1 + 5) * v9;
  *((_QWORD *)&v23 + 1) = v10;
  if ( a3 )
  {
    do
    {
      v11 = *((_DWORD *)a1 + 12);
      v12 = v3[1] * v11;
      v13 = *v3 * v11;
      v14 = v12;
      v15 = v12 & 0xFFFFFFFC;
      v16 = v13 & 3;
      v26 = v14 & 3;
      v17 = v13 & 0xFFFFFFFC;
      v18 = v17 - *((_DWORD *)a1 + 8);
      v19 = ~dword_1403625F0[v26];
      v20 = dword_1403625F0[v16];
      v27 = v19;
      if ( v18 >= 0 )
        v21 = (unsigned int)v18 % *((_DWORD *)a1 + 10);
      else
        v21 = *((_DWORD *)a1 + 10) - (unsigned int)~v18 % *((_DWORD *)a1 + 10) - 1;
      if ( (_DWORD)v17 == (_DWORD)v15 )
      {
        LODWORD(v24) = v21;
        *(_DWORD *)(v17 + v7) ^= v20 & v19 & *(_DWORD *)(v21 + v10);
      }
      else
      {
        if ( (_DWORD)v16 )
        {
          LODWORD(v24) = v21;
          *(_DWORD *)(v17 + v7) ^= v20 & *(_DWORD *)(v21 + v10);
          LODWORD(v17) = v17 + 4;
          v21 += 4;
        }
        DWORD2(v24) = (unsigned int)(v15 - v17) >> 2;
        if ( DWORD2(v24) )
        {
          v22 = *((_DWORD *)a1 + 10);
          *(_QWORD *)&v23 = v7 + (unsigned int)v17;
          v21 %= v22;
          *(_QWORD *)&v24 = __PAIR64__(v22, v21);
          HIDWORD(v24) = v22;
          if ( (((unsigned __int8)v22 | (unsigned __int8)v21) & 3) != 0 )
          {
            vFetchShiftAndMerge(&v23);
          }
          else
          {
            HIDWORD(v24) = v22 >> 2;
            vFetchAndMerge(&v23);
          }
          v19 = v27;
          v10 = *((_QWORD *)&v23 + 1);
        }
        if ( (_DWORD)v26 )
        {
          LODWORD(v24) = ((int)v21 + 4 * (unsigned __int64)DWORD2(v24)) % *((unsigned int *)a1 + 10);
          *(_DWORD *)(v15 + v7) ^= v19 & *(_DWORD *)((unsigned int)v24 + v10);
        }
      }
      if ( ++v9 == *((_DWORD *)a1 + 11) )
      {
        v10 = *((_QWORD *)a1 + 1);
        v9 = 0;
      }
      else
      {
        v10 += *((int *)a1 + 5);
      }
      v7 += *((int *)a1 + 4);
      *((_QWORD *)&v23 + 1) = v10;
      v3 += 2;
      --v5;
    }
    while ( v5 );
  }
}
