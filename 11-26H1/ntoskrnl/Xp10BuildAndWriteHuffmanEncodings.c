/*
 * XREFs of Xp10BuildAndWriteHuffmanEncodings @ 0x1408103D8
 * Callers:
 *     Xp10ExecuteHuffmanEncode @ 0x14081277C (Xp10ExecuteHuffmanEncode.c)
 * Callees:
 *     memset_0 @ 0x140742480 (memset_0.c)
 *     Xp10BuildAndWriteHuffmanTables @ 0x1408107B4 (Xp10BuildAndWriteHuffmanTables.c)
 *     Xp10BuildHuffmanEncodings @ 0x1408114AC (Xp10BuildHuffmanEncodings.c)
 */

__int64 __fastcall Xp10BuildAndWriteHuffmanEncodings(
        __int64 a1,
        _DWORD *a2,
        unsigned int a3,
        __int64 a4,
        unsigned int *a5,
        __int64 a6,
        unsigned int *a7)
{
  unsigned int v7; // r9d
  int v8; // r11d
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
  unsigned int v26; // eax
  _BYTE *v27; // r8
  unsigned int v28; // r13d
  __int64 v29; // rax
  __int64 v30; // rax
  _BYTE *v31; // r8
  unsigned int v32; // edx
  unsigned __int64 v33; // rcx
  __int64 result; // rax
  unsigned int v35; // r14d
  unsigned int v36; // r15d
  __int64 v37; // r8
  unsigned int *v38; // r10
  unsigned int v39; // edx
  unsigned int v40; // r9d
  unsigned int v41; // r11d
  __int64 v42; // r12
  __int64 v43; // rcx
  unsigned int *v44; // r11
  unsigned int v45; // edx
  unsigned int v46; // r10d
  unsigned int v47; // r9d
  __int64 v48; // r14
  __int64 v49; // rcx
  _BYTE *v50; // rbx
  void *v51; // rcx
  unsigned int v52; // eax
  unsigned int v53; // edx
  __int64 v54; // rax
  _BYTE *v55; // rbx
  unsigned __int64 v56; // rcx
  unsigned int v57; // [rsp+30h] [rbp-58h]
  unsigned int v58; // [rsp+34h] [rbp-54h]
  unsigned int v60; // [rsp+A0h] [rbp+18h]
  unsigned int v61; // [rsp+A8h] [rbp+20h]

  _BitScanReverse(&v7, a3);
  v8 = a1;
  v60 = v7;
  v11 = 0;
  v57 = v7 + 1;
  v12 = 0;
  v13 = (1 << (v7 + 1)) - a3;
  if ( v13 )
  {
    v14 = a2;
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
    v18 = &a2[v12];
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
  v23 = Xp10BuildHuffmanEncodings(v8, (_DWORD)a2, a3, 27, (__int64)a5);
  v24 = 2;
  v25 = *(_DWORD *)(a6 + 8);
  v26 = *(_DWORD *)(a6 + 12);
  v27 = (_BYTE *)(((unsigned __int64)v25 >> 3) + *(_QWORD *)a6);
  v28 = 8 - (v25 & 7);
  if ( v25 + 2 <= v26 || (v24 = v26 - v25, v26 != v25) )
  {
    v29 = v28;
    if ( v28 >= v24 )
      v29 = v24;
    *v27 |= (byte_140035FA0[4 * v29] & 2) << (v25 & 7);
    v30 = v24 - (unsigned int)v29;
    v31 = v27 + 1;
    v32 = 2u >> v28;
    if ( (unsigned int)v30 >= 8 )
    {
      v33 = (unsigned __int64)(unsigned int)v30 >> 3;
      do
      {
        *v31 = v32;
        v30 = (unsigned int)(v30 - 8);
        v32 >>= 8;
        ++v31;
        --v33;
      }
      while ( v33 );
    }
    if ( (_DWORD)v30 )
      *v31 |= (unsigned __int8)v32 & byte_140035FA0[4 * v30];
    *(_DWORD *)(a6 + 8) = v24 + v25;
  }
  result = Xp10BuildAndWriteHuffmanTables(a1, a5, a3, a6);
  if ( (int)result >= 0 )
  {
    v35 = v20 + 2;
    v61 = v35;
    v36 = *(_DWORD *)(a6 + 8) - v25 + v23;
    v58 = *(_DWORD *)(a6 + 8) - v25;
    if ( v35 > v36 )
    {
      v35 = v36;
    }
    else
    {
      v37 = 0LL;
      if ( v13 )
      {
        v38 = a5;
        do
        {
          v39 = 0;
          v40 = v60;
          v41 = v37;
          if ( v60 > 8 )
          {
            v42 = ((v60 - 9) >> 3) + 1;
            do
            {
              v43 = (unsigned __int8)v41;
              v40 -= 8;
              v41 >>= 8;
              v39 = *((unsigned __int8 *)qword_140035EA0 + v43) | (v39 << 8);
              --v42;
            }
            while ( v42 );
          }
          if ( v40 )
            v39 = (*((unsigned __int8 *)qword_140035EA0 + (unsigned __int8)v41) | (v39 << 8)) >> (8 - v40);
          v37 = (unsigned int)(v37 + 1);
          *v38 = ((32 * v39) | *v38 & 0x1F) ^ ((unsigned __int8)v60 ^ (unsigned __int8)((32 * v39) | *(_BYTE *)v38 & 0x1F)) & 0x1F;
          ++v38;
        }
        while ( (unsigned int)v37 < v13 );
        v21 = a6;
      }
      if ( (unsigned int)v37 < a3 )
      {
        v44 = &a5[v37];
        do
        {
          v45 = 0;
          v46 = v37 + v13;
          v47 = v57;
          if ( v57 > 8 )
          {
            v48 = ((v57 - 9) >> 3) + 1;
            do
            {
              v49 = (unsigned __int8)v46;
              v47 -= 8;
              v46 >>= 8;
              v45 = *((unsigned __int8 *)qword_140035EA0 + v49) | (v45 << 8);
              --v48;
            }
            while ( v48 );
          }
          if ( v47 )
            v45 = (*((unsigned __int8 *)qword_140035EA0 + (unsigned __int8)v46) | (v45 << 8)) >> (8 - v47);
          LODWORD(v37) = v37 + 1;
          *v44 = (*v44 & 0x1F | (32 * v45)) ^ ((*(_BYTE *)v44 & 0x1F | (unsigned __int8)(32 * v45)) ^ (unsigned __int8)v57) & 0x1F;
          ++v44;
        }
        while ( (unsigned int)v37 < a3 );
        v21 = a6;
        v35 = v61;
      }
      v50 = (_BYTE *)(*(_QWORD *)v21 + ((unsigned __int64)v25 >> 3));
      v51 = (void *)(*(_QWORD *)v21 + ((unsigned __int64)(v25 + 7) >> 3));
      *v50 &= byte_140035FA0[4 * (v25 & 7)];
      memset_0(v51, 0, (unsigned __int64)(v58 + 7) >> 3);
      v52 = *(_DWORD *)(v21 + 12);
      *(_DWORD *)(v21 + 8) = v25;
      if ( v25 + 2 <= v52 || (v22 = v52 - v25, v52 != v25) )
      {
        if ( v28 >= v22 )
          v28 = v22;
        v53 = 0;
        v54 = v22 - v28;
        v55 = v50 + 1;
        if ( (unsigned int)v54 >= 8 )
        {
          v56 = (unsigned __int64)(unsigned int)v54 >> 3;
          do
          {
            *v55 = v53;
            v54 = (unsigned int)(v54 - 8);
            v53 >>= 8;
            ++v55;
            --v56;
          }
          while ( v56 );
        }
        if ( (_DWORD)v54 )
          *v55 |= (unsigned __int8)v53 & byte_140035FA0[4 * v54];
        *(_DWORD *)(v21 + 8) = v22 + v25;
      }
    }
    *a7 = v35;
    return 0LL;
  }
  return result;
}
