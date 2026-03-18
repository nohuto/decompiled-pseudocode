/*
 * XREFs of KeTransitionProcessorParkState @ 0x14042C1D0
 * Callers:
 *     PpmParkReportUnparkedCore @ 0x14025336C (PpmParkReportUnparkedCore.c)
 *     PpmParkReportParkedCore @ 0x140253514 (PpmParkReportParkedCore.c)
 *     PpmParkReportSoftParkChange @ 0x14042BF38 (PpmParkReportSoftParkChange.c)
 *     PpmParkReportForceParkChange @ 0x14042C088 (PpmParkReportForceParkChange.c)
 *     ?KiForceIdleParkUnparkProcessor@@YAXPEAU_KPRCB@@E@Z @ 0x1404F1878 (-KiForceIdleParkUnparkProcessor@@YAXPEAU_KPRCB@@E@Z.c)
 * Callees:
 *     KiReleasePrcbLocksForIsolationUnit @ 0x140237A80 (KiReleasePrcbLocksForIsolationUnit.c)
 *     KiAcquirePrcbLocksForIsolationUnit @ 0x1402BBDD0 (KiAcquirePrcbLocksForIsolationUnit.c)
 *     KxReleaseSpinLock @ 0x1402BDEF0 (KxReleaseSpinLock.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x1402DECD0 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x1402DED10 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     KxAcquireSpinLock @ 0x14032F2C0 (KxAcquireSpinLock.c)
 *     KiParkCurrentProcessor @ 0x1403346DC (KiParkCurrentProcessor.c)
 *     KiUnparkCurrentProcessor @ 0x14042C4D0 (KiUnparkCurrentProcessor.c)
 *     KiAvailableCpusSubscriptionQueueWorkItem @ 0x1404E01D0 (KiAvailableCpusSubscriptionQueueWorkItem.c)
 *     KiDisarmForceParkDutyCyclingIfNecessary @ 0x1404ED5A4 (KiDisarmForceParkDutyCyclingIfNecessary.c)
 *     KiUpdateSystemAvailableCpuState @ 0x1405E5CF4 (KiUpdateSystemAvailableCpuState.c)
 *     EtwTraceParkTransition @ 0x1406C4C6C (EtwTraceParkTransition.c)
 */

void __fastcall KeTransitionProcessorParkState(struct _KPRCB *a1, unsigned int a2)
{
  _KSCHEDULER_SUBNODE *SchedulerSubNode; // rdi
  unsigned __int64 GroupSetMember; // rbx
  unsigned int v6; // esi
  char v7; // r12
  __int64 v8; // rdx
  unsigned __int8 IdleState; // al
  char v10; // r15
  char v11; // bl
  unsigned __int8 v12; // al
  unsigned __int8 v13; // al
  unsigned __int64 v14; // rcx
  __int64 v15; // [rsp+70h] [rbp+8h] BYREF

  SchedulerSubNode = a1->SchedulerSubNode;
  GroupSetMember = a1->GroupSetMember;
  v15 = 0LL;
  if ( (GroupSetMember & SchedulerSubNode->ParkRequestSet) != 0 )
  {
    if ( (GroupSetMember & SchedulerSubNode->SoftParkRequestSet) != 0 )
      v6 = 2;
    else
      v6 = (SchedulerSubNode->ForceParkRequestSet & GroupSetMember) != 0 ? 3 : 1;
  }
  else
  {
    v6 = 0;
  }
  ExAcquireSpinLockExclusiveAtDpcLevel(&SchedulerSubNode->ParkLock);
  v7 = 1;
  KiAcquirePrcbLocksForIsolationUnit((__int64)a1, 1, (unsigned __int64 *)&v15);
  if ( v6 != 3 )
  {
    if ( v6 )
    {
      if ( v6 != 1 )
      {
        v14 = ~GroupSetMember;
        SchedulerSubNode->SoftParkRequestSet &= ~GroupSetMember;
        if ( !a2 )
        {
LABEL_35:
          SchedulerSubNode->ParkRequestSet &= v14;
          goto LABEL_7;
        }
LABEL_46:
        if ( a2 != 3 )
          goto LABEL_7;
        goto LABEL_47;
      }
      if ( a2 != 2 )
      {
        if ( a2 != 3 )
        {
          SchedulerSubNode->ParkRequestSet &= ~GroupSetMember;
          goto LABEL_7;
        }
LABEL_47:
        SchedulerSubNode->ForceParkRequestSet |= GroupSetMember;
        goto LABEL_7;
      }
    }
    else
    {
      SchedulerSubNode->ParkRequestSet |= GroupSetMember;
      if ( a2 != 2 )
        goto LABEL_46;
    }
LABEL_26:
    SchedulerSubNode->SoftParkRequestSet |= GroupSetMember;
    goto LABEL_7;
  }
  LOBYTE(v8) = 1;
  KiDisarmForceParkDutyCyclingIfNecessary(a1, v8);
  v14 = ~GroupSetMember;
  SchedulerSubNode->ForceParkRequestSet &= ~GroupSetMember;
  if ( !a2 )
    goto LABEL_35;
  if ( a2 == 2 )
    goto LABEL_26;
LABEL_7:
  IdleState = a1->IdleState;
  if ( a2 )
  {
    switch ( a2 )
    {
      case 1u:
        v12 = IdleState & 0xF1 | 2;
        break;
      case 2u:
        v12 = IdleState & 0xF1 | 6;
        break;
      case 3u:
        a1->IdleState = IdleState & 0xF1 | 0xA;
        v11 = 0;
        goto LABEL_23;
      default:
        v10 = 0;
        a1->IdleState = IdleState;
        v11 = 0;
        goto LABEL_12;
    }
    v10 = 0;
    a1->IdleState = v12;
    v11 = 0;
    if ( (v12 & 0x10) == 0 )
    {
LABEL_23:
      v10 = 1;
      KiParkCurrentProcessor(a1, (__int64)SchedulerSubNode, &v15, v6, a2, 0);
LABEL_24:
      v7 = 0;
      goto LABEL_12;
    }
    if ( v6 == 3 )
    {
LABEL_30:
      v11 = 1;
      KiUnparkCurrentProcessor((_DWORD)a1, (_DWORD)SchedulerSubNode, (unsigned int)&v15, v6, a2);
      goto LABEL_24;
    }
  }
  else
  {
    v13 = IdleState & 0xF1;
    v10 = 0;
    a1->IdleState = v13;
    v11 = 0;
    if ( (v13 & 0x10) != 0 )
      goto LABEL_30;
  }
LABEL_12:
  if ( v15 )
    KiReleasePrcbLocksForIsolationUnit(&v15);
  if ( v7 )
    ExReleaseSpinLockExclusiveFromDpcLevel(&SchedulerSubNode->ParkLock);
  if ( v6 == 3 || a2 == 3 )
  {
    _InterlockedIncrement64((volatile signed __int64 *)&KiSupervisorXStateFeaturesLock.WaitBlock[0].Thread);
    KiUpdateSystemAvailableCpuState();
    KxAcquireSpinLock(&KiCpuPartitionAssignmentLock);
    KiAvailableCpusSubscriptionQueueWorkItem(&a1->CpuPartition->AvailableCpusNotificationWorkItem.ExWorkItem);
    KxReleaseSpinLock(&KiCpuPartitionAssignmentLock);
  }
  if ( !v10 && !v11 && (WORD2(xmmword_140FBFC10) & 0x2000) != 0 )
    EtwTraceParkTransition(a1, a2, v6);
}
