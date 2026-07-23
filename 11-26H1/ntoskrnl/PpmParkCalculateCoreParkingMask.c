/*
 * XREFs of PpmParkCalculateCoreParkingMask @ 0x14025D070
 * Callers:
 *     <none>
 * Callees:
 *     KeAddProcessorAffinityEx @ 0x140248080 (KeAddProcessorAffinityEx.c)
 *     ?RtlpCopyAffinityEx@@YAXPEAU_KAFFINITY_EX@@G0@Z @ 0x140253210 (-RtlpCopyAffinityEx@@YAXPEAU_KAFFINITY_EX@@G0@Z.c)
 *     RtlCountSetBitsAffinityEx @ 0x140253280 (RtlCountSetBitsAffinityEx.c)
 *     RtlAndAffinityEx @ 0x140253CF4 (RtlAndAffinityEx.c)
 *     Feature_PpmHighPerfSoftParkLatency__private_IsEnabledDeviceUsageNoInline @ 0x14025AA94 (Feature_PpmHighPerfSoftParkLatency__private_IsEnabledDeviceUsageNoInline.c)
 *     PpmParkComputeDiff @ 0x14025C028 (PpmParkComputeDiff.c)
 *     RtlOrAffinityEx @ 0x14025C158 (RtlOrAffinityEx.c)
 *     RtlSubtractAffinityEx @ 0x14025CBE8 (RtlSubtractAffinityEx.c)
 *     KeCpuSetQueryUnparkRecommendation @ 0x14025DFFC (KeCpuSetQueryUnparkRecommendation.c)
 *     PpmParkComputeUnparkMask @ 0x14025E0F0 (PpmParkComputeUnparkMask.c)
 *     KeGetPrcb @ 0x140290C30 (KeGetPrcb.c)
 *     PpmEventTraceSoftCoreParkingSelection @ 0x140418130 (PpmEventTraceSoftCoreParkingSelection.c)
 *     KeCheckProcessorAffinityEx @ 0x140421930 (KeCheckProcessorAffinityEx.c)
 *     KeEnumerateNextProcessor @ 0x14042E520 (KeEnumerateNextProcessor.c)
 *     PpmParkFindOverUtilizedProcessors @ 0x14049D2C0 (PpmParkFindOverUtilizedProcessors.c)
 *     PpmEventLPICoreParking @ 0x140611610 (PpmEventLPICoreParking.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 */

unsigned int PpmParkCalculateCoreParkingMask()
{
  unsigned int result; // eax
  struct _KAFFINITY_EX *v1; // r12
  struct _KAFFINITY_EX *v2; // r15
  struct _KAFFINITY_EX *v3; // rbx
  struct _KAFFINITY_EX *v4; // r14
  struct _KAFFINITY_EX *v5; // rdi
  struct _KAFFINITY_EX *v6; // r13
  int v7; // esi
  unsigned int v8; // edi
  __int64 v9; // r13
  unsigned int v10; // ecx
  __int64 v11; // rdx
  unsigned __int64 v12; // rax
  unsigned int v13; // ebx
  unsigned __int16 Size; // dx
  __int64 v15; // rdi
  unsigned __int16 i; // cx
  int j; // eax
  __int64 Prcb; // rax
  __int64 v19; // rcx
  __int64 v20; // rdx
  unsigned __int16 k; // cx
  unsigned int v22; // edi
  unsigned int v23; // r14d
  bool v24; // zf
  unsigned int v25; // ebx
  __int64 v26; // rax
  __int64 v27; // rcx
  __int64 v28; // rdx
  struct _KAFFINITY_EX *v29; // rbx
  unsigned __int16 UnparkRecommendation; // ax
  unsigned __int64 v31; // rax
  __int64 v32; // rax
  __int64 v33; // rcx
  __int64 v34; // rdx
  unsigned int v35; // ebx
  __int64 v36; // rax
  __int64 v37; // rcx
  __int64 v38; // rdx
  unsigned int v39; // eax
  int v40; // eax
  unsigned int v41; // ecx
  unsigned __int16 v42; // bx
  int IsEnabledDeviceUsageNoInline; // eax
  int v44; // edx
  unsigned int v45; // r9d
  unsigned int v46; // r8d
  __int64 v47; // rax
  unsigned int v48; // edx
  int v49; // r9d
  unsigned int v50; // r9d
  __int64 v51; // rax
  unsigned int v52; // edx
  unsigned int v53; // eax
  int v54; // r15d
  int v55; // ebx
  unsigned int v56; // [rsp+80h] [rbp-29h]
  unsigned int v57; // [rsp+84h] [rbp-25h]
  __int64 v58; // [rsp+88h] [rbp-21h]
  __int16 v59; // [rsp+88h] [rbp-21h]
  unsigned int v60; // [rsp+90h] [rbp-19h]
  __int128 v61; // [rsp+98h] [rbp-11h] BYREF
  __int64 v62; // [rsp+A8h] [rbp-1h]
  unsigned int v63; // [rsp+B0h] [rbp+7h]
  char *v64; // [rsp+B8h] [rbp+Fh]
  int v65; // [rsp+110h] [rbp+67h]
  char v66; // [rsp+110h] [rbp+67h]
  __int64 v67; // [rsp+118h] [rbp+6Fh]
  char v68; // [rsp+118h] [rbp+6Fh]
  __int64 v69; // [rsp+120h] [rbp+77h] BYREF
  unsigned int v70; // [rsp+128h] [rbp+7Fh] BYREF

  result = 0;
  v61 = 0LL;
  v62 = 0LL;
  v70 = 0;
  LODWORD(v69) = 0;
  if ( PpmIsParkingEnabled )
  {
    v1 = PpmParkPerfCheckAffinities;
    v2 = PpmParkPerfCheckAffinities + 1;
    v3 = PpmParkPerfCheckAffinities + 2;
    v4 = PpmParkPerfCheckAffinities + 3;
    v5 = PpmParkPerfCheckAffinities + 6;
    v6 = PpmParkPerfCheckAffinities + 7;
    memset_0(&PpmParkPerfCheckAffinities->8, 0, 8LL * PpmParkPerfCheckAffinities->Count);
    v7 = 1;
    v1->Count = 1;
    memset_0(&v2->8, 0, 8LL * v2->Count);
    v2->Count = 1;
    memset_0(&v3->8, 0, 8LL * v3->Count);
    v3->Count = 1;
    memset_0(&v4->8, 0, 8LL * v4->Count);
    v4->Count = 1;
    memset_0(&v1[4].8, 0, 8LL * v1[4].Count);
    v1[4].Count = 1;
    memset_0(&v1[5].8, 0, 8LL * v1[5].Count);
    v1[5].Count = 1;
    memset_0(&v5->8, 0, 8LL * v5->Count);
    v5->Count = 1;
    memset_0(&v6->8, 0, 8LL * v6->Count);
    v6->Count = 1;
    memset_0(&v1[8].8, 0, 8LL * v1[8].Count);
    v1[8].Count = 1;
    PpmParkSoftParkCurrentRank = 0;
    PpmParkSoftParkRankListChanged = 0;
    v64 = (char *)PpmCurrentProfile + 712 * SHIDWORD(PpmIdlePolicyLock.PropagateBoostsEntry.Next) + 40;
    v63 = 100 * (unsigned __int8)v64[221];
    if ( PpmParkNewSoftParkRankList )
      memset_0(PpmParkNewSoftParkRankList, 255, 4LL * (unsigned int)KeMaximumProcessors);
    v8 = 0;
    v60 = 0;
    if ( PpmParkNumNodes )
    {
      while ( 1 )
      {
        v9 = PpmParkNodes + 1264LL * v8;
        if ( (*(_BYTE *)(v9 + 1152) & 1) == 0 )
        {
          RtlpCopyAffinityEx(
            (struct _KAFFINITY_EX *)(v9 + 544),
            *(_WORD *)(v9 + 546),
            (struct _KAFFINITY_EX *)(v9 + 280));
          v10 = *(unsigned __int16 *)(v9 + 1138);
          v11 = v63;
          *(_WORD *)(v9 + 1212) = 0;
          *(_BYTE *)(v9 + 1214) = 0;
          if ( (unsigned __int16)v10 >= *(_WORD *)(v9 + 1142) )
            v10 = *(unsigned __int16 *)(v9 + 1142);
          v57 = v10;
          PpmParkFindOverUtilizedProcessors(v9, v11, v4);
          *(_BYTE *)(v9 + 1184) = 0;
          if ( PpmHeteroFavoredCoreRotationTimeoutMs )
          {
            v12 = MEMORY[0xFFFFF78000000008]
                / (10000
                 * (unsigned __int64)(unsigned int)PpmHeteroFavoredCoreRotationTimeoutMs);
            *(_QWORD *)(v9 + 1168) = v12;
            if ( v12 != *(_QWORD *)(v9 + 1176) )
            {
              *(_BYTE *)(v9 + 1184) = 1;
              *(_QWORD *)(v9 + 1176) = v12;
            }
          }
          v13 = 0;
          v56 = 0;
          if ( *(_BYTE *)(v9 + 10) )
            break;
        }
LABEL_122:
        v60 = ++v8;
        if ( v8 >= PpmParkNumNodes )
          goto LABEL_123;
      }
      while ( 1 )
      {
        Size = v1[6].Size;
        v15 = 624LL * v13;
        v67 = *(_QWORD *)(v9 + 1256);
        v58 = v15;
        LODWORD(v69) = 0;
        RtlpCopyAffinityEx(v1 + 6, Size, (struct _KAFFINITY_EX *)(v15 + v67 + 24));
        for ( i = 0; ; ++i )
        {
          if ( i >= v1[6].Count )
            goto LABEL_121;
          if ( v1[6].Bitmap[i] )
            break;
        }
        LODWORD(v69) = 0x100000;
        if ( (unsigned __int16)PpmParkGranularity > 1u )
        {
          memset_0(&v1->8, 0, 8LL * v1->Count);
          v1->Count = 1;
          LOWORD(v62) = 0;
          *((_QWORD *)&v61 + 1) = *(_QWORD *)(v15 + v67 + 288 + 8);
          *(_QWORD *)&v61 = v15 + v67 + 288;
          for ( j = KeEnumerateNextProcessor(&v70, &v61); ; j = KeEnumerateNextProcessor(&v70, &v61) )
          {
            if ( j )
              goto LABEL_26;
            Prcb = KeGetPrcb(v70);
            v19 = *(unsigned __int8 *)(Prcb + 208);
            v20 = *(_QWORD *)(Prcb + 36512);
            if ( v1->Count <= (unsigned __int16)v19 )
            {
              if ( v1->Size <= (unsigned __int16)v19 )
                continue;
              v1->Count = v19 + 1;
            }
            v1->Bitmap[v19] |= v20;
          }
        }
        RtlpCopyAffinityEx(v1, v1->Size, (struct _KAFFINITY_EX *)(v15 + v67 + 288));
LABEL_26:
        RtlAndAffinityEx(&v1->Count, &v1[6].Count, (__int64)v1);
        for ( k = 0; k < v1->Count; ++k )
        {
          if ( v1->Bitmap[k] )
          {
            LODWORD(v69) = v69 | 0x10000;
            break;
          }
        }
        v22 = *(unsigned __int16 *)(v15 + v67) - (unsigned int)RtlCountSetBitsAffinityEx(&v1->Count);
        v23 = 0;
        if ( v22 > v57 )
          v22 = v57;
        memset_0(&v2->8, 0, 8LL * v2->Count);
        v24 = KiClockTimerPerCpu == 0;
        v2->Count = 1;
        if ( v24 )
        {
          v25 = KiClockTimerOwner;
          v70 = KiClockTimerOwner;
          if ( (unsigned int)KeCheckProcessorAffinityEx(&v1[6], (unsigned int)KiClockTimerOwner) )
          {
            if ( v22 && !(unsigned int)KeCheckProcessorAffinityEx(v1, v25) )
              break;
          }
        }
LABEL_44:
        v29 = v1 + 2;
        memset_0(&v1[2].8, 0, 8LL * v1[2].Count);
        v1[2].Count = 1;
        UnparkRecommendation = KeCpuSetQueryUnparkRecommendation(&v1[6], &v1[2]);
        v65 = UnparkRecommendation;
        if ( UnparkRecommendation )
        {
          if ( (unsigned __int16)PpmParkGranularity <= 1u )
            goto LABEL_54;
          v31 = v1[2].Bitmap[0];
          LOWORD(v62) = 0;
          *((_QWORD *)&v61 + 1) = v31;
          *(_QWORD *)&v61 = v1 + 2;
          if ( (unsigned int)KeEnumerateNextProcessor(&v70, &v61) )
            goto LABEL_53;
          while ( 1 )
          {
            v32 = KeGetPrcb(v70);
            v33 = *(unsigned __int8 *)(v32 + 208);
            v34 = *(_QWORD *)(v32 + 36512);
            if ( v29->Count > (unsigned __int16)v33 )
              goto LABEL_50;
            if ( v1[2].Size > (unsigned __int16)v33 )
              break;
LABEL_51:
            if ( (unsigned int)KeEnumerateNextProcessor(&v70, &v61) )
            {
              v2 = v1 + 1;
LABEL_53:
              v65 = RtlCountSetBitsAffinityEx(&v1[2].Count);
LABEL_54:
              *((_QWORD *)&v61 + 1) = v1[2].Bitmap[0];
              LOWORD(v62) = 0;
              *(_QWORD *)&v61 = v1 + 2;
              while ( 1 )
              {
LABEL_64:
                if ( (unsigned int)KeEnumerateNextProcessor(&v70, &v61) )
                  goto LABEL_65;
                if ( v23 < v22 )
                {
                  v35 = v70;
                  if ( !(unsigned int)KeCheckProcessorAffinityEx(v1, v70) )
                    break;
                }
              }
              v36 = KeGetPrcb(v35);
              if ( (unsigned __int16)PpmParkGranularity <= 1u )
              {
                KeAddProcessorAffinityEx(&v2->Count, v35);
              }
              else
              {
                v37 = *(unsigned __int8 *)(v36 + 208);
                v38 = *(_QWORD *)(v36 + 36512);
                if ( v2->Count > (unsigned __int16)v37 )
                  goto LABEL_61;
                if ( v2->Size > (unsigned __int16)v37 )
                {
                  v2->Count = v37 + 1;
LABEL_61:
                  v2->Bitmap[v37] |= v38;
                }
              }
              LODWORD(v69) = v69 | 0x10;
              v23 = RtlCountSetBitsAffinityEx(&v2->Count);
              goto LABEL_64;
            }
          }
          v29->Count = v33 + 1;
LABEL_50:
          v29->Bitmap[v33] |= v34;
          goto LABEL_51;
        }
LABEL_65:
        v39 = *(unsigned __int16 *)(v58 + v67 + 2);
        if ( v23 >= v39 || v23 >= v22 )
        {
          v40 = v69;
        }
        else
        {
          v23 = v22;
          if ( v39 < v22 )
            v23 = *(unsigned __int16 *)(v58 + v67 + 2);
          v40 = v69 | 4;
          LODWORD(v69) = v69 | 4;
        }
        v41 = *(unsigned __int16 *)(v58 + v67 + 4);
        if ( v22 > v41 && v23 < v22 )
        {
          v22 = v23;
          if ( v41 > v23 )
            v22 = *(unsigned __int16 *)(v58 + v67 + 4);
          LODWORD(v69) = v40 | 8;
        }
        v42 = 0;
        if ( (PpmHeteroHgsContainmentState & 8) != 0 )
          v42 = *(_WORD *)(*(_QWORD *)(v9 + 1240) + 2LL * *(int *)(*(_QWORD *)(v9 + 1240) + 4LL) + 8);
        IsEnabledDeviceUsageNoInline = Feature_PpmHighPerfSoftParkLatency__private_IsEnabledDeviceUsageNoInline();
        v44 = *(unsigned __int16 *)(v58 + v67);
        if ( IsEnabledDeviceUsageNoInline )
        {
          v45 = *(unsigned __int16 *)(v58 + v67 + 6);
          if ( (unsigned __int16)v45 >= (unsigned __int16)v44 )
            v45 = *(unsigned __int16 *)(v58 + v67);
          v46 = v45;
          if ( !PpmCheckLatencyBoostActive )
            goto LABEL_86;
          v47 = v56;
          if ( v56 >= 3 )
            v47 = 2LL;
          v48 = (v44 * (unsigned int)(unsigned __int8)v64[v47 + 155] + 50) / 0x64;
          if ( v48 > v45 )
          {
            v46 = v48;
            v49 = v69 | 0x40;
            LODWORD(v69) = v69 | 0x40;
          }
          else
          {
LABEL_86:
            v49 = v69;
          }
          if ( (unsigned __int16)PpmParkGranularity > 1u )
            v46 = (unsigned __int16)PpmParkGranularity
                - 1
                + v46
                - ((unsigned __int16)PpmParkGranularity - 1 + v46) % (unsigned __int16)PpmParkGranularity;
LABEL_101:
          if ( (PpmHeteroHgsContainmentState & 8) != 0 && v42 && v42 < (unsigned __int16)v46 )
          {
            v46 = v42;
            LODWORD(v69) = v49 | 0x400000;
          }
          goto LABEL_105;
        }
        v46 = *(unsigned __int16 *)(v58 + v67);
        if ( !PpmPerfMaxOverrideEnabled )
        {
          v50 = *(unsigned __int16 *)(v58 + v67 + 6);
          if ( (unsigned __int16)v50 >= (unsigned __int16)v44 )
            v50 = *(unsigned __int16 *)(v58 + v67);
          v46 = v50;
          if ( !PpmCheckLatencyBoostActive )
            goto LABEL_98;
          v51 = v56;
          if ( v56 >= 3 )
            v51 = 2LL;
          v52 = (v44 * (unsigned int)(unsigned __int8)v64[v51 + 155] + 50) / 0x64;
          if ( v52 > v50 )
          {
            v46 = v52;
            v49 = v69 | 0x40;
            LODWORD(v69) = v69 | 0x40;
          }
          else
          {
LABEL_98:
            v49 = v69;
          }
          if ( (unsigned __int16)PpmParkGranularity > 1u )
            v46 = (unsigned __int16)PpmParkGranularity
                - 1
                + v46
                - ((unsigned __int16)PpmParkGranularity - 1 + v46) % (unsigned __int16)PpmParkGranularity;
          goto LABEL_101;
        }
        LODWORD(v69) = v69 | 0x40000;
LABEL_105:
        v53 = v22;
        *(_WORD *)(v58 + v67 + 8) = v46;
        if ( v46 + v65 < v22 )
          v53 = v46 + v65;
        if ( v53 <= v23 )
        {
          v54 = v23;
        }
        else
        {
          v54 = v22;
          if ( v46 + v65 < v22 )
            v54 = v46 + v65;
        }
        v57 -= v22;
        v24 = PpmParkSoftParkingEnabled == 0;
        *(_WORD *)(v58 + v67 + 10) = v54;
        if ( v24 )
        {
          LODWORD(v69) = v69 | 0x200000;
          v22 = v54;
        }
        else if ( (PpmHeteroHgsContainmentState & 8) != 0 )
        {
          if ( v22 >= v42 )
            v22 = v42;
          LODWORD(v69) = v69 | 0x800000;
        }
        v55 = 0;
        LOBYTE(v59) = 0;
        v66 = 0;
        v68 = 0;
        if ( PpmHeteroHgsParkingEnabled )
        {
          v55 = *(unsigned __int16 *)(v9 + 1224);
          v66 = *(_BYTE *)(v9 + 1231);
          v68 = *(_BYTE *)(v9 + 1230);
          v59 = *(_WORD *)(v9 + 1224);
        }
        RtlAndAffinityEx(&v1[6].Count, &v1[3].Count, (__int64)&v1[4]);
        PpmParkComputeUnparkMask(
          v9,
          (_DWORD)v1 + 1584,
          v9 + 544,
          (_DWORD)v1 + 1056,
          v54,
          v22,
          (__int64)v1,
          (__int64)&v1[1],
          v1 + 5,
          (__int64)&v1[7],
          (__int64)&v69,
          v9 + 1168,
          v55,
          v68,
          v66,
          v56);
        RtlSubtractAffinityEx(v1 + 6, v1 + 5, (__int64)&v1[8]);
        RtlSubtractAffinityEx(v1 + 8, v1 + 7, (__int64)&v1[8]);
        RtlSubtractAffinityEx((struct _KAFFINITY_EX *)(v9 + 280), v1 + 6, v9 + 280);
        RtlOrAffinityEx((struct _KAFFINITY_EX *)(v9 + 280), v1 + 5, v9 + 280);
        RtlOrAffinityEx((struct _KAFFINITY_EX *)(v9 + 280), v1 + 7, v9 + 280);
        RtlSubtractAffinityEx((struct _KAFFINITY_EX *)(v9 + 808), v1 + 6, v9 + 808);
        RtlOrAffinityEx((struct _KAFFINITY_EX *)(v9 + 808), v1 + 7, v9 + 808);
        PpmEventTraceSoftCoreParkingSelection(
          v9,
          v56,
          (unsigned __int16)v54,
          (unsigned __int16)v22,
          v23,
          (__int64)v1,
          (__int64)&v1[1],
          (__int64)&v1[4],
          (__int64)&v1[2],
          v69,
          v59);
        v13 = v56 + 1;
        v56 = v13;
        v2 = v1 + 1;
        if ( v13 >= *(unsigned __int8 *)(v9 + 10) )
        {
LABEL_121:
          v8 = v60;
          v4 = v1 + 3;
          goto LABEL_122;
        }
      }
      v26 = KeGetPrcb(v25);
      if ( (unsigned __int16)PpmParkGranularity <= 1u )
      {
        KeAddProcessorAffinityEx(&v2->Count, v25);
        goto LABEL_43;
      }
      v27 = *(unsigned __int8 *)(v26 + 208);
      v28 = *(_QWORD *)(v26 + 36512);
      if ( v2->Count <= (unsigned __int16)v27 )
      {
        if ( v2->Size <= (unsigned __int16)v27 )
        {
LABEL_43:
          LODWORD(v69) = v69 | 0x100;
          v23 = RtlCountSetBitsAffinityEx(&v2->Count);
          goto LABEL_44;
        }
        v2->Count = v27 + 1;
      }
      v2->Bitmap[v27] |= v28;
      goto LABEL_43;
    }
LABEL_123:
    result = PpmParkComputeDiff();
    if ( !PpmParkLpiCapChanged && PpmParkLpiEngaged == (PpmParkLpiCap != 0) )
      v7 = 0;
    PpmParkLpiEngaged = PpmParkLpiCap != 0;
    PpmParkLpiCapChanged = 0;
    if ( v7 )
      return PpmEventLPICoreParking();
  }
  return result;
}
