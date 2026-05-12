/*
 * XREFs of NvmeAdapterExecuteXrb @ 0x1400D51D4
 * Callers:
 *     NvmeAdapterMiniportPassthroughRequestIoctl @ 0x1400D9B04 (NvmeAdapterMiniportPassthroughRequestIoctl.c)
 *     NvmeAdapterRaiseIrqlAndExecuteXrb @ 0x1400DBD38 (NvmeAdapterRaiseIrqlAndExecuteXrb.c)
 *     NvmePnPPassToMiniPort @ 0x1400E2018 (NvmePnPPassToMiniPort.c)
 *     NvmePnPPassToStorMQMiniPort @ 0x1400E2330 (NvmePnPPassToStorMQMiniPort.c)
 *     NvmeAdapterCreateFabricControllerQueue @ 0x1400E6A80 (NvmeAdapterCreateFabricControllerQueue.c)
 *     NvmeAdapterDeleteFabricControllerQueue @ 0x1400E6FDC (NvmeAdapterDeleteFabricControllerQueue.c)
 *     NvmeAdapterDrainFabricControllerQueue @ 0x1400E7D48 (NvmeAdapterDrainFabricControllerQueue.c)
 *     NvmeAdapterProcessControllerQueueRequestAsync @ 0x1400EC344 (NvmeAdapterProcessControllerQueueRequestAsync.c)
 *     NvmeAdapterProcessControllerQueueRequestSync @ 0x1400EC530 (NvmeAdapterProcessControllerQueueRequestSync.c)
 *     NvmeAdapterTransportDisconnectFabricControllerQueue @ 0x1400EEE38 (NvmeAdapterTransportDisconnectFabricControllerQueue.c)
 *     NvmeAdapterTransportReconnectFabricControllerQueue @ 0x1400EF304 (NvmeAdapterTransportReconnectFabricControllerQueue.c)
 * Callees:
 *     NvmeAdapterPostScatterGatherExecute @ 0x1400DA750 (NvmeAdapterPostScatterGatherExecute.c)
 *     _guard_dispatch_icall @ 0x1401385D0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall NvmeAdapterExecuteXrb(__int64 a1, __int64 a2)
{
  __int64 v2; // rsi
  __int64 v4; // r8
  __int64 v5; // rax
  __int64 v6; // r9
  bool v7; // bl
  __int64 *v8; // rax
  __int64 v9; // rcx
  void (__fastcall *v10)(__int64, _QWORD, __int64); // rax
  __int64 v11; // rcx
  __int64 *v12; // rax
  __int64 v13; // r9
  __int64 v14; // rdx
  void (__fastcall *v15)(__int64, _QWORD, __int64); // rax

  v2 = a2;
  if ( (*(_DWORD *)(a1 + 144) & 0x1000LL) != 0 )
  {
    v4 = *(_QWORD *)(a2 + 168);
    v5 = 24LL;
    v6 = *(_QWORD *)(a2 + 104);
    if ( *(_BYTE *)(v4 + 2) != 40 )
      v5 = 12LL;
    v7 = (*(_DWORD *)(v5 + v4) & 0x40) != 0;
    if ( v6 )
    {
      v8 = (__int64 *)(a1 + 1160);
      if ( a1 != -1160 )
      {
        v9 = *v8;
        if ( *v8 )
        {
          v4 = *(_QWORD *)(v9 + 8);
          if ( v4 )
          {
            if ( *(int *)(a1 + 1188) >= 3 && (v10 = *(void (__fastcall **)(__int64, _QWORD, __int64))(v4 + 240)) != 0LL )
            {
              LOBYTE(v4) = v7;
              v10(v9, *(_QWORD *)(a2 + 104), v4);
            }
            else
            {
              LOBYTE(v4) = 1;
              LOBYTE(a2) = v7;
              KeFlushIoBuffers(v6, a2, v4);
            }
          }
        }
      }
    }
    v11 = *(_QWORD *)(v2 + 136);
    if ( v11 )
    {
      v12 = (__int64 *)(a1 + 1160);
      if ( a1 != -1160 )
      {
        v13 = *v12;
        if ( *v12 )
        {
          v14 = *(_QWORD *)(v13 + 8);
          if ( v14 )
          {
            if ( *(int *)(a1 + 1188) >= 3 && (v15 = *(void (__fastcall **)(__int64, _QWORD, __int64))(v14 + 240)) != 0LL )
            {
              LOBYTE(v4) = v7;
              v15(v13, *(_QWORD *)(v2 + 136), v4);
            }
            else
            {
              LOBYTE(v4) = 1;
              LOBYTE(v14) = v7;
              KeFlushIoBuffers(v11, v14, v4);
            }
          }
        }
      }
    }
  }
  return NvmeAdapterPostScatterGatherExecute(a1, v2);
}
