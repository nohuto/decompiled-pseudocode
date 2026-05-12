/*
 * XREFs of NvmeAdapterProcessControllerQueueRequestAsync @ 0x1400EC344
 * Callers:
 *     NvmeAdapterGetControllerLogPageAsync @ 0x1400E9344 (NvmeAdapterGetControllerLogPageAsync.c)
 *     NvmeAdapterSendFabricControllerAsyncEventCommand @ 0x1400ED31C (NvmeAdapterSendFabricControllerAsyncEventCommand.c)
 *     NvmeAdapterSendFabricControllerKeepAlive @ 0x1400ED538 (NvmeAdapterSendFabricControllerKeepAlive.c)
 *     NvmeAdapterSubmitControllerNvmRequest @ 0x1400EEA40 (NvmeAdapterSubmitControllerNvmRequest.c)
 * Callees:
 *     NvmeAdapterExecuteXrb @ 0x1400D51D4 (NvmeAdapterExecuteXrb.c)
 *     NvmeAdapterMapDataBuffer @ 0x1400D9A10 (NvmeAdapterMapDataBuffer.c)
 *     NvmeAdapterRaiseIrqlAndExecuteXrb @ 0x1400DBD38 (NvmeAdapterRaiseIrqlAndExecuteXrb.c)
 *     NvmeAdapterAssignControllerQueueSlot @ 0x1400E4BF4 (NvmeAdapterAssignControllerQueueSlot.c)
 *     NvmeAdapterCleanupControllerQueueRequest @ 0x1400E4FA8 (NvmeAdapterCleanupControllerQueueRequest.c)
 *     NvmeAdapterPrepareControllerQueueRequest @ 0x1400EC0F8 (NvmeAdapterPrepareControllerQueueRequest.c)
 *     NvmeControllerQueueDecrementProcessingCount @ 0x1400F9638 (NvmeControllerQueueDecrementProcessingCount.c)
 */

__int64 __fastcall NvmeAdapterProcessControllerQueueRequestAsync(
        __int64 a1,
        __int64 a2,
        char a3,
        char a4,
        char a5,
        __int64 a6,
        __int64 a7,
        int a8,
        __int64 a9,
        __int64 a10)
{
  __int64 v12; // rsi
  char v15; // r15
  __int64 v16; // r14
  char v17; // bl
  int v18; // ebx
  int v19; // eax
  unsigned __int16 v21; // [rsp+78h] [rbp-29h] BYREF
  __int64 v22; // [rsp+80h] [rbp-21h] BYREF
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+88h] [rbp-19h] BYREF
  unsigned __int16 v24; // [rsp+D8h] [rbp+37h] BYREF

  v24 = -1;
  v21 = -1;
  v12 = *(_QWORD *)(a1 + 88);
  memset(&LockHandle, 0, sizeof(LockHandle));
  v22 = 0LL;
  v15 = 0;
  v16 = *(_QWORD *)(v12 + 128);
  if ( !*(_DWORD *)(v12 + 948) )
  {
    _InterlockedAdd((volatile signed __int32 *)(a1 + 128), 1u);
    KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(a1 + 104), &LockHandle);
    v17 = NvmeAdapterAssignControllerQueueSlot(a1, a3, &v21, &v24);
    KeReleaseInStackQueuedSpinLock(&LockHandle);
    if ( v17 )
    {
      v15 = 1;
      NvmeAdapterPrepareControllerQueueRequest(v16, v12, (_QWORD *)a1, a2, a4, a5, a6, a7, a8, v21, v24, a9, a10, &v22);
      v18 = NvmeAdapterMapDataBuffer(v16, v22);
      if ( v18 >= 0 )
      {
        _InterlockedAdd((volatile signed __int32 *)(a1 + 128), 0xFFFFFFFF);
        _InterlockedAdd16((volatile signed __int16 *)(a1 + 148), 1u);
        if ( (*(_DWORD *)(v16 + 144) & 0x1000LL) != 0 )
          v19 = NvmeAdapterRaiseIrqlAndExecuteXrb(v16, v22);
        else
          v19 = NvmeAdapterExecuteXrb(v16, v22);
        v18 = v19;
        if ( v19 >= 0 )
          return 259;
        _InterlockedAdd16((volatile signed __int16 *)(a1 + 148), 0xFFFFu);
LABEL_5:
        NvmeAdapterCleanupControllerQueueRequest(a1, v22);
        goto LABEL_14;
      }
    }
    else
    {
      v18 = -2147483631;
    }
    _InterlockedAdd((volatile signed __int32 *)(a1 + 128), 0xFFFFFFFF);
    if ( !v15 )
      goto LABEL_14;
    goto LABEL_5;
  }
  v18 = -2147483631;
LABEL_14:
  if ( *(_WORD *)(a1 + 136) )
    NvmeControllerQueueDecrementProcessingCount(a1);
  return (unsigned int)v18;
}
