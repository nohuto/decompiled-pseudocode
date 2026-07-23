/*
 * XREFs of XpressDoHuffmanPass @ 0x1403F3940
 * Callers:
 *     RtlCompressBufferXpressHuffMax @ 0x1403F1B00 (RtlCompressBufferXpressHuffMax.c)
 *     RtlCompressBufferXpressHuffStandard @ 0x1403F2C10 (RtlCompressBufferXpressHuffStandard.c)
 * Callees:
 *     <none>
 */

char *__fastcall XpressDoHuffmanPass(__int64 a1, unsigned __int8 *a2, unsigned __int64 a3, __int64 a4, int a5)
{
  __int128 *v7; // rdx
  __int64 v9; // rax
  __int64 v10; // r11
  __int128 v11; // xmm0
  char *v12; // r15
  char *v13; // rsi
  unsigned __int64 v14; // r9
  char *v15; // r12
  __int16 v16; // r8
  char *v17; // rsi
  int v18; // ecx
  int v19; // eax
  __int64 v20; // r11
  char *v21; // r10
  unsigned __int64 v22; // rdx
  unsigned __int16 v23; // di
  unsigned __int64 v24; // rbx
  char v25; // cl
  __int16 v26; // r8
  unsigned __int16 v27; // di
  unsigned __int64 v28; // rcx
  __int16 v29; // r11
  __int16 v30; // r8
  int v31; // ecx
  bool v32; // sf
  __int64 v33; // rcx
  unsigned __int64 v34; // rdx
  _WORD *v35; // rdi
  unsigned __int16 v36; // r11
  char v37; // cl
  char v38; // cl
  unsigned __int16 v39; // dx
  char v40; // cl
  char *result; // rax
  unsigned __int64 v42; // rax
  unsigned __int16 v43; // dx
  char v44; // cl
  __int16 v45; // dx
  __int16 v46; // r8

  v7 = (__int128 *)(a1 + 31264);
  v9 = a4;
  v10 = 2LL;
  do
  {
    v9 += 128LL;
    v11 = *v7;
    v7 += 8;
    *(_OWORD *)(v9 - 128) = v11;
    *(_OWORD *)(v9 - 112) = *(v7 - 7);
    *(_OWORD *)(v9 - 96) = *(v7 - 6);
    *(_OWORD *)(v9 - 80) = *(v7 - 5);
    *(_OWORD *)(v9 - 64) = *(v7 - 4);
    *(_OWORD *)(v9 - 48) = *(v7 - 3);
    *(_OWORD *)(v9 - 32) = *(v7 - 2);
    *(_OWORD *)(v9 - 16) = *(v7 - 1);
    --v10;
  }
  while ( v10 );
  v12 = (char *)(a4 + 256);
  v13 = (char *)(a4 + 258);
  v14 = 16LL;
  v15 = v13;
  v16 = 0;
  v17 = v13 + 2;
  do
  {
    v18 = *(_DWORD *)a2;
    a2 += 4;
    v19 = 2 * v18 + 1;
    if ( v18 < 0 )
      break;
    do
    {
      v33 = *a2;
      v34 = *(unsigned __int16 *)(a1 + 4 * v33);
      v35 = (_WORD *)(a1 + 4 * v33);
      v36 = v35[1];
      ++a2;
      v37 = *v35;
      if ( v14 < v34 )
      {
        v29 = v36 >> (v37 - v14);
        v30 = v16 << v14;
        v14 = v14 - v34 + 16;
        *(_WORD *)v12 = v30 | v29;
        v12 = v15;
        v16 = v35[1];
        v15 = v17;
        v17 += 2;
      }
      else
      {
        v14 -= v34;
        v16 = v36 | (v16 << v37);
      }
LABEL_15:
      v31 = 2 * v19;
      v32 = v19 < 0;
      v19 *= 2;
    }
    while ( !v32 );
  }
  while ( !v31 );
  if ( (unsigned __int64)a2 < a3 )
  {
    _mm_lfence();
    v20 = *a2;
    v21 = (char *)(a2 + 1);
    v22 = *(unsigned __int16 *)(a1 + 4 * v20 + 1024);
    v23 = *(_WORD *)(a1 + 4 * v20 + 1026);
    v24 = v14 - v22;
    v25 = *(_WORD *)(a1 + 4 * v20 + 1024);
    if ( v14 < v22 )
    {
      *(_WORD *)v12 = (v16 << v14) | (v23 >> (v25 - v14));
      v12 = v15;
      v26 = *(_WORD *)(a1 + 4 * v20 + 1026);
      v15 = v17;
      v17 += 2;
      v24 += 16LL;
    }
    else
    {
      v26 = v23 | (v16 << v25);
    }
    if ( (v20 & 0xF) == 0xF )
    {
      v38 = *v21++;
      *v17++ = v38;
      if ( v38 == -1 )
      {
        v39 = *(_WORD *)v21;
        *v17 = *(_WORD *)v21;
        v40 = v21[1];
        v21 += 2;
        v17[1] = v40;
        v17 += 2;
        if ( !v39 )
        {
          *v17 = *v21;
          v17[1] = v21[1];
          v17[2] = v21[2];
          v17[3] = v21[3];
          v17 += 4;
          v21 += 4;
        }
      }
    }
    v27 = *(_WORD *)v21;
    v28 = (unsigned __int8)v20 >> 4;
    v14 = v24 - v28;
    if ( v24 < v28 )
    {
      *(_WORD *)v12 = (v26 << v24) | (v27 >> (v28 - v24));
      v12 = v15;
      v16 = *(_WORD *)v21;
      v15 = v17;
      v17 += 2;
      v14 += 16LL;
    }
    else
    {
      v16 = v27 | (v26 << v28);
    }
    a2 = (unsigned __int8 *)(v21 + 2);
    goto LABEL_15;
  }
  if ( a5 )
  {
    v42 = *(unsigned __int16 *)(a1 + 1024);
    v43 = *(_WORD *)(a1 + 1026);
    v44 = *(_WORD *)(a1 + 1024);
    if ( v14 >= v42 )
    {
      LOBYTE(v14) = v14 - v42;
      v16 = v43 | (v16 << v44);
    }
    else
    {
      v45 = v43 >> (v44 - v14);
      v46 = v16 << v14;
      LOBYTE(v14) = v14 - v42 + 16;
      *(_WORD *)v12 = v46 | v45;
      v12 = v15;
      v16 = *(_WORD *)(a1 + 1026);
      v15 = v17;
      v17 += 2;
    }
  }
  result = v17;
  *(_WORD *)v12 = v16 << v14;
  *(_WORD *)v15 = 0;
  return result;
}
