/*
 * XREFs of ExpandDIB_CX @ 0x140143840
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x1403423B0 (__security_check_cookie.c)
 */

__int64 __fastcall ExpandDIB_CX(__int128 *a1, __int16 *a2, _BYTE *a3, __int64 a4, int a5)
{
  __int64 result; // rax
  char v8; // r9
  __int64 v9; // rcx
  __int16 v10; // r8
  char v11; // r11
  __int64 v12; // rdi
  __int64 v13; // rcx
  char v14; // al
  __int64 v15; // rdi
  int v16; // r12d
  int v17; // edx
  unsigned int v18; // r8d
  __int128 v19; // xmm0
  int v20; // r15d
  __int16 v21; // ax
  int v22; // r11d
  int v23; // ecx
  int v24; // esi
  __int64 v25; // rcx
  _BYTE *v26; // rax
  __int64 v27; // r8
  __int16 v28; // r14
  __int64 *v29; // r14
  __int64 v30; // r8
  unsigned __int16 v31; // dx
  __int128 v32; // xmm0
  int v33; // edx
  __int16 v34; // ax
  int v35; // eax
  int v36; // ecx
  int v37; // ecx
  int v38; // r10d
  int v39; // r9d
  int v40; // r15d
  int v41; // r12d
  int v42; // r13d
  unsigned int v43; // eax
  unsigned int v44; // eax
  _BYTE *v45; // rdx
  char v46; // [rsp+8h] [rbp-100h]
  __int64 v47; // [rsp+10h] [rbp-F8h]
  _BYTE *v48; // [rsp+18h] [rbp-F0h]
  __int128 v49; // [rsp+28h] [rbp-E0h]
  __int128 v50; // [rsp+48h] [rbp-C0h]
  _BYTE v51[24]; // [rsp+118h] [rbp+10h] BYREF

  v49 = *a1;
  v50 = a1[2];
  result = 0LL;
  memset(v51, 0, sizeof(v51));
  if ( !a2 )
    return result;
  v8 = BYTE8(v49);
  v9 = (__int64)&a2[(int)v49 + 3] + (int)v49;
  *(_WORD *)(v9 - 6) = *(_WORD *)(v9 - 9);
  *(_BYTE *)(v9 - 4) = *(_BYTE *)(v9 - 7);
  *(_WORD *)(v9 - 3) = *(_WORD *)(v9 - 6);
  *(_BYTE *)(v9 - 1) = *(_BYTE *)(v9 - 4);
  *(_WORD *)v9 = *(_WORD *)(v9 - 3);
  *(_BYTE *)(v9 + 2) = *(_BYTE *)(v9 - 1);
  v10 = *a2;
  v11 = *((_BYTE *)a2 + 2);
  *(_WORD *)&v51[15] = *a2;
  v51[17] = v11;
  v12 = (__int64)&a2[v8 & 1] + (v8 & 1);
  v13 = v12;
  *(_WORD *)&v51[18] = *(_WORD *)v12;
  v14 = *(_BYTE *)(v12 + 2);
  v15 = v12 + 3;
  v51[20] = v14;
  v16 = WORD6(v49) >> 4;
  v17 = BYTE12(v49) & 0xF;
  if ( !v17 && v16 )
  {
    v17 = 1;
    *(_WORD *)&v51[18] = v10;
    v51[20] = v11;
    --v16;
    v15 = v13;
    v18 = 3;
    do
    {
LABEL_4:
      --v17;
      v19 = *(_OWORD *)&v51[3];
      v20 = *(unsigned __int8 *)(v15 + 2);
      *(_WORD *)&v51[16] = *(_WORD *)&v51[19];
      v21 = *(_WORD *)v15;
      v15 += 3LL;
      *(_WORD *)&v51[18] = v21;
      v51[20] = v20;
      *(_OWORD *)v51 = v19;
      if ( (BYTE8(v49) & 4) != 0 )
      {
        LOBYTE(v22) = v51[15];
        LOBYTE(v24) = v51[17];
        v46 = v51[15];
        *(_WORD *)&v51[9] = *(_WORD *)&v51[15];
      }
      else
      {
        v22 = (6 * v51[15] - v51[18] - v51[12]) >> 2;
        if ( (v22 & 0xFF00) != 0 )
          LOBYTE(v22) = ~HIBYTE(v22);
        v46 = v22;
        v51[9] = v22;
        v23 = (6 * v51[16] - v51[19] - v51[13]) >> 2;
        if ( (v23 & 0xFF00) != 0 )
          LOBYTE(v23) = ~HIBYTE(v23);
        v51[10] = v23;
        v24 = (6 * v51[17] - v20 - v51[14]) >> 2;
        if ( (v24 & 0xFF00) != 0 )
          LOBYTE(v24) = ~HIBYTE(v24);
      }
      v51[11] = v24;
    }
    while ( v17 );
    goto LABEL_12;
  }
  v18 = 4 - v17;
  if ( v17 )
    goto LABEL_4;
  LOBYTE(v22) = v51[9];
  LOBYTE(v24) = v51[11];
  v46 = v51[9];
LABEL_12:
  v25 = v18;
  v26 = &v51[v18];
  v27 = v18 - 1;
  v28 = *(_WORD *)&v26[2 * v25];
  *(_WORD *)&v51[21] = v28;
  v51[23] = v26[2 * v25 + 2];
  if ( v16 )
  {
    while ( 1 )
    {
      v45 = &v51[2 * v27 + (unsigned int)v27];
      v27 = (unsigned int)(v27 - 1);
      *(_WORD *)v45 = v28;
      v45[2] = v51[23];
      if ( !--v16 )
        break;
      v28 = *(_WORD *)&v51[21];
    }
    LOBYTE(v22) = v51[9];
    LOBYTE(v24) = v51[11];
    v46 = v51[9];
  }
  v29 = (__int64 *)*((_QWORD *)&v50 + 1);
  v48 = (_BYTE *)(a5 + a4);
  do
  {
    v30 = *v29++;
    v47 = v30;
    v31 = v30;
    if ( (v30 & 0x8000u) != 0LL )
    {
      v32 = *(_OWORD *)&v51[3];
      v33 = *(unsigned __int8 *)(v15 + 2);
      *(_WORD *)&v51[16] = *(_WORD *)&v51[19];
      v34 = *(_WORD *)v15;
      v15 += 3LL;
      *(_WORD *)&v51[18] = v34;
      v51[20] = v33;
      *(_OWORD *)v51 = v32;
      if ( (v8 & 4) != 0 )
      {
        LOBYTE(v24) = v51[17];
        LOBYTE(v22) = v51[15];
        v46 = v51[15];
        *(_WORD *)&v51[9] = *(_WORD *)&v51[15];
        v51[11] = v51[17];
      }
      else
      {
        v35 = (6 * v51[15] - v51[18] - v51[12]) >> 2;
        if ( (v35 & 0xFF00) != 0 )
          LOBYTE(v35) = ~HIBYTE(v35);
        LOBYTE(v22) = v35;
        v51[9] = v35;
        v46 = v35;
        v36 = (6 * v51[16] - v51[19] - v51[13]) >> 2;
        if ( (v36 & 0xFF00) != 0 )
          LOBYTE(v36) = ~HIBYTE(v36);
        v51[10] = v36;
        v37 = (6 * v51[17] - v33 - v51[14]) >> 2;
        if ( (v37 & 0xFF00) != 0 )
          LOBYTE(v37) = ~HIBYTE(v37);
        LOBYTE(v24) = v37;
        v51[11] = v37;
      }
      v31 = v30 & 0x3FFF;
      LOWORD(v30) = v30 & 0x3FFF;
    }
    v38 = HIWORD(v47) * v51[10];
    v39 = HIWORD(v47) * (unsigned __int8)v24;
    v22 = HIWORD(v47) * (unsigned __int8)v22;
    if ( WORD2(v47) )
    {
      v40 = v39 + WORD2(v47) * v51[8];
      v41 = v38 + WORD2(v47) * v51[7];
      v39 = v40;
      v42 = v22 + WORD2(v47) * v51[6];
      v38 = v41;
      v22 = v42;
      if ( WORD1(v47) )
      {
        v39 = v40 + WORD1(v47) * v51[5];
        v38 = v41 + WORD1(v47) * v51[4];
        v22 = v42 + WORD1(v47) * v51[3];
        if ( (_WORD)v30 )
        {
          v39 += v51[2] * (unsigned __int16)v30;
          v38 += v31 * v51[1];
          v22 += v31 * v51[0];
        }
      }
    }
    v43 = v39 + 4096;
    v8 = BYTE8(v49);
    a3[2] = v43 >> 13;
    a3[1] = (unsigned int)(v38 + 4096) >> 13;
    v44 = v22 + 4096;
    LOBYTE(v22) = v46;
    *a3 = v44 >> 13;
    result = a5;
    a3 += a5;
  }
  while ( a3 != v48 );
  return result;
}
