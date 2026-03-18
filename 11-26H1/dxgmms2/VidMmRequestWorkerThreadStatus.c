/*
 * XREFs of VidMmRequestWorkerThreadStatus @ 0x1401153D0
 * Callers:
 *     VidMmInitializeWorkerThread @ 0x1400A848C (VidMmInitializeWorkerThread.c)
 *     VidMmTerminateWorkerThread @ 0x1400A85D4 (VidMmTerminateWorkerThread.c)
 *     ?SuspendWorkerThread@VIDMM_GLOBAL@@QEAAXW4VIDMM_WORKER_THREAD_SUSPEND_REASON@@@Z @ 0x14011537C (-SuspendWorkerThread@VIDMM_GLOBAL@@QEAAXW4VIDMM_WORKER_THREAD_SUSPEND_REASON@@@Z.c)
 *     ?ResumeWorkerThread@VIDMM_GLOBAL@@QEAAX_N@Z @ 0x1401153B0 (-ResumeWorkerThread@VIDMM_GLOBAL@@QEAAX_N@Z.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x14002EEAC (DxgkLogInternalTriageEvent.c)
 *     VidMmTransitionToState @ 0x1401154D8 (VidMmTransitionToState.c)
 */

void __fastcall VidMmRequestWorkerThreadStatus(__int64 a1, unsigned __int8 a2, char a3)
{
  __int64 v4; // rbx
  __int64 v6; // rsi
  __int64 v7; // rdx
  __int64 v8; // rcx

  v4 = a2;
  v6 = a1 + 136;
  KeEnterCriticalRegion();
  ExAcquirePushLockExclusiveEx(v6, 0LL);
  *(_QWORD *)(v6 + 8) = KeGetCurrentThread();
  if ( *(_BYTE *)(a1 + 212) != 5 || a3 || (_BYTE)v4 == 3 )
  {
    if ( *(_BYTE *)(a1 + 213) != (_BYTE)v4 )
    {
      LOBYTE(v7) = v4;
      VidMmTransitionToState(a1, v7);
    }
  }
  else
  {
    WdLogSingleEntry1(1LL, v4);
    WdLogGlobalForLineNumber = 1474;
    DxgkLogInternalTriageEvent(v8, 0x40000LL);
  }
  *(_QWORD *)(v6 + 8) = 0LL;
  ExReleasePushLockExclusiveEx(v6, 0LL);
  KeLeaveCriticalRegion();
}
