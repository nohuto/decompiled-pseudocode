/*
 * XREFs of StorpTelemetryNvmeSendNamespaceIoSizeDistributionData @ 0x1400BED48
 * Callers:
 *     StorpTelemetryNvmeSendNamespacePerfData @ 0x1400BF5B8 (StorpTelemetryNvmeSendNamespacePerfData.c)
 * Callees:
 *     RaidAllocatePool @ 0x14000A250 (RaidAllocatePool.c)
 *     McTemplateK0qjzshqussssjqzzxssssssssssssssssssssssssssssssssssss_EtwWriteTransfer @ 0x1400B3C7C (McTemplateK0qjzshqussssjqzzxssssssssssssssssssssssssssssssssssss_EtwWriteTransfer.c)
 *     StringCchCatA @ 0x1400C4630 (StringCchCatA.c)
 *     StringCchPrintfA @ 0x1400C46C8 (StringCchPrintfA.c)
 *     __security_check_cookie @ 0x140138590 (__security_check_cookie.c)
 *     memmove @ 0x140138680 (memmove.c)
 *     memset_0 @ 0x140138980 (memset_0.c)
 */

__int64 __fastcall StorpTelemetryNvmeSendNamespaceIoSizeDistributionData(__int64 a1)
{
  __int64 v1; // rdi
  __int64 v2; // r14
  __int64 v3; // r12
  unsigned int v4; // esi
  void *v5; // r15
  _QWORD *v6; // r13
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
  int v20; // edx
  __int64 v21; // rbx
  __int64 v22; // rcx
  int v23; // edx
  char **v24; // r12
  void *v25; // rax
  __int64 v26; // rbx
  __int64 v27; // r9
  void *v28; // rdi
  void *v29; // rax
  int v30; // edi
  char *v31; // rax
  char *v32; // r12
  char *v33; // r15
  __int64 v34; // rbx
  size_t v35; // rdx
  size_t v36; // rdx
  size_t v37; // rdx
  size_t v38; // rdx
  __int64 v39; // r11
  _WORD *v40; // rax
  __int16 v41; // ax
  char v42; // al
  unsigned __int8 v43; // cl
  char v44; // cl
  unsigned __int8 v45; // cl
  char v46; // cl
  unsigned __int8 v47; // cl
  unsigned __int8 v48; // cl
  __int64 v49; // rax
  const char *v50; // r8
  __int64 v51; // rbx
  __int64 v52; // rdi
  PVOID v53; // rcx
  PVOID v54; // rcx
  int v56; // [rsp+1C8h] [rbp-80h]
  int v57; // [rsp+1CCh] [rbp-7Ch]
  __int64 v58; // [rsp+1D0h] [rbp-78h]
  char **v59; // [rsp+1D8h] [rbp-70h]
  __int64 v60; // [rsp+1E0h] [rbp-68h]
  __int64 v61; // [rsp+1E8h] [rbp-60h]
  char v62; // [rsp+1F0h] [rbp-58h]
  __int64 v63; // [rsp+1F8h] [rbp-50h]
  _QWORD *Pool; // [rsp+220h] [rbp-28h]
  PVOID P[18]; // [rsp+228h] [rbp-20h] BYREF
  PVOID v67[18]; // [rsp+2B8h] [rbp+70h] BYREF
  char v68[13]; // [rsp+348h] [rbp+100h] BYREF
  int v69; // [rsp+355h] [rbp+10Dh]
  __int64 v70; // [rsp+360h] [rbp+118h] BYREF
  char v71; // [rsp+368h] [rbp+120h]
  char pszDest[16]; // [rsp+370h] [rbp+128h] BYREF
  int v73; // [rsp+380h] [rbp+138h]
  char pszSrc[16]; // [rsp+388h] [rbp+140h] BYREF
  int v75; // [rsp+398h] [rbp+150h]
  __int128 v76; // [rsp+3A0h] [rbp+158h] BYREF
  __int128 v77; // [rsp+3B0h] [rbp+168h]
  __int64 v78; // [rsp+3C0h] [rbp+178h]
  char v79; // [rsp+3C8h] [rbp+180h]

  v1 = HIDWORD(qword_1401730B0);
  v2 = a1;
  v3 = 0LL;
  v62 = 0;
  v4 = -1073741823;
  v5 = 0LL;
  v6 = 0LL;
  memset_0(P, 0, sizeof(P));
  memset_0(v67, 0, sizeof(v67));
  v69 = 0;
  v78 = 0LL;
  v79 = 0;
  v70 = 0LL;
  v71 = 0;
  v7 = *(_QWORD *)(v2 + 608);
  strcpy(v68, "PCI vendor: ");
  v76 = 0LL;
  v63 = 2LL;
  v77 = 0LL;
  if ( *(_QWORD *)(v7 + 16) )
  {
    Pool = (_QWORD *)RaidAllocatePool(72LL, (unsigned int)dword_1401730C4, 1700028754LL, *(_QWORD *)(v2 + 8));
    v5 = Pool;
    if ( Pool
      && (RecommendedSharedDataAlignment = KeGetRecommendedSharedDataAlignment(),
          v9 = KeGetRecommendedSharedDataAlignment(),
          (v6 = (_QWORD *)RaidAllocatePool(
                            72LL,
                            -RecommendedSharedDataAlignment & (v9 + 16 * (_DWORD)v1 - 1),
                            1700028754LL,
                            *(_QWORD *)(v2 + 8))) != 0LL) )
    {
      memmove(Pool, *(const void **)(*(_QWORD *)(v2 + 608) + 16LL), (unsigned int)dword_1401730C4);
      for ( i = 1; i < g_RaidNumberProcessors; ++i )
      {
        v11 = (unsigned int)dword_1401730BC * i;
        if ( (_DWORD)v1 )
        {
          v12 = Pool + 1;
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
        v16 = (char *)Pool - v14;
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
        v62 = v3;
      }
      memmove(*(void **)(*(_QWORD *)(v2 + 608) + 40LL), Pool, (unsigned int)dword_1401730BC);
      if ( v3 )
      {
        v20 = 0;
        v21 = 0LL;
        v22 = 0LL;
        while ( 1 )
        {
          v60 = v22;
          v61 = v21;
          v57 = v20;
          if ( v20 >= 2 )
            break;
          v23 = 0;
          v24 = (char **)((char *)v67 + v22);
          v58 = 0LL;
          while ( 1 )
          {
            v59 = v24;
            v56 = v23;
            if ( v23 >= 9 )
              break;
            v25 = (void *)RaidAllocatePool(64LL, 351LL, 1700028754LL, *(_QWORD *)(v2 + 8));
            v26 = v58 + v21;
            v27 = *(_QWORD *)(v2 + 8);
            v28 = v25;
            P[v26] = v25;
            v29 = (void *)RaidAllocatePool(64LL, 351LL, 1700028754LL, v27);
            v67[v26] = v29;
            if ( !v28 || !v29 )
              goto LABEL_3;
            v30 = 0;
            v31 = *(v24 - 18);
            v32 = *v24;
            v33 = v31;
            do
            {
              v73 = 0;
              v75 = 0;
              *(_OWORD *)pszDest = 0LL;
              *(_OWORD *)pszSrc = 0LL;
              v34 = 2LL
                  * (v57 + (unsigned __int16)xmmword_140173080 * (v56 + v30 * (unsigned int)WORD1(xmmword_140173080)));
              StringCchPrintfA(
                pszDest,
                0x14uLL,
                "%lld",
                v6[2 * v57
                 + 2 * (unsigned __int16)xmmword_140173080 * (v56 + v30 * (unsigned int)WORD1(xmmword_140173080))]);
              StringCchPrintfA(pszSrc, 0x14uLL, "%lld", v6[v34 + 1]);
              StringCchCatA(v33, v35, pszDest);
              StringCchCatA(v32, v36, pszSrc);
              if ( (unsigned int)v30 < 0xD )
              {
                StringCchCatA(v33, v37, ", ");
                StringCchCatA(v32, v38, ", ");
              }
              ++v30;
            }
            while ( v30 < 14 );
            ++v58;
            v23 = v56 + 1;
            v4 = -1073741823;
            v2 = a1;
            v24 = v59 + 1;
            v5 = Pool;
            v21 = v61;
          }
          v20 = v57 + 1;
          v22 = v60 + 72;
          v21 += 9LL;
        }
        v39 = *(_QWORD *)(v2 + 16);
        if ( v39 )
        {
          v40 = *(_WORD **)(v39 + 592);
          if ( v40 )
          {
            v41 = *v40 >> 12;
            if ( (unsigned __int8)v41 > 9u )
              v42 = v41 + 55;
            else
              v42 = v41 + 48;
            v68[12] = v42;
            v43 = *(_BYTE *)(*(_QWORD *)(v39 + 592) + 1LL) & 0xF;
            if ( v43 > 9u )
              v44 = v43 + 55;
            else
              v44 = v43 + 48;
            LOBYTE(v69) = v44;
            v45 = (**(_BYTE **)(v39 + 592) >> 4) & 0xF;
            if ( v45 > 9u )
              v46 = v45 + 55;
            else
              v46 = v45 + 48;
            BYTE1(v69) = v46;
            v47 = **(_BYTE **)(v39 + 592) & 0xF;
            if ( v47 > 9u )
              v48 = v47 + 55;
            else
              v48 = v47 + 48;
            HIWORD(v69) = v48;
            v49 = *(_QWORD *)(v39 + 592);
            v76 = *(_OWORD *)(v49 + 24);
            v77 = *(_OWORD *)(v49 + 40);
            v78 = *(_QWORD *)(v49 + 56);
            v70 = *(_QWORD *)(*(_QWORD *)(v39 + 592) + 64LL);
          }
        }
        if ( (byte_14017344A & 0x20) != 0 )
        {
          v50 = (const char *)&dword_140154ADC;
          if ( *(_QWORD *)(v39 + 752) )
            v50 = *(const char **)(v39 + 752);
          McTemplateK0qjzshqussssjqzzxssssssssssssssssssssssssssssssssssss_EtwWriteTransfer(
            (__int64)&StorPortEventProvider_Context,
            (__int64)&NVMeNamespaceIoSizeDistribution,
            0LL,
            *(_DWORD *)(*(_QWORD *)(v39 + 128) + 56LL),
            *(_QWORD *)(v39 + 128) + 1048LL,
            *(const wchar_t **)(*(_QWORD *)(v39 + 128) + 1032LL),
            *(const char **)(v39 + 792),
            *(_WORD *)(v39 + 4),
            *(_DWORD *)(v2 + 56),
            *(_BYTE *)(v39 + 744),
            v50,
            v68,
            (const char *)&v76,
            (const char *)&v70,
            v2 + 160,
            (*(_BYTE *)(v39 + 136) & 2) != 0 ? 20 : 17,
            (int)L"4K, 8K, 16K, 32K, 64K, 128K, 256K, 1M, 1M+",
            (int)L"128us, 256us, 512us, 1ms, 4ms, 16ms, 64ms, 128ms, 256ms, 512ms, 1000ms, 2000ms, 10000ms, 10000+ms",
            v62,
            (const char *)P[0],
            (const char *)v67[0],
            (const char *)P[1],
            (const char *)v67[1],
            (const char *)P[2],
            (const char *)v67[2],
            (const char *)P[3],
            (const char *)v67[3],
            (const char *)P[4],
            (const char *)v67[4],
            (const char *)P[5],
            (const char *)v67[5],
            (const char *)P[6],
            (const char *)v67[6],
            (const char *)P[7],
            (const char *)v67[7],
            (const char *)P[8],
            (const char *)v67[8],
            (const char *)P[9],
            (const char *)v67[9],
            (const char *)P[10],
            (const char *)v67[10],
            (const char *)P[11],
            (const char *)v67[11],
            (const char *)P[12],
            (const char *)v67[12],
            (const char *)P[13],
            (const char *)v67[13],
            (const char *)P[14],
            (const char *)v67[14],
            (const char *)P[15],
            (const char *)v67[15],
            (const char *)P[16],
            (const char *)v67[16],
            (const char *)P[17],
            (const char *)v67[17]);
        }
      }
    }
    else
    {
LABEL_3:
      v4 = -1073741801;
    }
  }
  v51 = 0LL;
  do
  {
    v52 = 9LL;
    do
    {
      v53 = P[v51];
      if ( v53 )
      {
        ExFreePoolWithTag(v53, 0x65546152u);
        P[v51] = 0LL;
      }
      v54 = v67[v51];
      if ( v54 )
      {
        ExFreePoolWithTag(v54, 0x65546152u);
        v67[v51] = 0LL;
      }
      ++v51;
      --v52;
    }
    while ( v52 );
    --v63;
  }
  while ( v63 );
  if ( v6 )
    ExFreePoolWithTag(v6, 0x65546152u);
  if ( v5 )
    ExFreePoolWithTag(v5, 0x65546152u);
  return v4;
}
