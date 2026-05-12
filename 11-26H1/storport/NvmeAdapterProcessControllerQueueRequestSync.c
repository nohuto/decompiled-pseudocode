/*
 * XREFs of NvmeAdapterProcessControllerQueueRequestSync @ 0x1400EC530
 * Callers:
 *     NvmeAdapterFabricRegisterDeregisterHost @ 0x1400E89E8 (NvmeAdapterFabricRegisterDeregisterHost.c)
 *     NvmeAdapterGetControllerIdentifyData @ 0x1400E8FAC (NvmeAdapterGetControllerIdentifyData.c)
 *     NvmeAdapterGetControllerLogPageSync @ 0x1400E95A0 (NvmeAdapterGetControllerLogPageSync.c)
 *     NvmeAdapterGetFabricControllerFeature @ 0x1400E9A58 (NvmeAdapterGetFabricControllerFeature.c)
 *     NvmeAdapterGetFabricControllerProperty @ 0x1400E9D10 (NvmeAdapterGetFabricControllerProperty.c)
 *     NvmeAdapterNvmeConnectFabricControllerQueue @ 0x1400EA034 (NvmeAdapterNvmeConnectFabricControllerQueue.c)
 *     NvmeAdapterNvmeDisconnectFabricControllerQueue @ 0x1400EB6A0 (NvmeAdapterNvmeDisconnectFabricControllerQueue.c)
 *     NvmeAdapterSetFabricControllerFeature @ 0x1400ED69C (NvmeAdapterSetFabricControllerFeature.c)
 *     NvmeAdapterSetFabricControllerProperty @ 0x1400EDB68 (NvmeAdapterSetFabricControllerProperty.c)
 *     NvmeAdapterSubmitControllerNvmRequest @ 0x1400EEA40 (NvmeAdapterSubmitControllerNvmRequest.c)
 *     NvmeFabricControllerQueueReceiveAuthChallenge @ 0x1400FD5A8 (NvmeFabricControllerQueueReceiveAuthChallenge.c)
 *     NvmeFabricControllerQueueReceiveAuthResult1 @ 0x1400FDA30 (NvmeFabricControllerQueueReceiveAuthResult1.c)
 *     NvmeFabricControllerQueueSendAuthFailure @ 0x1400FDE64 (NvmeFabricControllerQueueSendAuthFailure.c)
 *     NvmeFabricControllerQueueSendAuthNegogiate @ 0x1400FE088 (NvmeFabricControllerQueueSendAuthNegogiate.c)
 *     NvmeFabricControllerQueueSendAuthReply @ 0x1400FE2D4 (NvmeFabricControllerQueueSendAuthReply.c)
 *     NvmeFabricControllerQueueSendAuthSuccess @ 0x1400FE598 (NvmeFabricControllerQueueSendAuthSuccess.c)
 * Callees:
 *     NvmeAdapterExecuteXrb @ 0x1400D51D4 (NvmeAdapterExecuteXrb.c)
 *     NvmeAdapterMapDataBuffer @ 0x1400D9A10 (NvmeAdapterMapDataBuffer.c)
 *     NvmeAdapterRaiseIrqlAndExecuteXrb @ 0x1400DBD38 (NvmeAdapterRaiseIrqlAndExecuteXrb.c)
 *     NvmeAdapterAssignControllerQueueSlot @ 0x1400E4BF4 (NvmeAdapterAssignControllerQueueSlot.c)
 *     NvmeAdapterCleanupControllerQueueRequest @ 0x1400E4FA8 (NvmeAdapterCleanupControllerQueueRequest.c)
 *     NvmeAdapterPrepareControllerQueueRequest @ 0x1400EC0F8 (NvmeAdapterPrepareControllerQueueRequest.c)
 *     NvmeControllerQueueDecrementProcessingCount @ 0x1400F9638 (NvmeControllerQueueDecrementProcessingCount.c)
 */

__int64 __fastcall NvmeAdapterProcessControllerQueueRequestSync(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        char a5,
        __int64 a6,
        __int64 a7,
        int a8)
{
  __int64 v10; // r14
  char v11; // r12
  __int64 v12; // rsi
  __int64 v13; // r15
  char v14; // bl
  int v15; // ebx
  int v16; // eax
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+78h] [rbp-19h] BYREF
  __int64 v19; // [rsp+D8h] [rbp+47h] BYREF
  unsigned __int16 v20; // [rsp+E8h] [rbp+57h] BYREF
  unsigned __int16 v21; // [rsp+F0h] [rbp+5Fh] BYREF

  v21 = -1;
  v20 = -1;
  v10 = *(_QWORD *)(a1 + 88);
  memset(&LockHandle, 0, sizeof(LockHandle));
  v11 = 0;
  v19 = 0LL;
  v12 = 0LL;
  v13 = *(_QWORD *)(v10 + 128);
  if ( !*(_DWORD *)(v10 + 948) )
  {
    _InterlockedAdd((volatile signed __int32 *)(a1 + 128), 1u);
    KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(a1 + 104), &LockHandle);
    v14 = NvmeAdapterAssignControllerQueueSlot(a1, 0, &v20, &v21);
    KeReleaseInStackQueuedSpinLock(&LockHandle);
    if ( v14 )
    {
      v11 = 1;
      NvmeAdapterPrepareControllerQueueRequest(v13, v10, (_QWORD *)a1, a2, 0, a5, a6, a7, a8, v20, v21, 0LL, 0LL, &v19);
      v12 = v19;
      v15 = NvmeAdapterMapDataBuffer(v13, v19);
      if ( v15 >= 0 )
      {
        _InterlockedAdd((volatile signed __int32 *)(a1 + 128), 0xFFFFFFFF);
        _InterlockedAdd16((volatile signed __int16 *)(a1 + 148), 1u);
        if ( (*(_DWORD *)(v13 + 144) & 0x1000LL) != 0 )
          v16 = NvmeAdapterRaiseIrqlAndExecuteXrb(v13, v12);
        else
          v16 = NvmeAdapterExecuteXrb(v13, v12);
        v15 = v16;
        if ( v16 >= 0 )
        {
          KeWaitForSingleObject((PVOID)(v12 + 664), Executive, 0, 0, 0LL);
          return 0;
        }
        _InterlockedAdd16((volatile signed __int16 *)(a1 + 148), 0xFFFFu);
LABEL_5:
        NvmeAdapterCleanupControllerQueueRequest(a1, v12);
        goto LABEL_14;
      }
    }
    else
    {
      v15 = -2147483631;
    }
    _InterlockedAdd((volatile signed __int32 *)(a1 + 128), 0xFFFFFFFF);
    if ( !v11 )
      goto LABEL_14;
    goto LABEL_5;
  }
  v15 = -2147483631;
LABEL_14:
  if ( *(_WORD *)(a1 + 136) )
    NvmeControllerQueueDecrementProcessingCount(a1);
  return (unsigned int)v15;
}
