/*
 * XREFs of VidSchFlushAdapter @ 0x1400C1D50
 * Callers:
 *     VidSchiHandleControlEvent @ 0x1400C577C (VidSchiHandleControlEvent.c)
 *     VidSchTerminateAdapter @ 0x1400C57F0 (VidSchTerminateAdapter.c)
 * Callees:
 *     VidSchiClearFlipDevice @ 0x140003564 (VidSchiClearFlipDevice.c)
 *     DxgkLogInternalTriageEvent @ 0x14002EEAC (DxgkLogInternalTriageEvent.c)
 *     VidSchIsTDRPending @ 0x140035D80 (VidSchIsTDRPending.c)
 *     VidSchIsWorkerThread @ 0x1400360D0 (VidSchIsWorkerThread.c)
 *     VidSchiInterlockedReadUlong @ 0x14003F594 (VidSchiInterlockedReadUlong.c)
 *     VidSchiGetSchedulerStatus @ 0x140054CD0 (VidSchiGetSchedulerStatus.c)
 *     VidSchiUnlinkCrossAdapterSyncObjects @ 0x1400557C0 (VidSchiUnlinkCrossAdapterSyncObjects.c)
 *     VidSchiUnwaitAllContexts @ 0x1400558A4 (VidSchiUnwaitAllContexts.c)
 *     ??$VidSchRundownUnorderedWaiter@U_VIDSCH_GLOBAL@@@@YAJPEAU_VIDSCH_GLOBAL@@0W4_VIDSCH_FLUSH_STAGE@@_NP6AXPEAVHwQueueStagingList@@0@Z@Z @ 0x140055BD8 (--$VidSchRundownUnorderedWaiter@U_VIDSCH_GLOBAL@@@@YAJPEAU_VIDSCH_GLOBAL@@0W4_VIDSCH_FLUSH_STAGE.c)
 *     ?VidSchRundownUnorderedWaiterGlobal@@YAXPEAU_VIDSCH_GLOBAL@@@Z @ 0x140055FF8 (-VidSchRundownUnorderedWaiterGlobal@@YAXPEAU_VIDSCH_GLOBAL@@@Z.c)
 *     ?VidSchiProcessCrossAdapterSignaledSyncObjectsFromPassiveLevel@@YAXPEAU_VIDSCH_GLOBAL@@@Z @ 0x1400560C0 (-VidSchiProcessCrossAdapterSignaledSyncObjectsFromPassiveLevel@@YAXPEAU_VIDSCH_GLOBAL@@@Z.c)
 *     VidSchiCleanupQueuedCommand @ 0x140058ED0 (VidSchiCleanupQueuedCommand.c)
 *     VidSchiCompleteAllPendingCommand @ 0x140058F78 (VidSchiCompleteAllPendingCommand.c)
 *     memset @ 0x14005BBC0 (memset.c)
 *     VidSchiBlockDriverCallback @ 0x140099458 (VidSchiBlockDriverCallback.c)
 *     VidSchiCancelDelayTimerDevice @ 0x1400C06D4 (VidSchiCancelDelayTimerDevice.c)
 *     VidSchiRequestSchedulerStatus @ 0x1400C1914 (VidSchiRequestSchedulerStatus.c)
 *     VidSchiHandleControlEvent @ 0x1400C577C (VidSchiHandleControlEvent.c)
 *     VidSchiWaitFlushCompletion @ 0x140116D6C (VidSchiWaitFlushCompletion.c)
 *     VidSchResumeAdapter @ 0x140117E00 (VidSchResumeAdapter.c)
 *     VidSchiWaitForEmptyHwQueue @ 0x14012733C (VidSchiWaitForEmptyHwQueue.c)
 */

__int64 __fastcall VidSchFlushAdapter(struct _VIDSCH_GLOBAL *a1, int a2)
{
  unsigned int v2; // edi
  int v5; // r12d
  __int64 v6; // rcx
  struct _KTHREAD *CurrentThread; // rax
  _DWORD *v9; // r14
  struct _VIDSCH_GLOBAL *i; // r14
  int v11; // eax
  __int64 v12; // rcx
  _QWORD v13[20]; // [rsp+58h] [rbp-59h] BYREF

  v2 = 0;
  v5 = 0;
  if ( a1 )
  {
    if ( a2 == 17 )
    {
      CurrentThread = KeGetCurrentThread();
      if ( CurrentThread != *((struct _KTHREAD **)a1 + 23) && CurrentThread != *((struct _KTHREAD **)a1 + 24) )
        *((_BYTE *)a1 + 3284) |= 3u;
    }
    if ( VidSchIsWorkerThread((__int64)a1) )
    {
      if ( a2 )
      {
        if ( VidSchIsTDRPending((__int64)a1) )
        {
          v9 = (_DWORD *)((char *)a1 + 3260);
          if ( *((_DWORD *)a1 + 815) == 3 )
          {
            VidSchiBlockDriverCallback((__int64)a1);
            *((_DWORD *)a1 + 11) = 23;
            RtlClearAllBitsEx((char *)a1 + 648);
            VidSchiCompleteAllPendingCommand((__int64)a1);
          }
        }
        else
        {
          VidSchiWaitForEmptyHwQueue(a1);
          v9 = (_DWORD *)((char *)a1 + 3260);
        }
        if ( a2 == 17 || *v9 == 3 )
        {
          VidSchiUnlinkCrossAdapterSyncObjects((__int64)a1);
          VidSchiProcessCrossAdapterSignaledSyncObjectsFromPassiveLevel(a1);
        }
        VidSchRundownUnorderedWaiterGlobal(a1);
        for ( i = (struct _VIDSCH_GLOBAL *)*((_QWORD *)a1 + 45);
              i != (struct _VIDSCH_GLOBAL *)((char *)a1 + 360);
              i = *(struct _VIDSCH_GLOBAL **)i )
        {
          VidSchiCancelDelayTimerDevice(0LL, (__int64)i - 112);
        }
        VidSchResumeAdapter(a1, 0LL);
        VidSchiUnwaitAllContexts((__int64)a1);
        VidSchiClearFlipDevice(a1, 0LL, 9, 0xFFFFFFFD, 0);
        VidSchiCleanupQueuedCommand((__int64)a1);
        v11 = *((_DWORD *)a1 + 95);
        if ( v11 != 2 && v11 != 3 )
          VidSchiHandleControlEvent(a1);
      }
    }
    else if ( *(_BYTE *)(*((_QWORD *)a1 + 1) + 1025LL) || *(_DWORD *)(*((_QWORD *)a1 + 2) + 200LL) == 6 )
    {
      v5 = VidSchiRequestSchedulerStatus((__int64)a1, 3, 1);
    }
    else if ( (unsigned int)VidSchiGetSchedulerStatus((__int64)a1) == 1 )
    {
      v5 = VidSchRundownUnorderedWaiter<_VIDSCH_GLOBAL>(v12, (__int64)a1, a2);
      if ( v5 >= 0 && (a2 & 1) != 0 )
      {
        if ( VidSchIsTDRPending((__int64)a1) || a2 == 17 )
          VidSchiUnwaitAllContexts((__int64)a1);
        memset(v13, 0, sizeof(v13));
        if ( *((_DWORD *)a1 + 197) )
        {
          LODWORD(v13[4]) |= 0x10u;
          v13[5] = (char *)a1 + 788;
          LODWORD(v13[2]) = 1;
          VidSchiWaitFlushCompletion(a1, v13, 26LL);
        }
        if ( *((_DWORD *)a1 + 200) )
        {
          memset(v13, 0, sizeof(v13));
          LODWORD(v13[4]) |= 0x10u;
          LODWORD(v13[2]) = 3;
          v13[5] = (char *)a1 + 800;
          VidSchiWaitFlushCompletion(a1, v13, 25LL);
        }
        if ( a2 != 5 )
        {
          VidSchiClearFlipDevice(a1, 0LL, 9, 0xFFFFFFFD, 0);
          VidSchiInterlockedReadUlong((KSPIN_LOCK *)a1 + 255, (_DWORD *)a1 + 200);
        }
      }
    }
    LOBYTE(v2) = a2 == 17;
    _InterlockedOr((volatile signed __int32 *)a1 + 1767, v2);
    return (unsigned int)v5;
  }
  else
  {
    WdLogSingleEntry1(1LL, -1073741811LL);
    WdLogGlobalForLineNumber = 1901;
    DxgkLogInternalTriageEvent(v6, 0x40000LL);
    return 3221225485LL;
  }
}
