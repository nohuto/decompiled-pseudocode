/*
 * XREFs of PoDelistPowerStateTransitionBlocker @ 0x140BFD138
 * Callers:
 *     PopUmpoSendPowerMessage @ 0x140437684 (PopUmpoSendPowerMessage.c)
 *     PopWakeDeviceList @ 0x1404B96A8 (PopWakeDeviceList.c)
 *     PopSleepDeviceList @ 0x1404B98D0 (PopSleepDeviceList.c)
 *     ExSwapinWorkerThreads @ 0x140956958 (ExSwapinWorkerThreads.c)
 *     PopInitSystemSleeperThread @ 0x140A03F00 (PopInitSystemSleeperThread.c)
 *     PopIssueActionRequest @ 0x140A37878 (PopIssueActionRequest.c)
 *     PopManageTransitionRecordRequest @ 0x140AE4334 (PopManageTransitionRecordRequest.c)
 *     PopUnlockAfterSleepWorker @ 0x140C04AB0 (PopUnlockAfterSleepWorker.c)
 *     PopFlushVolumes @ 0x140C06720 (PopFlushVolumes.c)
 *     PopTransitionSystemPowerStateEx @ 0x140C0B0A0 (PopTransitionSystemPowerStateEx.c)
 * Callees:
 *     ObfDereferenceObject @ 0x140265140 (ObfDereferenceObject.c)
 *     PopReleaseRwLock @ 0x14043630C (PopReleaseRwLock.c)
 *     PopAcquireRwLockExclusive @ 0x140436378 (PopAcquireRwLockExclusive.c)
 *     PopBSDiagSetTriageThread @ 0x140ABB370 (PopBSDiagSetTriageThread.c)
 */

__int64 __fastcall PoDelistPowerStateTransitionBlocker(__int64 a1, __int64 a2, __int64 a3, struct _KLOCK_ENTRIES *a4)
{
  unsigned int v4; // edi
  __int64 v5; // r8
  struct _KLOCK_ENTRIES *v6; // r9
  __int64 v7; // rbx
  __int64 v8; // rdx
  __int64 v9; // rbx

  v4 = 0;
  if ( (unsigned int)(dword_140F0FD14 - 1) <= 1 )
  {
    PopAcquireRwLockExclusive((unsigned __int64 *)&stru_140F11D08, a2, a3, a4);
    v7 = (unsigned int)dword_140F11D00;
    if ( (unsigned int)dword_140F11D00 >= 0x40 )
    {
      v4 = -1073741801;
    }
    else
    {
      if ( dword_140F11D00 )
        v8 = *(&stru_140F110C0.ThreadLock + 6 * (unsigned int)(dword_140F11D00 - 1));
      else
        v8 = 0LL;
      PopBSDiagSetTriageThread(1, v8, v5, v6);
      v9 = 6 * v7;
      ObfDereferenceObject(*((PVOID *)&stru_140F110C0.CycleTime + v9));
      ObfDereferenceObject(*((PVOID *)&stru_140F110C0.ThreadLock + v9));
      *(_OWORD *)(&stru_140F110C0.ThreadLock + v9) = 0LL;
      *(_OWORD *)(&stru_140F110C0.CurrentRunTime + 2 * v9) = 0LL;
      *(_OWORD *)(&stru_140F110C0.StateSaveArea + v9) = 0LL;
      --dword_140F11D00;
    }
    PopReleaseRwLock(&stru_140F11D08);
  }
  else
  {
    return (unsigned int)-1073741101;
  }
  return v4;
}
