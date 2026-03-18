/*
 * XREFs of ?VidMmFlushWorkerThread@@YAXPEAUVIDMM_WORKER_THREAD@@@Z @ 0x1400A83A0
 * Callers:
 *     ?Escape@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_DEVICE@@PEAU_D3DKMT_VIDMM_ESCAPE@@_N@Z @ 0x14009DE94 (-Escape@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_DEVICE@@PEAU_D3DKMT_VIDMM_ESCAPE@@_N@Z.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x14002EEAC (DxgkLogInternalTriageEvent.c)
 *     VidMmTransitionToState @ 0x1401154D8 (VidMmTransitionToState.c)
 */

void __fastcall VidMmFlushWorkerThread(struct VIDMM_WORKER_THREAD *a1)
{
  char *v2; // rdi
  __int64 v3; // rdx
  __int64 v4; // rdx
  __int64 v5; // rcx

  v2 = (char *)a1 + 136;
  KeEnterCriticalRegion();
  ExAcquirePushLockExclusiveEx(v2, 0LL);
  *((_QWORD *)v2 + 1) = KeGetCurrentThread();
  if ( *((_BYTE *)a1 + 212) == 1 )
  {
    LOBYTE(v3) = 6;
    VidMmTransitionToState(a1, v3);
    LOBYTE(v4) = 1;
    VidMmTransitionToState(a1, v4);
  }
  else
  {
    WdLogSingleEntry1(1LL, *((unsigned __int8 *)a1 + 212));
    WdLogGlobalForLineNumber = 3939;
    DxgkLogInternalTriageEvent(v5, 0x40000LL);
  }
  *((_QWORD *)v2 + 1) = 0LL;
  ExReleasePushLockExclusiveEx(v2, 0LL);
  KeLeaveCriticalRegion();
}
