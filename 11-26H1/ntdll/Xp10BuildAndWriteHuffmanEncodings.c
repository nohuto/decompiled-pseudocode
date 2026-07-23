/*
 * XREFs of Xp10BuildAndWriteHuffmanEncodings @ 0x1801515CC
 * Callers:
 *     Xp10ExecuteHuffmanEncode @ 0x180151FCC (Xp10ExecuteHuffmanEncode.c)
 * Callees:
 *     Xp10BuildHuffmanEncodings @ 0x180115150 (Xp10BuildHuffmanEncodings.c)
 *     Xp10BuildAndWriteHuffmanTables @ 0x180122D8C (Xp10BuildAndWriteHuffmanTables.c)
 *     memset$thunk$772440563353939046 @ 0x18016F030 (memset$thunk$772440563353939046.c)
 */

__int64 __fastcall Xp10BuildAndWriteHuffmanEncodings(
        unsigned int *a1,
        __int64 a2,
        unsigned int a3,
        __int64 a4,
        unsigned int *a5,
        __int64 a6,
        unsigned int *a7)
{
  unsigned int v7; // r9d
  int v11; // edx
  unsigned int v12; // ecx
  unsigned int v13; // ebx
  _DWORD *v14; // rax
  __int64 v15; // r8
  int v16; // r8d
  int v17; // r14d
  _DWORD *v18; // rdx
  __int64 v19; // rcx
  int v20; // r14d
  __int64 v21; // r12
  unsigned int v22; // edi
  int v23; // r15d
  unsigned int v24; // r9d
  unsigned int v25; // ebp
  _BYTE *v26; // r8
  unsigned int v27; // r13d
  __int64 v28; // rax
  __int64 v29; // rax
  _BYTE *v30; // r8
  unsigned int v31; // edx
  unsigned __int64 v32; // rcx
  __int64 result; // rax
  unsigned int v34; // r14d
  unsigned int v35; // r15d
  __int64 v36; // r8
  unsigned int *v37; // r10
  unsigned int v38; // edx
  unsigned int v39; // r9d
  unsigned int v40; // r11d
  __int64 v41; // r12
  __int64 v42; // rcx
  unsigned int *v43; // r11
  unsigned int v44; // edx
  unsigned int v45; // r10d
  unsigned int v46; // r9d
  __int64 v47; // r14
  __int64 v48; // rcx
  _BYTE *v49; // rbx
  void *v50; // rcx
  unsigned int v51; // edx
  __int64 v52; // rax
  _BYTE *v53; // rbx
  unsigned __int64 v54; // rcx
  unsigned int v55; // [rsp+30h] [rbp-58h]
  unsigned int v56; // [rsp+34h] [rbp-54h]
  unsigned int v58; // [rsp+A0h] [rbp+18h]
  unsigned int v59; // [rsp+A8h] [rbp+20h]

  _BitScanReverse(&v7, a3);
  v58 = v7;
  v11 = 0;
  v55 = v7 + 1;
  v12 = 0;
  v13 = (1 << (v7 + 1)) - a3;
  if ( v13 )
  {
    v14 = (_DWORD *)a2;
    v15 = v13;
    v12 = v13;
    do
    {
      v11 += *v14++;
      --v15;
    }
    while ( v15 );
  }
  v16 = 0;
  v17 = v11 * v7;
  if ( v12 < a3 )
  {
    v18 = (_DWORD *)(a2 + 4LL * v12);
    v19 = a3 - v12;
    do
    {
      v16 += *v18++;
      --v19;
    }
    while ( v19 );
  }
  v20 = v16 * (v7 + 1) + v17;
  v21 = a6;
  v22 = 2;
  v23 = Xp10BuildHuffmanEncodings(a1, a2, a3, 0x1Bu, (__int64)a5);
  v24 = 2;
  v25 = *(_DWORD *)(a6 + 8);
  v26 = (_BYTE *)(((unsigned __int64)v25 >> 3) + *(_QWORD *)a6);
  v27 = 8 - (v25 & 7);
  if ( v25 + 2 <= *(_DWORD *)(a6 + 12) || (v24 = *(_DWORD *)(a6 + 12) - v25) != 0 )
  {
    v28 = v27;
    if ( v27 >= v24 )
      v28 = v24;
    *v26 |= (byte_180181FE0[4 * v28] & 2) << (v25 & 7);
    v29 = v24 - (unsigned int)v28;
    v30 = v26 + 1;
    v31 = 2u >> v27;
    if ( (unsigned int)v29 >= 8 )
    {
      v32 = (unsigned __int64)(unsigned int)v29 >> 3;
      do
      {
        *v30 = v31;
        v29 = (unsigned int)(v29 - 8);
        v31 >>= 8;
        ++v30;
        --v32;
      }
      while ( v32 );
    }
    if ( (_DWORD)v29 )
      *v30 |= (unsigned __int8)v31 & byte_180181FE0[4 * v29];
    *(_DWORD *)(a6 + 8) = v24 + v25;
  }
  result = Xp10BuildAndWriteHuffmanTables(a1, (__int64)a5, a3, a6);
  if ( (int)result >= 0 )
  {
    v34 = v20 + 2;
    v59 = v34;
    v35 = *(_DWORD *)(a6 + 8) - v25 + v23;
    v56 = *(_DWORD *)(a6 + 8) - v25;
    if ( v34 > v35 )
    {
      v34 = v35;
    }
    else
    {
      v36 = 0LL;
      if ( v13 )
      {
        v37 = a5;
        do
        {
          v38 = 0;
          v39 = v58;
          v40 = v36;
          if ( v58 > 8 )
          {
            v41 = ((v58 - 9) >> 3) + 1;
            do
            {
              v42 = (unsigned __int8)v40;
              v39 -= 8;
              v40 >>= 8;
              v38 = byte_18018F890[v42] | (v38 << 8);
              --v41;
            }
            while ( v41 );
          }
          if ( v39 )
            v38 = (byte_18018F890[(unsigned __int8)v40] | (v38 << 8)) >> (8 - v39);
          v36 = (unsigned int)(v36 + 1);
          *v37 = ((32 * v38) | *v37 & 0x1F) ^ ((unsigned __int8)v58 ^ (unsigned __int8)((32 * v38) | *(_BYTE *)v37 & 0x1F)) & 0x1F;
          ++v37;
        }
        while ( (unsigned int)v36 < v13 );
        v21 = a6;
      }
      if ( (unsigned int)v36 < a3 )
      {
        v43 = &a5[v36];
        do
        {
          v44 = 0;
          v45 = v36 + v13;
          v46 = v55;
          if ( v55 > 8 )
          {
            v47 = ((v55 - 9) >> 3) + 1;
            do
            {
              v48 = (unsigned __int8)v45;
              v46 -= 8;
              v45 >>= 8;
              v44 = byte_18018F890[v48] | (v44 << 8);
              --v47;
            }
            while ( v47 );
          }
          if ( v46 )
            v44 = (byte_18018F890[(unsigned __int8)v45] | (v44 << 8)) >> (8 - v46);
          LODWORD(v36) = v36 + 1;
          *v43 = ((32 * v44) | *v43 & 0x1F) ^ ((unsigned __int8)((32 * v44) | *(_BYTE *)v43 & 0x1F) ^ (unsigned __int8)v55) & 0x1F;
          ++v43;
        }
        while ( (unsigned int)v36 < a3 );
        v21 = a6;
        v34 = v59;
      }
      v49 = (_BYTE *)(*(_QWORD *)v21 + ((unsigned __int64)v25 >> 3));
      v50 = (void *)(*(_QWORD *)v21 + ((unsigned __int64)(v25 + 7) >> 3));
      *v49 &= byte_180181FE0[4 * (v25 & 7)];
      memset_thunk_772440563353939046(v50, 0, (unsigned __int64)(v56 + 7) >> 3);
      *(_DWORD *)(v21 + 8) = v25;
      if ( v25 + 2 <= *(_DWORD *)(v21 + 12) || (v22 = *(_DWORD *)(v21 + 12) - v25) != 0 )
      {
        if ( v27 >= v22 )
          v27 = v22;
        v51 = 0;
        v52 = v22 - v27;
        v53 = v49 + 1;
        if ( (unsigned int)v52 >= 8 )
        {
          v54 = (unsigned __int64)(unsigned int)v52 >> 3;
          do
          {
            *v53 = v51;
            v52 = (unsigned int)(v52 - 8);
            v51 >>= 8;
            ++v53;
            --v54;
          }
          while ( v54 );
        }
        if ( (_DWORD)v52 )
          *v53 |= (unsigned __int8)v51 & byte_180181FE0[4 * v52];
        *(_DWORD *)(v21 + 8) = v22 + v25;
      }
    }
    *a7 = v34;
    return 0LL;
  }
  return result;
}
