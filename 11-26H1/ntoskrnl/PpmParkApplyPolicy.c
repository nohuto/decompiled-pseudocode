/*
 * XREFs of PpmParkApplyPolicy @ 0x14025AAD0
 * Callers:
 *     PpmParkSetLpiCap @ 0x1404B533C (PpmParkSetLpiCap.c)
 *     PpmParkRegisterParking @ 0x1406130BC (PpmParkRegisterParking.c)
 *     PpmRegisterPerfStates @ 0x1407D13F8 (PpmRegisterPerfStates.c)
 *     PpmParkApplyForcedMask @ 0x1407E1804 (PpmParkApplyForcedMask.c)
 *     PpmParkClearForcedMask @ 0x1407E1A18 (PpmParkClearForcedMask.c)
 *     PpmReapplyPerfPolicy @ 0x140AD8B10 (PpmReapplyPerfPolicy.c)
 *     PopPowerRequestCallbackPerfBoostRequired @ 0x140AD8CF0 (PopPowerRequestCallbackPerfBoostRequired.c)
 * Callees:
 *     KeAddProcessorAffinityEx @ 0x140248080 (KeAddProcessorAffinityEx.c)
 *     PpmHeteroHgsCheckContainmentDecision @ 0x14025A1A8 (PpmHeteroHgsCheckContainmentDecision.c)
 *     PpmParkEvalualteSmtUnparkPolicy @ 0x14025AA00 (PpmParkEvalualteSmtUnparkPolicy.c)
 *     Feature_PpmHighPerfSoftParkLatency__private_IsEnabledDeviceUsageNoInline @ 0x14025AA94 (Feature_PpmHighPerfSoftParkLatency__private_IsEnabledDeviceUsageNoInline.c)
 *     PpmConfigureRestrictionPolicy @ 0x14025B2B4 (PpmConfigureRestrictionPolicy.c)
 *     RtlOrAffinityEx @ 0x14025C158 (RtlOrAffinityEx.c)
 *     KeUpdateSoftParkRankList @ 0x14025CCE8 (KeUpdateSoftParkRankList.c)
 *     PpmEventSoftParkRankListChanged @ 0x14025CFA0 (PpmEventSoftParkRankListChanged.c)
 *     KeGetPrcb @ 0x140290C30 (KeGetPrcb.c)
 *     PpmConvertTime @ 0x1402F32B0 (PpmConvertTime.c)
 *     PpmEventSoftParkLatencyUpdate @ 0x1404E6850 (PpmEventSoftParkLatencyUpdate.c)
 *     PpmEventParkNodeParkHintChanged @ 0x14050E938 (PpmEventParkNodeParkHintChanged.c)
 *     PpmEventParkNodeCapChange @ 0x1406116D0 (PpmEventParkNodeCapChange.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 */

void *PpmParkApplyPolicy()
{
  void *result; // rax
  char *v1; // r12
  unsigned __int16 v2; // r13
  unsigned int v3; // ebx
  int v4; // edi
  int v5; // r15d
  unsigned int v6; // esi
  unsigned int v7; // r14d
  unsigned __int16 v8; // cx
  int v9; // r11d
  int v10; // r10d
  unsigned int v11; // esi
  unsigned __int16 v12; // r14
  unsigned __int16 v13; // dx
  __int64 v14; // rbx
  int v15; // r8d
  int v16; // edi
  unsigned __int16 v17; // dx
  __int16 v18; // r15
  unsigned __int16 v19; // di
  char *v20; // rdx
  __int64 v21; // rax
  unsigned __int16 *v22; // r12
  int v23; // ecx
  __int64 v24; // rax
  unsigned __int8 v25; // r10
  int v26; // eax
  int v27; // ecx
  int v28; // r14d
  int v29; // ecx
  unsigned __int16 v30; // di
  _WORD *v31; // r15
  unsigned __int16 *v32; // rdx
  unsigned __int64 v33; // r8
  unsigned __int16 v34; // r15
  unsigned int v35; // ecx
  unsigned __int64 v36; // rdx
  unsigned int v37; // ebx
  __int64 v38; // rdx
  __int64 v39; // rdi
  __int64 v40; // rbx
  __int64 v41; // r14
  __int64 v42; // r8
  __int64 v43; // r15
  __int64 v44; // rdx
  unsigned __int16 v45; // cx
  __int16 v46; // ax
  void *v47; // rbx
  __int64 v48; // r8
  _QWORD *v49; // r9
  unsigned __int16 i; // dx
  __int64 v51; // rax
  __int16 v52; // cx
  unsigned int v53; // edx
  unsigned __int16 v54; // cx
  unsigned __int16 v55; // cx
  __int16 v56; // cx
  __int16 v57; // ax
  __int16 v58; // cx
  unsigned int j; // edx
  __int64 v60; // rax
  __int64 v61; // rax
  __int64 v62; // rcx
  __int64 v63; // rax
  __int16 v64; // dx
  __int16 v65; // dx
  __int64 v66; // rdx
  unsigned __int16 v67; // r9
  unsigned __int16 v68; // ax
  __int64 v69; // rdx
  unsigned __int16 v70; // r9
  unsigned __int16 v71; // ax
  char v72; // [rsp+28h] [rbp-E0h]
  __int16 v73; // [rsp+2Ah] [rbp-DEh]
  unsigned __int16 v74; // [rsp+2Ch] [rbp-DCh]
  unsigned int v75; // [rsp+30h] [rbp-D8h]
  int v76; // [rsp+34h] [rbp-D4h]
  int v77; // [rsp+38h] [rbp-D0h]
  int v78; // [rsp+3Ch] [rbp-CCh]
  int v79; // [rsp+40h] [rbp-C8h]
  char *v80; // [rsp+48h] [rbp-C0h]
  __int64 v81; // [rsp+50h] [rbp-B8h]
  __int64 v82; // [rsp+58h] [rbp-B0h]
  __int64 v83; // [rsp+68h] [rbp-A0h] BYREF
  _QWORD v84[33]; // [rsp+70h] [rbp-98h] BYREF
  __int64 v85; // [rsp+178h] [rbp+70h] BYREF
  _QWORD v86[33]; // [rsp+180h] [rbp+78h] BYREF

  memset_0(v84, 0, 0x100uLL);
  result = memset_0(v86, 0, 0x100uLL);
  if ( PpmParkNodes )
  {
    v1 = (char *)PpmCurrentProfile + 712 * SHIDWORD(PpmIdlePolicyLock.PropagateBoostsEntry.Next) + 40;
    v80 = v1;
    PpmParkEvalualteSmtUnparkPolicy(v1[670]);
    v72 = 0;
    v2 = 64;
    if ( !*(_QWORD *)(KeGetPrcb(0LL) + 35264) )
    {
      if ( (unsigned int)PpmParkInitialClass1UnParkCount <= 0x40 )
        v2 = PpmParkInitialClass1UnParkCount;
      v72 = 1;
    }
    v3 = PpmParkNumNodes;
    v4 = PpmParkLpiCap;
    v5 = PpmParkThermalCap;
    v83 = 2097153LL;
    v6 = PpmParkLpiCap / (unsigned int)PpmParkNumNodes
       - PpmParkLpiCap / (unsigned int)PpmParkNumNodes % (unsigned __int16)PpmParkGranularity;
    v7 = PpmParkThermalCap / (unsigned int)PpmParkNumNodes
       - PpmParkThermalCap / (unsigned int)PpmParkNumNodes % (unsigned __int16)PpmParkGranularity;
    memset_0(v84, 0, 0x100uLL);
    v85 = 2097153LL;
    memset_0(v86, 0, 0x100uLL);
    v74 = 0;
    v8 = 0;
    if ( v3 )
    {
      v9 = (unsigned __int16)v6;
      v10 = (unsigned __int16)v7;
      v11 = 0;
      v12 = v85;
      v79 = v9;
      v78 = v10;
      do
      {
        v13 = v9;
        v14 = PpmParkNodes + 1264LL * v8;
        v82 = v14;
        v15 = *(unsigned __int16 *)(v14 + 8);
        if ( v9 > v15 - (unsigned __int16)PpmParkGranularity )
          v13 = v15 - PpmParkGranularity;
        *(_WORD *)(v14 + 1136) = v13;
        v16 = v4 - v13;
        v17 = v10;
        v76 = v16;
        if ( v10 > v15 - (unsigned __int16)PpmParkGranularity )
          v17 = v15 - PpmParkGranularity;
        *(_WORD *)(v14 + 1140) = v17;
        v77 = v5 - v17;
        v18 = 0;
        v73 = 0;
        memset_0(v84, 0, 8LL * (unsigned __int16)v83);
        v19 = 1;
        LOWORD(v83) = 1;
        memset_0(v86, 0, 8LL * v12);
        LOWORD(v85) = 1;
        v12 = 1;
        if ( !*(_BYTE *)(v14 + 10) )
          goto LABEL_62;
        v20 = v80;
        do
        {
          v21 = v11;
          v22 = (unsigned __int16 *)(*(_QWORD *)(v14 + 1256) + 624LL * v11);
          if ( v11 >= 3 )
            v21 = 2LL;
          v23 = (unsigned __int8)v20[v21 + 239];
          v24 = v11;
          if ( v11 >= 3 )
            v24 = 2LL;
          v25 = v20[v24 + 236];
          if ( v72 )
            v25 &= -(v11 == 0);
          v26 = *v22;
          if ( (_WORD)v26 )
          {
            v27 = (unsigned __int16)((v26 * v23 + 50) / 0x64u);
            v28 = v27 + (v26 - v27) % (unsigned __int16)PpmParkGranularity;
            v29 = (unsigned __int16)((v26 * (unsigned int)v25 + 50) / 0x64);
            v30 = v29 + (v26 - v29) % (unsigned __int16)PpmParkGranularity;
            if ( v11 && (unsigned __int16)v28 >= v2 )
              LOWORD(v28) = v2;
            if ( v30 && (unsigned __int16)PpmParkGranularity > v30 )
              v30 = PpmParkGranularity;
            v31 = v22 + 144;
            if ( (unsigned __int16)v28 < v30 )
              LOWORD(v28) = v30;
            RtlOrAffinityEx(&v85, v22 + 144, &v85);
            memset_0(v22 + 148, 0, 8LL * (unsigned __int16)*v31);
            v32 = v22 + 12;
            *v31 = 1;
            v33 = *((_QWORD *)v22 + 4);
            v34 = 0;
LABEL_23:
            if ( v32 )
              v35 = *v32;
            else
              v35 = v34 + 1;
            while ( 1 )
            {
              if ( v33 )
              {
                _BitScanForward64(&v36, v33);
                v81 = v33 & ~(1LL << v36);
                v75 = *((_DWORD *)&KiSupervisorXStateFeaturesLock.SchedulerApc.ApcListEntry.Flink[16 * v34].Flink
                      + (unsigned __int8)v36);
                if ( *(_BYTE *)(KeGetPrcb(v75) + 35420) )
                  KeAddProcessorAffinityEx(v22 + 144, v75);
                v33 = v81;
                v32 = v22 + 12;
                goto LABEL_23;
              }
              if ( ++v34 >= v35 )
                break;
              v33 = *(_QWORD *)&v32[4 * v34 + 4];
            }
            RtlOrAffinityEx(&v83, v22 + 144, &v83);
            v14 = v82;
            v18 = v30 + v73;
            v20 = v80;
            v73 += v30;
            v22[2] = v28;
            v22[1] = v30;
          }
          ++v11;
        }
        while ( v11 < *(unsigned __int8 *)(v14 + 10) );
        v12 = v85;
        v19 = v83;
        if ( (unsigned __int16)v85 < (unsigned __int16)v83 )
        {
          v48 = (unsigned __int16)v85;
          v49 = v84;
        }
        else
        {
LABEL_62:
          v48 = v19;
          v49 = v86;
          v19 = v12;
        }
        v11 = 0;
        for ( i = 0; i < (unsigned __int16)v48; ++i )
        {
          if ( v86[i] != v84[i] )
          {
LABEL_71:
            PpmEventParkNodeParkHintChanged(v14 + 16, &v83, v48, v49);
            goto LABEL_34;
          }
        }
        while ( i < v19 )
        {
          if ( v49[i] )
            goto LABEL_71;
          ++i;
        }
LABEL_34:
        if ( !v18 )
        {
          v44 = *(_QWORD *)(v14 + 1256);
          v45 = *(_WORD *)(v44 + 4);
          *(_WORD *)(v44 + 2) = PpmParkGranularity;
          v46 = PpmParkGranularity;
          if ( (unsigned __int16)PpmParkGranularity <= v45 )
            v46 = v45;
          *(_WORD *)(v44 + 4) = v46;
        }
        if ( PpmHeteroPolicy == 2 )
        {
          *(_BYTE *)(v14 + 1152) |= 4u;
          v51 = *(_QWORD *)(v14 + 1256);
          v52 = *(_WORD *)(v51 + 2);
          if ( (unsigned __int16)v52 <= 1u )
            v52 = 1;
          *(_WORD *)(v51 + 2) = v52;
          v58 = *(_WORD *)(v51 + 4);
          if ( (unsigned __int16)v58 <= 1u )
            v58 = 1;
          *(_WORD *)(v51 + 4) = v58;
          for ( j = 1; j < *(unsigned __int8 *)(v14 + 10); *(_QWORD *)(624 * v60 + *(_QWORD *)(v14 + 1256) + 2) = 0LL )
            v60 = j++;
        }
        else if ( PpmHeteroPolicy == 3 && *(_BYTE *)(v14 + 1153) )
        {
          *(_BYTE *)(v14 + 1152) |= 2u;
          v53 = 0;
          if ( *(_BYTE *)(v14 + 10) > 1u )
          {
            do
            {
              v61 = v53++;
              *(_QWORD *)(624 * v61 + *(_QWORD *)(v14 + 1256) + 2) = 0LL;
            }
            while ( v53 + 1 < *(unsigned __int8 *)(v14 + 10) );
          }
          v62 = 624LL * v53;
          v63 = *(_QWORD *)(v14 + 1256);
          v64 = *(_WORD *)(v62 + v63 + 2);
          if ( (unsigned __int16)v64 <= 1u )
            v64 = 1;
          *(_WORD *)(v62 + v63 + 2) = v64;
          v65 = *(_WORD *)(v62 + v63 + 4);
          if ( (unsigned __int16)v65 <= 1u )
            v65 = 1;
          *(_WORD *)(v62 + v63 + 4) = v65;
        }
        PpmConfigureRestrictionPolicy(v14);
        v3 = PpmParkNumNodes;
        v8 = v74 + 1;
        v4 = v76;
        v5 = v77;
        v10 = v78;
        v9 = v79;
        ++v74;
      }
      while ( v74 < (unsigned int)PpmParkNumNodes );
      v1 = v80;
    }
    else
    {
      LOWORD(v11) = 0;
    }
    do
    {
LABEL_39:
      if ( !v4 )
        goto LABEL_40;
      v54 = 0;
    }
    while ( !v3 );
    while ( v4 )
    {
      v66 = 1264LL * v54;
      v67 = *(_WORD *)(v66 + PpmParkNodes + 8);
      if ( v67 )
      {
        v68 = PpmParkGranularity + *(_WORD *)(v66 + PpmParkNodes + 1136);
        if ( v68 < v67 )
        {
          *(_WORD *)(v66 + PpmParkNodes + 1136) = v68;
          v4 -= (unsigned __int16)PpmParkGranularity;
        }
      }
      if ( ++v54 >= v3 )
        goto LABEL_39;
    }
LABEL_40:
    while ( v5 )
    {
      v55 = 0;
      if ( v3 )
      {
        while ( v5 )
        {
          v69 = 1264LL * v55;
          v70 = *(_WORD *)(v69 + PpmParkNodes + 8);
          if ( v70 )
          {
            v71 = *(_WORD *)(v69 + PpmParkNodes + 1140) + PpmParkGranularity;
            if ( v71 < v70 )
            {
              *(_WORD *)(v69 + PpmParkNodes + 1140) = v71;
              v5 -= (unsigned __int16)PpmParkGranularity;
            }
          }
          if ( ++v55 >= v3 )
            goto LABEL_40;
        }
        break;
      }
    }
    if ( v3 )
    {
      do
      {
        v39 = PpmParkNodes;
        v40 = 1264LL * (unsigned __int16)v11;
        v41 = v40 + PpmParkNodes;
        v42 = *(unsigned __int16 *)(v40 + PpmParkNodes + 1136);
        v43 = v40 + PpmParkNodes;
        if ( *(unsigned __int16 *)(v40 + PpmParkNodes + 1138) != *(unsigned __int16 *)(v40 + PpmParkNodes + 8)
                                                               - (_DWORD)v42
          || *(unsigned __int16 *)(v43 + 1142) != *(unsigned __int16 *)(v40 + PpmParkNodes + 8)
                                                - *(unsigned __int16 *)(v41 + 1140) )
        {
          PpmEventParkNodeCapChange(
            (unsigned __int16)v11,
            v40 + PpmParkNodes + 16,
            v42,
            *(unsigned __int16 *)(v41 + 1140));
          v56 = *(_WORD *)(v40 + v39 + 8);
          v57 = v56 - *(_WORD *)(v40 + v39 + 1136);
          *(_WORD *)(v43 + 1142) = v56 - *(_WORD *)(v41 + 1140);
          *(_WORD *)(v40 + v39 + 1138) = v57;
        }
        LOWORD(v11) = v11 + 1;
      }
      while ( (unsigned __int16)v11 < (unsigned int)PpmParkNumNodes );
    }
    v37 = *((_DWORD *)v1 + 61);
    if ( (unsigned int)Feature_PpmHighPerfSoftParkLatency__private_IsEnabledDeviceUsageNoInline() )
    {
      LOBYTE(v38) = 0;
      if ( PpmPerfMaxOverrideEnabled && PpmHighPerfSoftParkLatencyUs && (!v37 || PpmHighPerfSoftParkLatencyUs < v37) )
      {
        LOBYTE(v38) = 1;
        v37 = PpmHighPerfSoftParkLatencyUs;
      }
      PpmEventSoftParkLatencyUpdate(0LL, v38, v37);
    }
    if ( v37 )
    {
      PpmParkSoftParkingEnabled = 1;
      KeSoftParkedQueueThreshold = PpmConvertTime(1000000LL * KeGetCurrentPrcb()->MHz, 1000000LL, v37);
    }
    else
    {
      PpmParkSoftParkingEnabled = 0;
      KeSoftParkedQueueThreshold = 0;
      if ( PpmParkNewSoftParkRankList )
      {
        v47 = PpmParkOldSoftParkRankList;
        if ( PpmParkOldSoftParkRankList )
        {
          memset_0(PpmParkNewSoftParkRankList, 255, 4LL * (unsigned int)KeMaximumProcessors);
          memset_0(v47, 255, 4LL * (unsigned int)KeMaximumProcessors);
          KeUpdateSoftParkRankList();
          PpmEventSoftParkRankListChanged();
        }
      }
    }
    return (void *)PpmHeteroHgsCheckContainmentDecision();
  }
  else
  {
    KeSoftParkedQueueThreshold = 0;
  }
  return result;
}
