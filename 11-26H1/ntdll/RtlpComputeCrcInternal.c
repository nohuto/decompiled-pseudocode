/*
 * XREFs of RtlpComputeCrcInternal @ 0x1800EBBC0
 * Callers:
 *     RtlCrc64 @ 0x1800EBBA0 (RtlCrc64.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlpComputeCrcInternal(unsigned __int64 a1, unsigned __int64 a2, __int64 a3)
{
  unsigned __int64 v3; // r10
  unsigned __int64 v4; // r12
  unsigned __int64 v5; // r15
  unsigned __int64 v6; // r8
  unsigned __int64 v7; // r9
  unsigned __int64 v8; // rcx
  char v10; // al
  __int64 v11; // rdx
  __int64 v12; // r13
  __int64 v13; // r9
  __int64 v14; // r12
  unsigned __int64 v15; // r8
  unsigned __int64 v16; // r13
  unsigned __int64 v17; // r12
  unsigned __int64 v18; // r8
  unsigned __int64 v19; // r8
  unsigned __int64 v20; // r8
  unsigned __int64 v21; // r8
  unsigned __int64 v22; // r8
  unsigned __int64 v23; // r8
  unsigned __int64 v24; // r8
  unsigned __int64 v25; // r8
  unsigned __int64 v26; // r8
  unsigned __int64 v27; // r8
  unsigned __int64 v28; // r8
  unsigned __int64 v29; // r8
  unsigned __int64 v30; // r8
  unsigned __int64 v31; // r8
  unsigned __int64 v32; // r8
  unsigned __int64 v33; // r8
  unsigned __int64 v34; // r8
  unsigned __int64 v35; // r8
  unsigned __int64 v36; // r8
  unsigned __int64 v37; // r8
  unsigned __int64 v38; // r8
  unsigned __int64 v39; // r8
  unsigned __int64 v40; // r8
  unsigned __int64 v41; // r8
  unsigned __int64 v42; // r8
  unsigned __int64 v43; // r8
  unsigned __int64 v44; // r8
  unsigned __int64 v45; // r8
  unsigned __int64 v46; // r8
  unsigned __int64 v47; // r8
  unsigned __int64 v48; // r8
  unsigned __int64 v49; // r11
  char v50; // al
  unsigned __int64 v51; // [rsp+40h] [rbp+8h]
  __int64 v52; // [rsp+48h] [rbp+10h]
  unsigned __int64 v53; // [rsp+58h] [rbp+20h]
  __int64 v54; // [rsp+58h] [rbp+20h]

  v3 = 0LL;
  v4 = a2;
  v5 = a1;
  v6 = ~a3;
  v7 = -(int)a1 & 7;
  if ( (-(int)a1 & 7) != 0 )
  {
    v49 = 0LL;
    if ( v7 > a2 )
      v7 = a2;
    if ( v7 )
    {
      do
      {
        v50 = *(_BYTE *)(a1 + v49++);
        v6 = crc64Map1_[(unsigned __int8)(v6 ^ v50)] ^ (v6 >> 8);
      }
      while ( v49 < v7 );
    }
    v4 = a2 - v7;
    v5 = v7 + a1;
  }
  v8 = v4 - (v4 & 0x1F);
  if ( v8 >= 0x40 )
  {
    v52 = v4 & 0x1F;
    v51 = v5 + v8 - 32;
    v11 = 0LL;
    v12 = 0LL;
    v13 = 0LL;
    v4 = v52;
    if ( v5 < v51 )
    {
      v14 = 0LL;
      do
      {
        _mm_prefetch((const char *)(v5 + 256), 2);
        v15 = *(_QWORD *)v5 ^ v6;
        v16 = *(_QWORD *)(v5 + 8) ^ v12;
        v17 = *(_QWORD *)(v5 + 16) ^ v14;
        v53 = *(_QWORD *)(v5 + 24) ^ v13;
        v5 += 32LL;
        v12 = crc64Map32_[BYTE5(v16) + 512] ^ crc64Map32_[BYTE4(v16) + 768] ^ crc64Map32_[BYTE3(v16) + 1024] ^ crc64Map32_[BYTE2(v16) + 1280] ^ crc64Map32_[(unsigned __int8)v16 + 1792] ^ crc64Map32_[BYTE1(v16) + 1536] ^ crc64Map32_[HIBYTE(v16)] ^ crc64Map32_[BYTE6(v16) + 256];
        v6 = crc64Map32_[BYTE5(v15) + 512] ^ crc64Map32_[BYTE4(v15) + 768] ^ crc64Map32_[BYTE3(v15) + 1024] ^ crc64Map32_[BYTE2(v15) + 1280] ^ crc64Map32_[(unsigned __int8)v15 + 1792] ^ crc64Map32_[BYTE1(v15) + 1536] ^ crc64Map32_[HIBYTE(v15)] ^ crc64Map32_[BYTE6(v15) + 256];
        v14 = crc64Map32_[BYTE5(v17) + 512] ^ crc64Map32_[BYTE4(v17) + 768] ^ crc64Map32_[BYTE3(v17) + 1024] ^ crc64Map32_[BYTE2(v17) + 1280] ^ crc64Map32_[(unsigned __int8)v17 + 1792] ^ crc64Map32_[BYTE1(v17) + 1536] ^ crc64Map32_[HIBYTE(v17)] ^ crc64Map32_[BYTE6(v17) + 256];
        v13 = crc64Map32_[BYTE5(v53) + 512] ^ crc64Map32_[BYTE4(v53) + 768] ^ crc64Map32_[BYTE3(v53) + 1024] ^ crc64Map32_[BYTE2(v53) + 1280] ^ crc64Map32_[(unsigned __int8)v53 + 1792] ^ crc64Map32_[BYTE1(v53) + 1536] ^ crc64Map32_[HIBYTE(v53)] ^ crc64Map32_[BYTE6(v53) + 256];
      }
      while ( v5 < v51 );
      v3 = 0LL;
      v54 = v14;
      v4 = v52;
      v11 = v54;
    }
    v18 = crc64Map1_[(unsigned __int8)(*(_BYTE *)v5 ^ v6)] ^ ((*(_QWORD *)v5 ^ v6) >> 8);
    v19 = crc64Map1_[(unsigned __int8)v18] ^ (v18 >> 8);
    v20 = crc64Map1_[(unsigned __int8)v19] ^ (v19 >> 8);
    v21 = crc64Map1_[(unsigned __int8)v20] ^ (v20 >> 8);
    v22 = crc64Map1_[(unsigned __int8)v21] ^ (v21 >> 8);
    v23 = crc64Map1_[(unsigned __int8)v22] ^ (v22 >> 8);
    v24 = crc64Map1_[(unsigned __int8)v23] ^ (v23 >> 8);
    v25 = v12 ^ *(_QWORD *)(v5 + 8) ^ crc64Map1_[(unsigned __int8)v24] ^ (v24 >> 8);
    v26 = crc64Map1_[(unsigned __int8)v25] ^ (v25 >> 8);
    v27 = crc64Map1_[(unsigned __int8)v26] ^ (v26 >> 8);
    v28 = crc64Map1_[(unsigned __int8)v27] ^ (v27 >> 8);
    v29 = crc64Map1_[(unsigned __int8)v28] ^ (v28 >> 8);
    v30 = crc64Map1_[(unsigned __int8)v29] ^ (v29 >> 8);
    v31 = crc64Map1_[(unsigned __int8)v30] ^ (v30 >> 8);
    v32 = crc64Map1_[(unsigned __int8)v31] ^ (v31 >> 8);
    v33 = v11 ^ *(_QWORD *)(v5 + 16) ^ crc64Map1_[(unsigned __int8)v32] ^ (v32 >> 8);
    v34 = crc64Map1_[(unsigned __int8)v33] ^ (v33 >> 8);
    v35 = crc64Map1_[(unsigned __int8)v34] ^ (v34 >> 8);
    v36 = crc64Map1_[(unsigned __int8)v35] ^ (v35 >> 8);
    v37 = crc64Map1_[(unsigned __int8)v36] ^ (v36 >> 8);
    v38 = crc64Map1_[(unsigned __int8)v37] ^ (v37 >> 8);
    v39 = crc64Map1_[(unsigned __int8)v38] ^ (v38 >> 8);
    v40 = crc64Map1_[(unsigned __int8)v39] ^ (v39 >> 8);
    v41 = v13 ^ *(_QWORD *)(v5 + 24) ^ crc64Map1_[(unsigned __int8)v40] ^ (v40 >> 8);
    v42 = crc64Map1_[(unsigned __int8)v41] ^ (v41 >> 8);
    v43 = crc64Map1_[(unsigned __int8)v42] ^ (v42 >> 8);
    v44 = crc64Map1_[(unsigned __int8)v43] ^ (v43 >> 8);
    v45 = crc64Map1_[(unsigned __int8)v44] ^ (v44 >> 8);
    v46 = crc64Map1_[(unsigned __int8)v45] ^ (v45 >> 8);
    v47 = crc64Map1_[(unsigned __int8)v46] ^ (v46 >> 8);
    v48 = crc64Map1_[(unsigned __int8)v47] ^ (v47 >> 8);
    v6 = crc64Map1_[(unsigned __int8)v48] ^ (v48 >> 8);
    v5 += 32LL;
  }
  if ( v4 )
  {
    do
    {
      v10 = *(_BYTE *)(v5 + v3++);
      v6 = crc64Map1_[(unsigned __int8)(v6 ^ v10)] ^ (v6 >> 8);
    }
    while ( v3 < v4 );
  }
  return ~v6;
}
