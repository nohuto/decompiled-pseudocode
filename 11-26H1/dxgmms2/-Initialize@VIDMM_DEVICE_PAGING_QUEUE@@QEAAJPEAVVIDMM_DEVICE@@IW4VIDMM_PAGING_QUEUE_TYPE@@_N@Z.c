/*
 * XREFs of ?Initialize@VIDMM_DEVICE_PAGING_QUEUE@@QEAAJPEAVVIDMM_DEVICE@@IW4VIDMM_PAGING_QUEUE_TYPE@@_N@Z @ 0x1400CA0E0
 * Callers:
 *     ?CreatePagingProcessPagingQueues@VIDMM_DEVICE@@QEAAJXZ @ 0x1400A70A8 (-CreatePagingProcessPagingQueues@VIDMM_DEVICE@@QEAAJXZ.c)
 *     ?Init@VIDMM_DEVICE@@QEAAJ_NPEAVVIDMM_PROCESS@@@Z @ 0x1400C9AE0 (-Init@VIDMM_DEVICE@@QEAAJ_NPEAVVIDMM_PROCESS@@@Z.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x14002EEAC (DxgkLogInternalTriageEvent.c)
 *     ??2@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x140036990 (--2@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     memset @ 0x14005BBC0 (memset.c)
 *     ?MapGpuVA@VIDMM_DEVICE_PAGING_QUEUE@@QEAAJXZ @ 0x1400C9A8C (-MapGpuVA@VIDMM_DEVICE_PAGING_QUEUE@@QEAAJXZ.c)
 *     ??0VIDMM_PAGING_QUEUE@@QEAA@PEAVVIDMM_DEVICE@@IW4VIDMM_PAGING_QUEUE_TYPE@@@Z @ 0x1400CA438 (--0VIDMM_PAGING_QUEUE@@QEAA@PEAVVIDMM_DEVICE@@IW4VIDMM_PAGING_QUEUE_TYPE@@@Z.c)
 *     ?VidMmInitializePagingQueue@@YAJPEAUVIDMM_PAGING_QUEUE@@@Z @ 0x1400CA588 (-VidMmInitializePagingQueue@@YAJPEAUVIDMM_PAGING_QUEUE@@@Z.c)
 *     VidSchCreateSyncObject @ 0x1400CA670 (VidSchCreateSyncObject.c)
 */

__int64 __fastcall VIDMM_DEVICE_PAGING_QUEUE::Initialize(
        __int64 a1,
        struct VIDMM_DEVICE *a2,
        unsigned int a3,
        unsigned int a4,
        char a5)
{
  __int64 v9; // rbp
  __int64 v10; // rax
  struct VIDMM_PAGING_QUEUE *v11; // rax
  int v12; // eax
  unsigned int v13; // esi
  int SyncObject; // eax
  __int64 v15; // rcx
  __int64 v17; // rcx
  __int64 v18; // rcx
  int v19; // eax
  __int64 v20; // [rsp+28h] [rbp-A0h]
  int v21; // [rsp+30h] [rbp-98h]
  _QWORD v22[10]; // [rsp+60h] [rbp-68h] BYREF

  v9 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)a2 + 16LL) + 744LL);
  *(_DWORD *)(a1 + 16) = a3;
  v10 = operator new(200LL, 0x38346956u, 256LL);
  if ( !v10 )
  {
    *(_QWORD *)a1 = 0LL;
    goto LABEL_8;
  }
  v11 = (struct VIDMM_PAGING_QUEUE *)VIDMM_PAGING_QUEUE::VIDMM_PAGING_QUEUE(v10, a2, a3, a4);
  *(_QWORD *)a1 = v11;
  if ( !v11 )
  {
LABEL_8:
    _InterlockedIncrement(&dword_14008A82C);
    WdLogSingleEntry0(6LL);
    WdLogGlobalForLineNumber = 2426;
    DxgkLogInternalTriageEvent(v17, 262145LL);
    return 3221225495LL;
  }
  v12 = VidMmInitializePagingQueue(v11);
  v13 = v12;
  if ( v12 < 0 )
  {
    WdLogSingleEntry2(1LL, a2, v12);
    WdLogGlobalForLineNumber = 2436;
  }
  else
  {
    memset(v22, 0, sizeof(v22));
    v22[1] = 4294962295LL;
    v21 = *(_DWORD *)(a1 + 16);
    v20 = *(_QWORD *)a1;
    LODWORD(v22[0]) = 5;
    SyncObject = VidSchCreateSyncObject(v9, 0, (unsigned int)v22, 2, 0LL, v20, v21, a1 + 8, 0LL, 0LL, 0LL, a2);
    v13 = SyncObject;
    if ( SyncObject < 0 )
    {
      WdLogSingleEntry2(1LL, a1, SyncObject);
      WdLogGlobalForLineNumber = 2468;
    }
    else
    {
      v15 = *(_QWORD *)a1;
      *(_QWORD *)(v15 + 88) = *(_QWORD *)(a1 + 8);
      *(_QWORD *)(v15 + 64) = v22[1];
      if ( !*(_BYTE *)(v9 + 63) )
        return 0LL;
      if ( a5 )
        return 0LL;
      v19 = VIDMM_DEVICE_PAGING_QUEUE::MapGpuVA((VIDMM_DEVICE_PAGING_QUEUE *)a1);
      v13 = v19;
      if ( v19 >= 0 )
        return 0LL;
      WdLogSingleEntry2(1LL, a2, v19);
      WdLogGlobalForLineNumber = 2483;
    }
  }
  DxgkLogInternalTriageEvent(v18, 0x40000LL);
  return v13;
}
