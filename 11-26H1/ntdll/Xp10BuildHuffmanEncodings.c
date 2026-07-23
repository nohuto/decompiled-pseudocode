/*
 * XREFs of Xp10BuildHuffmanEncodings @ 0x180115150
 * Callers:
 *     Xp10BuildAndWriteHuffmanTables @ 0x180122D8C (Xp10BuildAndWriteHuffmanTables.c)
 *     Xp10BuildAndWriteHuffmanEncodings @ 0x1801515CC (Xp10BuildAndWriteHuffmanEncodings.c)
 * Callees:
 *     memset$thunk$772440563353939046 @ 0x18016F030 (memset$thunk$772440563353939046.c)
 */

__int64 __fastcall Xp10BuildHuffmanEncodings(
        unsigned int *a1,
        __int64 a2,
        unsigned int a3,
        unsigned int a4,
        __int64 a5)
{
  unsigned __int64 v9; // r10
  unsigned __int16 i; // r8
  int v11; // edx
  _WORD *v13; // rcx
  __int64 v14; // r8
  __int16 *v15; // rdx
  __int16 v16; // ax
  __int64 v17; // rdx
  __int64 v18; // r9
  unsigned __int8 *v19; // r11
  __int64 v20; // rdi
  __int64 v21; // rdx
  __int16 v22; // r8
  __int64 v23; // rcx
  unsigned __int16 *v24; // r11
  __int64 v25; // rdi
  __int64 v26; // r8
  __int64 v27; // rdx
  __int64 v28; // rcx
  unsigned __int16 *v29; // r11
  __int64 v30; // rdi
  __int64 v31; // r9
  unsigned int v32; // r8d
  __int64 v33; // rcx
  int *v34; // r8
  unsigned __int64 v35; // rdx
  int *v36; // rcx
  int *v37; // r9
  int *v38; // r11
  int v39; // r9d
  int v40; // r9d
  unsigned int v41; // r9d
  __int64 v42; // r8
  __int64 v43; // rax
  __int64 v44; // rcx
  __int64 v45; // rax
  unsigned int v46; // ebp
  unsigned int *j; // rcx
  unsigned int v48; // eax
  unsigned int v49; // r8d
  unsigned int v50; // edi
  unsigned __int16 k; // dx
  __int64 v52; // rax
  unsigned int m; // r11d
  unsigned __int16 v54; // r10
  unsigned int v55; // edx
  unsigned int v56; // esi
  unsigned int v57; // r9d
  __int64 v58; // r14
  __int64 v59; // rcx
  unsigned int v60; // [rsp+60h] [rbp+18h]

  memset_thunk_772440563353939046(a1, 0, 0x97E0uLL);
  v9 = (unsigned __int64)a1;
  for ( i = 0; i < a3; ++i )
  {
    v11 = *(_DWORD *)(a2 + 4LL * i);
    if ( v11 )
    {
      *(_DWORD *)v9 = v11;
      ++*((_WORD *)a1 + (unsigned int)(unsigned __int8)v11 + 16909);
      ++*((_WORD *)a1 + (unsigned int)BYTE1(v11) + 17166);
      ++*((_WORD *)a1 + (unsigned int)BYTE2(v11) + 17423);
      *(_QWORD *)(v9 + 8) = 0LL;
      *(_WORD *)(v9 + 16) = i;
      v9 += 24LL;
    }
  }
  if ( v9 > (unsigned __int64)(a1 + 6) )
  {
    v13 = a1 + 8583;
    v14 = 255LL;
    v15 = (__int16 *)a1 + 17165;
    do
    {
      *(v13 - 257) += *(v15 - 257);
      v16 = *v15++;
      *v13++ += v16;
      v13[256] += v15[256];
      --v14;
    }
    while ( v14 );
    v17 = (__int64)(v9 - (_QWORD)a1) / 24;
    v18 = (unsigned int)v17;
    if ( (_DWORD)v17 )
    {
      v19 = (unsigned __int8 *)a1;
      v20 = (unsigned int)v17;
      do
      {
        v21 = *v19;
        v22 = *((_WORD *)v19 + 8);
        v19 += 24;
        v23 = *((unsigned __int16 *)a1 + v21 + 16908);
        *((_WORD *)a1 + v21 + 16908) = v23 + 1;
        *((_WORD *)a1 + v23 + 17679) = v22;
        --v20;
      }
      while ( v20 );
      v24 = (unsigned __int16 *)a1 + 17679;
      v25 = v18;
      do
      {
        v26 = *v24++;
        v27 = (unsigned __int8)BYTE1(*(_DWORD *)(a2 + 4 * v26));
        v28 = *((unsigned __int16 *)a1 + v27 + 17165);
        *((_WORD *)a1 + v27 + 17165) = v28 + 1;
        *((_WORD *)a1 + v28 + 18383) = v26;
        --v25;
      }
      while ( v25 );
      v29 = (unsigned __int16 *)a1 + 18383;
      v30 = v18;
      do
      {
        v31 = *v29++;
        v32 = *(_DWORD *)(a2 + 4 * v31);
        v33 = *((unsigned __int16 *)a1 + BYTE2(v32) + 17422);
        *((_WORD *)a1 + BYTE2(v32) + 17422) = v33 + 1;
        v33 *= 3LL;
        LOWORD(a1[2 * v33 + 4]) = v31;
        a1[2 * v33] = v32;
        --v30;
      }
      while ( v30 );
    }
    while ( 1 )
    {
      *(_QWORD *)(v9 + 8) = a1;
      v34 = (int *)(a1 + 12);
      *(_QWORD *)(v9 + 16) = a1 + 6;
      v35 = v9;
      v36 = (int *)v9;
      *(_DWORD *)v9 = a1[6] + *a1;
      while ( 1 )
      {
        v37 = v36;
        v38 = v34;
        if ( v34 == (int *)v9 && v36 == (int *)v35 )
          break;
        v35 += 24LL;
        if ( v34 == (int *)v9 || (unsigned __int64)v36 < v35 && *v36 < (unsigned int)*v34 )
        {
          v36 += 6;
          v38 = v37;
        }
        else
        {
          v34 += 6;
        }
        *(_QWORD *)(v35 + 8) = v38;
        v39 = *v38;
        *(_DWORD *)v35 = *v38;
        if ( v34 == (int *)v9 || (unsigned __int64)v36 < v35 && *v36 < (unsigned int)*v34 )
        {
          *(_QWORD *)(v35 + 16) = v36;
          v40 = *v36 + v39;
          v36 += 6;
        }
        else
        {
          *(_QWORD *)(v35 + 16) = v34;
          v40 = *v34 + v39;
          v34 += 6;
        }
        *(_DWORD *)v35 = v40;
      }
      v41 = 0;
      LODWORD(v42) = 0;
      while ( 1 )
      {
        while ( *(_QWORD *)(v35 + 8) )
        {
          ++v41;
          v44 = 2LL * (unsigned int)v42;
          v45 = 2 * ((unsigned int)v42 + 2114LL);
          LODWORD(v42) = v42 + 1;
          a1[2 * v45] = v41;
          *(_QWORD *)&a1[2 * v44 + 8454] = *(_QWORD *)(v35 + 8);
          v35 = *(_QWORD *)(v35 + 16);
        }
        v43 = *(unsigned __int16 *)(v35 + 16);
        *(_DWORD *)(v35 + 8) = v41;
        *((_BYTE *)a1 + v43 + 38176) = v41;
        if ( !(_DWORD)v42 )
          break;
        v42 = (unsigned int)(v42 - 1);
        v35 = *(_QWORD *)&a1[4 * (unsigned int)v42 + 8454];
        v41 = a1[4 * v42 + 8456];
      }
      v46 = a1[2];
      v60 = v46;
      if ( v46 <= a4 )
        break;
      for ( j = a1; (unsigned __int64)j < v9; j += 6 )
      {
        v48 = *j + 1;
        *((_QWORD *)j + 1) = 0LL;
        *j = v48 >> 1;
      }
    }
    v49 = *(_DWORD *)(v9 - 16);
    v50 = 0;
    for ( k = 0; k < a3; v50 += *(_DWORD *)(a2 + 4 * v52) * *((unsigned __int8 *)a1 + v52 + 38176) )
      v52 = k++;
    for ( m = 0; v49 <= v46; ++v49 )
    {
      v54 = 0;
      if ( a3 )
      {
        do
        {
          if ( *((unsigned __int8 *)a1 + v54 + 38176) == v49 )
          {
            v55 = v49;
            v56 = m;
            v57 = 0;
            if ( v49 > 8 )
            {
              v58 = ((v49 - 9) >> 3) + 1;
              do
              {
                v59 = (unsigned __int8)v56;
                v55 -= 8;
                v56 >>= 8;
                v57 = byte_18018F890[v59] | (v57 << 8);
                --v58;
              }
              while ( v58 );
            }
            if ( v55 )
              v57 = (byte_18018F890[(unsigned __int8)v56] | (v57 << 8)) >> (8 - v55);
            *(_DWORD *)(a5 + 4LL * v54) = ((32 * v57) | *(_DWORD *)(a5 + 4LL * v54) & 0x1F) ^ ((unsigned __int8)v49 ^ (unsigned __int8)((32 * v57) | *(_BYTE *)(a5 + 4LL * v54) & 0x1F)) & 0x1F;
            ++m;
          }
          ++v54;
        }
        while ( v54 < a3 );
        v46 = v60;
      }
      m *= 2;
    }
    return v50;
  }
  else if ( (unsigned int *)v9 == a1 + 6 )
  {
    *(_DWORD *)(a5 + 4LL * *((unsigned __int16 *)a1 + 8)) = 1;
    return *a1;
  }
  else
  {
    return 0LL;
  }
}
