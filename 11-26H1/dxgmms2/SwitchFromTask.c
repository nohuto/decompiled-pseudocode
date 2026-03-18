/*
 * XREFs of SwitchFromTask @ 0x14009AD74
 * Callers:
 *     ?VidMmCancelTask@@YAXPEAUVIDMM_WORKER_THREAD2@@PEAUVIDMM_TASK@@@Z @ 0x14009AC7C (-VidMmCancelTask@@YAXPEAUVIDMM_WORKER_THREAD2@@PEAUVIDMM_TASK@@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall SwitchFromTask(__int64 a1, __int64 a2)
{
  __int64 v3; // rdi

  if ( *(_QWORD *)(a1 + 5920) == a2 )
  {
    v3 = a1 + 5344;
    *(_BYTE *)(a1 + 5928) = 1;
    *(_QWORD *)(a1 + 5352) = 0LL;
    ExReleasePushLockExclusiveEx(a1 + 5344, 0LL);
    KeLeaveCriticalRegion();
    KeEnterCriticalRegion();
    ExAcquirePushLockExclusiveEx(a1 + 160, 0LL);
    *(_QWORD *)(a1 + 168) = KeGetCurrentThread();
    KeEnterCriticalRegion();
    ExAcquirePushLockExclusiveEx(v3, 0LL);
    *(_QWORD *)(v3 + 8) = KeGetCurrentThread();
    *(_QWORD *)(a1 + 168) = 0LL;
    ExReleasePushLockExclusiveEx(a1 + 160, 0LL);
    KeLeaveCriticalRegion();
  }
}
