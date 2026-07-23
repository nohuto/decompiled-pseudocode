/*
 * XREFs of KiCheckPreferredHeteroProcessor @ 0x140220510
 * Callers:
 *     KiSendHeteroRescheduleIntRequestHelper @ 0x14021FEA0 (KiSendHeteroRescheduleIntRequestHelper.c)
 *     KiUpdateRunTime @ 0x140220DB0 (KiUpdateRunTime.c)
 *     KeUpdateThreadTag @ 0x14030F4C0 (KeUpdateThreadTag.c)
 *     KiQuantumEnd @ 0x1403330A0 (KiQuantumEnd.c)
 * Callees:
 *     KiFindBiasedProcessorIndex @ 0x140201890 (KiFindBiasedProcessorIndex.c)
 *     KiGetProcessorClassForPolicy @ 0x140231FC4 (KiGetProcessorClassForPolicy.c)
 *     KiHeteroScanQueueForPreemptionSwapTarget @ 0x140236D78 (KiHeteroScanQueueForPreemptionSwapTarget.c)
 *     Feature_HeteroRescheduleFixes__private_IsEnabledNoReportingNoInline @ 0x14023F7D0 (Feature_HeteroRescheduleFixes__private_IsEnabledNoReportingNoInline.c)
 *     KiGenerateHeteroSets @ 0x140409CD0 (KiGenerateHeteroSets.c)
 *     KiHeteroComputeThreadWorkloadProperties @ 0x14041D220 (KiHeteroComputeThreadWorkloadProperties.c)
 *     KiIsQosGroupingClass @ 0x14044FAD0 (KiIsQosGroupingClass.c)
 *     KiIsQosGroupingActive @ 0x14046E440 (KiIsQosGroupingActive.c)
 *     KiReduceAffinityToRankListValuesEqualTo @ 0x1404802B8 (KiReduceAffinityToRankListValuesEqualTo.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     RtlCopyVolatileMemory @ 0x140737C50 (RtlCopyVolatileMemory.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 */

__int64 __fastcall KiCheckPreferredHeteroProcessor(__int64 a1, __int64 a2, int a3)
{
  struct _KPRCB *CurrentPrcb; // r12
  unsigned int v7; // ebx
  int v8; // r8d
  __int64 v9; // rsi
  _WORD *v10; // rdx
  __int64 v11; // rax
  __int64 v12; // rdx
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // r9
  __int64 v17; // r14
  int IsEnabledNoReportingNoInline; // eax
  __int64 v19; // rdi
  __int64 v20; // rdi
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // r8
  __int64 v24; // r9
  __int64 v25; // r12
  __int64 v26; // rdx
  __int64 v27; // r8
  __int64 v28; // r9
  __int64 v29; // rcx
  __int64 v30; // r14
  __int64 v31; // r13
  __int64 v32; // r8
  unsigned __int64 v33; // r12
  unsigned __int8 ProcessorClassForPolicy; // di
  __int64 v35; // r8
  unsigned int v36; // r10d
  __int64 v38; // rdi
  unsigned __int64 v39; // rdx
  __int64 v40; // r11
  unsigned __int64 v41; // rdi
  __int64 v42; // rax
  __int64 v43; // r10
  __int64 v44; // rcx
  __int128 v46; // [rsp+38h] [rbp-71h] BYREF
  __int64 v47; // [rsp+48h] [rbp-61h]
  char v48; // [rsp+50h] [rbp-59h]
  __int128 v49; // [rsp+58h] [rbp-51h] BYREF
  __int64 v50; // [rsp+68h] [rbp-41h]
  __int64 v51; // [rsp+70h] [rbp-39h]
  _BYTE v52[64]; // [rsp+80h] [rbp-29h] BYREF

  v51 = a1;
  v50 = 0LL;
  v47 = 0LL;
  v48 = 0;
  v49 = 0LL;
  v46 = 0LL;
  memset_0(v52, 0, sizeof(v52));
  CurrentPrcb = KeGetCurrentPrcb();
  v7 = 0;
  if ( !KeHeteroSystem )
    return 0LL;
  KiHeteroComputeThreadWorkloadProperties(a1, &v46);
  v9 = *(_QWORD *)(a2 + 192);
  v10 = *(_WORD **)(a1 + 576);
  v11 = *(unsigned __int16 *)(v9 + 136);
  v12 = (unsigned __int16)v11 >= *v10 ? 0LL : *(_QWORD *)&v10[4 * v11 + 4];
  if ( (v12 & *(_QWORD *)(v9 + 128)) == 0 )
    return 0LL;
  LOBYTE(v8) = v47;
  KiGenerateHeteroSets(*(_QWORD *)(a2 + 192), v12, v8, DWORD1(v46), DWORD2(v46), (__int64)&v49);
  v17 = v50;
  if ( (v50 & *(_QWORD *)(a2 + 200)) == 0 )
    return 1LL;
  IsEnabledNoReportingNoInline = Feature_HeteroRescheduleFixes__private_IsEnabledNoReportingNoInline(v14, v13, v15, v16);
  v19 = *(_QWORD *)(v9 + 8);
  if ( IsEnabledNoReportingNoInline && !a3 )
    v19 &= CurrentPrcb->GroupSetMember;
  v20 = v17 & v19;
  if ( (unsigned __int8)KiIsQosGroupingActive() )
  {
    if ( (unsigned __int8)KiIsQosGroupingClass(DWORD1(v46)) )
    {
      if ( KeHeteroSystemQos )
      {
        v21 = *(_QWORD *)(v9 + 328);
        LOBYTE(v22) = (v21 & *(_QWORD *)(a2 + 200)) == 0;
        if ( ((unsigned __int8)v22 & ((v21 & v20) != 0)) != 0 )
          return 1LL;
      }
    }
  }
  v25 = v49;
  if ( ((unsigned __int64)v49 & *(_QWORD *)(a2 + 200)) != 0 )
    return 0LL;
  if ( (unsigned int)Feature_HeteroRescheduleFixes__private_IsEnabledNoReportingNoInline(v22, v21, v23, v24) || a3 )
  {
    v29 = *(_QWORD *)(a2 + 36512);
    v30 = *(_QWORD *)(v9 + 24) & v20;
    v31 = *(_QWORD *)(a2 + 200) | *(_QWORD *)(v9 + 16);
    if ( (v31 & v29) != v29 )
    {
      if ( v30 )
        v20 &= *(_QWORD *)(v9 + 24);
      v30 = v20;
    }
    if ( (*(_BYTE *)(v9 + 184) & 4) != 0 )
    {
      v38 = v30 & *(_QWORD *)(a2 + 36536);
      RtlCopyVolatileMemory(v52, (const void *)(v9 + 576), 0x40uLL);
      v26 = 0LL;
      LOBYTE(v27) = 0;
      v28 = 0LL;
      do
      {
        if ( _bittest64(&v30, (unsigned __int8)v27) )
        {
          LOBYTE(v29) = v52[*(unsigned __int8 *)(a2 + 209)];
          if ( v52[v28] < (unsigned __int8)v29 )
            v26 |= 1LL << v28;
        }
        LOBYTE(v27) = v27 + 1;
        ++v28;
      }
      while ( (unsigned __int8)v27 < 0x40u );
      v30 = v38 | v26;
    }
    if ( (v25 & v30) != 0 )
      return 1LL;
    if ( !(unsigned int)Feature_HeteroRescheduleFixes__private_IsEnabledNoReportingNoInline(v29, v26, v27, v28) || a3 )
    {
      LOBYTE(v32) = v47;
      v33 = v30 & *((_QWORD *)&v49 + 1) & ~v25;
      ProcessorClassForPolicy = KiGetProcessorClassForPolicy(a2, HIDWORD(v46), v32);
      while ( v33 )
      {
        LOBYTE(v35) = v47;
        _BitScanReverse64(&v39, v33);
        if ( (unsigned __int8)KiGetProcessorClassForPolicy(
                                KiProcessorBlock[*((unsigned int *)&KiSupervisorXStateFeaturesLock.SchedulerApc.ApcListEntry.Flink[16 * *(unsigned __int16 *)(v9 + 136)].Flink
                                                 + (unsigned int)v39)],
                                v36,
                                v35) > ProcessorClassForPolicy )
          return 1LL;
        v33 &= ~*(_QWORD *)(v40 + 200);
      }
      if ( *(_QWORD *)((char *)&v46 + 4) == 0x100000000LL
        && v36 - 1 <= 1
        && !HIDWORD(v47)
        && !*(_DWORD *)(a2 + 33752)
        && !*(_DWORD *)(*(_QWORD *)(a2 + 36488) + 8LL) )
      {
        v41 = *((_QWORD *)&v49 + 1) & *(_QWORD *)(v9 + 80) & ~v31;
        if ( (*(_BYTE *)(v9 + 184) & 2) != 0 && (v31 & *(_QWORD *)(a2 + 36512)) == *(_QWORD *)(a2 + 36512) )
        {
          RtlCopyVolatileMemory(v52, (const void *)(v9 + 512), 0x40uLL);
          v41 = KiReduceAffinityToRankListValuesEqualTo(v41, v52);
        }
        if ( v41 )
        {
          v42 = *(unsigned int *)(v51 + 588);
          v43 = KiProcessorBlock[v42];
          v44 = (v41 & *(_QWORD *)(v43 + 36480)) != 0
              ? KiProcessorBlock[v42]
              : KiProcessorBlock[(unsigned int)KiFindBiasedProcessorIndex(
                                                 *(unsigned __int8 *)(v43 + 208),
                                                 *(unsigned __int8 *)(v43 + 209),
                                                 v41)];
          if ( KiHeteroScanQueueForPreemptionSwapTarget(*(_QWORD *)(v44 + 36488), v43, a2, v41, (__int64)&v46) )
            return 1LL;
        }
      }
    }
    return 0LL;
  }
  LOBYTE(v7) = (v25 & KeGetCurrentPrcb()->GroupSetMember) != 0;
  return v7;
}
