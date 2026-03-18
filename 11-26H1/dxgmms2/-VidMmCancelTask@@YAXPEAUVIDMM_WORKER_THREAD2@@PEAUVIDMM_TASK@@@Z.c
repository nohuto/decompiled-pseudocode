/*
 * XREFs of ?VidMmCancelTask@@YAXPEAUVIDMM_WORKER_THREAD2@@PEAUVIDMM_TASK@@@Z @ 0x14009AC7C
 * Callers:
 *     ??1VIDMM_DEVICE@@QEAA@XZ @ 0x1400E1ABC (--1VIDMM_DEVICE@@QEAA@XZ.c)
 * Callees:
 *     SwitchFromTask @ 0x14009AD74 (SwitchFromTask.c)
 *     ?VidMmDequeueTask@@YAXPEAUVIDMM_WORKER_THREAD2@@PEAUVIDMM_TASK@@@Z @ 0x1400B895C (-VidMmDequeueTask@@YAXPEAUVIDMM_WORKER_THREAD2@@PEAUVIDMM_TASK@@@Z.c)
 */

// write access to const memory has been detected, the output may be wrong!
void __fastcall VidMmCancelTask(struct VIDMM_TASK **a1, struct VIDMM_TASK *a2)
{
  char *v3; // rsi

  v3 = (char *)(a1 + 668);
  KeEnterCriticalRegion();
  ExAcquirePushLockExclusiveEx(v3, 0LL);
  *((_QWORD *)v3 + 1) = KeGetCurrentThread();
  if ( KeGetCurrentThread() == a1[1] )
  {
    if ( a1[740] == a2 )
    {
      g_DxgMmsBugcheckExportIndex = 1;
      WdLogSingleEntry5(0LL, 270LL, 79LL, a1, a2, 0LL);
      WdLogGlobalForLineNumber = 213;
      JUMPOUT(0x14009AD6CLL);
    }
  }
  else
  {
    SwitchFromTask(a1, a2);
  }
  if ( *((_QWORD *)a2 + 4) )
    VidMmDequeueTask((struct VIDMM_WORKER_THREAD2 *)a1, a2);
  *((_QWORD *)v3 + 1) = 0LL;
  ExReleasePushLockExclusiveEx(v3, 0LL);
  KeLeaveCriticalRegion();
}
