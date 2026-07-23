/*
 * XREFs of crc32_z @ 0x14047DD70
 * Callers:
 *     crc32 @ 0x14047DD24 (crc32.c)
 *     RtlComputeCrc32 @ 0x14047DD50 (RtlComputeCrc32.c)
 * Callees:
 *     crc_word @ 0x14047E084 (crc_word.c)
 *     crc32_sse42_simd_ @ 0x14047E0AC (crc32_sse42_simd_.c)
 */

__int64 __fastcall crc32_z(unsigned int a1, _DWORD *a2, unsigned __int64 a3)
{
  unsigned __int64 v3; // r10
  _DWORD *v4; // r11
  unsigned int v5; // r9d
  unsigned int v6; // r9d
  unsigned __int64 v7; // rdx
  __int64 v8; // r8
  __int64 v9; // rax
  __int64 v10; // rax
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
  unsigned __int64 v24; // r10
  unsigned __int64 v25; // rbx
  unsigned __int64 v26; // r11
  __int64 v27; // rdi
  char v28; // r8
  char v29; // cl
  __int64 v30; // rcx
  bool v31; // zf
  unsigned int v32; // eax
  __int64 v33; // r11
  unsigned int v34; // eax
  __int64 v35; // r11
  unsigned int v36; // eax
  __int64 v37; // r11
  unsigned int v38; // eax
  __int64 v39; // r11
  __int64 v40; // r11
  unsigned __int64 v41; // rbx
  __int64 v42; // r11
  __int64 v43; // r10
  unsigned __int64 v44; // [rsp+28h] [rbp-40h]
  _DWORD *v45; // [rsp+78h] [rbp+10h]
  unsigned __int64 v46; // [rsp+88h] [rbp+20h]

  v3 = a3;
  v4 = a2;
  v5 = a1;
  if ( a2 )
  {
    if ( a3 >= 0x40 && HIDWORD(RtlpBootStatHandleLock.StackLimit) )
    {
      v41 = a3 & 0xFFFFFFFFFFFFFFF0uLL;
      v5 = ~(unsigned int)crc32_sse42_simd_(a2, a3 & 0xFFFFFFFFFFFFFFF0uLL, ~a1);
      v3 = v43 - v41;
      if ( !v3 )
        return v5;
      v4 = (_DWORD *)(v41 + v42);
    }
    v6 = ~v5;
    if ( v3 >= 0x17 )
    {
      do
      {
        if ( ((unsigned __int8)v4 & 3) == 0 )
          break;
        v12 = (unsigned __int8)(v6 ^ *(_BYTE *)v4);
        v4 = (_DWORD *)((char *)v4 + 1);
        v6 = dword_140019F00[v12] ^ (v6 >> 8);
        --v3;
      }
      while ( v3 );
      v13 = 0;
      v14 = 0;
      v15 = 0;
      v16 = 0;
      v46 = v3 / 0x14 - 1;
      if ( v3 / 0x14 != 1 )
      {
        do
        {
          v17 = *v4 ^ v6;
          v18 = 8;
          v19 = v4[1] ^ v13;
          v20 = v4[2] ^ v14;
          v21 = v4[4] ^ v16;
          v22 = v4[3] ^ v15;
          v23 = v17;
          v24 = v19;
          v25 = v20;
          v6 = dword_140035FD0[(unsigned __int8)v17];
          v44 = v21;
          v45 = v4 + 5;
          v26 = v22;
          v13 = dword_140035FD0[(unsigned __int8)v19];
          v14 = dword_140035FD0[(unsigned __int8)v20];
          v15 = dword_140035FD0[(unsigned __int8)v22];
          v16 = dword_140035FD0[(unsigned __int8)v21];
          v27 = 256LL;
          do
          {
            v28 = v18;
            v29 = v18;
            v18 += 8;
            v6 ^= dword_140035FD0[v27 + (unsigned __int8)(v23 >> v29)];
            v13 ^= dword_140035FD0[v27 + (unsigned __int8)(v24 >> v28)];
            v14 ^= dword_140035FD0[v27 + (unsigned __int8)(v25 >> v28)];
            v15 ^= dword_140035FD0[v27 + (unsigned __int8)(v26 >> v28)];
            v30 = v27 + (unsigned __int8)(v44 >> v28);
            v27 += 256LL;
            v16 ^= dword_140035FD0[v30];
          }
          while ( v18 != 32 );
          v31 = v46-- == 1;
          v4 = v45;
        }
        while ( !v31 );
      }
      v32 = crc_word(*v4 ^ v6);
      v34 = crc_word(v13 ^ *(_DWORD *)(v33 + 4) ^ v32);
      v36 = crc_word(v14 ^ *(_DWORD *)(v35 + 8) ^ v34);
      v38 = crc_word(v15 ^ *(_DWORD *)(v37 + 12) ^ v36);
      v6 = crc_word(v16 ^ *(_DWORD *)(v39 + 16) ^ v38);
      v4 = (_DWORD *)(v40 + 20);
    }
    if ( v3 >= 8 )
    {
      v7 = v3 >> 3;
      v3 += -8LL * (v3 >> 3);
      do
      {
        v8 = 8LL;
        do
        {
          v9 = (unsigned __int8)(v6 ^ *(_BYTE *)v4);
          v4 = (_DWORD *)((char *)v4 + 1);
          v6 = dword_140019F00[v9] ^ (v6 >> 8);
          --v8;
        }
        while ( v8 );
        --v7;
      }
      while ( v7 );
    }
    for ( ; v3; --v3 )
    {
      v10 = (unsigned __int8)(v6 ^ *(_BYTE *)v4);
      v4 = (_DWORD *)((char *)v4 + 1);
      v6 = dword_140019F00[v10] ^ (v6 >> 8);
    }
    return ~v6;
  }
  return 0LL;
}
