/*
 * XREFs of crc32_z @ 0x180104024
 * Callers:
 *     crc32 @ 0x18010400C (crc32.c)
 * Callees:
 *     crc32_avx512_simd_ @ 0x18010435C (crc32_avx512_simd_.c)
 *     crc32_sse42_simd_ @ 0x180104624 (crc32_sse42_simd_.c)
 *     crc_word @ 0x1801047FC (crc_word.c)
 */

__int64 __fastcall crc32_z(unsigned int a1, _DWORD *a2, unsigned __int64 a3)
{
  unsigned __int64 v3; // r10
  _DWORD *v4; // rbx
  unsigned int v5; // r9d
  unsigned __int64 v6; // rdi
  __int64 v7; // r10
  __int64 v9; // r11
  __int64 v10; // r10
  unsigned int v11; // r9d
  __int64 v12; // rax
  int v13; // esi
  int v14; // ebp
  int v15; // r14d
  int v16; // r15d
  unsigned int v17; // r9d
  int v18; // r12d
  unsigned int v19; // esi
  unsigned int v20; // ebp
  unsigned int v21; // r15d
  unsigned int v22; // ecx
  unsigned __int64 v23; // r13
  unsigned __int64 v24; // r11
  unsigned __int64 v25; // r10
  unsigned __int64 v26; // rbx
  __int64 v27; // rdi
  char v28; // r8
  char v29; // cl
  __int64 v30; // rcx
  bool v31; // zf
  unsigned int v32; // eax
  unsigned int v33; // eax
  unsigned int v34; // eax
  unsigned int v35; // eax
  unsigned __int64 v36; // rdx
  __int64 v37; // r8
  __int64 v38; // rax
  __int64 v39; // rax
  unsigned __int64 v40; // [rsp+28h] [rbp-40h]
  _DWORD *v41; // [rsp+78h] [rbp+10h]
  unsigned __int64 v42; // [rsp+88h] [rbp+20h]

  v3 = a3;
  v4 = a2;
  v5 = a1;
  if ( a2 )
  {
    if ( x86_cpu_enable_avx512 && a3 >= 0x100 )
    {
      v6 = a3 & 0xFFFFFFFFFFFFFFC0uLL;
      v5 = ~(unsigned int)crc32_avx512_simd_(a2, a3 & 0xFFFFFFFFFFFFFFC0uLL, ~a1);
      v3 = v7 - v6;
      if ( !v3 )
        return v5;
      v4 = (_DWORD *)((char *)v4 + v6);
    }
    if ( x86_cpu_enable_simd && v3 >= 0x40 )
    {
      v5 = ~(unsigned int)crc32_sse42_simd_(v4, v3 & 0xFFFFFFFFFFFFFFF0uLL, ~v5);
      v3 = v10 - v9;
      if ( !v3 )
        return v5;
      v4 = (_DWORD *)((char *)v4 + v9);
    }
    v11 = ~v5;
    if ( v3 >= 0x17 )
    {
      do
      {
        if ( ((unsigned __int8)v4 & 3) == 0 )
          break;
        v12 = (unsigned __int8)(v11 ^ *(_BYTE *)v4);
        v4 = (_DWORD *)((char *)v4 + 1);
        v11 = dword_180182950[v12] ^ (v11 >> 8);
        --v3;
      }
      while ( v3 );
      v13 = 0;
      v14 = 0;
      v15 = 0;
      v16 = 0;
      v42 = v3 / 0x14 - 1;
      if ( v3 / 0x14 != 1 )
      {
        do
        {
          v17 = *v4 ^ v11;
          v18 = 8;
          v19 = v4[1] ^ v13;
          v20 = v4[2] ^ v14;
          v21 = v4[4] ^ v16;
          v22 = v4[3] ^ v15;
          v23 = v17;
          v24 = v19;
          v25 = v20;
          v11 = dword_18018F990[(unsigned __int8)v17];
          v40 = v21;
          v41 = v4 + 5;
          v26 = v22;
          v13 = dword_18018F990[(unsigned __int8)v19];
          v14 = dword_18018F990[(unsigned __int8)v20];
          v15 = dword_18018F990[(unsigned __int8)v22];
          v16 = dword_18018F990[(unsigned __int8)v21];
          v27 = 256LL;
          do
          {
            v28 = v18;
            v29 = v18;
            v18 += 8;
            v11 ^= dword_18018F990[v27 + (unsigned __int8)(v23 >> v29)];
            v13 ^= dword_18018F990[v27 + (unsigned __int8)(v24 >> v28)];
            v14 ^= dword_18018F990[v27 + (unsigned __int8)(v25 >> v28)];
            v15 ^= dword_18018F990[v27 + (unsigned __int8)(v26 >> v28)];
            v30 = v27 + (unsigned __int8)(v40 >> v28);
            v27 += 256LL;
            v16 ^= dword_18018F990[v30];
          }
          while ( v18 != 32 );
          v31 = v42-- == 1;
          v4 = v41;
        }
        while ( !v31 );
      }
      v32 = crc_word(*v4 ^ v11);
      v33 = crc_word(v13 ^ v4[1] ^ v32);
      v34 = crc_word(v14 ^ v4[2] ^ v33);
      v35 = crc_word(v15 ^ v4[3] ^ v34);
      v11 = crc_word(v16 ^ v4[4] ^ v35);
      v4 += 5;
    }
    if ( v3 >= 8 )
    {
      v36 = v3 >> 3;
      v3 += -8LL * (v3 >> 3);
      do
      {
        v37 = 8LL;
        do
        {
          v38 = (unsigned __int8)(v11 ^ *(_BYTE *)v4);
          v4 = (_DWORD *)((char *)v4 + 1);
          v11 = dword_180182950[v38] ^ (v11 >> 8);
          --v37;
        }
        while ( v37 );
        --v36;
      }
      while ( v36 );
    }
    for ( ; v3; --v3 )
    {
      v39 = (unsigned __int8)(v11 ^ *(_BYTE *)v4);
      v4 = (_DWORD *)((char *)v4 + 1);
      v11 = dword_180182950[v39] ^ (v11 >> 8);
    }
    return ~v11;
  }
  return 0LL;
}
