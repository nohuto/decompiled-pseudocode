/*
 * XREFs of KeUpdateThreadTag @ 0x14030F4C0
 * Callers:
 *     <none>
 * Callees:
 *     KiCheckPreferredHeteroProcessor @ 0x140220510 (KiCheckPreferredHeteroProcessor.c)
 *     KiEndThreadCycleAccumulation @ 0x140227B30 (KiEndThreadCycleAccumulation.c)
 *     HalpInterruptSendIpi @ 0x140232750 (HalpInterruptSendIpi.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1402480D0 (KiLowerIrqlProcessIrqlFlags.c)
 *     KiIpiStallOnPacketTargetsPrcb @ 0x140253150 (KiIpiStallOnPacketTargetsPrcb.c)
 *     KiReleaseThreadStateLock @ 0x140305180 (KiReleaseThreadStateLock.c)
 *     KiAcquirePrcbLocksForIsolationUnit @ 0x140306A90 (KiAcquirePrcbLocksForIsolationUnit.c)
 *     KiComputeThreadQos @ 0x140306EE0 (KiComputeThreadQos.c)
 *     KiAcquireThreadLockRaiseToDpc @ 0x14030F3D0 (KiAcquireThreadLockRaiseToDpc.c)
 *     Feature_Servicing_DeadlineQosReschedule__private_ReportDeviceUsage @ 0x14030FA74 (Feature_Servicing_DeadlineQosReschedule__private_ReportDeviceUsage.c)
 *     KiIpiSendRequest @ 0x14032BF00 (KiIpiSendRequest.c)
 *     KeCheckAndApplyBamQos @ 0x140332380 (KeCheckAndApplyBamQos.c)
 *     KiAcquireThreadStateLockForWrite @ 0x1403342E0 (KiAcquireThreadStateLockForWrite.c)
 *     KiStartThreadCycleAccumulation @ 0x140336EE0 (KiStartThreadCycleAccumulation.c)
 *     KiUpdateThreadQosGroupingSummaries @ 0x140380C70 (KiUpdateThreadQosGroupingSummaries.c)
 *     KiSendSoftwareInterrupt @ 0x14043EC90 (KiSendSoftwareInterrupt.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x140523094 (KiRaiseIrqlProcessIrqlFlags.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x140531F20 (KiRemoveSystemWorkPriorityKick.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 */

__int64 __fastcall KeUpdateThreadTag(__int64 a1, int a2)
{
  int v3; // eax
  __int64 v4; // r13
  int v5; // r15d
  char v6; // al
  __int64 v7; // rbx
  unsigned int v8; // r8d
  __int64 v9; // rcx
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 CurrentIrql; // rcx
  __int64 v13; // rcx
  int v14; // r12d
  int v15; // ecx
  _BYTE *v16; // rax
  unsigned int v17; // ecx
  __int64 *v18; // rbx
  __int64 v19; // r14
  __int64 v20; // rcx
  unsigned __int64 v21; // rcx
  unsigned __int64 *v22; // r8
  int v23; // eax
  struct _KPRCB *CurrentPrcb; // rax
  __int64 result; // rax
  struct _KPRCB *v26; // rbx
  char v27; // r12
  char v28; // r13
  char v29; // al
  __int64 v30; // r9
  struct _KPRCB *v31; // r8
  signed __int32 *SchedulerAssist; // rdx
  int v33; // r15d
  unsigned __int64 v34; // rcx
  unsigned __int64 *v35; // r8
  __int64 v36; // rdx
  int v37; // ecx
  _BYTE *v38; // rax
  __int64 *v39; // r14
  __int64 v40; // r13
  __int64 v41; // r8
  signed __int32 v42; // eax
  signed __int32 v43; // ett
  int v44; // ecx
  _BYTE *v45; // rax
  unsigned int v46; // ecx
  __int64 *v47; // rbx
  __int64 v48; // r14
  __int64 v49; // rcx
  char v50; // [rsp+30h] [rbp-D0h]
  unsigned __int8 v51[7]; // [rsp+31h] [rbp-CFh] BYREF
  __int64 v52; // [rsp+38h] [rbp-C8h] BYREF
  __int128 v53; // [rsp+40h] [rbp-C0h] BYREF
  _BYTE v54[24]; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v55; // [rsp+68h] [rbp-98h] BYREF
  __int128 v56; // [rsp+70h] [rbp-90h]
  __int64 (__fastcall *v57)(); // [rsp+80h] [rbp-80h]
  __int64 v58; // [rsp+90h] [rbp-70h] BYREF
  _QWORD v59[33]; // [rsp+98h] [rbp-68h] BYREF
  int v60; // [rsp+1F8h] [rbp+F8h] BYREF

  v60 = a2;
  v51[0] = 0;
  KiAcquireThreadLockRaiseToDpc(a1, v51);
  if ( *(unsigned __int8 *)(a1 + 124) == v60 )
  {
    *(_QWORD *)(a1 + 64) = 0LL;
    goto LABEL_32;
  }
  if ( (struct _KTHREAD *)a1 != KeGetCurrentThread() )
  {
    v50 = 0;
    v53 = 0LL;
    memset(v54, 0, sizeof(v54));
    v3 = KiAcquireThreadStateLockForWrite(a1, &v53);
    v4 = v53;
    v5 = v3;
    if ( v3 != 2 && !*(_WORD *)(a1 + 114) )
    {
      v6 = v60;
      if ( v60 )
        _interlockedbittestandset((volatile signed __int32 *)a1, 0x14u);
      else
        _interlockedbittestandreset((volatile signed __int32 *)a1, 0x14u);
      *(_BYTE *)(a1 + 124) = v6;
LABEL_17:
      v14 = KiComputeThreadQos(a1);
      if ( v14 == *(unsigned __int8 *)(a1 + 516) )
        goto LABEL_29;
      *(_BYTE *)(a1 + 516) = v14;
      if ( v5 == 2 )
      {
        if ( !*(_QWORD *)(v53 + 16) )
        {
          v15 = *(_DWORD *)(a1 + 120) >> 1;
          v52 = v53;
          if ( (v15 & 1) == 0 )
          {
            v18 = &v52;
            v17 = 1;
LABEL_22:
            v19 = v17;
            do
            {
              v20 = *v18;
              *(_BYTE *)(*(_QWORD *)(*v18 + 56) + 64LL) ^= (*(_BYTE *)(a1 + 516) ^ *(_BYTE *)(*(_QWORD *)(*v18 + 56)
                                                                                            + 64LL)) & 7;
              KiUpdateThreadQosGroupingSummaries(v20);
              ++v18;
              --v19;
            }
            while ( v19 );
            Feature_Servicing_DeadlineQosReschedule__private_ReportDeviceUsage();
LABEL_25:
            if ( v14 == 4 )
            {
              v23 = KiCheckPreferredHeteroProcessor(a1, v4, 1);
              if ( KeHeteroSystemQos || v23 )
              {
                *(_BYTE *)(v4 + 14521) = 1;
                v50 = 1;
              }
            }
            goto LABEL_30;
          }
          v16 = *(_BYTE **)(v53 + 36504);
          v17 = (unsigned __int8)*v16;
          v18 = (__int64 *)(v16 + 8);
          if ( *v16 )
            goto LABEL_22;
        }
        goto LABEL_29;
      }
      if ( v5 != 3 )
      {
LABEL_29:
        Feature_Servicing_DeadlineQosReschedule__private_ReportDeviceUsage();
        if ( v5 == 2 )
          goto LABEL_25;
LABEL_30:
        KiReleaseThreadStateLock(v21, (__int64)&v53, v22);
        *(_QWORD *)(a1 + 64) = 0LL;
        Feature_Servicing_DeadlineQosReschedule__private_ReportDeviceUsage();
        if ( v50 )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          LODWORD(v56) = *(_DWORD *)(v4 + 36);
          v55 = 6LL;
          ++CurrentPrcb->SynchCounters.IpiSendSoftwareInterruptCount;
          *(_QWORD *)((char *)&v56 + 4) = 0LL;
          HalpInterruptSendIpi((unsigned int *)&v55, 0x2Fu);
        }
        goto LABEL_32;
      }
      v44 = *(_DWORD *)(a1 + 120) >> 1;
      v52 = v53;
      if ( (v44 & 1) != 0 )
      {
        v45 = *(_BYTE **)(v53 + 36504);
        v46 = (unsigned __int8)*v45;
        v47 = (__int64 *)(v45 + 8);
        if ( !*v45 )
        {
LABEL_67:
          Feature_Servicing_DeadlineQosReschedule__private_ReportDeviceUsage();
          goto LABEL_30;
        }
      }
      else
      {
        v47 = &v52;
        v46 = 1;
      }
      v48 = v46;
      do
      {
        v49 = *v47;
        *(_BYTE *)(*(_QWORD *)(*v47 + 56) + 64LL) ^= (*(_BYTE *)(a1 + 516) ^ *(_BYTE *)(*(_QWORD *)(*v47 + 56) + 64LL)) & 7;
        KiUpdateThreadQosGroupingSummaries(v49);
        ++v47;
        --v48;
      }
      while ( v48 );
      goto LABEL_67;
    }
    memset_0(v59, 0, 0x100uLL);
    v7 = *(unsigned int *)(a1 + 536);
    v58 = 2097153LL;
    memset_0(v59, 0, 0x100uLL);
    LODWORD(v7) = v7 & 0x7FFFFFFF;
    v8 = *(&KiSupervisorXStateFeaturesLock.SchedulerApc.Thread->Header.LockNV + v7) & 0x3F;
    v9 = (unsigned int)*(&KiSupervisorXStateFeaturesLock.SchedulerApc.Thread->Header.LockNV + v7) >> 6;
    if ( (unsigned __int16)v58 <= (unsigned int)v9 )
    {
      if ( WORD1(v58) <= (unsigned int)v9 )
        goto LABEL_10;
      LOWORD(v58) = v9 + 1;
    }
    v10 = (unsigned int)v9;
    v11 = v59[v9];
    _bittestandset64(&v11, v8);
    v59[v10] = v11;
LABEL_10:
    CurrentIrql = KeGetCurrentIrql();
    if ( (_BYTE)CurrentIrql != 12 )
      __writecr8(0xCuLL);
    if ( KiIrqlFlags )
      KiRaiseIrqlProcessIrqlFlags(CurrentIrql, 12LL);
    *(_QWORD *)&v56 = &v60;
    v55 = a1;
    v57 = KiIpiUpdateThreadTag;
    *((_QWORD *)&v56 + 1) = 0LL;
    KiIpiSendRequest((unsigned int)KeGetCurrentPrcb(), 0, (unsigned int)&v58, (unsigned int)&v55, 5LL);
    KiIpiStallOnPacketTargetsPrcb(v13, (__int64)KeGetCurrentPrcb());
    if ( KiIrqlFlags )
      KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), 2u);
    __writecr8(2uLL);
    goto LABEL_17;
  }
  v26 = KeGetCurrentPrcb();
  v27 = 0;
  v28 = 0;
  _disable();
  KiEndThreadCycleAccumulation((__int64)v26, a1, 0LL, 0);
  v29 = v60;
  if ( v60 )
    _interlockedbittestandset((volatile signed __int32 *)a1, 0x14u);
  else
    _interlockedbittestandreset((volatile signed __int32 *)a1, 0x14u);
  *(_BYTE *)(a1 + 124) = v29;
  KiStartThreadCycleAccumulation(v26, a1, 0LL);
  v31 = KeGetCurrentPrcb();
  SchedulerAssist = (signed __int32 *)v31->SchedulerAssist;
  if ( SchedulerAssist )
  {
    _m_prefetchw(SchedulerAssist);
    v42 = *SchedulerAssist;
    do
    {
      v43 = v42;
      v42 = _InterlockedCompareExchange(SchedulerAssist, v42 & 0xFFDFFFFF, v42);
    }
    while ( v43 != v42 );
    if ( (v42 & 0x200000) != 0 )
      KiRemoveSystemWorkPriorityKick(v31, SchedulerAssist, v31, v30);
  }
  _enable();
  v33 = KiComputeThreadQos(a1);
  if ( v33 != *(unsigned __int8 *)(a1 + 516) )
  {
    v53 = (unsigned __int64)v26;
    memset(v54, 0, sizeof(v54));
    KiAcquirePrcbLocksForIsolationUnit((__int64)v26, 1, (unsigned __int64 *)&v53 + 1);
    v36 = v53;
    *(_BYTE *)(a1 + 516) = v33;
    if ( !*(_QWORD *)(v36 + 16) )
    {
      v37 = *(_DWORD *)(a1 + 120) >> 1;
      v52 = v36;
      v34 = v37 & 1;
      if ( (_DWORD)v34 )
      {
        if ( (_DWORD)v34 != 1 )
          goto LABEL_46;
        v38 = *(_BYTE **)(v36 + 36504);
        v34 = (unsigned __int8)*v38;
        v39 = (__int64 *)(v38 + 8);
        if ( !*v38 )
          goto LABEL_46;
      }
      else
      {
        v39 = &v52;
        LODWORD(v34) = 1;
      }
      v40 = (unsigned int)v34;
      do
      {
        v41 = *v39;
        *(_BYTE *)(*(_QWORD *)(*v39 + 56) + 64LL) ^= (*(_BYTE *)(a1 + 516) ^ *(_BYTE *)(*(_QWORD *)(*v39 + 56) + 64LL)) & 7;
        KiUpdateThreadQosGroupingSummaries(v41);
        ++v39;
        --v40;
      }
      while ( v40 );
      v28 = 0;
    }
LABEL_46:
    KiReleaseThreadStateLock(v34, (__int64)&v53, v35);
  }
  Feature_Servicing_DeadlineQosReschedule__private_ReportDeviceUsage();
  if ( v33 == 4 )
  {
    if ( (unsigned int)KiCheckPreferredHeteroProcessor(a1, (__int64)v26, 1) )
    {
      v26->QuantumEnd = 1;
      v27 = 1;
    }
    else
    {
      v28 = 1;
    }
  }
  *(_QWORD *)(a1 + 64) = 0LL;
  Feature_Servicing_DeadlineQosReschedule__private_ReportDeviceUsage();
  if ( v27 )
    KiSendSoftwareInterrupt(v26->Number, 2LL);
  if ( v28 )
    KeCheckAndApplyBamQos(v26, a1);
LABEL_32:
  if ( KiIrqlFlags )
    KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v51[0]);
  result = v51[0];
  __writecr8(v51[0]);
  return result;
}
