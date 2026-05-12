/*
 * XREFs of StorpTelemetrySendUnitIoSizeDistributionData @ 0x1400C2778
 * Callers:
 *     StorpTelemetrySendUnitPerfData @ 0x14004FD38 (StorpTelemetrySendUnitPerfData.c)
 *     RaUnitStorageDataCollectionIoctl @ 0x14018B6FC (RaUnitStorageDataCollectionIoctl.c)
 * Callees:
 *     RaidAllocatePool @ 0x14000A250 (RaidAllocatePool.c)
 *     McTemplateK0quuujjqzssszstuzzxssssssssssssssssssssssssssssssssssss_EtwWriteTransfer @ 0x1400B4A10 (McTemplateK0quuujjqzssszstuzzxssssssssssssssssssssssssssssssssssss_EtwWriteTransfer.c)
 *     StringCchCatA @ 0x1400C4630 (StringCchCatA.c)
 *     StringCchPrintfA @ 0x1400C46C8 (StringCchPrintfA.c)
 *     __security_check_cookie @ 0x140138590 (__security_check_cookie.c)
 *     memmove @ 0x140138680 (memmove.c)
 *     memset_0 @ 0x140138980 (memset_0.c)
 */

__int64 __fastcall StorpTelemetrySendUnitIoSizeDistributionData(__int64 a1)
{
  __int64 v1; // rdi
  __int64 v2; // r14
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
  char **v23; // rsi
  void *v24; // rax
  __int64 v25; // rbx
  __int64 v26; // r9
  void *v27; // rdi
  void *v28; // rax
  int v29; // edi
  char *v30; // rax
  char *v31; // rsi
  char *v32; // r13
  __int64 v33; // rbx
  size_t v34; // rdx
  size_t v35; // rdx
  size_t v36; // rdx
  size_t v37; // rdx
  __int64 v38; // rax
  const char *v39; // rcx
  __int64 v40; // rdx
  __int64 v41; // rsi
  const char *v42; // rdi
  const wchar_t *v43; // r9
  __int64 v44; // rbx
  __int64 v45; // rdi
  PVOID v46; // rcx
  PVOID v47; // rcx
  int v49; // [rsp+90h] [rbp-1C8h]
  int v50; // [rsp+1D8h] [rbp-80h]
  int v51; // [rsp+1DCh] [rbp-7Ch]
  __int64 v52; // [rsp+1E0h] [rbp-78h]
  char **v53; // [rsp+1E8h] [rbp-70h]
  __int64 v54; // [rsp+1F0h] [rbp-68h]
  __int64 v55; // [rsp+1F8h] [rbp-60h]
  char v56; // [rsp+208h] [rbp-50h]
  __int64 v57; // [rsp+210h] [rbp-48h]
  _QWORD *Pool; // [rsp+238h] [rbp-20h]
  PVOID P[18]; // [rsp+248h] [rbp-10h] BYREF
  PVOID v61[18]; // [rsp+2D8h] [rbp+80h] BYREF
  char pszDest[16]; // [rsp+368h] [rbp+110h] BYREF
  int v63; // [rsp+378h] [rbp+120h]
  char pszSrc[16]; // [rsp+380h] [rbp+128h] BYREF
  int v65; // [rsp+390h] [rbp+138h]

  v1 = HIDWORD(qword_1401730B0);
  v2 = a1;
  v3 = 0LL;
  v56 = 0;
  v4 = -1073741823;
  v5 = 0LL;
  v6 = 0LL;
  memset_0(P, 0, sizeof(P));
  memset_0(v61, 0, sizeof(v61));
  v57 = 2LL;
  if ( *(_QWORD *)(v2 + 2384) )
  {
    Pool = (_QWORD *)RaidAllocatePool(72LL, (unsigned int)dword_1401730C4, 1700028754LL, *(_QWORD *)(v2 + 8));
    v5 = Pool;
    if ( Pool
      && (RecommendedSharedDataAlignment = KeGetRecommendedSharedDataAlignment(),
          v8 = KeGetRecommendedSharedDataAlignment(),
          (v6 = (_QWORD *)RaidAllocatePool(
                            72LL,
                            -RecommendedSharedDataAlignment & (v8 + 16 * (_DWORD)v1 - 1),
                            1700028754LL,
                            *(_QWORD *)(v2 + 8))) != 0LL) )
    {
      memmove(Pool, *(const void **)(v2 + 2384), (unsigned int)dword_1401730C4);
      for ( i = 1; i < g_RaidNumberProcessors; ++i )
      {
        v10 = (unsigned int)dword_1401730BC * i;
        if ( (_DWORD)v1 )
        {
          v11 = Pool + 1;
          v12 = v1;
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
      v13 = *(_QWORD *)(v2 + 2408);
      if ( (_DWORD)v1 )
      {
        v14 = (_QWORD *)(v13 + 8);
        v15 = (char *)Pool - v13;
        v16 = (char *)v6 - v13;
        v17 = v1;
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
      memmove(*(void **)(v2 + 2408), Pool, (unsigned int)dword_1401730BC);
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
          v23 = (char **)((char *)v61 + v21);
          v52 = 0LL;
          while ( 1 )
          {
            v53 = v23;
            v50 = v22;
            if ( v22 >= 9 )
              break;
            v24 = (void *)RaidAllocatePool(64LL, 351LL, 1700028754LL, *(_QWORD *)(v2 + 8));
            v25 = v52 + v20;
            v26 = *(_QWORD *)(v2 + 8);
            v27 = v24;
            P[v25] = v24;
            v28 = (void *)RaidAllocatePool(64LL, 351LL, 1700028754LL, v26);
            v61[v25] = v28;
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
              *(_OWORD *)pszDest = 0LL;
              *(_OWORD *)pszSrc = 0LL;
              v33 = 2LL
                  * (v51 + (unsigned __int16)xmmword_140173080 * (v50 + v29 * (unsigned int)WORD1(xmmword_140173080)));
              StringCchPrintfA(
                pszDest,
                0x14uLL,
                "%lld",
                v6[2 * v51
                 + 2 * (unsigned __int16)xmmword_140173080 * (v50 + v29 * (unsigned int)WORD1(xmmword_140173080))]);
              StringCchPrintfA(pszSrc, 0x14uLL, "%lld", v6[v33 + 1]);
              StringCchCatA(v32, v34, pszDest);
              StringCchCatA(v31, v35, pszSrc);
              if ( (unsigned int)v29 < 0xD )
              {
                StringCchCatA(v32, v36, ", ");
                StringCchCatA(v31, v37, ", ");
              }
              ++v29;
            }
            while ( v29 < 14 );
            ++v52;
            v22 = v50 + 1;
            v4 = -1073741823;
            v2 = a1;
            v23 = v53 + 1;
            v5 = Pool;
            v20 = v55;
          }
          v19 = v51 + 1;
          v21 = v54 + 72;
          v20 += 9LL;
        }
        v38 = *(_QWORD *)(v2 + 160);
        if ( v38 )
        {
          v39 = (const char *)(v38 + 90);
        }
        else
        {
          v40 = *(_QWORD *)(v2 + 152);
          if ( !v40
            || (v39 = (const char *)(v40 + 41),
                (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)(v2 + 24) + 608LL) + 184LL) & 0x40) == 0) )
          {
            v39 = 0LL;
          }
        }
        if ( (byte_140173444 & 8) != 0 )
        {
          v41 = *(_QWORD *)(v2 + 24);
          v42 = (const char *)&dword_140154ADC;
          v43 = (const wchar_t *)&unk_140153274;
          if ( v39 )
            v42 = v39;
          if ( *(_QWORD *)(v41 + 5144) )
            v43 = *(const wchar_t **)(v41 + 5144);
          LOBYTE(v49) = 2;
          McTemplateK0quuujjqzssszstuzzxssssssssssssssssssssssssssssssssssss_EtwWriteTransfer(
            (__int64)&StorPortEventProvider_Context,
            (__int64)&IoSizeDistribution,
            0LL,
            *(_DWORD *)(v41 + 56),
            *(_BYTE *)(v2 + 104),
            *(_BYTE *)(v2 + 105),
            *(_BYTE *)(v2 + 106),
            v2 + 2104,
            v41 + 5128,
            *(_DWORD *)(v2 + 3432),
            *(const wchar_t **)(v41 + 4784),
            (const char *)(v2 + 168),
            (const char *)(v2 + 177),
            (const char *)(v2 + 242),
            v43,
            v42,
            *(_BYTE *)(v2 + 506) & 1,
            v49,
            (int)L"4K, 8K, 16K, 32K, 64K, 128K, 256K, 1M, 1M+",
            (int)L"128us, 256us, 512us, 1ms, 4ms, 16ms, 64ms, 128ms, 256ms, 512ms, 1000ms, 2000ms, 10000ms, 10000+ms",
            v56,
            (const char *)P[0],
            (const char *)v61[0],
            (const char *)P[1],
            (const char *)v61[1],
            (const char *)P[2],
            (const char *)v61[2],
            (const char *)P[3],
            (const char *)v61[3],
            (const char *)P[4],
            (const char *)v61[4],
            (const char *)P[5],
            (const char *)v61[5],
            (const char *)P[6],
            (const char *)v61[6],
            (const char *)P[7],
            (const char *)v61[7],
            (const char *)P[8],
            (const char *)v61[8],
            (const char *)P[9],
            (const char *)v61[9],
            (const char *)P[10],
            (const char *)v61[10],
            (const char *)P[11],
            (const char *)v61[11],
            (const char *)P[12],
            (const char *)v61[12],
            (const char *)P[13],
            (const char *)v61[13],
            (const char *)P[14],
            (const char *)v61[14],
            (const char *)P[15],
            (const char *)v61[15],
            (const char *)P[16],
            (const char *)v61[16],
            (const char *)P[17],
            (const char *)v61[17]);
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
      v46 = P[v44];
      if ( v46 )
      {
        ExFreePoolWithTag(v46, 0x65546152u);
        P[v44] = 0LL;
      }
      v47 = v61[v44];
      if ( v47 )
      {
        ExFreePoolWithTag(v47, 0x65546152u);
        v61[v44] = 0LL;
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
