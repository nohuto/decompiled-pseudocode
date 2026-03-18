/*
 * XREFs of PpmParkCalculateCoreParkingMask @ 0x14025C720
 * Callers:
 *     <none>
 * Callees:
 *     KeAddProcessorAffinityEx @ 0x140246720 (KeAddProcessorAffinityEx.c)
 *     ?RtlpCopyAffinityEx@@YAXPEAU_KAFFINITY_EX@@G0@Z @ 0x1402518B0 (-RtlpCopyAffinityEx@@YAXPEAU_KAFFINITY_EX@@G0@Z.c)
 *     RtlCountSetBitsAffinityEx @ 0x140251920 (RtlCountSetBitsAffinityEx.c)
 *     RtlAndAffinityEx @ 0x140252394 (RtlAndAffinityEx.c)
 *     Feature_PpmHighPerfSoftParkLatency__private_IsEnabledDeviceUsageNoInline @ 0x1402592B4 (Feature_PpmHighPerfSoftParkLatency__private_IsEnabledDeviceUsageNoInline.c)
 *     PpmParkComputeDiff @ 0x14025A848 (PpmParkComputeDiff.c)
 *     RtlOrAffinityEx @ 0x14025A978 (RtlOrAffinityEx.c)
 *     RtlSubtractAffinityEx @ 0x14025B408 (RtlSubtractAffinityEx.c)
 *     KeCpuSetQueryUnparkRecommendation @ 0x14025D6AC (KeCpuSetQueryUnparkRecommendation.c)
 *     PpmParkComputeUnparkMask @ 0x14025D7A0 (PpmParkComputeUnparkMask.c)
 *     KeGetPrcb @ 0x1402916D0 (KeGetPrcb.c)
 *     PpmEventTraceSoftCoreParkingSelection @ 0x1404208F0 (PpmEventTraceSoftCoreParkingSelection.c)
 *     KeCheckProcessorAffinityEx @ 0x14042D260 (KeCheckProcessorAffinityEx.c)
 *     KeEnumerateNextProcessor @ 0x14043BC70 (KeEnumerateNextProcessor.c)
 *     PpmParkFindOverUtilizedProcessors @ 0x1404A37B0 (PpmParkFindOverUtilizedProcessors.c)
 *     PpmEventLPICoreParking @ 0x14060E510 (PpmEventLPICoreParking.c)
 *     memset_0 @ 0x14073D880 (memset_0.c)
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
  unsigned __int16 v10; // cx
  __int64 v11; // rdx
  unsigned __int16 v12; // ax
  unsigned __int64 v13; // rax
  unsigned int v14; // ebx
  unsigned __int16 Size; // dx
  __int64 v16; // rdi
  unsigned __int16 i; // cx
  int j; // eax
  __int64 Prcb; // rax
  __int64 v20; // rcx
  __int64 v21; // rdx
  unsigned __int16 k; // cx
  unsigned int v23; // edi
  unsigned int v24; // r14d
  bool v25; // zf
  unsigned int v26; // ebx
  __int64 v27; // rax
  __int64 v28; // rcx
  __int64 v29; // rdx
  struct _KAFFINITY_EX *v30; // rbx
  unsigned __int16 UnparkRecommendation; // ax
  unsigned __int64 v32; // rax
  __int64 v33; // rax
  __int64 v34; // rcx
  __int64 v35; // rdx
  unsigned int v36; // ebx
  __int64 v37; // rax
  __int64 v38; // rcx
  __int64 v39; // rdx
  unsigned int v40; // eax
  int v41; // eax
  unsigned int v42; // ecx
  unsigned __int16 v43; // bx
  int IsEnabledDeviceUsageNoInline; // eax
  int v45; // edx
  unsigned int v46; // r9d
  unsigned int v47; // r8d
  __int64 v48; // rax
  unsigned int v49; // edx
  int v50; // r9d
  unsigned int v51; // r9d
  __int64 v52; // rax
  unsigned int v53; // edx
  unsigned int v54; // eax
  int v55; // r15d
  int v56; // ebx
  unsigned int v57; // [rsp+80h] [rbp-29h]
  unsigned int v58; // [rsp+84h] [rbp-25h]
  __int64 v59; // [rsp+88h] [rbp-21h]
  __int16 v60; // [rsp+88h] [rbp-21h]
  unsigned int v61; // [rsp+90h] [rbp-19h]
  __int128 v62; // [rsp+98h] [rbp-11h] BYREF
  __int64 v63; // [rsp+A8h] [rbp-1h]
  unsigned int v64; // [rsp+B0h] [rbp+7h]
  __int64 *v65; // [rsp+B8h] [rbp+Fh]
  int v66; // [rsp+110h] [rbp+67h]
  char v67; // [rsp+110h] [rbp+67h]
  __int64 v68; // [rsp+118h] [rbp+6Fh]
  char v69; // [rsp+118h] [rbp+6Fh]
  __int64 v70; // [rsp+120h] [rbp+77h] BYREF
  unsigned int v71; // [rsp+128h] [rbp+7Fh] BYREF

  result = 0;
  v62 = 0LL;
  v63 = 0LL;
  v71 = 0;
  LODWORD(v70) = 0;
  if ( PopModernStandbyStateNotify.ReadyTime )
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
    LODWORD(PopModernStandbyStateNotify.TrapFrame) = 0;
    BYTE4(PopModernStandbyStateNotify.TrapFrame) = 0;
    v65 = &PpmCurrentProfile[89 * dword_140F106CC + 5];
    v64 = 100 * *((unsigned __int8 *)v65 + 221);
    if ( PopModernStandbyStateNotify.ApcState.ApcListHead[0].Blink )
      memset_0(PopModernStandbyStateNotify.ApcState.ApcListHead[0].Blink, 255, 4LL * (unsigned int)KeMaximumProcessors);
    v8 = 0;
    v61 = 0;
    if ( PopModernStandbyStateNotify.SystemCallNumber )
    {
      while ( 1 )
      {
        v9 = *(_QWORD *)((char *)&PopModernStandbyStateNotify.116 + 4) + 1264LL * v8;
        if ( (*(_BYTE *)(v9 + 1152) & 1) == 0 )
        {
          RtlpCopyAffinityEx(
            (struct _KAFFINITY_EX *)(v9 + 544),
            *(_WORD *)(v9 + 546),
            (struct _KAFFINITY_EX *)(v9 + 280));
          v10 = *(_WORD *)(v9 + 1142);
          v11 = v64;
          *(_WORD *)(v9 + 1212) = 0;
          *(_BYTE *)(v9 + 1214) = 0;
          v12 = *(_WORD *)(v9 + 1138);
          if ( v12 >= v10 )
            v12 = v10;
          v58 = v12;
          PpmParkFindOverUtilizedProcessors(v9, v11, v4);
          *(_BYTE *)(v9 + 1184) = 0;
          if ( PpmHeteroFavoredCoreRotationTimeoutMs )
          {
            v13 = MEMORY[0xFFFFF78000000008]
                / (10000
                 * (unsigned __int64)(unsigned int)PpmHeteroFavoredCoreRotationTimeoutMs);
            *(_QWORD *)(v9 + 1168) = v13;
            if ( v13 != *(_QWORD *)(v9 + 1176) )
            {
              *(_BYTE *)(v9 + 1184) = 1;
              *(_QWORD *)(v9 + 1176) = v13;
            }
          }
          v14 = 0;
          v57 = 0;
          if ( *(_BYTE *)(v9 + 10) )
            break;
        }
LABEL_122:
        v61 = ++v8;
        if ( v8 >= PopModernStandbyStateNotify.SystemCallNumber )
          goto LABEL_123;
      }
      while ( 1 )
      {
        Size = v1[6].Size;
        v16 = 624LL * v14;
        v68 = *(_QWORD *)(v9 + 1256);
        v59 = v16;
        LODWORD(v70) = 0;
        RtlpCopyAffinityEx(v1 + 6, Size, (struct _KAFFINITY_EX *)(v16 + v68 + 24));
        for ( i = 0; ; ++i )
        {
          if ( i >= v1[6].Count )
            goto LABEL_121;
          if ( v1[6].Bitmap[i] )
            break;
        }
        LODWORD(v70) = 0x100000;
        if ( LOWORD(PopModernStandbyStateNotify.ThreadLock) > 1u )
        {
          memset_0(&v1->8, 0, 8LL * v1->Count);
          v1->Count = 1;
          LOWORD(v63) = 0;
          *((_QWORD *)&v62 + 1) = *(_QWORD *)(v16 + v68 + 288 + 8);
          *(_QWORD *)&v62 = v16 + v68 + 288;
          for ( j = KeEnumerateNextProcessor(&v71, &v62); ; j = KeEnumerateNextProcessor(&v71, &v62) )
          {
            if ( j )
              goto LABEL_26;
            Prcb = KeGetPrcb(v71);
            v20 = *(unsigned __int8 *)(Prcb + 208);
            v21 = *(_QWORD *)(Prcb + 36512);
            if ( v1->Count <= (unsigned __int16)v20 )
            {
              if ( v1->Size <= (unsigned __int16)v20 )
                continue;
              v1->Count = v20 + 1;
            }
            v1->Bitmap[v20] |= v21;
          }
        }
        RtlpCopyAffinityEx(v1, v1->Size, (struct _KAFFINITY_EX *)(v16 + v68 + 288));
LABEL_26:
        RtlAndAffinityEx(&v1->Count, &v1[6].Count, (__int64)v1);
        for ( k = 0; k < v1->Count; ++k )
        {
          if ( v1->Bitmap[k] )
          {
            LODWORD(v70) = v70 | 0x10000;
            break;
          }
        }
        v23 = *(unsigned __int16 *)(v16 + v68) - (unsigned int)RtlCountSetBitsAffinityEx(&v1->Count);
        v24 = 0;
        if ( v23 > v58 )
          v23 = v58;
        memset_0(&v2->8, 0, 8LL * v2->Count);
        v25 = KiClockTimerPerCpu == 0;
        v2->Count = 1;
        if ( v25 )
        {
          v26 = KiClockTimerOwner;
          v71 = KiClockTimerOwner;
          if ( (unsigned int)KeCheckProcessorAffinityEx(&v1[6], (unsigned int)KiClockTimerOwner) )
          {
            if ( v23 && !(unsigned int)KeCheckProcessorAffinityEx(v1, v26) )
              break;
          }
        }
LABEL_44:
        v30 = v1 + 2;
        memset_0(&v1[2].8, 0, 8LL * v1[2].Count);
        v1[2].Count = 1;
        UnparkRecommendation = KeCpuSetQueryUnparkRecommendation(&v1[6], &v1[2]);
        v66 = UnparkRecommendation;
        if ( UnparkRecommendation )
        {
          if ( LOWORD(PopModernStandbyStateNotify.ThreadLock) <= 1u )
            goto LABEL_54;
          v32 = v1[2].Bitmap[0];
          LOWORD(v63) = 0;
          *((_QWORD *)&v62 + 1) = v32;
          *(_QWORD *)&v62 = v1 + 2;
          if ( (unsigned int)KeEnumerateNextProcessor(&v71, &v62) )
            goto LABEL_53;
          while ( 1 )
          {
            v33 = KeGetPrcb(v71);
            v34 = *(unsigned __int8 *)(v33 + 208);
            v35 = *(_QWORD *)(v33 + 36512);
            if ( v30->Count > (unsigned __int16)v34 )
              goto LABEL_50;
            if ( v1[2].Size > (unsigned __int16)v34 )
              break;
LABEL_51:
            if ( (unsigned int)KeEnumerateNextProcessor(&v71, &v62) )
            {
              v2 = v1 + 1;
LABEL_53:
              v66 = RtlCountSetBitsAffinityEx(&v1[2].Count);
LABEL_54:
              *((_QWORD *)&v62 + 1) = v1[2].Bitmap[0];
              LOWORD(v63) = 0;
              *(_QWORD *)&v62 = v1 + 2;
              while ( 1 )
              {
LABEL_64:
                if ( (unsigned int)KeEnumerateNextProcessor(&v71, &v62) )
                  goto LABEL_65;
                if ( v24 < v23 )
                {
                  v36 = v71;
                  if ( !(unsigned int)KeCheckProcessorAffinityEx(v1, v71) )
                    break;
                }
              }
              v37 = KeGetPrcb(v36);
              if ( LOWORD(PopModernStandbyStateNotify.ThreadLock) <= 1u )
              {
                KeAddProcessorAffinityEx(&v2->Count, v36);
              }
              else
              {
                v38 = *(unsigned __int8 *)(v37 + 208);
                v39 = *(_QWORD *)(v37 + 36512);
                if ( v2->Count > (unsigned __int16)v38 )
                  goto LABEL_61;
                if ( v2->Size > (unsigned __int16)v38 )
                {
                  v2->Count = v38 + 1;
LABEL_61:
                  v2->Bitmap[v38] |= v39;
                }
              }
              LODWORD(v70) = v70 | 0x10;
              v24 = RtlCountSetBitsAffinityEx(&v2->Count);
              goto LABEL_64;
            }
          }
          v30->Count = v34 + 1;
LABEL_50:
          v30->Bitmap[v34] |= v35;
          goto LABEL_51;
        }
LABEL_65:
        v40 = *(unsigned __int16 *)(v59 + v68 + 2);
        if ( v24 >= v40 || v24 >= v23 )
        {
          v41 = v70;
        }
        else
        {
          v24 = v23;
          if ( v40 < v23 )
            v24 = *(unsigned __int16 *)(v59 + v68 + 2);
          v41 = v70 | 4;
          LODWORD(v70) = v70 | 4;
        }
        v42 = *(unsigned __int16 *)(v59 + v68 + 4);
        if ( v23 > v42 && v24 < v23 )
        {
          v23 = v24;
          if ( v42 > v24 )
            v23 = *(unsigned __int16 *)(v59 + v68 + 4);
          LODWORD(v70) = v41 | 8;
        }
        v43 = 0;
        if ( (PpmHeteroHgsContainmentState & 8) != 0 )
          v43 = *(_WORD *)(*(_QWORD *)(v9 + 1240) + 2LL * *(int *)(*(_QWORD *)(v9 + 1240) + 4LL) + 8);
        IsEnabledDeviceUsageNoInline = Feature_PpmHighPerfSoftParkLatency__private_IsEnabledDeviceUsageNoInline();
        v45 = *(unsigned __int16 *)(v59 + v68);
        if ( IsEnabledDeviceUsageNoInline )
        {
          v46 = *(unsigned __int16 *)(v59 + v68 + 6);
          if ( (unsigned __int16)v46 >= (unsigned __int16)v45 )
            v46 = *(unsigned __int16 *)(v59 + v68);
          v47 = v46;
          if ( !*(_DWORD *)&PopSleepstudySessionLock.WaitRegister.Flags )
            goto LABEL_86;
          v48 = v57;
          if ( v57 >= 3 )
            v48 = 2LL;
          v49 = (v45 * (unsigned int)*((unsigned __int8 *)v65 + v48 + 155) + 50) / 0x64;
          if ( v49 > v46 )
          {
            v47 = v49;
            v50 = v70 | 0x40;
            LODWORD(v70) = v70 | 0x40;
          }
          else
          {
LABEL_86:
            v50 = v70;
          }
          if ( LOWORD(PopModernStandbyStateNotify.ThreadLock) > 1u )
            v47 = LOWORD(PopModernStandbyStateNotify.ThreadLock)
                - 1
                + v47
                - (LOWORD(PopModernStandbyStateNotify.ThreadLock) - 1 + v47)
                % LOWORD(PopModernStandbyStateNotify.ThreadLock);
LABEL_101:
          if ( (PpmHeteroHgsContainmentState & 8) != 0 && v43 && v43 < (unsigned __int16)v47 )
          {
            v47 = v43;
            LODWORD(v70) = v50 | 0x400000;
          }
          goto LABEL_105;
        }
        v47 = *(unsigned __int16 *)(v59 + v68);
        if ( !LOBYTE(stru_140F11D08.RealtimePriorityFloor) )
        {
          v51 = *(unsigned __int16 *)(v59 + v68 + 6);
          if ( (unsigned __int16)v51 >= (unsigned __int16)v45 )
            v51 = *(unsigned __int16 *)(v59 + v68);
          v47 = v51;
          if ( !*(_DWORD *)&PopSleepstudySessionLock.WaitRegister.Flags )
            goto LABEL_98;
          v52 = v57;
          if ( v57 >= 3 )
            v52 = 2LL;
          v53 = (v45 * (unsigned int)*((unsigned __int8 *)v65 + v52 + 155) + 50) / 0x64;
          if ( v53 > v51 )
          {
            v47 = v53;
            v50 = v70 | 0x40;
            LODWORD(v70) = v70 | 0x40;
          }
          else
          {
LABEL_98:
            v50 = v70;
          }
          if ( LOWORD(PopModernStandbyStateNotify.ThreadLock) > 1u )
            v47 = LOWORD(PopModernStandbyStateNotify.ThreadLock)
                - 1
                + v47
                - (LOWORD(PopModernStandbyStateNotify.ThreadLock) - 1 + v47)
                % LOWORD(PopModernStandbyStateNotify.ThreadLock);
          goto LABEL_101;
        }
        LODWORD(v70) = v70 | 0x40000;
LABEL_105:
        v54 = v23;
        *(_WORD *)(v59 + v68 + 8) = v47;
        if ( v47 + v66 < v23 )
          v54 = v47 + v66;
        if ( v54 <= v24 )
        {
          v55 = v24;
        }
        else
        {
          v55 = v23;
          if ( v47 + v66 < v23 )
            v55 = v47 + v66;
        }
        v58 -= v23;
        v25 = PpmParkSoftParkingEnabled == 0;
        *(_WORD *)(v59 + v68 + 10) = v55;
        if ( v25 )
        {
          LODWORD(v70) = v70 | 0x200000;
          v23 = v55;
        }
        else if ( (PpmHeteroHgsContainmentState & 8) != 0 )
        {
          if ( v23 >= v43 )
            v23 = v43;
          LODWORD(v70) = v70 | 0x800000;
        }
        v56 = 0;
        LOBYTE(v60) = 0;
        v67 = 0;
        v69 = 0;
        if ( PpmHeteroHgsParkingEnabled )
        {
          v56 = *(unsigned __int16 *)(v9 + 1224);
          v67 = *(_BYTE *)(v9 + 1231);
          v69 = *(_BYTE *)(v9 + 1230);
          v60 = *(_WORD *)(v9 + 1224);
        }
        RtlAndAffinityEx(&v1[6].Count, &v1[3].Count, (__int64)&v1[4]);
        PpmParkComputeUnparkMask(
          v9,
          (_DWORD)v1 + 1584,
          v9 + 544,
          (_DWORD)v1 + 1056,
          v55,
          v23,
          (__int64)v1,
          (__int64)&v1[1],
          v1 + 5,
          (__int64)&v1[7],
          (__int64)&v70,
          v9 + 1168,
          v56,
          v69,
          v67,
          v57);
        RtlSubtractAffinityEx(v1 + 6, v1 + 5, (__int64)&v1[8]);
        RtlSubtractAffinityEx(v1 + 8, v1 + 7, (__int64)&v1[8]);
        RtlSubtractAffinityEx((struct _KAFFINITY_EX *)(v9 + 280), v1 + 6, v9 + 280);
        RtlOrAffinityEx((struct _KAFFINITY_EX *)(v9 + 280), v1 + 5, v9 + 280);
        RtlOrAffinityEx((struct _KAFFINITY_EX *)(v9 + 280), v1 + 7, v9 + 280);
        RtlSubtractAffinityEx((struct _KAFFINITY_EX *)(v9 + 808), v1 + 6, v9 + 808);
        RtlOrAffinityEx((struct _KAFFINITY_EX *)(v9 + 808), v1 + 7, v9 + 808);
        PpmEventTraceSoftCoreParkingSelection(
          v9,
          v57,
          (unsigned __int16)v55,
          (unsigned __int16)v23,
          v24,
          (__int64)v1,
          (__int64)&v1[1],
          (__int64)&v1[4],
          (__int64)&v1[2],
          v70,
          v60);
        v14 = v57 + 1;
        v57 = v14;
        v2 = v1 + 1;
        if ( v14 >= *(unsigned __int8 *)(v9 + 10) )
        {
LABEL_121:
          v8 = v61;
          v4 = v1 + 3;
          goto LABEL_122;
        }
      }
      v27 = KeGetPrcb(v26);
      if ( LOWORD(PopModernStandbyStateNotify.ThreadLock) <= 1u )
      {
        KeAddProcessorAffinityEx(&v2->Count, v26);
        goto LABEL_43;
      }
      v28 = *(unsigned __int8 *)(v27 + 208);
      v29 = *(_QWORD *)(v27 + 36512);
      if ( v2->Count <= (unsigned __int16)v28 )
      {
        if ( v2->Size <= (unsigned __int16)v28 )
        {
LABEL_43:
          LODWORD(v70) = v70 | 0x100;
          v24 = RtlCountSetBitsAffinityEx(&v2->Count);
          goto LABEL_44;
        }
        v2->Count = v28 + 1;
      }
      v2->Bitmap[v28] |= v29;
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
