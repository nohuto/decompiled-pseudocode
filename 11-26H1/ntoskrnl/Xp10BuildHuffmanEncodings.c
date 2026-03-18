/*
 * XREFs of Xp10BuildHuffmanEncodings @ 0x14080BA1C
 * Callers:
 *     Xp10BuildAndWriteHuffmanEncodings @ 0x14080A948 (Xp10BuildAndWriteHuffmanEncodings.c)
 *     Xp10BuildAndWriteHuffmanTables @ 0x14080AD24 (Xp10BuildAndWriteHuffmanTables.c)
 * Callees:
 *     memset_0 @ 0x14073D880 (memset_0.c)
 */

__int64 __fastcall Xp10BuildHuffmanEncodings(
        unsigned int *a1,
        __int64 a2,
        unsigned int a3,
        unsigned int a4,
        __int64 a5)
{
  unsigned __int64 v8; // r10
  unsigned __int16 i; // r8
  int v10; // edx
  _WORD *v12; // rcx
  __int64 v13; // r8
  __int16 *v14; // rdx
  __int16 v15; // ax
  __int64 v16; // rdx
  __int64 v17; // r9
  unsigned int *v18; // r11
  __int64 v19; // rdi
  int v20; // eax
  __int16 v21; // r8
  __int64 v22; // rcx
  unsigned __int16 *v23; // r11
  __int64 v24; // rdi
  __int64 v25; // r8
  __int64 v26; // rdx
  __int64 v27; // rcx
  unsigned __int16 *v28; // r11
  __int64 v29; // rdi
  __int64 v30; // r9
  unsigned int v31; // r8d
  __int64 v32; // rcx
  unsigned int *v33; // r12
  unsigned __int64 v34; // rdx
  unsigned int *v35; // r8
  unsigned int *v36; // rcx
  unsigned __int64 v37; // r11
  unsigned __int64 v38; // rsi
  unsigned int *v39; // rdi
  unsigned int *v40; // r9
  unsigned __int64 v41; // rbp
  unsigned int v42; // r9d
  unsigned int v43; // r9d
  unsigned int v44; // r9d
  __int64 v45; // r8
  __int64 v46; // rax
  __int64 v47; // rcx
  __int64 v48; // rax
  unsigned int v49; // ebp
  unsigned int *j; // rcx
  unsigned int v51; // eax
  unsigned int v52; // r8d
  unsigned int v53; // edi
  unsigned __int16 k; // dx
  __int64 v55; // rax
  unsigned int m; // r11d
  unsigned __int16 v57; // r10
  unsigned int v58; // edx
  unsigned int v59; // esi
  unsigned int v60; // r9d
  __int64 v61; // r14
  __int64 v62; // rcx
  unsigned int v63; // [rsp+60h] [rbp+8h]

  memset_0(a1, 0, 0x97E0uLL);
  v8 = (unsigned __int64)a1;
  for ( i = 0; i < a3; ++i )
  {
    v10 = *(_DWORD *)(a2 + 4LL * i);
    if ( v10 )
    {
      *(_DWORD *)v8 = v10;
      ++*((_WORD *)a1 + (unsigned int)(unsigned __int8)v10 + 16909);
      ++*((_WORD *)a1 + (unsigned int)BYTE1(v10) + 17166);
      ++*((_WORD *)a1 + (unsigned int)BYTE2(v10) + 17423);
      *(_QWORD *)(v8 + 8) = 0LL;
      *(_WORD *)(v8 + 16) = i;
      v8 += 24LL;
    }
  }
  if ( v8 > (unsigned __int64)(a1 + 6) )
  {
    v12 = a1 + 8583;
    v13 = 255LL;
    v14 = (__int16 *)a1 + 17165;
    do
    {
      *(v12 - 257) += *(v14 - 257);
      v15 = *v14++;
      *v12++ += v15;
      v12[256] += v14[256];
      --v13;
    }
    while ( v13 );
    v16 = (__int64)(v8 - (_QWORD)a1) / 24;
    v17 = (unsigned int)v16;
    if ( (_DWORD)v16 )
    {
      v18 = a1;
      v19 = (unsigned int)v16;
      do
      {
        v20 = *v18;
        v21 = *((_WORD *)v18 + 8);
        v18 += 6;
        v22 = *((unsigned __int16 *)a1 + (unsigned __int8)v20 + 16908);
        *((_WORD *)a1 + (unsigned __int8)v20 + 16908) = v22 + 1;
        *((_WORD *)a1 + v22 + 17679) = v21;
        --v19;
      }
      while ( v19 );
      v23 = (unsigned __int16 *)a1 + 17679;
      v24 = (unsigned int)v16;
      do
      {
        v25 = *v23++;
        v26 = (unsigned __int8)BYTE1(*(_DWORD *)(a2 + 4 * v25));
        v27 = *((unsigned __int16 *)a1 + v26 + 17165);
        *((_WORD *)a1 + v26 + 17165) = v27 + 1;
        *((_WORD *)a1 + v27 + 18383) = v25;
        --v24;
      }
      while ( v24 );
      v28 = (unsigned __int16 *)a1 + 18383;
      v29 = v17;
      do
      {
        v30 = *v28++;
        v31 = *(_DWORD *)(a2 + 4 * v30);
        v32 = *((unsigned __int16 *)a1 + BYTE2(v31) + 17422);
        *((_WORD *)a1 + BYTE2(v31) + 17422) = v32 + 1;
        v32 *= 3LL;
        LOWORD(a1[2 * v32 + 4]) = v30;
        a1[2 * v32] = v31;
        --v29;
      }
      while ( v29 );
    }
    v33 = a1 + 12;
    while ( 1 )
    {
      *(_QWORD *)(v8 + 8) = a1;
      v34 = v8;
      *(_QWORD *)(v8 + 16) = a1 + 6;
      v35 = v33;
      v36 = (unsigned int *)v8;
      *(_DWORD *)v8 = a1[6] + *a1;
      while ( 1 )
      {
        v37 = v34;
        v38 = v34;
        v39 = v36;
        v40 = v35;
        v41 = v34;
        if ( v35 == (unsigned int *)v8 && v36 == (unsigned int *)v34 )
          break;
        v34 += 24LL;
        if ( v35 == (unsigned int *)v8 || (unsigned __int64)v36 < v34 && *v36 < *v35 )
        {
          v36 += 6;
          v40 = v39;
        }
        else
        {
          v35 += 6;
        }
        *(_QWORD *)(v37 + 32) = v40;
        v42 = *v40;
        *(_DWORD *)v34 = v42;
        if ( v35 == (unsigned int *)v8 || (unsigned __int64)v36 < v34 && *v36 < *v35 )
        {
          *(_QWORD *)(v38 + 40) = v36;
          v43 = *v36 + v42;
          v36 += 6;
        }
        else
        {
          *(_QWORD *)(v38 + 40) = v35;
          v43 = *v35 + v42;
          v35 += 6;
        }
        *(_DWORD *)(v41 + 24) = v43;
      }
      v44 = 0;
      LODWORD(v45) = 0;
      while ( 1 )
      {
        while ( *(_QWORD *)(v34 + 8) )
        {
          ++v44;
          v47 = 2LL * (unsigned int)v45;
          v48 = 2 * ((unsigned int)v45 + 2114LL);
          LODWORD(v45) = v45 + 1;
          a1[2 * v48] = v44;
          *(_QWORD *)&a1[2 * v47 + 8454] = *(_QWORD *)(v34 + 8);
          v34 = *(_QWORD *)(v34 + 16);
        }
        v46 = *(unsigned __int16 *)(v34 + 16);
        *(_DWORD *)(v34 + 8) = v44;
        *((_BYTE *)a1 + v46 + 38176) = v44;
        if ( !(_DWORD)v45 )
          break;
        v45 = (unsigned int)(v45 - 1);
        v34 = *(_QWORD *)&a1[4 * (unsigned int)v45 + 8454];
        v44 = a1[4 * v45 + 8456];
      }
      v49 = a1[2];
      v33 = a1 + 12;
      v63 = v49;
      if ( v49 <= a4 )
        break;
      for ( j = a1; (unsigned __int64)j < v8; j += 6 )
      {
        v51 = *j + 1;
        *((_QWORD *)j + 1) = 0LL;
        *j = v51 >> 1;
      }
    }
    v52 = *(_DWORD *)(v8 - 16);
    v53 = 0;
    for ( k = 0; k < a3; v53 += *(_DWORD *)(a2 + 4 * v55) * *((unsigned __int8 *)a1 + v55 + 38176) )
      v55 = k++;
    for ( m = 0; v52 <= v49; ++v52 )
    {
      v57 = 0;
      if ( a3 )
      {
        do
        {
          if ( *((unsigned __int8 *)a1 + v57 + 38176) == v52 )
          {
            v58 = v52;
            v59 = m;
            v60 = 0;
            if ( v52 > 8 )
            {
              v61 = ((v52 - 9) >> 3) + 1;
              do
              {
                v62 = (unsigned __int8)v59;
                v58 -= 8;
                v59 >>= 8;
                v60 = *((unsigned __int8 *)qword_140035910 + v62) | (v60 << 8);
                --v61;
              }
              while ( v61 );
            }
            if ( v58 )
              v60 = (*((unsigned __int8 *)qword_140035910 + (unsigned __int8)v59) | (v60 << 8)) >> (8 - v58);
            *(_DWORD *)(a5 + 4LL * v57) = ((32 * v60) | *(_DWORD *)(a5 + 4LL * v57) & 0x1F) ^ ((unsigned __int8)v52 ^ (unsigned __int8)((32 * v60) | *(_BYTE *)(a5 + 4LL * v57) & 0x1F)) & 0x1F;
            ++m;
          }
          ++v57;
        }
        while ( v57 < a3 );
        v49 = v63;
      }
      m *= 2;
    }
    return v53;
  }
  else if ( (unsigned int *)v8 == a1 + 6 )
  {
    *(_DWORD *)(a5 + 4LL * *((unsigned __int16 *)a1 + 8)) = 1;
    return *a1;
  }
  else
  {
    return 0LL;
  }
}
