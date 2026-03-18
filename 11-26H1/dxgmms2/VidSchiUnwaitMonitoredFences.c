/*
 * XREFs of VidSchiUnwaitMonitoredFences @ 0x14001154C
 * Callers:
 *     VidSchiProcessCrossAdapterSignaledSyncObjects @ 0x140006594 (VidSchiProcessCrossAdapterSignaledSyncObjects.c)
 *     ?VidSchiSignalSyncObjectsFromCpu@@YAJPEAVHwQueueStagingList@@IPEAPEAU_VIDSCH_SYNC_OBJECT@@U_D3DDDICB_SIGNALFLAGS@@PEB_KPEAPEAUVIDSCH_HW_QUEUE@@@Z @ 0x140006C44 (-VidSchiSignalSyncObjectsFromCpu@@YAJPEAVHwQueueStagingList@@IPEAPEAU_VIDSCH_SYNC_OBJECT@@U_D3DD.c)
 *     VidSchiCompleteSignalSyncObject @ 0x140010F00 (VidSchiCompleteSignalSyncObject.c)
 *     VidSchSubmitWaitFromCpu @ 0x1400119F0 (VidSchSubmitWaitFromCpu.c)
 *     VidSchiProcessMonitoredFenceSignaledDpc @ 0x1400276A8 (VidSchiProcessMonitoredFenceSignaledDpc.c)
 *     VidSchiProcessDpcCompletedPacket @ 0x140027C1C (VidSchiProcessDpcCompletedPacket.c)
 *     VidSchiRundownMonitoredFenceCpuWaiters @ 0x14003AD38 (VidSchiRundownMonitoredFenceCpuWaiters.c)
 *     ?SetToAlwaysSignaled@_VIDSCH_SYNC_OBJECT@@QEAAXPEAVHwQueueStagingList@@_N@Z @ 0x14003CFE4 (-SetToAlwaysSignaled@_VIDSCH_SYNC_OBJECT@@QEAAXPEAVHwQueueStagingList@@_N@Z.c)
 *     ?UnwaitFencesFromNativeFenceSignaledDpc@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_GLOBAL@@PEAU_VIDSCH_NODE@@PEAU_VIDSCH_SYNC_OBJECT@@@Z @ 0x140056FFC (-UnwaitFencesFromNativeFenceSignaledDpc@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_GLOBAL@@PEAU_VID.c)
 * Callees:
 *     VidSchiCheckPendingDeviceCommand @ 0x1400124DC (VidSchiCheckPendingDeviceCommand.c)
 *     VidSchiReleaseSyncObjectReference @ 0x1400127F0 (VidSchiReleaseSyncObjectReference.c)
 *     VidSchUnwaitFlipQueue @ 0x140012CE0 (VidSchUnwaitFlipQueue.c)
 *     ?UnblockCpuWaiter@@YA_NPEAUVIDSCH_CPU_WAITER@@PEAU_VIDSCH_SYNC_OBJECT@@PEA_K@Z @ 0x140013210 (-UnblockCpuWaiter@@YA_NPEAUVIDSCH_CPU_WAITER@@PEAU_VIDSCH_SYNC_OBJECT@@PEA_K@Z.c)
 *     VidSchiSubmitPresentHistoryToken @ 0x140016178 (VidSchiSubmitPresentHistoryToken.c)
 *     VidSchiUnwaitWaitQueuePacket @ 0x14002CECC (VidSchiUnwaitWaitQueuePacket.c)
 *     VidSchiUnblockUnorderedWaitQueuePacket @ 0x14003C738 (VidSchiUnblockUnorderedWaitQueuePacket.c)
 */

char __fastcall VidSchiUnwaitMonitoredFences(HwQueueStagingList *this, __int64 a2)
{
  unsigned __int64 *v2; // rax
  _QWORD *v3; // r15
  _QWORD *v4; // rsi
  _QWORD *v7; // rdi
  _QWORD *v8; // rsi
  void *v9; // rcx
  _QWORD *v10; // rdi
  __int64 v11; // rdx
  unsigned __int64 v12; // r9
  unsigned __int64 v13; // rcx
  unsigned int *v14; // rax
  __int64 v15; // r8
  __int64 v16; // rbp
  __int64 v17; // rbp
  _QWORD *v18; // rbp
  _QWORD *v19; // r12
  __int64 v20; // rdi
  unsigned __int64 v21; // r8
  unsigned __int64 v22; // rcx
  unsigned int *v23; // rax
  __int64 v24; // r8
  __int64 v25; // rcx
  _QWORD *v26; // rax
  _UNKNOWN *retaddr; // [rsp+48h] [rbp+0h] BYREF

  v2 = (unsigned __int64 *)&retaddr;
  v3 = (_QWORD *)(a2 + 888);
  v4 = *(_QWORD **)(a2 + 888);
  while ( v4 != v3 )
  {
    v10 = v4 - 37;
    v4 = (_QWORD *)*v4;
    v11 = v10[36];
    v12 = v10[41];
    if ( *(_BYTE *)(v11 + 29) )
      goto LABEL_16;
    if ( *(_DWORD *)(v11 + 48) == 6 )
    {
      v13 = *(_QWORD *)(*(unsigned int *)(v11 + 80) + *(_QWORD *)(*(_QWORD *)(v11 + 64) + 192LL));
      goto LABEL_15;
    }
    v2 = *(unsigned __int64 **)(v11 + 72);
    if ( *(_BYTE *)(v11 + 30) )
    {
      v13 = *v2;
LABEL_15:
      LOBYTE(v2) = v13 >= v12;
      if ( v13 >= v12 )
        goto LABEL_16;
    }
    else if ( *(_DWORD *)v2 - (int)v12 >= 0 )
    {
LABEL_16:
      if ( *(_DWORD *)(v11 + 48) == 6 )
      {
        v15 = *(_QWORD *)(*(unsigned int *)(v11 + 80) + *(_QWORD *)(*(_QWORD *)(v11 + 64) + 192LL));
      }
      else
      {
        v14 = *(unsigned int **)(v11 + 72);
        if ( *(_BYTE *)(v11 + 30) )
          v15 = *(_QWORD *)v14;
        else
          v15 = *v14;
      }
      WdLogSingleEntry4(4LL, v11, v15, v10[41], *(unsigned __int8 *)(v11 + 29));
      v16 = v10[11];
      WdLogGlobalForLineNumber = 27295;
      if ( v16 )
        v17 = *(_QWORD *)(v16 + 104);
      else
        v17 = *(_QWORD *)(*(_QWORD *)(v10[12] + 40LL) + 8LL);
      if ( (v10[35] & 4) != 0 )
        VidSchiUnblockUnorderedWaitQueuePacket(this);
      VidSchiUnwaitWaitQueuePacket(this);
      LOBYTE(v2) = VidSchiCheckPendingDeviceCommand(v17);
    }
  }
  v7 = *(_QWORD **)(a2 + 904);
  while ( v7 != (_QWORD *)(a2 + 904) )
  {
    v9 = v7;
    v7 = (_QWORD *)*v7;
    LOBYTE(v2) = UnblockCpuWaiter(v9, 0LL, 0LL);
  }
  v8 = *(_QWORD **)(a2 + 920);
  while ( v8 != (_QWORD *)(a2 + 920) )
  {
    v18 = v8 - 3;
    v19 = v8;
    v20 = *(v8 - 2);
    v8 = (_QWORD *)*v8;
    v21 = v18[2];
    if ( !*(_BYTE *)(v20 + 29) )
    {
      if ( *(_DWORD *)(v20 + 48) != 6 )
      {
        v2 = *(unsigned __int64 **)(v20 + 72);
        if ( *(_BYTE *)(v20 + 30) )
        {
          v22 = *v2;
LABEL_32:
          LOBYTE(v2) = v22 >= v21;
          if ( v22 < v21 )
            continue;
        }
        else if ( *(_DWORD *)v2 - (int)v21 < 0 )
        {
          continue;
        }
        if ( !*(_BYTE *)(v20 + 29) )
          goto LABEL_34;
        goto LABEL_43;
      }
      v22 = *(_QWORD *)(*(unsigned int *)(v20 + 80) + *(_QWORD *)(*(_QWORD *)(v20 + 64) + 192LL));
      goto LABEL_32;
    }
LABEL_43:
    *((_DWORD *)v18 + 11) |= 1u;
LABEL_34:
    if ( *(_DWORD *)(v20 + 48) == 6 )
    {
      v24 = *(_QWORD *)(*(unsigned int *)(v20 + 80) + *(_QWORD *)(*(_QWORD *)(v20 + 64) + 192LL));
    }
    else
    {
      v23 = *(unsigned int **)(v20 + 72);
      if ( *(_BYTE *)(v20 + 30) )
        v24 = *(_QWORD *)v23;
      else
        v24 = *v23;
    }
    WdLogSingleEntry4(4LL, v20, v24, v18[2], *(unsigned __int8 *)(v20 + 29));
    WdLogGlobalForLineNumber = 27357;
    VidSchiSubmitPresentHistoryToken((_DWORD)this, 0, (_DWORD)v18 + 40, 0, a2);
    v25 = *v19;
    if ( *(_QWORD **)(*v19 + 8LL) != v19 || (v26 = (_QWORD *)v19[1], (_QWORD *)*v26 != v19) )
      __fastfail(3u);
    *v26 = v25;
    *(_QWORD *)(v25 + 8) = v26;
    ExFreeToLookasideListEx((PLOOKASIDE_LIST_EX)(a2 + 944), v18);
    --*(_DWORD *)(v20 + 44);
    LOBYTE(v2) = VidSchiReleaseSyncObjectReference((PVOID)v20);
  }
  if ( *(_DWORD *)(a2 + 868) )
    LOBYTE(v2) = VidSchUnwaitFlipQueue(this, a2);
  return (char)v2;
}
