/*
 * XREFs of IaapSetAecsDecompressionHuffmanTable @ 0x1406E5B68
 * Callers:
 *     AccelpSiovIaaCompressionDecompression @ 0x1406E3F00 (AccelpSiovIaaCompressionDecompression.c)
 * Callees:
 *     qsort @ 0x140539380 (qsort.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 */

_OWORD *__fastcall IaapSetAecsDecompressionHuffmanTable(_DWORD *a1, __int64 a2, _WORD *a3, __int64 a4, _WORD *a5)
{
  unsigned int v8; // ebx
  unsigned int v9; // r8d
  _WORD *v10; // rcx
  __int64 v11; // rdx
  int v12; // eax
  __int64 v13; // rdx
  _WORD *v14; // r14
  unsigned int v15; // r15d
  __int64 v16; // r12
  unsigned int v17; // ebp
  unsigned __int8 *v18; // rdx
  __int64 v19; // r8
  __int64 v20; // rcx
  unsigned int v21; // r8d
  unsigned int v22; // r9d
  _BYTE *v23; // rdx
  unsigned int v24; // eax
  _DWORD *v25; // r13
  int v26; // eax
  int v27; // ecx
  int v28; // eax
  int v29; // ecx
  int v30; // edx
  int v31; // ecx
  int v32; // ecx
  int v33; // ecx
  int v34; // ecx
  int v35; // eax
  int v36; // ecx
  int v37; // eax
  int v38; // ecx
  int v39; // edx
  int v40; // ecx
  int v41; // ecx
  int v42; // ecx
  int v43; // ecx
  int v44; // eax
  int v45; // ecx
  int v46; // eax
  int v47; // ecx
  int v48; // edx
  int v49; // ecx
  int v50; // ecx
  int v51; // ecx
  __m128i si128; // xmm0
  int v53; // ecx
  int v54; // eax
  int v55; // ecx
  int v56; // eax
  int v57; // ecx
  int v58; // edx
  int v59; // ecx
  int v60; // ecx
  int v61; // ecx
  int v62; // ecx
  unsigned int v63; // eax
  _OWORD *v64; // rcx
  _OWORD *result; // rax
  __int128 v66; // xmm1

  memset_0((void *)a2, 0, 0x1500uLL);
  memset_0(a5, 0, 0x178uLL);
  v8 = 0;
  v9 = 0;
  v10 = a1;
  v11 = a4 - (_QWORD)a1;
  do
  {
    *(_WORD *)((char *)v10 + v11) = *v10 & 0x7FFF;
    v12 = *(_DWORD *)v10 >> 15;
    *((_BYTE *)v10 + v11 + 3) = v9;
    v10 += 2;
    ++v9;
    *((_BYTE *)v10 + v11 - 2) = v12 & 0xF;
  }
  while ( v9 < 0x100 );
  v13 = 256LL;
  do
  {
    if ( ((*a1 >> 15) & 0xF) != 0 )
      ++a5[((*a1 >> 15) & 0xF) + 14];
    ++a1;
    --v13;
  }
  while ( v13 );
  v14 = a5 + 30;
  v15 = 0;
  v16 = 2LL;
  do
  {
    memset_0(a3, 0, 0x400uLL);
    if ( *(v14 - 15) )
    {
      v17 = 0;
      v18 = (unsigned __int8 *)(a4 + 2);
      v19 = 256LL;
      do
      {
        if ( *v18 == v15 + 1 )
        {
          v20 = v17++;
          HIBYTE(a3[2 * v20 + 1]) = v18[1];
          a3[2 * v20] = *((_WORD *)v18 - 1);
          LOBYTE(a3[2 * v20 + 1]) = *v18;
        }
        v18 += 4;
        --v19;
      }
      while ( v19 );
      qsort(a3, v17, 4uLL, (int (__cdecl *)(const void *, const void *))IaaCodeValuesSort);
      v21 = v8 + v17;
      *v14 = *a3;
      v22 = v8;
      *(v14 - 30) = v8;
      if ( v8 < v8 + v17 )
      {
        v23 = (char *)a5 + v8 + 120;
        do
        {
          v24 = v8++;
          *v23++ = HIBYTE(a3[2 * (v24 - v22) + 1]);
        }
        while ( v8 < v21 );
      }
    }
    ++v15;
    ++v14;
  }
  while ( v15 < 0xF );
  v25 = (_DWORD *)a2;
  *(_OWORD *)(a2 + 480) = 0LL;
  *(_DWORD *)(a2 + 496) = 0;
  v26 = *a5 & 3;
  *(_DWORD *)(a2 + 480) = v26;
  v27 = v26 | (4 * (a5[1] & 7));
  *(_DWORD *)(a2 + 480) = v27;
  v28 = v27 | (32 * (a5[2] & 0xF));
  *(_DWORD *)(a2 + 480) = v28;
  v29 = v28 | ((a5[3] & 0x1F) << 9);
  *(_DWORD *)(a2 + 480) = v29;
  v30 = v29 | ((a5[4] & 0x3F) << 14);
  *(_DWORD *)(a2 + 480) = v30;
  *(_DWORD *)(a2 + 480) = v30 | ((a5[5] & 0x7F) << 20);
  *(_BYTE *)(a2 + 484) = *((_BYTE *)a5 + 12);
  v31 = v25[121] ^ (v25[121] ^ ((unsigned __int16)a5[7] << 8)) & 0x1FF00;
  *(_DWORD *)(a2 + 484) = v31;
  *(_DWORD *)(a2 + 484) = v31 ^ (v31 ^ ((unsigned __int16)a5[8] << 17)) & 0x7FE0000;
  v32 = v25[122] ^ (v25[122] ^ (unsigned __int16)a5[9]) & 0x7FF;
  *(_DWORD *)(a2 + 488) = v32;
  *(_DWORD *)(a2 + 488) = v32 ^ (v32 ^ ((unsigned __int16)a5[10] << 11)) & 0x7FF800;
  v33 = v25[123] ^ (v25[123] ^ (unsigned __int16)a5[11]) & 0x1FFF;
  *(_DWORD *)(a2 + 492) = v33;
  *(_DWORD *)(a2 + 492) = v33 ^ (v33 ^ ((unsigned __int16)a5[12] << 13)) & 0x7FFE000;
  v34 = v25[124] ^ (v25[124] ^ (unsigned __int16)a5[13]) & 0x7FFF;
  *(_DWORD *)(a2 + 496) = v34;
  *(_DWORD *)(a2 + 496) = v34 & 0x80007FFF | ((unsigned __int16)a5[14] << 15);
  *(_OWORD *)(a2 + 500) = 0LL;
  *(_DWORD *)(a2 + 516) = 0;
  v35 = a5[15] & 3;
  *(_DWORD *)(a2 + 500) = v35;
  v36 = v35 | (4 * (a5[16] & 7));
  *(_DWORD *)(a2 + 500) = v36;
  v37 = v36 | (32 * (a5[17] & 0xF));
  *(_DWORD *)(a2 + 500) = v37;
  v38 = v37 | ((a5[18] & 0x1F) << 9);
  *(_DWORD *)(a2 + 500) = v38;
  v39 = v38 | ((a5[19] & 0x3F) << 14);
  *(_DWORD *)(a2 + 500) = v39;
  *(_DWORD *)(a2 + 500) = v39 | ((a5[20] & 0x7F) << 20);
  *(_BYTE *)(a2 + 504) = *((_BYTE *)a5 + 42);
  v40 = v25[126] ^ (v25[126] ^ ((unsigned __int16)a5[22] << 8)) & 0x1FF00;
  *(_DWORD *)(a2 + 504) = v40;
  *(_DWORD *)(a2 + 504) = v40 ^ (v40 ^ ((unsigned __int16)a5[23] << 17)) & 0x7FE0000;
  v41 = v25[127] ^ (v25[127] ^ (unsigned __int16)a5[24]) & 0x7FF;
  *(_DWORD *)(a2 + 508) = v41;
  *(_DWORD *)(a2 + 508) = v41 ^ (v41 ^ ((unsigned __int16)a5[25] << 11)) & 0x7FF800;
  v42 = v25[128] ^ (v25[128] ^ (unsigned __int16)a5[26]) & 0x1FFF;
  *(_DWORD *)(a2 + 512) = v42;
  *(_DWORD *)(a2 + 512) = v42 ^ (v42 ^ ((unsigned __int16)a5[27] << 13)) & 0x7FFE000;
  v43 = v25[129] ^ (v25[129] ^ (unsigned __int16)a5[28]) & 0x7FFF;
  *(_DWORD *)(a2 + 516) = v43;
  *(_DWORD *)(a2 + 516) = v43 & 0x80007FFF | ((unsigned __int16)a5[29] << 15);
  *(_OWORD *)(a2 + 520) = 0LL;
  *(_DWORD *)(a2 + 536) = 0;
  v44 = a5[30] & 3;
  *(_DWORD *)(a2 + 520) = v44;
  v45 = v44 | (4 * (a5[31] & 7));
  *(_DWORD *)(a2 + 520) = v45;
  v46 = v45 | (32 * (a5[32] & 0xF));
  *(_DWORD *)(a2 + 520) = v46;
  v47 = v46 | ((a5[33] & 0x1F) << 9);
  *(_DWORD *)(a2 + 520) = v47;
  v48 = v47 | ((a5[34] & 0x3F) << 14);
  *(_DWORD *)(a2 + 520) = v48;
  *(_DWORD *)(a2 + 520) = v48 | ((a5[35] & 0x7F) << 20);
  *(_BYTE *)(a2 + 524) = *((_BYTE *)a5 + 72);
  v49 = v25[131] ^ (v25[131] ^ ((unsigned __int16)a5[37] << 8)) & 0x1FF00;
  *(_DWORD *)(a2 + 524) = v49;
  *(_DWORD *)(a2 + 524) = v49 ^ (v49 ^ ((unsigned __int16)a5[38] << 17)) & 0x7FE0000;
  v50 = v25[132] ^ (v25[132] ^ (unsigned __int16)a5[39]) & 0x7FF;
  *(_DWORD *)(a2 + 528) = v50;
  *(_DWORD *)(a2 + 528) = v50 ^ (v50 ^ ((unsigned __int16)a5[40] << 11)) & 0x7FF800;
  v51 = v25[133] ^ (v25[133] ^ (unsigned __int16)a5[41]) & 0x1FFF;
  *(_DWORD *)(a2 + 532) = v51;
  *(_DWORD *)(a2 + 532) = v51 ^ (v51 ^ ((unsigned __int16)a5[42] << 13)) & 0x7FFE000;
  si128 = _mm_load_si128((const __m128i *)&_xmm_ffffffffffffffffffffffffffffffff);
  v53 = v25[134] ^ (v25[134] ^ (unsigned __int16)a5[43]) & 0x7FFF;
  *(_DWORD *)(a2 + 536) = v53;
  *(_DWORD *)(a2 + 536) = v53 & 0x80007FFF | ((unsigned __int16)a5[44] << 15);
  *(__m128i *)(a5 + 45) = si128;
  *(_QWORD *)(a5 + 53) = si128.m128i_i64[0];
  *(_DWORD *)(a5 + 57) = si128.m128i_i32[0];
  a5[59] = si128.m128i_i16[0];
  *(_OWORD *)(a2 + 540) = 0LL;
  *(_DWORD *)(a2 + 556) = 0;
  v54 = a5[45] & 3;
  *(_DWORD *)(a2 + 540) = v54;
  v55 = v54 | (4 * (a5[46] & 7));
  *(_DWORD *)(a2 + 540) = v55;
  v56 = v55 | (32 * (a5[47] & 0xF));
  *(_DWORD *)(a2 + 540) = v56;
  v57 = v56 | ((a5[48] & 0x1F) << 9);
  *(_DWORD *)(a2 + 540) = v57;
  v58 = v57 | ((a5[49] & 0x3F) << 14);
  *(_DWORD *)(a2 + 540) = v58;
  *(_DWORD *)(a2 + 540) = v58 | ((a5[50] & 0x7F) << 20);
  *(_BYTE *)(a2 + 544) = *((_BYTE *)a5 + 102);
  v59 = v25[136] ^ (v25[136] ^ ((unsigned __int16)a5[52] << 8)) & 0x1FF00;
  *(_DWORD *)(a2 + 544) = v59;
  *(_DWORD *)(a2 + 544) = v59 ^ (v59 ^ ((unsigned __int16)a5[53] << 17)) & 0x7FE0000;
  v60 = v25[137] ^ (v25[137] ^ (unsigned __int16)a5[54]) & 0x7FF;
  *(_DWORD *)(a2 + 548) = v60;
  *(_DWORD *)(a2 + 548) = v60 ^ (v60 ^ ((unsigned __int16)a5[55] << 11)) & 0x7FF800;
  v61 = v25[138] ^ (v25[138] ^ (unsigned __int16)a5[56]) & 0x1FFF;
  *(_DWORD *)(a2 + 552) = v61;
  *(_DWORD *)(a2 + 552) = v61 ^ (v61 ^ ((unsigned __int16)a5[57] << 13)) & 0x7FFE000;
  v62 = v25[139] ^ (v25[139] ^ (unsigned __int16)a5[58]) & 0x7FFF;
  *(_DWORD *)(a2 + 556) = v62;
  v63 = v62 & 0x80007FFF | ((unsigned __int16)a5[59] << 15);
  v64 = a5 + 60;
  *(_DWORD *)(a2 + 556) = v63;
  result = (_OWORD *)(a2 + 808);
  do
  {
    *result = *v64;
    result[1] = v64[1];
    result[2] = v64[2];
    result[3] = v64[3];
    result[4] = v64[4];
    result[5] = v64[5];
    result[6] = v64[6];
    result += 8;
    v66 = v64[7];
    v64 += 8;
    *(result - 1) = v66;
    --v16;
  }
  while ( v16 );
  return result;
}
