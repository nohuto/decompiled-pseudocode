/*
 * XREFs of __remainder_piby2 @ 0x1801302C0
 * Callers:
 *     cos @ 0x18012A0C0 (cos.c)
 *     sin @ 0x18012A460 (sin.c)
 *     tan @ 0x18012D070 (tan.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall _remainder_piby2(double a1, double *a2, double *a3, _DWORD *a4)
{
  int v6; // r11d
  int v8; // r10d
  __int64 v9; // r9
  int v10; // r11d
  unsigned __int64 v11; // rdx
  unsigned __int64 v12; // r8
  unsigned __int64 v13; // rdx
  unsigned __int64 v14; // r8
  unsigned __int64 v15; // rdx
  unsigned __int64 v16; // r8
  unsigned __int64 v17; // rdx
  unsigned __int64 v18; // r8
  unsigned __int64 v19; // rdx
  unsigned __int64 v20; // r8
  unsigned __int64 v21; // rdx
  unsigned __int64 v22; // r8
  unsigned __int64 v23; // rdx
  unsigned __int64 v24; // r8
  unsigned __int64 v25; // rdx
  unsigned __int64 v26; // r8
  int v27; // edx
  unsigned __int64 v28; // rcx
  __int64 v29; // r8
  __int16 v30; // bx
  unsigned int v31; // ebx
  __int64 v32; // rcx
  __int64 v33; // rsi
  unsigned __int64 v34; // r8
  _QWORD *v35; // r9
  __int64 v36; // rcx
  __int64 v37; // r9
  _QWORD *v38; // rax
  unsigned __int64 v39; // r9
  int v40; // r11d
  unsigned __int64 v41; // rax
  double v42; // xmm8_8
  double v43; // xmm7_8
  double v44; // xmm7_8
  unsigned __int64 result; // rax
  double v46; // xmm5_8
  __int64 v47; // [rsp+8h] [rbp-100h]
  _QWORD v48[505]; // [rsp+10h] [rbp-F8h] BYREF

  v48[18] = 0LL;
  v6 = ((*(_QWORD *)&a1 >> 52) & 0x7FF) - 1023;
  v8 = v6 / 10;
  v9 = v6 / 10;
  v10 = v6 % 10;
  v11 = ((*((_QWORD *)&unk_1801C4B00 + v8 + 18) * (*(_QWORD *)&a1 & 0xFFFFFFFFFFFFFLL | 0x10000000000000uLL)) >> 10)
      + *((_QWORD *)&unk_1801C4B00 + v9 + 17) * (*(_QWORD *)&a1 & 0xFFFFFFFFFFFFFLL | 0x10000000000000LL);
  v48[17] = (*((_WORD *)&unk_1801C4B00 + 4 * v8 + 72) * LOWORD(a1)) & 0x3FF;
  v48[16] = v11 & 0x3FF;
  v12 = (v11 >> 10) + *((_QWORD *)&unk_1801C4B00 + v8 + 16) * (*(_QWORD *)&a1 & 0xFFFFFFFFFFFFFLL | 0x10000000000000LL);
  v48[15] = ((unsigned __int16)(v11 >> 10) + *((_WORD *)&unk_1801C4B00 + 4 * v8 + 64) * LOWORD(a1)) & 0x3FF;
  v13 = (v12 >> 10) + *((_QWORD *)&unk_1801C4B00 + v8 + 15) * (*(_QWORD *)&a1 & 0xFFFFFFFFFFFFFLL | 0x10000000000000LL);
  v48[14] = ((unsigned __int16)(v12 >> 10) + *((_WORD *)&unk_1801C4B00 + 4 * v8 + 60) * LOWORD(a1)) & 0x3FF;
  v14 = (v13 >> 10) + *((_QWORD *)&unk_1801C4B00 + v8 + 14) * (*(_QWORD *)&a1 & 0xFFFFFFFFFFFFFLL | 0x10000000000000LL);
  v48[13] = ((unsigned __int16)(v13 >> 10) + *((_WORD *)&unk_1801C4B00 + 4 * v8 + 56) * LOWORD(a1)) & 0x3FF;
  v15 = (v14 >> 10) + *((_QWORD *)&unk_1801C4B00 + v8 + 13) * (*(_QWORD *)&a1 & 0xFFFFFFFFFFFFFLL | 0x10000000000000LL);
  v48[12] = ((unsigned __int16)(v14 >> 10) + *((_WORD *)&unk_1801C4B00 + 4 * v8 + 52) * LOWORD(a1)) & 0x3FF;
  v16 = (v15 >> 10) + *((_QWORD *)&unk_1801C4B00 + v8 + 12) * (*(_QWORD *)&a1 & 0xFFFFFFFFFFFFFLL | 0x10000000000000LL);
  v48[11] = ((unsigned __int16)(v15 >> 10) + *((_WORD *)&unk_1801C4B00 + 4 * v8 + 48) * LOWORD(a1)) & 0x3FF;
  v17 = (v16 >> 10) + *((_QWORD *)&unk_1801C4B00 + v8 + 11) * (*(_QWORD *)&a1 & 0xFFFFFFFFFFFFFLL | 0x10000000000000LL);
  v48[10] = ((unsigned __int16)(v16 >> 10) + *((_WORD *)&unk_1801C4B00 + 4 * v8 + 44) * LOWORD(a1)) & 0x3FF;
  v18 = (v17 >> 10) + *((_QWORD *)&unk_1801C4B00 + v8 + 10) * (*(_QWORD *)&a1 & 0xFFFFFFFFFFFFFLL | 0x10000000000000LL);
  v48[9] = ((unsigned __int16)(v17 >> 10) + *((_WORD *)&unk_1801C4B00 + 4 * v8 + 40) * LOWORD(a1)) & 0x3FF;
  v19 = (v18 >> 10) + *((_QWORD *)&unk_1801C4B00 + v8 + 9) * (*(_QWORD *)&a1 & 0xFFFFFFFFFFFFFLL | 0x10000000000000LL);
  v48[8] = ((unsigned __int16)(v18 >> 10) + *((_WORD *)&unk_1801C4B00 + 4 * v8 + 36) * LOWORD(a1)) & 0x3FF;
  v20 = (v19 >> 10) + *((_QWORD *)&unk_1801C4B00 + v8 + 8) * (*(_QWORD *)&a1 & 0xFFFFFFFFFFFFFLL | 0x10000000000000LL);
  v48[7] = ((unsigned __int16)(v19 >> 10) + *((_WORD *)&unk_1801C4B00 + 4 * v8 + 32) * LOWORD(a1)) & 0x3FF;
  v21 = (v20 >> 10) + *((_QWORD *)&unk_1801C4B00 + v8 + 7) * (*(_QWORD *)&a1 & 0xFFFFFFFFFFFFFLL | 0x10000000000000LL);
  v48[6] = ((unsigned __int16)(v20 >> 10) + *((_WORD *)&unk_1801C4B00 + 4 * v8 + 28) * LOWORD(a1)) & 0x3FF;
  v22 = (v21 >> 10) + *((_QWORD *)&unk_1801C4B00 + v8 + 6) * (*(_QWORD *)&a1 & 0xFFFFFFFFFFFFFLL | 0x10000000000000LL);
  v48[5] = ((unsigned __int16)(v21 >> 10) + *((_WORD *)&unk_1801C4B00 + 4 * v8 + 24) * LOWORD(a1)) & 0x3FF;
  v23 = (v22 >> 10) + *((_QWORD *)&unk_1801C4B00 + v8 + 5) * (*(_QWORD *)&a1 & 0xFFFFFFFFFFFFFLL | 0x10000000000000LL);
  v48[4] = ((unsigned __int16)(v22 >> 10) + *((_WORD *)&unk_1801C4B00 + 4 * v8 + 20) * LOWORD(a1)) & 0x3FF;
  v24 = (v23 >> 10) + *((_QWORD *)&unk_1801C4B00 + v8 + 4) * (*(_QWORD *)&a1 & 0xFFFFFFFFFFFFFLL | 0x10000000000000LL);
  v48[3] = ((unsigned __int16)(v23 >> 10) + *((_WORD *)&unk_1801C4B00 + 4 * v8 + 16) * LOWORD(a1)) & 0x3FF;
  v25 = (v24 >> 10) + *((_QWORD *)&unk_1801C4B00 + v8 + 3) * (*(_QWORD *)&a1 & 0xFFFFFFFFFFFFFLL | 0x10000000000000LL);
  v48[2] = ((unsigned __int16)(v24 >> 10) + *((_WORD *)&unk_1801C4B00 + 4 * v8 + 12) * LOWORD(a1)) & 0x3FF;
  v26 = (v25 >> 10) + *((_QWORD *)&unk_1801C4B00 + v8 + 2) * (*(_QWORD *)&a1 & 0xFFFFFFFFFFFFFLL | 0x10000000000000LL);
  v27 = 1;
  v48[1] = v26 & 0x3FF;
  v28 = *((_QWORD *)&unk_1801C4B00 + v8 + 1) * (*(_QWORD *)&a1 & 0xFFFFFFFFFFFFFLL | 0x10000000000000LL) + (v26 >> 10);
  v29 = (*((_WORD *)&unk_1801C4B00 + 4 * v8 + 4) * LOWORD(a1) + (unsigned __int16)(v26 >> 10)) & 0x3FF;
  v30 = (v28 >> 10) + *((_WORD *)&unk_1801C4B00 + 4 * v9) * LOWORD(a1);
  v48[0] = v29;
  v47 = v30 & 0x3FF;
  v31 = (((v29 | (unsigned __int64)(v47 << 10)) >> (10 - (unsigned __int8)v10 - 1)) & 7) >> 1;
  v32 = (1LL << (10 - (unsigned __int8)v10)) - 1;
  v33 = ((v29 | (unsigned __int64)(v47 << 10)) >> (10 - (unsigned __int8)v10 - 1)) & 1;
  if ( (_DWORD)v33 )
  {
    v34 = v32 & ~v29;
    *a4 = ((_BYTE)v31 + 1) & 3;
    if ( v34 < 0x20000000000000LL )
    {
      v35 = v48;
      do
      {
        v36 = v35[1];
        ++v35;
        ++v27;
        v34 = (v34 << 10) | ~(_WORD)v36 & 0x3FF;
      }
      while ( v34 < 0x20000000000000LL );
    }
    v37 = ~v48[v27];
  }
  else
  {
    *a4 = v31;
    v38 = v48;
    v34 = v32 & v29;
    do
    {
      v34 = *++v38 | (v34 << 10);
      ++v27;
    }
    while ( v34 < 0x20000000000000LL );
    v37 = v48[v27];
  }
  v39 = v37 << 54;
  v40 = v10 - 10 * v27 + 52;
  do
  {
    ++v40;
    v39 = (v39 >> 1) | (v34 << 63);
    v34 >>= 1;
  }
  while ( v34 >= 0x20000000000000LL );
  v41 = v34 & 0xFFFFFFFFFFFFFLL | ((v40 + 1023LL) << 52) | 0x8000000000000000uLL;
  if ( !(_DWORD)v33 )
    v41 = v34 & 0xFFFFFFFFFFFFFLL | ((v40 + 1023LL) << 52);
  v42 = *(double *)&v41;
  v43 = COERCE_DOUBLE(((v40 + 970LL) << 52) | (v39 >> 12)) - COERCE_DOUBLE((v40 + 970LL) << 52);
  if ( (_DWORD)v33 )
    v44 = v43 * -2.0;
  else
    v44 = v43 + v43;
  result = v41 & 0xFFFFFFFFF8000000uLL;
  v46 = COERCE_DOUBLE(*(_QWORD *)&v42 & 0xFFFFFFFFF8000000uLL) * 1.570796310901642
      - v42 * 1.570796326794897
      + (v42 - COERCE_DOUBLE(*(_QWORD *)&v42 & 0xFFFFFFFFF8000000uLL)) * 1.570796310901642
      + COERCE_DOUBLE(*(_QWORD *)&v42 & 0xFFFFFFFFF8000000uLL) * 0.00000001589325471229586
      + (v42 - COERCE_DOUBLE(*(_QWORD *)&v42 & 0xFFFFFFFFF8000000uLL)) * 0.00000001589325471229586
      + v44 * 1.570796326794897
      + v42 * 6.123233995736765e-17;
  *a2 = v46 + v42 * 1.570796326794897;
  *a3 = v42 * 1.570796326794897 - (v46 + v42 * 1.570796326794897) + v46;
  return result;
}
