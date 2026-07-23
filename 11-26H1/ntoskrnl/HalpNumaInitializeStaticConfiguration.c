/*
 * XREFs of HalpNumaInitializeStaticConfiguration @ 0x140CB7A3C
 * Callers:
 *     HalpSetupAcpiPhase0 @ 0x140CB9944 (HalpSetupAcpiPhase0.c)
 * Callees:
 *     HalpAcpiGetTable @ 0x140344B6C (HalpAcpiGetTable.c)
 *     qsort @ 0x140539380 (qsort.c)
 *     HalpMmAllocateMemoryInternal @ 0x140580210 (HalpMmAllocateMemoryInternal.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 *     HalpAllocateNumaConfigData @ 0x140CB7250 (HalpAllocateNumaConfigData.c)
 *     HalpGetAvailableProximityId @ 0x140CB73F4 (HalpGetAvailableProximityId.c)
 *     HalpGetNumaProcMemoryCount @ 0x140CB7480 (HalpGetNumaProcMemoryCount.c)
 *     HalpInitializeConfigurationFromMadt @ 0x140CB76B0 (HalpInitializeConfigurationFromMadt.c)
 *     HalpNumaSortProcessors @ 0x140CB8688 (HalpNumaSortProcessors.c)
 *     HalpUpdateConfigurationFromMsct @ 0x140CB8724 (HalpUpdateConfigurationFromMsct.c)
 *     HalpVerifySratEntryLengthAndFlag @ 0x140CB8ACC (HalpVerifySratEntryLengthAndFlag.c)
 *     HalpChannelInitializeStaticConfiguration @ 0x140CBACD8 (HalpChannelInitializeStaticConfiguration.c)
 */

char __fastcall HalpNumaInitializeStaticConfiguration(__int64 a1)
{
  __int64 v1; // r14
  void *MemoryInternal; // rax
  unsigned int v3; // edi
  unsigned int v4; // ebx
  __int64 v5; // rdx
  unsigned int v6; // edi
  unsigned int v7; // eax
  __int64 v8; // r8
  unsigned int v9; // r15d
  unsigned int v10; // edi
  char v11; // r13
  int v12; // r12d
  __int64 v13; // r11
  unsigned __int64 v14; // rsi
  __int64 v15; // r14
  __int64 v16; // rax
  __int64 v17; // rbx
  unsigned __int8 *v18; // r11
  char v19; // dl
  int v20; // r8d
  char v21; // cl
  __int64 v22; // r10
  __int64 v23; // r9
  unsigned int v24; // ecx
  int v25; // r10d
  unsigned __int64 v26; // r9
  __int64 v27; // rcx
  unsigned __int64 v28; // r10
  __int64 v29; // rcx
  __int64 v30; // rcx
  _QWORD *v31; // rax
  __int64 v32; // rcx
  int *v33; // rax
  int v34; // r9d
  __int64 v35; // rcx
  __int64 v36; // r10
  __int64 v37; // rdx
  unsigned int v38; // edx
  __int64 v39; // rcx
  __int64 v40; // r9
  __int64 v41; // r10
  __int64 v42; // r8
  unsigned int i; // edx
  __int64 Table; // rax
  __int64 v45; // rdx
  __int64 v46; // rcx
  __int64 j; // r8
  __int64 v48; // r10
  unsigned int v49; // r11d
  unsigned int n; // r9d
  unsigned int v51; // edi
  int v52; // edi
  unsigned int ii; // ebx
  __int16 v54; // ax
  __int64 v55; // rcx
  __int64 v56; // rax
  unsigned int *v57; // r9
  __int64 v58; // rax
  unsigned int *v59; // rdi
  int v60; // ebx
  unsigned int *v61; // r15
  unsigned int v62; // r10d
  _QWORD *v63; // r14
  unsigned int v64; // r11d
  unsigned int k; // r11d
  int v66; // edx
  __int16 v67; // ax
  __int64 v68; // rdx
  unsigned int v69; // eax
  __int64 v70; // rcx
  __int64 v71; // rbx
  unsigned int v72; // edi
  unsigned int m; // esi
  int v74; // r15d
  int AvailableProximityId; // eax
  __int64 v76; // r10
  int v77; // r12d
  __int64 v78; // rcx
  unsigned int v79; // r11d
  int v80; // r9d
  int v81; // r9d
  __int64 v82; // rax
  __int64 v83; // rcx
  __int64 v84; // r11
  bool v85; // zf
  unsigned int v87; // [rsp+40h] [rbp-18h] BYREF
  unsigned int v88; // [rsp+44h] [rbp-14h] BYREF
  unsigned int v89[4]; // [rsp+48h] [rbp-10h] BYREF
  unsigned __int8 v91; // [rsp+B0h] [rbp+58h]
  int v92; // [rsp+B8h] [rbp+60h] BYREF

  v92 = 0;
  v89[0] = 0;
  v1 = a1;
  v87 = 0;
  v88 = 0;
  HalpNumaInitializationComplete = 1;
  HalpAcpiMpst = HalpAcpiGetTable(a1, 1414746189, 0, 0);
  HalpAcpiSrat = HalpAcpiGetTable(v1, 1413567059, 0, 0);
  HalpAcpiMsct = HalpAcpiGetTable(v1, 1413698381, 0, 0);
  if ( !HalpAcpiSrat )
  {
    LOBYTE(MemoryInternal) = HalpInitializeConfigurationFromMadt(v1);
    return (char)MemoryInternal;
  }
  v91 = *(_BYTE *)(HalpAcpiSrat + 8);
  LOBYTE(MemoryInternal) = HalpGetNumaProcMemoryCount(v89, (unsigned __int64)&v88, &v87, &v92);
  if ( (_BYTE)MemoryInternal )
  {
    v3 = v87;
    v4 = v88;
    LOBYTE(MemoryInternal) = HalpAllocateNumaConfigData(v89[0], v88, v87, v92);
    if ( HalpNumaConfig )
    {
      if ( !v3
        || (MemoryInternal = (void *)HalpMmAllocateMemoryInternal(24 * v3, 1u),
            (HalpNumaSratMemoryRanges = MemoryInternal) != 0LL) )
      {
        v6 = 0;
        if ( v4 )
        {
          if ( v4 >= 4 )
          {
            v5 = HalpNumaConfig;
            if ( *(_QWORD *)HalpNumaConfig > (unsigned __int64)HalpNumaConfig
              || *(_QWORD *)HalpNumaConfig + 4 * (unsigned __int64)(v4 - 1) < HalpNumaConfig )
            {
              v7 = v4 & 0xFFFFFFFC;
              do
                v6 += 4;
              while ( v6 < v7 );
              memset_0(*(void **)HalpNumaConfig, -1, 16 * ((unsigned __int64)v7 >> 2));
            }
          }
          if ( v6 < v4 )
          {
            v5 = 4LL * v6;
            v8 = v4 - v6;
            do
            {
              *(_DWORD *)(v5 + *(_QWORD *)HalpNumaConfig) = -1;
              v5 += 4LL;
              --v8;
            }
            while ( v8 );
          }
        }
        v9 = 0;
        v10 = 0;
        v11 = 0;
        v12 = 0;
        v13 = HalpAcpiSrat + 48;
        v14 = HalpAcpiSrat + *(unsigned int *)(HalpAcpiSrat + 4);
        if ( HalpAcpiSrat + 50 <= v14 )
        {
          v15 = HalpNumaConfig;
          while ( 1 )
          {
            v16 = *(unsigned __int8 *)(v13 + 1);
            if ( (unsigned __int8)v16 < 2u || (v17 = v13 + v16, v13 + v16 > v14) )
            {
LABEL_61:
              v1 = a1;
              goto LABEL_62;
            }
            LOBYTE(v5) = v91 >= 3u;
            if ( (unsigned __int8)HalpVerifySratEntryLengthAndFlag(v13, v5) )
              break;
            v13 = v17;
LABEL_60:
            if ( v13 + 2 > v14 )
              goto LABEL_61;
          }
          v19 = *(_BYTE *)(HalpAcpiSrat + 8);
          if ( v19 == 1 )
          {
            v20 = v18[2];
LABEL_35:
            v22 = HalpNumaConfig;
            v23 = 0LL;
            v24 = *(_DWORD *)(HalpNumaConfig + 56);
            if ( v24 )
            {
              while ( v20 != *(_DWORD *)(*(_QWORD *)(v15 + 24) + 4 * v23) )
              {
                v23 = (unsigned int)(v23 + 1);
                if ( (unsigned int)v23 >= v24 )
                  goto LABEL_38;
              }
            }
            else
            {
LABEL_38:
              if ( (_DWORD)v23 == v24 )
              {
                *(_DWORD *)(*(_QWORD *)(v15 + 24) + 4 * v23) = v20;
                *(_DWORD *)(*(_QWORD *)(HalpNumaConfig + 32) + 4 * v23) = v20;
                ++*(_DWORD *)(v22 + 56);
              }
            }
            v5 = *v18;
            switch ( *v18 )
            {
              case 0u:
                goto LABEL_43;
              case 1u:
                v26 = *((_QWORD *)v18 + 1) >> 12;
                v27 = *((_QWORD *)v18 + 2) >> 12;
                v28 = v27 + v26 - 1;
                if ( v26 < HalpMinNumaPage )
                  HalpMinNumaPage = *((_QWORD *)v18 + 1) >> 12;
                if ( v28 > HalpMaxNumaPage )
                  HalpMaxNumaPage = v27 + v26 - 1;
                HalpNumaPageCount += v27;
                v29 = 2LL * v10;
                v5 = v10++;
                *((_QWORD *)HalpNumaMemoryRanges + v29) = v26;
                *((_DWORD *)HalpNumaMemoryRanges + 2 * v29 + 2) = v20;
                v30 = 3 * v5;
                v31 = HalpNumaSratMemoryRanges;
                *((_QWORD *)HalpNumaSratMemoryRanges + v30 + 1) = v26;
                v31[v30 + 2] = v28;
                LODWORD(v31[v30]) = v20;
                break;
              case 2u:
LABEL_43:
                if ( (_BYTE)v5 )
                {
                  v25 = *((_DWORD *)v18 + 2);
                }
                else
                {
                  v25 = v18[3];
                  if ( v25 == 255 )
                    v25 = -1;
                }
                v5 = HalpNumaConfig;
                v32 = v9++;
                *(_DWORD *)(*(_QWORD *)HalpNumaConfig + 4 * v32) = v25;
                *(_DWORD *)(*(_QWORD *)(v5 + 16) + 4 * v32) = v20;
                ++*(_DWORD *)(*(_QWORD *)(v5 + 40) + 4 * v23);
                if ( v91 >= 3u )
                {
                  v33 = (int *)(v18 + 12);
                  if ( *v18 )
                    v33 = (int *)(v18 + 16);
                  if ( v11 )
                  {
                    if ( v12 != *v33 )
                      HalpMaximumClockDomainCount = 2;
                  }
                  else
                  {
                    v11 = 1;
                    v12 = *v33;
                  }
                }
                break;
            }
            v13 = (__int64)&v18[v18[1]];
            goto LABEL_60;
          }
          v21 = *v18;
          if ( v19 == 2 )
          {
            if ( v21 )
            {
              if ( v21 != 2 )
              {
LABEL_28:
                v20 = *(_DWORD *)(v18 + 2);
                goto LABEL_35;
              }
LABEL_33:
              v20 = *((_DWORD *)v18 + 1);
              goto LABEL_35;
            }
          }
          else if ( v21 )
          {
            if ( v21 != 2 && (((v21 - 1) & 0xFD) == 0 || v21 == 4) )
              goto LABEL_28;
            goto LABEL_33;
          }
          v20 = v18[2] + ((v18[9] + ((v18[10] + (v18[11] << 8)) << 8)) << 8);
          goto LABEL_35;
        }
LABEL_62:
        HalpNumaMemoryRangeCount = v10;
        LODWORD(HalpNumaSratMemoryRangeCount) = v10;
        *(_DWORD *)(HalpNumaConfig + 60) = v9;
        qsort(HalpNumaMemoryRanges, v10, 0x10uLL, (int (__cdecl *)(const void *, const void *))HalpNodeCostSort);
        qsort(
          HalpNumaSratMemoryRanges,
          (unsigned int)HalpNumaSratMemoryRangeCount,
          0x18uLL,
          (int (__cdecl *)(const void *, const void *))HalpCompareNumaMemoryRanges);
        v34 = 0;
        if ( v10 > 1 )
        {
          v35 = 0LL;
          v36 = v10 - 1;
          v37 = 16LL;
          do
          {
            if ( *(_DWORD *)((char *)HalpNumaMemoryRanges + v35 + 8) != *(_DWORD *)((char *)HalpNumaMemoryRanges
                                                                                  + v37
                                                                                  + 8) )
            {
              v35 = 16LL * (unsigned int)++v34;
              *(_OWORD *)((char *)HalpNumaMemoryRanges + v35) = *(_OWORD *)((char *)HalpNumaMemoryRanges + v37);
            }
            v37 += 16LL;
            --v36;
          }
          while ( v36 );
        }
        v38 = v34 + 1;
        v39 = 2LL * (unsigned int)(v34 + 1);
        HalpNumaMemoryRangeCount = v34 + 1;
        HalpNumaMaxMemoryRangeCount = v34 + 1;
        v40 = (unsigned int)(v34 + 1);
        *((_QWORD *)HalpNumaMemoryRanges + v39) = -1LL;
        *((_DWORD *)HalpNumaMemoryRanges + 4 * v38 + 2) = 0;
        *(_QWORD *)HalpNumaMemoryRanges = 0LL;
        if ( v38 )
        {
          v41 = HalpNumaConfig;
          v42 = 0LL;
          do
          {
            for ( i = 0; i < *(_DWORD *)(v41 + 56); ++i )
            {
              if ( *(_DWORD *)((char *)HalpNumaMemoryRanges + v42 + 8) == *(_DWORD *)(*(_QWORD *)(v41 + 24) + 4LL * i) )
              {
                *(_DWORD *)((char *)HalpNumaMemoryRanges + v42 + 8) = i;
                break;
              }
            }
            v42 += 16LL;
            --v40;
          }
          while ( v40 );
        }
        if ( HalpAcpiMsct )
          HalpUpdateConfigurationFromMsct(
            HalpNumaConfig + 56,
            *(_DWORD *)(HalpNumaConfig + 64),
            HalpNumaConfig + 60,
            *(_DWORD *)(HalpNumaConfig + 68),
            (__int64)&HalpMaximumClockDomainCount,
            *(_QWORD *)(HalpNumaConfig + 24),
            *(_QWORD *)(HalpNumaConfig + 40),
            *(_QWORD *)(HalpNumaConfig + 16));
        Table = HalpAcpiGetTable(v1, 1414089811, 0, 0);
        v48 = Table;
        if ( Table )
        {
          v49 = *(_DWORD *)(Table + 36);
          v46 = v49 * v49 + 44;
          if ( (unsigned int)v46 > *(_DWORD *)(Table + 4) )
          {
LABEL_90:
            v57 = *(unsigned int **)(*(_QWORD *)(v1 + 240) + 296LL);
            if ( !HalpAcpiSlit )
            {
              if ( v57
                && (v45 = HalpNumaConfig,
                    v58 = *v57,
                    v59 = (unsigned int *)(HalpNumaConfig + 56),
                    (_DWORD)v58 == *(_DWORD *)(HalpNumaConfig + 56)) )
              {
                v60 = 0;
                v61 = &v57[v58];
                v62 = 0;
                v63 = (_QWORD *)(HalpNumaConfig + 24);
                while ( v62 < *v59 )
                {
                  v64 = *v57;
                  for ( j = 0LL; (unsigned int)j < v64; j = (unsigned int)(j + 1) )
                  {
                    v46 = *(unsigned int *)(*v63 + 4LL * v62);
                    if ( v57[(unsigned int)j + 1] == (_DWORD)v46 )
                    {
                      v60 = v64 * j;
                      goto LABEL_101;
                    }
                  }
                  if ( (_DWORD)j == v64 )
                    goto LABEL_110;
LABEL_101:
                  for ( k = 0; k < *v59; ++k )
                  {
                    j = *v57;
                    v66 = 0;
                    if ( (_DWORD)j )
                    {
                      v46 = *(unsigned int *)(*v63 + 4LL * k);
                      while ( v57[v66 + 1] != (_DWORD)v46 )
                      {
                        if ( ++v66 >= (unsigned int)j )
                          goto LABEL_107;
                      }
                    }
                    else
                    {
LABEL_107:
                      if ( v66 == (_DWORD)j )
                        goto LABEL_110;
                    }
                    v67 = *((_WORD *)v61 + (unsigned int)(v60 + v66) + 2);
                    v46 = *(_QWORD *)(HalpNumaConfig + 48);
                    v68 = k + *(_DWORD *)(HalpNumaConfig + 64) * v62;
                    *(_WORD *)(v46 + 2 * v68) = v67;
                  }
                  v45 = HalpNumaConfig;
                  v46 = v62 * (*(_DWORD *)(HalpNumaConfig + 64) + 1);
                  ++v62;
                  *(_WORD *)(*(_QWORD *)(HalpNumaConfig + 48) + 2 * v46) = 0;
                }
              }
              else
              {
LABEL_110:
                v45 = HalpNumaConfig;
                j = 0LL;
                v69 = *(_DWORD *)(HalpNumaConfig + 56);
                if ( v69 )
                {
                  do
                  {
                    v57 = 0LL;
                    if ( v69 )
                    {
                      do
                      {
                        v70 = (unsigned int)((_DWORD)v57 + *(_DWORD *)(v45 + 64) * j);
                        v57 = (unsigned int *)(unsigned int)((_DWORD)v57 + 1);
                        *(_WORD *)(*(_QWORD *)(v45 + 48) + 2 * v70) = 1;
                      }
                      while ( (unsigned int)v57 < *(_DWORD *)(v45 + 56) );
                    }
                    v46 = (unsigned int)(j * (*(_DWORD *)(v45 + 64) + 1));
                    j = (unsigned int)(j + 1);
                    *(_WORD *)(*(_QWORD *)(v45 + 48) + 2 * v46) = 0;
                    v69 = *(_DWORD *)(v45 + 56);
                  }
                  while ( (unsigned int)j < v69 );
                }
              }
            }
            if ( HalpSplitLargeNumaNodes )
            {
              v71 = HalpNumaConfig;
              HalpNumaSortProcessors(
                *(unsigned int *)(HalpNumaConfig + 60),
                *(_QWORD *)(HalpNumaConfig + 16),
                *(_QWORD *)HalpNumaConfig,
                v57);
              v72 = *(_DWORD *)(v71 + 56);
              for ( m = 0; m < v72; ++m )
              {
                v74 = HalpMaximumGroupSize;
                if ( *(_DWORD *)(*(_QWORD *)(v71 + 40) + 4LL * m) > (unsigned int)HalpMaximumGroupSize )
                {
                  AvailableProximityId = HalpGetAvailableProximityId();
                  v76 = HalpNumaConfig;
                  *(_DWORD *)(v71 + 56) = v72 + 1;
                  v77 = AvailableProximityId;
                  v78 = *(_QWORD *)(v71 + 40);
                  v79 = 0;
                  v80 = *(_DWORD *)(v78 + 4LL * m);
                  *(_DWORD *)(v78 + 4LL * m) = v74;
                  v81 = v80 - v74;
                  *(_DWORD *)(*(_QWORD *)(v71 + 40) + 4LL * v72) = v81;
                  *(_DWORD *)(*(_QWORD *)(v76 + 24) + 4LL * v72) = AvailableProximityId;
                  for ( *(_DWORD *)(*(_QWORD *)(v76 + 32) + 4LL * v72) = *(_DWORD *)(*(_QWORD *)(v76 + 32) + 4LL * m);
                        v79 < v72;
                        *(_WORD *)(*(_QWORD *)(v76 + 48) + 2 * v83) = *(_WORD *)(*(_QWORD *)(v76 + 48) + 2 * v82) )
                  {
                    *(_WORD *)(*(_QWORD *)(v76 + 48) + 2LL * (v72 + *(_DWORD *)(v76 + 64) * v79)) = *(_WORD *)(*(_QWORD *)(v76 + 48) + 2LL * (*(_DWORD *)(v76 + 64) * v79 + m));
                    v82 = v79 + m * *(_DWORD *)(v76 + 64);
                    v83 = v79 + v72 * *(_DWORD *)(v76 + 64);
                    ++v79;
                  }
                  j = HalpNumaConfig;
                  v46 = v72 * (*(_DWORD *)(HalpNumaConfig + 64) + 1);
                  *(_WORD *)(*(_QWORD *)(HalpNumaConfig + 48) + 2 * v46) = 0;
                  v45 = (unsigned int)(*(_DWORD *)(v71 + 60) - 1);
                  if ( *(_DWORD *)(v71 + 60) != 1 )
                  {
                    do
                    {
                      if ( !v81 )
                        break;
                      v84 = *(_QWORD *)(v71 + 16);
                      v46 = *(unsigned int *)(*(_QWORD *)(j + 24) + 4LL * m);
                      if ( *(_DWORD *)(v84 + 4 * v45) == (_DWORD)v46 )
                      {
                        --v81;
                        *(_DWORD *)(v84 + 4 * v45) = v77;
                      }
                      v85 = (_DWORD)v45 == 1;
                      v45 = (unsigned int)(v45 - 1);
                    }
                    while ( !v85 );
                  }
                }
                v72 = *(_DWORD *)(v71 + 56);
              }
            }
            if ( HalpMaximumClockDomainCount != 1 )
              HalpTimerPlatformSourceForced = 1;
            LOBYTE(MemoryInternal) = HalpChannelInitializeStaticConfiguration(v46, v45, j);
            return (char)MemoryInternal;
          }
          j = HalpNumaConfig;
          for ( n = 0; n < *(_DWORD *)(j + 56); ++n )
          {
            v46 = n;
            v51 = *(_DWORD *)(*(_QWORD *)(j + 24) + 4LL * n);
            if ( v51 >= v49 )
              goto LABEL_90;
            v52 = v49 * v51;
            for ( ii = 0; ii < *(_DWORD *)(j + 56); ++ii )
            {
              v46 = ii;
              v45 = *(unsigned int *)(*(_QWORD *)(j + 24) + 4LL * ii);
              if ( (unsigned int)v45 >= v49 )
                goto LABEL_90;
              v54 = *(unsigned __int8 *)((unsigned int)(v45 + v52) + v48 + 44);
              if ( (unsigned __int8)v54 < 0xAu )
                goto LABEL_90;
              v55 = ii + *(_DWORD *)(j + 64) * n;
              *(_WORD *)(*(_QWORD *)(j + 48) + 2 * v55) = v54 << 7;
            }
            v45 = 1280LL;
            v56 = *(_QWORD *)(j + 48);
            v46 = n * (*(_DWORD *)(j + 64) + 1);
            if ( *(_WORD *)(v56 + 2 * v46) != 1280 )
              goto LABEL_90;
            *(_WORD *)(v56 + 2 * v46) = 0;
          }
        }
        HalpAcpiSlit = v48;
        goto LABEL_90;
      }
    }
  }
  return (char)MemoryInternal;
}
