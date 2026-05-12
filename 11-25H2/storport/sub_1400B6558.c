/*
 * XREFs of sub_1400B6558 @ 0x1400B6558
 * Callers:
 *     sub_1400B6D8C @ 0x1400B6D8C (sub_1400B6D8C.c)
 * Callees:
 *     sub_1400143E0 @ 0x1400143E0 (sub_1400143E0.c)
 *     sub_1400AB558 @ 0x1400AB558 (sub_1400AB558.c)
 *     sub_1400BB430 @ 0x1400BB430 (sub_1400BB430.c)
 *     sub_1400BB4C8 @ 0x1400BB4C8 (sub_1400BB4C8.c)
 *     __security_check_cookie @ 0x14013C590 (__security_check_cookie.c)
 *     memmove @ 0x14013C680 (memmove.c)
 *     memset_0 @ 0x14013C980 (memset_0.c)
 */

__int64 __fastcall sub_1400B6558(__int64 a1)
{
  __int64 v1; // r15
  __int64 v2; // rsi
  __int64 v3; // r13
  unsigned int v4; // edi
  void *v5; // r14
  _QWORD *v6; // r12
  __int64 v7; // rax
  ULONG RecommendedSharedDataAlignment; // ebx
  ULONG v9; // eax
  unsigned int i; // edx
  __int64 v11; // r9
  _QWORD *v12; // rcx
  __int64 v13; // r8
  __int64 v14; // rcx
  _QWORD *v15; // r8
  char *v16; // r9
  char *v17; // r10
  __int64 v18; // r11
  __int64 v19; // rdx
  int v20; // r13d
  __int64 v21; // rax
  __int64 v22; // rbx
  const char *v23; // rax
  __int64 v24; // r9
  const char *v25; // r15
  void *v26; // rax
  int v27; // r15d
  void *v28; // rsi
  __int64 v29; // rbx
  __int64 v30; // rdx
  __int64 v31; // rdx
  __int64 v32; // rdx
  __int64 v33; // rdx
  bool v34; // cc
  __int64 v35; // r11
  _WORD *v36; // rax
  __int16 v37; // ax
  char v38; // al
  unsigned __int8 v39; // cl
  char v40; // cl
  unsigned __int8 v41; // cl
  char v42; // cl
  unsigned __int8 v43; // cl
  unsigned __int8 v44; // cl
  __int64 v45; // rax
  const char *v46; // r8
  __int64 v47; // rbx
  __int64 v48; // rsi
  char *v49; // rcx
  PVOID v50; // rcx
  int v52; // [rsp+1C8h] [rbp-80h]
  __int64 v53; // [rsp+1D0h] [rbp-78h]
  __int64 v54; // [rsp+1D8h] [rbp-70h]
  char v55; // [rsp+1E0h] [rbp-68h]
  __int64 v56; // [rsp+1E8h] [rbp-60h]
  const char *v57; // [rsp+1F8h] [rbp-50h]
  _QWORD *v59; // [rsp+208h] [rbp-40h]
  const char *Dst[18]; // [rsp+218h] [rbp-30h] BYREF
  PVOID P[18]; // [rsp+2A8h] [rbp+60h] BYREF
  char v62[13]; // [rsp+338h] [rbp+F0h] BYREF
  int v63; // [rsp+345h] [rbp+FDh]
  __int64 v64; // [rsp+350h] [rbp+108h] BYREF
  char v65; // [rsp+358h] [rbp+110h]
  __int128 v66; // [rsp+360h] [rbp+118h] BYREF
  int v67; // [rsp+370h] [rbp+128h]
  __int128 v68; // [rsp+378h] [rbp+130h] BYREF
  int v69; // [rsp+388h] [rbp+140h]
  __int128 v70; // [rsp+390h] [rbp+148h] BYREF
  __int128 v71; // [rsp+3A0h] [rbp+158h]
  __int64 v72; // [rsp+3B0h] [rbp+168h]
  char v73; // [rsp+3B8h] [rbp+170h]

  v1 = HIDWORD(qword_140169170);
  v2 = a1;
  v3 = 0LL;
  v55 = 0;
  v4 = -1073741823;
  v5 = 0LL;
  v6 = 0LL;
  memset_0(Dst, 0, sizeof(Dst));
  memset_0(P, 0, sizeof(P));
  v63 = 0;
  v72 = 0LL;
  v73 = 0;
  v64 = 0LL;
  v65 = 0;
  v7 = *(_QWORD *)(v2 + 608);
  strcpy(v62, "PCI vendor: ");
  v70 = 0LL;
  v56 = 2LL;
  v71 = 0LL;
  if ( !*(_QWORD *)(v7 + 16) )
    goto LABEL_44;
  v59 = (_QWORD *)sub_1400143E0(72LL, (unsigned int)dword_140169184, 1700028754LL, *(_QWORD *)(v2 + 8));
  v5 = v59;
  if ( !v59 )
    goto LABEL_43;
  RecommendedSharedDataAlignment = KeGetRecommendedSharedDataAlignment();
  v9 = KeGetRecommendedSharedDataAlignment();
  v6 = (_QWORD *)sub_1400143E0(
                   72LL,
                   -v9 & (RecommendedSharedDataAlignment + 16 * (_DWORD)v1 - 1),
                   1700028754LL,
                   *(_QWORD *)(v2 + 8));
  if ( !v6 )
    goto LABEL_43;
  memmove(v59, *(const void **)(*(_QWORD *)(v2 + 608) + 16LL), (unsigned int)dword_140169184);
  for ( i = 1; i < dword_140168DB0; ++i )
  {
    v11 = (unsigned int)dword_14016917C * i;
    if ( (_DWORD)v1 )
    {
      v12 = v59 + 1;
      v13 = v1;
      do
      {
        *(v12 - 1) += *(_QWORD *)((char *)v12 + v11 - 8);
        *v12 += *(_QWORD *)((char *)v12 + v11);
        v12 += 2;
        --v13;
      }
      while ( v13 );
    }
  }
  v14 = *(_QWORD *)(*(_QWORD *)(v2 + 608) + 40LL);
  if ( (_DWORD)v1 )
  {
    v15 = (_QWORD *)(v14 + 8);
    v16 = (char *)v59 - v14;
    v17 = (char *)v6 - v14;
    v18 = v1;
    do
    {
      v19 = *(_QWORD *)((char *)v15 + (_QWORD)v16 - 8) - *(v15 - 1);
      *(_QWORD *)((char *)v15 + (_QWORD)v17 - 8) = v19;
      v3 += v19;
      *(_QWORD *)((char *)v15 + (_QWORD)v17) = *(_QWORD *)((char *)v15 + (_QWORD)v16) - *v15;
      v15 += 2;
      --v18;
    }
    while ( v18 );
    v55 = v3;
  }
  memmove(*(void **)(*(_QWORD *)(v2 + 608) + 40LL), v59, (unsigned int)dword_14016917C);
  if ( v3 )
  {
    v20 = 0;
    v21 = 0LL;
    v54 = 0LL;
LABEL_15:
    v52 = 0;
    v22 = v21;
    v53 = v21;
    while ( 1 )
    {
      v23 = (const char *)sub_1400143E0(64LL, 351LL, 1700028754LL, *(_QWORD *)(v2 + 8));
      v24 = *(_QWORD *)(v2 + 8);
      v57 = v23;
      *(const char **)((char *)Dst + v22) = v23;
      v25 = v23;
      v26 = (void *)sub_1400143E0(64LL, 351LL, 1700028754LL, v24);
      *(PVOID *)((char *)P + v22) = v26;
      if ( !v25 || !v26 )
        break;
      v27 = 0;
      v28 = v26;
      do
      {
        v67 = 0;
        v69 = 0;
        v66 = 0LL;
        v68 = 0LL;
        v29 = 2LL * (v20 + (unsigned __int16)xmmword_140169140 * (v52 + v27 * (unsigned int)WORD1(xmmword_140169140)));
        sub_1400BB4C8(
          &v66,
          20LL,
          "%lld",
          v6[2 * v20 + 2 * (unsigned __int16)xmmword_140169140 * (v52 + v27 * (unsigned int)WORD1(xmmword_140169140))]);
        sub_1400BB4C8(&v68, 20LL, "%lld", v6[v29 + 1]);
        sub_1400BB430(v57, v30, &v66);
        sub_1400BB430(v28, v31, &v68);
        if ( (unsigned int)v27 < 0xD )
        {
          sub_1400BB430(v57, v32, ", ");
          sub_1400BB430(v28, v33, ", ");
        }
        ++v27;
      }
      while ( v27 < 14 );
      v2 = a1;
      v22 = v53 + 8;
      v5 = v59;
      v34 = ++v52 < 9;
      v4 = -1073741823;
      v53 += 8LL;
      if ( !v34 )
      {
        ++v20;
        v21 = v54 + 72;
        v54 += 72LL;
        if ( v20 < 2 )
          goto LABEL_15;
        v35 = *(_QWORD *)(a1 + 16);
        if ( v35 )
        {
          v36 = *(_WORD **)(v35 + 592);
          if ( v36 )
          {
            v37 = *v36 >> 12;
            if ( (unsigned __int8)v37 > 9u )
              v38 = v37 + 55;
            else
              v38 = v37 + 48;
            v62[12] = v38;
            v39 = *(_BYTE *)(*(_QWORD *)(v35 + 592) + 1LL) & 0xF;
            if ( v39 > 9u )
              v40 = v39 + 55;
            else
              v40 = v39 + 48;
            LOBYTE(v63) = v40;
            v41 = (**(_BYTE **)(v35 + 592) >> 4) & 0xF;
            if ( v41 > 9u )
              v42 = v41 + 55;
            else
              v42 = v41 + 48;
            BYTE1(v63) = v42;
            v43 = **(_BYTE **)(v35 + 592) & 0xF;
            if ( v43 > 9u )
              v44 = v43 + 55;
            else
              v44 = v43 + 48;
            HIWORD(v63) = v44;
            v45 = *(_QWORD *)(v35 + 592);
            v70 = *(_OWORD *)(v45 + 24);
            v71 = *(_OWORD *)(v45 + 40);
            v72 = *(_QWORD *)(v45 + 56);
            v64 = *(_QWORD *)(*(_QWORD *)(v35 + 592) + 64LL);
          }
        }
        if ( (byte_1401694FA & 0x20) != 0 )
        {
          v46 = (const char *)&dword_140149108;
          if ( *(_QWORD *)(v35 + 752) )
            v46 = *(const char **)(v35 + 752);
          sub_1400AB558(
            (__int64)&RegHandle,
            (__int64)&stru_14014A330,
            0LL,
            *(_DWORD *)(*(_QWORD *)(v35 + 128) + 56LL),
            *(_QWORD *)(v35 + 128) + 1032LL,
            *(const wchar_t **)(*(_QWORD *)(v35 + 128) + 1016LL),
            *(const char **)(v35 + 792),
            *(_WORD *)(v35 + 4),
            *(_DWORD *)(a1 + 56),
            *(_BYTE *)(v35 + 744),
            v46,
            v62,
            (const char *)&v70,
            (const char *)&v64,
            a1 + 160,
            (*(_BYTE *)(v35 + 136) & 2) != 0 ? 20 : 17,
            (int)L"4K, 8K, 16K, 32K, 64K, 128K, 256K, 1M, 1M+",
            (int)L"128us, 256us, 512us, 1ms, 4ms, 16ms, 64ms, 128ms, 256ms, 512ms, 1000ms, 2000ms, 10000ms, 10000+ms",
            v55,
            Dst[0],
            (const char *)P[0],
            Dst[1],
            (const char *)P[1],
            Dst[2],
            (const char *)P[2],
            Dst[3],
            (const char *)P[3],
            Dst[4],
            (const char *)P[4],
            Dst[5],
            (const char *)P[5],
            Dst[6],
            (const char *)P[6],
            Dst[7],
            (const char *)P[7],
            Dst[8],
            (const char *)P[8],
            Dst[9],
            (const char *)P[9],
            Dst[10],
            (const char *)P[10],
            Dst[11],
            (const char *)P[11],
            Dst[12],
            (const char *)P[12],
            Dst[13],
            (const char *)P[13],
            Dst[14],
            (const char *)P[14],
            Dst[15],
            (const char *)P[15],
            Dst[16],
            (const char *)P[16],
            Dst[17],
            (const char *)P[17]);
        }
        goto LABEL_44;
      }
    }
LABEL_43:
    v4 = -1073741801;
  }
LABEL_44:
  v47 = 0LL;
  do
  {
    v48 = 9LL;
    do
    {
      v49 = (char *)Dst[v47];
      if ( v49 )
      {
        ExFreePoolWithTag(v49, 0x65546152u);
        Dst[v47] = 0LL;
      }
      v50 = P[v47];
      if ( v50 )
      {
        ExFreePoolWithTag(v50, 0x65546152u);
        P[v47] = 0LL;
      }
      ++v47;
      --v48;
    }
    while ( v48 );
    --v56;
  }
  while ( v56 );
  if ( v6 )
    ExFreePoolWithTag(v6, 0x65546152u);
  if ( v5 )
    ExFreePoolWithTag(v5, 0x65546152u);
  return v4;
}
