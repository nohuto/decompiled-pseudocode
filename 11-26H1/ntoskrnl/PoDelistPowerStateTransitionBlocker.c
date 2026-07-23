/*
 * XREFs of PoDelistPowerStateTransitionBlocker @ 0x140C03138
 * Callers:
 *     PopUmpoSendPowerMessage @ 0x140426614 (PopUmpoSendPowerMessage.c)
 *     PopWakeDeviceList @ 0x1404B2F38 (PopWakeDeviceList.c)
 *     PopSleepDeviceList @ 0x1404B3160 (PopSleepDeviceList.c)
 *     ExSwapinWorkerThreads @ 0x14094A380 (ExSwapinWorkerThreads.c)
 *     PopIssueActionRequest @ 0x1409F3438 (PopIssueActionRequest.c)
 *     PopInitSystemSleeperThread @ 0x140A77BF0 (PopInitSystemSleeperThread.c)
 *     PopManageTransitionRecordRequest @ 0x140AE1E44 (PopManageTransitionRecordRequest.c)
 *     PopUnlockAfterSleepWorker @ 0x140C0ACC0 (PopUnlockAfterSleepWorker.c)
 *     PopFlushVolumes @ 0x140C0C930 (PopFlushVolumes.c)
 *     PopTransitionSystemPowerStateEx @ 0x140C112B0 (PopTransitionSystemPowerStateEx.c)
 * Callees:
 *     PopReleaseRwLock @ 0x14021B1A8 (PopReleaseRwLock.c)
 *     ObfDereferenceObject @ 0x1402646B0 (ObfDereferenceObject.c)
 *     PopAcquireRwLockExclusive @ 0x140425310 (PopAcquireRwLockExclusive.c)
 *     PopBSDiagSetTriageThread @ 0x140ABC830 (PopBSDiagSetTriageThread.c)
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
  if ( (unsigned int)(dword_140F105D4 - 1) <= 1 )
  {
    PopAcquireRwLockExclusive((unsigned __int64 *)&xmmword_140F120C8, a2, a3, a4);
    v7 = (unsigned int)dword_140F120C0;
    if ( (unsigned int)dword_140F120C0 >= 0x40 )
    {
      v4 = -1073741801;
    }
    else
    {
      if ( dword_140F120C0 )
        v8 = (__int64)PopStateTransitonBlameStack[6 * (unsigned int)(dword_140F120C0 - 1)];
      else
        v8 = 0LL;
      PopBSDiagSetTriageThread(1, v8, v5, v6);
      v9 = 6 * v7;
      ObfDereferenceObject(PopStateTransitonBlameStack[v9 + 1]);
      ObfDereferenceObject(PopStateTransitonBlameStack[v9]);
      *(_OWORD *)&PopStateTransitonBlameStack[v9] = 0LL;
      *(_OWORD *)&PopStateTransitonBlameStack[v9 + 2] = 0LL;
      *(_OWORD *)&PopStateTransitonBlameStack[v9 + 4] = 0LL;
      --dword_140F120C0;
    }
    PopReleaseRwLock((struct _KTHREAD *)&xmmword_140F120C8);
  }
  else
  {
    return (unsigned int)-1073741101;
  }
  return v4;
}
