/*
 * XREFs of sub_1400B9670 @ 0x1400B9670
 * Callers:
 *     sub_140051C30 @ 0x140051C30 (sub_140051C30.c)
 *     sub_14017ED90 @ 0x14017ED90 (sub_14017ED90.c)
 * Callees:
 *     sub_1400143E0 @ 0x1400143E0 (sub_1400143E0.c)
 *     sub_1400AC31C @ 0x1400AC31C (sub_1400AC31C.c)
 *     sub_1400BB430 @ 0x1400BB430 (sub_1400BB430.c)
 *     sub_1400BB4C8 @ 0x1400BB4C8 (sub_1400BB4C8.c)
 *     __security_check_cookie @ 0x14013C590 (__security_check_cookie.c)
 *     memmove @ 0x14013C680 (memmove.c)
 *     memset_0 @ 0x14013C980 (memset_0.c)
 */

__int64 __fastcall sub_1400B9670(__int64 a1)
{
  __int64 v1; // r14
  __int64 v2; // rdi
  __int64 v3; // rsi
  unsigned int v4; // r15d
  void *v5; // r13
  _QWORD *v6; // r12
  ULONG RecommendedSharedDataAlignment; // ebx
  ULONG v8; // eax
  unsigned int i; // edx
  __int64 v10; // r9
  _QWORD *v11; // rcx
  __int64 v12; // r8
  __int64 v13; // rax
  _QWORD *v14; // r8
  char *v15; // r9
  char *v16; // r10
  __int64 v17; // r11
  __int64 v18; // rdx
  int v19; // edx
  __int64 v20; // rbx
  __int64 v21; // rcx
  int v22; // edx
  _QWORD *v23; // rsi
  const char *v24; // rax
  __int64 v25; // rbx
  __int64 v26; // r9
  const char *v27; // rdi
  void *v28; // rax
  int v29; // edi
  __int64 v30; // rax
  __int64 v31; // rsi
  __int64 v32; // r13
  __int64 v33; // rbx
  __int64 v34; // rdx
  __int64 v35; // rdx
  __int64 v36; // rdx
  __int64 v37; // rdx
  __int64 v38; // rax
  const char *v39; // rcx
  __int64 v40; // rdx
  __int64 v41; // rsi
  const char *v42; // rdi
  const wchar_t *v43; // r9
  __int64 v44; // rbx
  __int64 v45; // rdi
  char *v46; // rcx
  PVOID v47; // rcx
  int v49; // [rsp+90h] [rbp-1C8h]
  int v50; // [rsp+1D8h] [rbp-80h]
  int v51; // [rsp+1DCh] [rbp-7Ch]
  __int64 v52; // [rsp+1E0h] [rbp-78h]
  _QWORD *v53; // [rsp+1E8h] [rbp-70h]
  __int64 v54; // [rsp+1F0h] [rbp-68h]
  __int64 v55; // [rsp+1F8h] [rbp-60h]
  char v56; // [rsp+208h] [rbp-50h]
  __int64 v57; // [rsp+210h] [rbp-48h]
  _QWORD *v59; // [rsp+238h] [rbp-20h]
  const char *Dst[18]; // [rsp+248h] [rbp-10h] BYREF
  PVOID P[18]; // [rsp+2D8h] [rbp+80h] BYREF
  __int128 v62; // [rsp+368h] [rbp+110h] BYREF
  int v63; // [rsp+378h] [rbp+120h]
  __int128 v64; // [rsp+380h] [rbp+128h] BYREF
  int v65; // [rsp+390h] [rbp+138h]

  v1 = a1;
  v2 = HIDWORD(qword_140169170);
  v3 = 0LL;
  v56 = 0;
  v4 = -1073741823;
  v5 = 0LL;
  v6 = 0LL;
  memset_0(Dst, 0, sizeof(Dst));
  memset_0(P, 0, sizeof(P));
  v57 = 2LL;
  if ( *(_QWORD *)(v1 + 2384) )
  {
    v59 = (_QWORD *)sub_1400143E0(72LL, (unsigned int)dword_140169184, 1700028754LL, *(_QWORD *)(v1 + 8));
    v5 = v59;
    if ( v59
      && (RecommendedSharedDataAlignment = KeGetRecommendedSharedDataAlignment(),
          v8 = KeGetRecommendedSharedDataAlignment(),
          (v6 = (_QWORD *)sub_1400143E0(
                            72LL,
                            -v8 & (RecommendedSharedDataAlignment + 16 * (_DWORD)v2 - 1),
                            1700028754LL,
                            *(_QWORD *)(v1 + 8))) != 0LL) )
    {
      memmove(v59, *(const void **)(v1 + 2384), (unsigned int)dword_140169184);
      for ( i = 1; i < dword_140168DB0; ++i )
      {
        v10 = (unsigned int)dword_14016917C * i;
        if ( (_DWORD)v2 )
        {
          v11 = v59 + 1;
          v12 = v2;
          do
          {
            *(v11 - 1) += *(_QWORD *)((char *)v11 + v10 - 8);
            *v11 += *(_QWORD *)((char *)v11 + v10);
            v11 += 2;
            --v12;
          }
          while ( v12 );
        }
      }
      v13 = *(_QWORD *)(v1 + 2408);
      if ( (_DWORD)v2 )
      {
        v14 = (_QWORD *)(v13 + 8);
        v15 = (char *)v59 - v13;
        v16 = (char *)v6 - v13;
        v17 = v2;
        do
        {
          v18 = *(_QWORD *)((char *)v14 + (_QWORD)v15 - 8) - *(v14 - 1);
          *(_QWORD *)((char *)v14 + (_QWORD)v16 - 8) = v18;
          v3 += v18;
          *(_QWORD *)((char *)v14 + (_QWORD)v16) = *(_QWORD *)((char *)v14 + (_QWORD)v15) - *v14;
          v14 += 2;
          --v17;
        }
        while ( v17 );
        v56 = v3;
      }
      memmove(*(void **)(v1 + 2408), v59, (unsigned int)dword_14016917C);
      if ( v3 )
      {
        v19 = 0;
        v20 = 0LL;
        v21 = 0LL;
        while ( 1 )
        {
          v54 = v21;
          v55 = v20;
          v51 = v19;
          if ( v19 >= 2 )
            break;
          v22 = 0;
          v52 = 0LL;
          v23 = (PVOID *)((char *)P + v21);
          while ( 1 )
          {
            v53 = v23;
            v50 = v22;
            if ( v22 >= 9 )
              break;
            v24 = (const char *)sub_1400143E0(64LL, 351LL, 1700028754LL, *(_QWORD *)(v1 + 8));
            v25 = v52 + v20;
            v26 = *(_QWORD *)(v1 + 8);
            v27 = v24;
            Dst[v25] = v24;
            v28 = (void *)sub_1400143E0(64LL, 351LL, 1700028754LL, v26);
            P[v25] = v28;
            if ( !v27 || !v28 )
              goto LABEL_3;
            v29 = 0;
            v30 = *(v23 - 18);
            v31 = *v23;
            v32 = v30;
            do
            {
              v63 = 0;
              v65 = 0;
              v62 = 0LL;
              v64 = 0LL;
              v33 = 2LL
                  * (v51 + (unsigned __int16)xmmword_140169140 * (v50 + v29 * (unsigned int)WORD1(xmmword_140169140)));
              sub_1400BB4C8(
                &v62,
                20LL,
                "%lld",
                v6[2 * v51
                 + 2 * (unsigned __int16)xmmword_140169140 * (v50 + v29 * (unsigned int)WORD1(xmmword_140169140))]);
              sub_1400BB4C8(&v64, 20LL, "%lld", v6[v33 + 1]);
              sub_1400BB430(v32, v34, &v62);
              sub_1400BB430(v31, v35, &v64);
              if ( (unsigned int)v29 < 0xD )
              {
                sub_1400BB430(v32, v36, ", ");
                sub_1400BB430(v31, v37, ", ");
              }
              ++v29;
            }
            while ( v29 < 14 );
            ++v52;
            v22 = v50 + 1;
            v4 = -1073741823;
            v1 = a1;
            v23 = v53 + 1;
            v5 = v59;
            v20 = v55;
          }
          v19 = v51 + 1;
          v21 = v54 + 72;
          v20 += 9LL;
        }
        v38 = *(_QWORD *)(v1 + 160);
        if ( v38 )
        {
          v39 = (const char *)(v38 + 90);
        }
        else
        {
          v40 = *(_QWORD *)(v1 + 152);
          if ( !v40
            || (v39 = (const char *)(v40 + 41),
                (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)(v1 + 24) + 608LL) + 184LL) & 0x40) == 0) )
          {
            v39 = 0LL;
          }
        }
        if ( (byte_1401694F4 & 8) != 0 )
        {
          v41 = *(_QWORD *)(v1 + 24);
          v42 = (const char *)&dword_140149108;
          v43 = (const wchar_t *)&unk_140149394;
          if ( v39 )
            v42 = v39;
          if ( *(_QWORD *)(v41 + 5080) )
            v43 = *(const wchar_t **)(v41 + 5080);
          LOBYTE(v49) = 2;
          sub_1400AC31C(
            (__int64)&RegHandle,
            (__int64)&stru_14014A2B8,
            0LL,
            *(_DWORD *)(v41 + 56),
            *(_BYTE *)(v1 + 104),
            *(_BYTE *)(v1 + 105),
            *(_BYTE *)(v1 + 106),
            v1 + 2104,
            v41 + 5064,
            *(_DWORD *)(v1 + 3432),
            *(const wchar_t **)(v41 + 4720),
            (const char *)(v1 + 168),
            (const char *)(v1 + 177),
            (const char *)(v1 + 242),
            v43,
            v42,
            *(_BYTE *)(v1 + 506) & 1,
            v49,
            (int)L"4K, 8K, 16K, 32K, 64K, 128K, 256K, 1M, 1M+",
            (int)L"128us, 256us, 512us, 1ms, 4ms, 16ms, 64ms, 128ms, 256ms, 512ms, 1000ms, 2000ms, 10000ms, 10000+ms",
            v56,
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
      }
    }
    else
    {
LABEL_3:
      v4 = -1073741801;
    }
  }
  v44 = 0LL;
  do
  {
    v45 = 9LL;
    do
    {
      v46 = (char *)Dst[v44];
      if ( v46 )
      {
        ExFreePoolWithTag(v46, 0x65546152u);
        Dst[v44] = 0LL;
      }
      v47 = P[v44];
      if ( v47 )
      {
        ExFreePoolWithTag(v47, 0x65546152u);
        P[v44] = 0LL;
      }
      ++v44;
      --v45;
    }
    while ( v45 );
    --v57;
  }
  while ( v57 );
  if ( v6 )
    ExFreePoolWithTag(v6, 0x65546152u);
  if ( v5 )
    ExFreePoolWithTag(v5, 0x65546152u);
  return v4;
}
