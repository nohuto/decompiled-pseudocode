/*
 * XREFs of ?VidMmUnreferencePrimaryAllocation@@YAXPEAVHwQueueStagingList@@PEAUVIDMM_ALLOC@@_N2_K3PEAI@Z @ 0x140039F80
 * Callers:
 *     ?VidSchiUnreferencePrimaryAllocations@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_GLOBAL@@IPEAUVIDSCH_FLIP_MULTIPLANE_OVERLAY2@@II_N3PEAI@Z @ 0x140039DCC (-VidSchiUnreferencePrimaryAllocations@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_GLOBAL@@IPEAUVIDSC.c)
 * Callees:
 *     ?VidSchiSignalSyncObjectsFromCpu@@YAJPEAVHwQueueStagingList@@IPEAPEAU_VIDSCH_SYNC_OBJECT@@U_D3DDDICB_SIGNALFLAGS@@PEB_KPEAPEAUVIDSCH_HW_QUEUE@@@Z @ 0x140006C44 (-VidSchiSignalSyncObjectsFromCpu@@YAJPEAVHwQueueStagingList@@IPEAPEAU_VIDSCH_SYNC_OBJECT@@U_D3DD.c)
 *     ?Decrement@InterlockedCounterWithHistoryRelease@@QEAAJPEAI_K@Z @ 0x140017F9C (-Decrement@InterlockedCounterWithHistoryRelease@@QEAAJPEAI_K@Z.c)
 *     DxgkLogInternalTriageEvent @ 0x14002EEAC (DxgkLogInternalTriageEvent.c)
 *     ?DecrementPresentReferences@VIDMM_GLOBAL_ALLOC_NONPAGED@@QEAAXXZ @ 0x14003A0D0 (-DecrementPresentReferences@VIDMM_GLOBAL_ALLOC_NONPAGED@@QEAAXXZ.c)
 */

void __fastcall VidMmUnreferencePrimaryAllocation(
        struct HwQueueStagingList *a1,
        struct VIDMM_ALLOC *a2,
        char a3,
        char a4,
        unsigned __int64 a5,
        unsigned __int64 a6,
        unsigned int *a7)
{
  VIDMM_GLOBAL_ALLOC_NONPAGED *v7; // rdi
  __int64 v12; // rsi
  __int64 v13; // rdi
  __int64 v14; // rsi
  __int64 v15; // rbp
  __int64 v16; // rcx
  _QWORD v17[2]; // [rsp+50h] [rbp-28h] BYREF

  v7 = (VIDMM_GLOBAL_ALLOC_NONPAGED *)*((_QWORD *)a2 + 12);
  v12 = *((_QWORD *)v7 + 4);
  InterlockedCounterWithHistoryRelease::Decrement((struct VIDMM_ALLOC *)((char *)a2 + 104), a7);
  if ( a3 )
    VIDMM_GLOBAL_ALLOC_NONPAGED::DecrementPresentReferences(v7);
  if ( a4 && v12 )
  {
    v13 = 0LL;
    v17[0] = a5;
    v14 = 0LL;
    v17[1] = a6;
    v15 = 2LL;
    do
    {
      if ( v17[v13] )
      {
        if ( (int)VidSchiSignalSyncObjectsFromCpu(
                    a1,
                    1u,
                    (struct _VIDSCH_SYNC_OBJECT **)(*(_QWORD *)(*((_QWORD *)a2 + 12) + 32LL) + 8 * v14),
                    0,
                    &v17[v14],
                    0LL) < 0 )
        {
          WdLogSingleEntry3(1LL, v14, *(_QWORD *)(*(_QWORD *)(*((_QWORD *)a2 + 12) + 32LL) + v13 * 8), v17[v13]);
          WdLogGlobalForLineNumber = 30542;
          DxgkLogInternalTriageEvent(v16, 0x40000LL);
        }
      }
      ++v14;
      ++v13;
      --v15;
    }
    while ( v15 );
  }
}
