/*
 * XREFs of HalpInterruptSendIpi @ 0x140232750
 * Callers:
 *     KiStartThreadCycleAccumulationContextSwap @ 0x140209540 (KiStartThreadCycleAccumulationContextSwap.c)
 *     KiSignalThreadForApc @ 0x14020B2C0 (KiSignalThreadForApc.c)
 *     HalRequestSoftwareInterrupt @ 0x14021F9A0 (HalRequestSoftwareInterrupt.c)
 *     KiUpdateRunTime @ 0x140220DB0 (KiUpdateRunTime.c)
 *     KiQueueReadyThread @ 0x140224FE0 (KiQueueReadyThread.c)
 *     KiUpdateThreadHgsFeedback @ 0x140228590 (KiUpdateThreadHgsFeedback.c)
 *     KiUnstackDetachProcess @ 0x140232120 (KiUnstackDetachProcess.c)
 *     HalSendSoftwareInterrupt @ 0x140232710 (HalSendSoftwareInterrupt.c)
 *     KiProcessThreadWaitList @ 0x14023D710 (KiProcessThreadWaitList.c)
 *     KiSearchForNewThreadsOnTarget @ 0x140241E30 (KiSearchForNewThreadsOnTarget.c)
 *     KiFlushSoftwareInterruptBatch @ 0x140245030 (KiFlushSoftwareInterruptBatch.c)
 *     KiFastExitThreadWait @ 0x1402459A0 (KiFastExitThreadWait.c)
 *     KeDelayExecutionThread @ 0x1402461A0 (KeDelayExecutionThread.c)
 *     KiExitThreadWait @ 0x1402470E0 (KiExitThreadWait.c)
 *     KiExitDispatcher @ 0x140248580 (KiExitDispatcher.c)
 *     KiDetachProcess @ 0x140248800 (KiDetachProcess.c)
 *     KiCheckForKernelApcDelivery @ 0x14027D0F0 (KiCheckForKernelApcDelivery.c)
 *     MiUnlockStealVm @ 0x140294270 (MiUnlockStealVm.c)
 *     HalRequestIpiSpecifyVector @ 0x1402F95B0 (HalRequestIpiSpecifyVector.c)
 *     KiInsertQueueDpc @ 0x140307FF0 (KiInsertQueueDpc.c)
 *     KeUpdateThreadTag @ 0x14030F4C0 (KeUpdateThreadTag.c)
 *     KeForceDetachProcess @ 0x1403118D0 (KeForceDetachProcess.c)
 *     KeUnstackDetachProcess @ 0x140311DB0 (KeUnstackDetachProcess.c)
 *     KiRequestSoftwareInterrupt @ 0x1403129C0 (KiRequestSoftwareInterrupt.c)
 *     KiReadyDeferredReadyList @ 0x140331960 (KiReadyDeferredReadyList.c)
 *     KiSendClockInterruptToTargetProcessor @ 0x14037B19C (KiSendClockInterruptToTargetProcessor.c)
 *     KiProcessDeferredReadyList @ 0x14037E6D0 (KiProcessDeferredReadyList.c)
 *     KiCheckForThreadDispatch @ 0x14037E820 (KiCheckForThreadDispatch.c)
 *     KiSendSoftwareInterruptAffinity @ 0x1403D3A10 (KiSendSoftwareInterruptAffinity.c)
 *     KiSendSoftwareInterrupt @ 0x14043EC90 (KiSendSoftwareInterrupt.c)
 *     KiRequestTimer2Expiration @ 0x1404475C4 (KiRequestTimer2Expiration.c)
 *     KiSynchronizeIdleIsolationDomainExit @ 0x14048C980 (KiSynchronizeIdleIsolationDomainExit.c)
 *     HalRequestDeferredRecoveryServiceInterrupt @ 0x140581430 (HalRequestDeferredRecoveryServiceInterrupt.c)
 * Callees:
 *     HalpDisableInterrupts @ 0x1403129A0 (HalpDisableInterrupts.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 *     memmove @ 0x140742080 (memmove.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 */

__int64 __fastcall HalpInterruptSendIpi(unsigned int *a1, unsigned int a2)
{
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // r8
  ULONG_PTR v7; // rdi
  __int64 *v8; // rsi
  __int64 v9; // rdx
  __int64 result; // rax
  __int64 v11; // rbx
  char v12; // bl
  unsigned int v13; // ecx
  unsigned int v14; // r8d
  __int64 v15; // rcx
  __int64 *v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r8
  unsigned __int64 v19; // r8
  unsigned __int16 v20; // cx
  __int64 v21; // rdx
  unsigned __int16 v22; // ax
  __int64 v23; // rcx
  __int64 v24; // rcx
  _DWORD *v25; // r12
  unsigned int v26; // ecx
  unsigned __int16 *v27; // r13
  __int64 v28; // r9
  int v29; // r10d
  __int64 v30; // rax
  char v31; // bl
  int v32; // eax
  unsigned __int64 v33; // rsi
  __int64 v34; // r13
  unsigned __int64 v35; // rdx
  __int64 v36; // rdx
  char v37; // bl
  int v38; // eax
  unsigned __int16 v39; // r9
  unsigned __int64 v40; // rdx
  __int64 v41; // rcx
  __int64 v42; // r9
  char v43; // bl
  __int64 v44; // rcx
  __int64 v45; // rdx
  unsigned __int16 v46; // cx
  unsigned __int16 v47; // r12
  unsigned __int16 v48; // bx
  __int64 v49; // rax
  unsigned __int16 v50; // cx
  unsigned __int16 v51; // r12
  unsigned __int16 v52; // bx
  __int64 v53; // rax
  unsigned int v54; // r8d
  __int64 v55; // rcx
  char v56; // bl
  int v57; // eax
  int v58; // [rsp+30h] [rbp-D0h] BYREF
  int v59; // [rsp+34h] [rbp-CCh]
  int v60; // [rsp+38h] [rbp-C8h]
  int v61; // [rsp+3Ch] [rbp-C4h]
  __int128 v62; // [rsp+40h] [rbp-C0h] BYREF
  int v63; // [rsp+50h] [rbp-B0h]
  int v64; // [rsp+58h] [rbp-A8h] BYREF
  int v65; // [rsp+5Ch] [rbp-A4h]
  __int128 v66; // [rsp+60h] [rbp-A0h] BYREF
  int v67; // [rsp+70h] [rbp-90h]
  int v68; // [rsp+78h] [rbp-88h]
  int v69; // [rsp+7Ch] [rbp-84h]
  _DWORD v70[4]; // [rsp+80h] [rbp-80h] BYREF
  __int64 v71; // [rsp+90h] [rbp-70h] BYREF
  _QWORD v72[33]; // [rsp+98h] [rbp-68h] BYREF
  unsigned __int16 v73; // [rsp+1A0h] [rbp+A0h] BYREF
  unsigned __int16 v74; // [rsp+1A2h] [rbp+A2h]
  int v75; // [rsp+1A4h] [rbp+A4h]
  _QWORD v76[33]; // [rsp+1A8h] [rbp+A8h] BYREF

  memset_0(&v71, 0, 0x108uLL);
  v7 = HalpInterruptController;
  v8 = &v71;
  v67 = 0;
  v66 = 0LL;
  LOBYTE(v6) = qword_140FBB630 && (unsigned __int8)guard_dispatch_icall_no_overrides(v5, v4, v6);
  v9 = *a1;
  switch ( (int)v9 )
  {
    case 1:
    case 2:
      if ( HalpInterruptIpiPolicy == 4 && (*(_DWORD *)(v7 + 244) & 0x10) != 0 && !HalpInterruptNoShorthand && !(_BYTE)v6 )
        goto LABEL_118;
      v8 = (__int64 *)*((_QWORD *)a1 + 1);
      if ( (_DWORD)v9 != 1 )
        goto LABEL_16;
      v71 = 2097153LL;
      memset_0(v72, 0, 0x100uLL);
      v44 = *((unsigned __int16 *)v8 + 4);
      v45 = *v8;
      if ( (unsigned __int16)v71 > (unsigned __int16)v44 )
        goto LABEL_81;
      if ( WORD1(v71) > (unsigned __int16)v44 )
      {
        LOWORD(v71) = v44 + 1;
LABEL_81:
        v72[v44] |= v45;
      }
      v8 = &v71;
      goto LABEL_16;
    case 3:
      if ( (*(_DWORD *)(v7 + 244) & 0x10) != 0 && !HalpInterruptNoShorthand && !(_BYTE)v6 )
      {
LABEL_118:
        LODWORD(v66) = 1;
        goto LABEL_11;
      }
      WORD1(v71) = 32;
      memset_0(v72, 0, 0x100uLL);
      v46 = WORD1(v71);
      v47 = WORD1(v71);
      if ( *(_WORD *)&stru_140FC11F0.WaitRegister.Flags <= WORD1(v71) )
        v47 = *(_WORD *)&stru_140FC11F0.WaitRegister.Flags;
      LOWORD(v71) = v47;
      v48 = 0;
      HIDWORD(v71) = 0;
      if ( v47 )
      {
        memmove(v72, (char *)&stru_140FC11F0.116 + 4, 8LL * v47);
        do
          ++v48;
        while ( v48 < v47 );
        v46 = WORD1(v71);
      }
      if ( v48 < v46 )
      {
        do
        {
          v49 = v48++;
          v72[v49] = 0LL;
        }
        while ( v48 < WORD1(v71) );
      }
      goto LABEL_16;
    case 4:
      if ( (*(_DWORD *)(v7 + 244) & 0x20) != 0 && !HalpInterruptNoShorthand && !(_BYTE)v6 )
      {
        LODWORD(v66) = 2;
        goto LABEL_11;
      }
      WORD1(v71) = 32;
      memset_0(v72, 0, 0x100uLL);
      v50 = WORD1(v71);
      v51 = WORD1(v71);
      if ( *(_WORD *)&stru_140FC11F0.WaitRegister.Flags <= WORD1(v71) )
        v51 = *(_WORD *)&stru_140FC11F0.WaitRegister.Flags;
      LOWORD(v71) = v51;
      v52 = 0;
      HIDWORD(v71) = 0;
      if ( v51 )
      {
        memmove(v72, (char *)&stru_140FC11F0.116 + 4, 8LL * v51);
        do
          ++v52;
        while ( v52 < v51 );
        v50 = WORD1(v71);
      }
      if ( v52 < v50 )
      {
        do
        {
          v53 = v52++;
          v72[v53] = 0LL;
        }
        while ( v52 < WORD1(v71) );
      }
      v54 = *((_DWORD *)&KiSupervisorXStateFeaturesLock.SchedulerApc.Thread->Header.Lock + KeGetPcr()->Prcb.Number);
      v55 = v54 >> 6;
      if ( (unsigned __int16)v71 > (unsigned int)v55 )
        v72[v55] &= ~(1LL << (v54 & 0x3F));
      goto LABEL_16;
    case 5:
      if ( (*(_DWORD *)(v7 + 244) & 0x40) != 0 && !HalpInterruptNoShorthand && !(_BYTE)v6 )
      {
        LODWORD(v66) = 3;
        goto LABEL_11;
      }
      v71 = 2097153LL;
      memset_0(v72, 0, 0x100uLL);
      v13 = *((_DWORD *)&KiSupervisorXStateFeaturesLock.SchedulerApc.Thread->Header.Lock + KeGetPcr()->Prcb.Number);
      v14 = v13 & 0x3F;
      v15 = v13 >> 6;
      if ( (unsigned __int16)v71 > (unsigned int)v15 )
        goto LABEL_15;
      if ( WORD1(v71) <= (unsigned int)v15 )
        goto LABEL_16;
      LOWORD(v71) = v15 + 1;
      goto LABEL_15;
    case 6:
      v11 = a1[2];
      if ( (_BYTE)v6 )
      {
        v71 = 2097153LL;
        memset_0(v72, 0, 0x100uLL);
        v14 = *(&KiSupervisorXStateFeaturesLock.SchedulerApc.Thread->Header.LockNV + v11) & 0x3F;
        v15 = (unsigned int)*(&KiSupervisorXStateFeaturesLock.SchedulerApc.Thread->Header.LockNV + v11) >> 6;
        if ( (unsigned __int16)v71 <= (unsigned int)v15 )
        {
          if ( WORD1(v71) <= (unsigned int)v15 )
          {
LABEL_16:
            memset_0(&v73, 0, 0x108uLL);
            v63 = 0;
            v62 = 0LL;
            if ( qword_140FBB488 )
            {
              return (unsigned int)guard_dispatch_icall_no_overrides(v8, a2, v18);
            }
            else
            {
              v74 = 32;
              memset_0(v76, 0, 0x100uLL);
              v20 = *(_WORD *)v8;
              v21 = v74;
              if ( (unsigned __int16)HalpInterruptPhysicalTargets < *(_WORD *)v8 )
                v20 = HalpInterruptPhysicalTargets;
              v73 = v20;
              if ( v20 > v74 )
              {
                v20 = v74;
                v73 = v74;
              }
              v22 = 0;
              if ( v20 )
              {
                do
                {
                  v23 = v22++;
                  v76[v23] = qword_140FBD028[v23] & v8[v23 + 1];
                  v20 = v73;
                }
                while ( v22 < v73 );
                v21 = v74;
              }
              v75 = 0;
              if ( v22 < (unsigned __int16)v21 )
              {
                do
                {
                  v24 = v22++;
                  v76[v24] = 0LL;
                }
                while ( v22 < v74 );
                v20 = v73;
              }
              if ( HalpInterruptIpiPolicy == 3 )
              {
                v21 = 0LL;
                if ( v20 )
                {
                  v19 = (unsigned __int64)v76;
                  v42 = v20;
                  do
                  {
                    v21 = (unsigned int)__popcnt(*(_QWORD *)v19) + (unsigned int)v21;
                    v19 += 8LL;
                    --v42;
                  }
                  while ( v42 );
                  if ( (unsigned int)v21 > HalpInterruptIpiThreshold )
                  {
                    LODWORD(v62) = 1;
                    v60 = -1;
                    v61 = 1;
                    v59 = *(_DWORD *)(HalpInterruptIpiLines + 20);
                    v58 = *(_DWORD *)(HalpInterruptIpiLines + 16);
                    v43 = HalpDisableInterrupts(HalpInterruptIpiLines, v21, v19);
                    result = guard_dispatch_icall_no_overrides(*(_QWORD *)(HalpInterruptController + 16), &v58, &v62);
                    v26 = result;
                    if ( v43 )
                    {
LABEL_12:
                      _enable();
                      return result;
                    }
                    return v26;
                  }
                }
              }
              if ( HalpInterruptClusterModeEnabled )
              {
                v25 = (_DWORD *)HalpInterruptClusterData;
                v26 = 0;
                v60 = 0;
                v27 = (unsigned __int16 *)(HalpInterruptClusterData + 16);
                while ( (unsigned __int64)v25 < HalpInterruptClusterDataEnd )
                {
                  v28 = *v27;
                  if ( *(_WORD *)v8 > (unsigned __int16)v28 )
                  {
                    v19 = *((_QWORD *)v27 - 1) & v8[v28 + 1];
                    if ( v19 )
                    {
                      DWORD2(v62) = *v25;
                      LODWORD(v62) = 6;
                      if ( HalpInterruptIpiPolicy == 2 )
                      {
                        HIDWORD(v62) = -1;
                      }
                      else
                      {
                        v29 = 0;
                        HIDWORD(v62) = 0;
                        LOBYTE(v21) = 0;
                        do
                        {
                          if ( (v19 & 1) != 0 )
                          {
                            if ( (_WORD)v28 || (_BYTE)v21 )
                            {
                              if ( (unsigned __int16)v28 >= (unsigned __int16)KiActiveGroups
                                || (unsigned __int8)v21 >= 0x40u )
                              {
                                v30 = 0xFFFFFFFFLL;
                              }
                              else
                              {
                                v30 = *((unsigned int *)&KiSupervisorXStateFeaturesLock.SchedulerApc.ApcListEntry.Flink[16 * v28].Flink
                                      + (unsigned __int8)v21);
                                if ( !(_DWORD)v30 )
                                  v30 = 0xFFFFFFFFLL;
                              }
                            }
                            else
                            {
                              v30 = 0LL;
                            }
                            v29 |= *(_DWORD *)(HalpInterruptTargets + 24 * v30 + 12);
                            HIDWORD(v62) = v29;
                          }
                          LOBYTE(v21) = v21 + 1;
                          v19 >>= 1;
                        }
                        while ( v19 );
                      }
                      v65 = *(_DWORD *)(HalpInterruptIpiLines + 20);
                      v64 = *(_DWORD *)(HalpInterruptIpiLines + 16);
                      v58 = -1;
                      v59 = 1;
                      v31 = HalpDisableInterrupts(HalpInterruptIpiLines, v21, v19);
                      v32 = guard_dispatch_icall_no_overrides(*(_QWORD *)(HalpInterruptController + 16), &v64, &v62);
                      v26 = v32;
                      if ( v31 )
                        _enable();
                      if ( v32 < 0 )
                        return v26;
                    }
                  }
                  v25 += 6;
                  v27 += 12;
                }
                goto LABEL_56;
              }
              if ( HalpInterruptPhysicalModeOnly )
                goto LABEL_55;
              v19 = v8[1];
              v39 = 0;
              LODWORD(v62) = 5;
              DWORD2(v62) = 0;
              while ( 1 )
              {
                while ( v19 )
                {
                  _BitScanForward64(&v40, v19);
                  v19 &= ~(1LL << v40);
                  v41 = *((unsigned int *)&KiSupervisorXStateFeaturesLock.SchedulerApc.ApcListEntry.Flink[16 * v39].Flink
                        + (unsigned __int8)v40);
                  v21 = 3 * v41;
                  if ( *(_DWORD *)(HalpInterruptTargets + 24 * v41) == 5 )
                    DWORD2(v62) |= *(_DWORD *)(HalpInterruptTargets + 24 * v41 + 8);
                }
                if ( ++v39 >= *(_WORD *)v8 )
                  break;
                v19 = v8[v39 + 1];
              }
              if ( !DWORD2(v62) )
              {
LABEL_55:
                v26 = 0;
                goto LABEL_56;
              }
              v64 = -1;
              v65 = 1;
              v59 = *(_DWORD *)(HalpInterruptIpiLines + 20);
              v58 = *(_DWORD *)(HalpInterruptIpiLines + 16);
              v56 = HalpDisableInterrupts(HalpInterruptIpiLines, v21, 0LL);
              v57 = guard_dispatch_icall_no_overrides(*(_QWORD *)(HalpInterruptController + 16), &v58, &v62);
              v26 = v57;
              if ( v56 )
                _enable();
              if ( v57 >= 0 )
              {
LABEL_56:
                v33 = v76[0];
                LOWORD(v34) = 0;
                do
                {
                  while ( !v33 )
                  {
                    v34 = (unsigned __int16)(v34 + 1);
                    if ( (unsigned int)v34 >= v73 )
                      return v26;
                    v33 = v76[v34];
                  }
                  _BitScanForward64(&v35, v33);
                  v33 &= ~(1LL << v35);
                  v36 = *((unsigned int *)&KiSupervisorXStateFeaturesLock.SchedulerApc.ApcListEntry.Flink[16 * (unsigned __int16)v34].Flink
                        + (unsigned __int8)v35);
                  LODWORD(v62) = 4;
                  DWORD2(v62) = *(_DWORD *)(HalpInterruptTargets + 24 * v36 + 8);
                  v70[1] = *(_DWORD *)(HalpInterruptIpiLines + 20);
                  v70[0] = *(_DWORD *)(HalpInterruptIpiLines + 16);
                  v68 = -1;
                  v69 = 1;
                  v37 = HalpDisableInterrupts(HalpInterruptIpiLines, v36, v19);
                  v38 = guard_dispatch_icall_no_overrides(*(_QWORD *)(HalpInterruptController + 16), v70, &v62);
                  v26 = v38;
                  if ( v37 )
                    _enable();
                }
                while ( v38 >= 0 );
              }
            }
            return v26;
          }
          LOWORD(v71) = v15 + 1;
        }
LABEL_15:
        v16 = &v72[v15];
        v17 = *v16;
        _bittestandset64(&v17, v14);
        *v16 = v17;
        goto LABEL_16;
      }
      LODWORD(v66) = 4;
      DWORD2(v66) = *(_DWORD *)(HalpInterruptLocalIds + 4 * v11);
LABEL_11:
      v60 = -1;
      v61 = 1;
      v59 = *(_DWORD *)(HalpInterruptIpiLines + 20);
      v58 = *(_DWORD *)(HalpInterruptIpiLines + 16);
      v12 = HalpDisableInterrupts(HalpInterruptIpiLines, v9, v6);
      result = guard_dispatch_icall_no_overrides(*(_QWORD *)(HalpInterruptController + 16), &v58, &v66);
      if ( v12 )
        goto LABEL_12;
      return result;
    default:
      return 3221225485LL;
  }
}
