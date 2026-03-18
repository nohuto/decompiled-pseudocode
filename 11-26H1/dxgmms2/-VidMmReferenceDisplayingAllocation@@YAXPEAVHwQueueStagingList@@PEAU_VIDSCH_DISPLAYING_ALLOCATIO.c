/*
 * XREFs of ?VidMmReferenceDisplayingAllocation@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_DISPLAYING_ALLOCATION@@_K2@Z @ 0x140006B2C
 * Callers:
 *     VidSchiReferenceDisplayingAllocationsForThisEntry @ 0x14001E054 (VidSchiReferenceDisplayingAllocationsForThisEntry.c)
 * Callees:
 *     ?VidSchiSignalSyncObjectsFromCpu@@YAJPEAVHwQueueStagingList@@IPEAPEAU_VIDSCH_SYNC_OBJECT@@U_D3DDDICB_SIGNALFLAGS@@PEB_KPEAPEAUVIDSCH_HW_QUEUE@@@Z @ 0x140006C44 (-VidSchiSignalSyncObjectsFromCpu@@YAJPEAVHwQueueStagingList@@IPEAPEAU_VIDSCH_SYNC_OBJECT@@U_D3DD.c)
 *     DxgkLogInternalTriageEvent @ 0x14002EEAC (DxgkLogInternalTriageEvent.c)
 */

void __fastcall VidMmReferenceDisplayingAllocation(
        struct HwQueueStagingList *a1,
        struct _VIDSCH_DISPLAYING_ALLOCATION *a2,
        unsigned __int64 a3,
        __int64 a4)
{
  __int64 v4; // rax
  struct _VIDSCH_SYNC_OBJECT **v7; // rdx
  __int64 v8; // rax
  __int64 v9; // rax
  __int64 v10; // rdx
  __int64 v11; // rcx
  unsigned __int64 v12; // rbx
  __int64 v13; // rax
  int v14; // ecx
  int v15; // r8d
  unsigned __int64 v16; // [rsp+70h] [rbp+18h] BYREF

  v16 = a3;
  v4 = *((_QWORD *)a2 + 1);
  v7 = *(struct _VIDSCH_SYNC_OBJECT ***)(v4 + 32);
  if ( v7 )
  {
    if ( a3 && (int)VidSchiSignalSyncObjectsFromCpu(a1, 1u, v7, 0, &v16, 0LL) < 0 )
    {
      v12 = v16;
      WdLogSingleEntry2(1LL, **(_QWORD **)(*((_QWORD *)a2 + 1) + 32LL), v16);
      v13 = *((_QWORD *)a2 + 1);
      WdLogGlobalForLineNumber = 30337;
      DxgkLogInternalTriageEvent(
        v14,
        0x40000,
        v15,
        (unsigned int)L"Failed to signal FlipTo fence 0x%p value 0x%I64x",
        **(_QWORD **)(v13 + 32),
        v12,
        0LL,
        0LL);
    }
    v9 = *((_QWORD *)a2 + 1);
    *((_QWORD *)a2 + 5) = a4;
    v10 = *(_QWORD *)(v9 + 32);
    v11 = 2 * (*(unsigned int *)(v10 + 40) + 3LL);
    *(_OWORD *)(v10 + 8 * v11) = 0LL;
    *(_DWORD *)(v10 + 40) = ((unsigned __int8)*(_DWORD *)(v10 + 40) + 1) & 7;
    *(_DWORD *)(v10 + 8 * v11) = 1;
    *(_QWORD *)(v10 + 8 * v11 + 8) = a4;
  }
  else
  {
    v8 = *(_QWORD *)(v4 + 24);
    if ( v8 )
      _InterlockedIncrement((volatile signed __int32 *)(v8 + 8));
  }
}
