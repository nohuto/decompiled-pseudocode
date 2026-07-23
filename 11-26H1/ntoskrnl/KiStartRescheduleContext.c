/*
 * XREFs of KiStartRescheduleContext @ 0x140331610
 * Callers:
 *     KiSoftParkElectionUnparkProcessor @ 0x14022C654 (KiSoftParkElectionUnparkProcessor.c)
 *     KiRescheduleThreadAfterAffinityChange @ 0x14022CBFC (KiRescheduleThreadAfterAffinityChange.c)
 *     KiAttemptToStealStandbyThread @ 0x14022D190 (KiAttemptToStealStandbyThread.c)
 *     KiHandleDeferredPreemption @ 0x1402300C0 (KiHandleDeferredPreemption.c)
 *     KiEnterLongDpcProcessing @ 0x140230404 (KiEnterLongDpcProcessing.c)
 *     KiDeferGroupSchedulingPreemption @ 0x1402313F0 (KiDeferGroupSchedulingPreemption.c)
 *     KiUpdateGlobalCpuSetConfiguration @ 0x140238FB4 (KiUpdateGlobalCpuSetConfiguration.c)
 *     KeYieldExecution @ 0x14023A110 (KeYieldExecution.c)
 *     KiSearchForNewThreadsOnTarget @ 0x140241E30 (KiSearchForNewThreadsOnTarget.c)
 *     KiFastExitThreadWait @ 0x1402459A0 (KiFastExitThreadWait.c)
 *     KeDelayExecutionThread @ 0x1402461A0 (KeDelayExecutionThread.c)
 *     KiExitThreadWait @ 0x1402470E0 (KiExitThreadWait.c)
 *     KiSatisfyThreadWait @ 0x1402478E0 (KiSatisfyThreadWait.c)
 *     KiRemoveBoostThread @ 0x140273850 (KiRemoveBoostThread.c)
 *     KiExecuteAllDpcs @ 0x14032FD30 (KiExecuteAllDpcs.c)
 *     KiQuantumEnd @ 0x1403330A0 (KiQuantumEnd.c)
 *     KiGroupSchedulingQuantumEnd @ 0x140334880 (KiGroupSchedulingQuantumEnd.c)
 *     KiGroupSchedulingGenerationEnd @ 0x140335240 (KiGroupSchedulingGenerationEnd.c)
 *     KiParkCurrentProcessor @ 0x14033670C (KiParkCurrentProcessor.c)
 *     KiAdjustCoreIsolationReasonThread @ 0x1404CCC84 (KiAdjustCoreIsolationReasonThread.c)
 *     KiApplyForegroundBoostThread @ 0x1405243B4 (KiApplyForegroundBoostThread.c)
 *     KiFinalizeCoreControlBlockAssignment @ 0x1405ED984 (KiFinalizeCoreControlBlockAssignment.c)
 *     KiForceParkDutyCycleDpcCallback @ 0x1405FB3A0 (KiForceParkDutyCycleDpcCallback.c)
 * Callees:
 *     KiIsThreadStateControlledByProcessor @ 0x14023944C (KiIsThreadStateControlledByProcessor.c)
 *     KiUpdateVPBackingThreadPriority @ 0x1403CA120 (KiUpdateVPBackingThreadPriority.c)
 */

char __fastcall KiStartRescheduleContext(__int64 a1, _QWORD *a2, __int64 a3)
{
  __int64 v3; // rbp
  unsigned __int64 v5; // r15
  unsigned int v6; // ebx
  _BYTE *v7; // rax
  unsigned int v8; // r14d
  struct _KPRCB **v9; // r8
  int v10; // esi
  __int64 v11; // rax
  unsigned __int8 *v12; // r13
  struct _KPRCB *v13; // r11
  _KSHARED_READY_QUEUE *SharedReadyQueue; // rcx
  unsigned __int8 IdleState; // al
  __int64 NextThread; // r10
  unsigned __int8 v17; // cl
  unsigned __int8 v18; // cl
  char v19; // r9
  unsigned __int8 v20; // dl
  unsigned __int8 v21; // cl
  _KSCHEDULER_SUBNODE *SchedulerSubNode; // rdx
  unsigned __int64 NonParkedSet; // rax
  unsigned int i; // r8d
  __int64 v25; // rdx
  _BYTE *v26; // rdi
  __int64 v27; // rcx
  __int64 v29; // [rsp+20h] [rbp-68h]
  unsigned __int64 v30; // [rsp+28h] [rbp-60h] BYREF
  struct _KPRCB *v31; // [rsp+30h] [rbp-58h]
  __int64 v32; // [rsp+38h] [rbp-50h]
  char v33; // [rsp+90h] [rbp+8h]
  struct _KPRCB **v34; // [rsp+98h] [rbp+10h]
  __int64 v36; // [rsp+A8h] [rbp+20h]

  v3 = 0LL;
  v5 = *a2 & 0xFFFFFFFFFFFFFFFEuLL;
  v6 = *a2 & 1;
  v30 = v5;
  v32 = v6;
  if ( v6 )
  {
    v7 = *(_BYTE **)(v5 + 36504);
    v8 = (unsigned __int8)*v7;
    v9 = (struct _KPRCB **)(v7 + 8);
    v34 = (struct _KPRCB **)(v7 + 8);
    v10 = 0;
    if ( !*v7 )
      goto LABEL_3;
  }
  else
  {
    v9 = (struct _KPRCB **)&v30;
    v8 = 1;
    v34 = (struct _KPRCB **)&v30;
    v10 = 0;
  }
  v12 = (unsigned __int8 *)(a1 + 48);
  v29 = v8;
  do
  {
    *((_OWORD *)v12 - 2) = 0LL;
    *((_OWORD *)v12 - 1) = 0LL;
    *(_QWORD *)v12 = 0LL;
    *((_QWORD *)v12 - 1) = -1LL;
    v12[4] = 63;
    v13 = *v9;
    *((_QWORD *)v12 - 4) = *v9;
    *((_QWORD *)v12 - 3) = 0LL;
    v31 = v13;
    SharedReadyQueue = v13->SharedReadyQueue;
    if ( SharedReadyQueue )
    {
      IdleState = v13->IdleState;
      if ( (IdleState & 0x10) == 0
        || ((SchedulerSubNode = v13->SchedulerSubNode, KiForceParkingConfiguration) && (IdleState & 0x20) != 0
          ? (NonParkedSet = ~SchedulerSubNode->ForceParkRequestSet)
          : (NonParkedSet = SchedulerSubNode->NonParkedSet),
            (NonParkedSet & SharedReadyQueue->Affinity) == 0) )
      {
        *((_QWORD *)v12 - 3) = v13->SharedReadyQueue;
      }
    }
    NextThread = (__int64)v13->NextThread;
    v36 = NextThread;
    *((_QWORD *)v12 - 2) = NextThread;
    if ( !NextThread )
    {
      NextThread = (__int64)v13->CurrentThread;
      v36 = NextThread;
      *((_QWORD *)v12 - 2) = NextThread;
    }
    if ( v13->NextThread == (_KTHREAD *)NextThread )
    {
      *v12 |= 4u;
    }
    else
    {
      v17 = *v12;
      if ( v13 == KeGetCurrentPrcb() )
        v18 = v17 | 4;
      else
        v18 = v17 & 0xFB;
      *v12 = v18;
    }
    v19 = 0;
    v33 = 0;
    if ( (*(_DWORD *)(NextThread + 120) & 0x400000) != 0 )
    {
      if ( NextThread != a3 )
      {
        if ( _interlockedbittestandset64((volatile signed __int32 *)(NextThread + 64), 0LL) )
          goto LABEL_19;
        v19 = 1;
        v33 = 1;
      }
      if ( (*(_DWORD *)(NextThread + 120) & 0x400000) != 0 )
      {
        if ( KiIsThreadStateControlledByProcessor(NextThread, (__int64)v13) )
        {
          KiUpdateVPBackingThreadPriority((struct _KTHREAD *)NextThread);
          NextThread = v36;
          v13 = v31;
          v19 = v33;
        }
        v9 = v34;
      }
      if ( v19 )
        *(_QWORD *)(NextThread + 64) = 0LL;
    }
LABEL_19:
    v20 = *v12 & 0xFE | ((v13->IdleState & 1) == 0);
    *v12 = v20;
    v21 = v20 ^ (v20 ^ (v13->PriorityState->AllFields >> 6)) & 2;
    *v12 = v21;
    if ( ((v21 >> 1) & 1) > v10 )
      v10 = (v21 >> 1) & 1;
    ++v9;
    v12 += 40;
    v34 = v9;
    --v29;
  }
  while ( v29 );
  v6 = v32;
LABEL_3:
  *(_DWORD *)(a1 + 8) = v6;
  *(_DWORD *)(a1 + 4) = v10;
  *(_BYTE *)a1 = v8;
  if ( v6 )
    LOBYTE(v11) = *(_BYTE *)(*(_QWORD *)(v5 + 36504) + 1LL);
  else
    LOBYTE(v11) = 0;
  *(_BYTE *)(a1 + 1) = v11;
  if ( v10 )
  {
    for ( i = 0; i < v8; ++i )
    {
      v11 = *(_QWORD *)(a1 + 40LL * i + 16);
      v25 = a1 + 40LL * i;
      if ( *(_QWORD *)(v25 + 32) != *(_QWORD *)(v11 + 36544) )
      {
        v3 = v25 + 16;
        break;
      }
    }
    if ( v8 )
    {
      v26 = (_BYTE *)(a1 + 48);
      v27 = v8;
      do
      {
        LOBYTE(v11) = (_BYTE)v26 - 32;
        if ( v26 - 32 != (_BYTE *)v3 )
        {
          *((_QWORD *)v26 - 2) = *(_QWORD *)(v3 + 16);
          LOBYTE(v11) = *(_BYTE *)(v3 + 32) | 0x20;
          *v26 = v11;
        }
        v26 += 40;
        --v27;
      }
      while ( v27 );
    }
  }
  return v11;
}
