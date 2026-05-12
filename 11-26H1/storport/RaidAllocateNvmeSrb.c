/*
 * XREFs of RaidAllocateNvmeSrb @ 0x140082B38
 * Callers:
 *     NvmeAdapterAllocateFabricNvmeControllerAsyncEventCommands @ 0x1400E4910 (NvmeAdapterAllocateFabricNvmeControllerAsyncEventCommands.c)
 *     NvmeAdapterCreateFabricControllerQueue @ 0x1400E6A80 (NvmeAdapterCreateFabricControllerQueue.c)
 *     NvmeAdapterDeleteFabricControllerQueue @ 0x1400E6FDC (NvmeAdapterDeleteFabricControllerQueue.c)
 *     NvmeAdapterDrainFabricControllerQueue @ 0x1400E7D48 (NvmeAdapterDrainFabricControllerQueue.c)
 *     NvmeAdapterFabricRegisterDeregisterHost @ 0x1400E89E8 (NvmeAdapterFabricRegisterDeregisterHost.c)
 *     NvmeAdapterGetControllerIdentifyData @ 0x1400E8FAC (NvmeAdapterGetControllerIdentifyData.c)
 *     NvmeAdapterGetControllerLogPageAsync @ 0x1400E9344 (NvmeAdapterGetControllerLogPageAsync.c)
 *     NvmeAdapterGetControllerLogPageSync @ 0x1400E95A0 (NvmeAdapterGetControllerLogPageSync.c)
 *     NvmeAdapterGetFabricControllerFeature @ 0x1400E9A58 (NvmeAdapterGetFabricControllerFeature.c)
 *     NvmeAdapterGetFabricControllerProperty @ 0x1400E9D10 (NvmeAdapterGetFabricControllerProperty.c)
 *     NvmeAdapterNvmeConnectFabricControllerQueue @ 0x1400EA034 (NvmeAdapterNvmeConnectFabricControllerQueue.c)
 *     NvmeAdapterNvmeDisconnectFabricControllerQueue @ 0x1400EB6A0 (NvmeAdapterNvmeDisconnectFabricControllerQueue.c)
 *     NvmeAdapterSetFabricControllerFeature @ 0x1400ED69C (NvmeAdapterSetFabricControllerFeature.c)
 *     NvmeAdapterSetFabricControllerKeepAliveTimeout @ 0x1400EDA88 (NvmeAdapterSetFabricControllerKeepAliveTimeout.c)
 *     NvmeAdapterSetFabricControllerProperty @ 0x1400EDB68 (NvmeAdapterSetFabricControllerProperty.c)
 *     NvmeAdapterTransportDisconnectFabricControllerQueue @ 0x1400EEE38 (NvmeAdapterTransportDisconnectFabricControllerQueue.c)
 *     NvmeAdapterTransportReconnectFabricControllerQueue @ 0x1400EF304 (NvmeAdapterTransportReconnectFabricControllerQueue.c)
 *     NvmeFabricControllerQueueAuthenticate @ 0x1400FBB60 (NvmeFabricControllerQueueAuthenticate.c)
 * Callees:
 *     RaidAllocatePool @ 0x14000A250 (RaidAllocatePool.c)
 */

__int64 __fastcall RaidAllocateNvmeSrb(__int64 a1, char a2)
{
  unsigned int v4; // esi
  __int64 result; // rax

  v4 = a2 != 0 ? 152 : 240;
  result = RaidAllocatePool(64LL, v4, 1918067026LL, *(_QWORD *)(*(_QWORD *)(a1 + 128) + 8LL));
  if ( result )
  {
    *(_DWORD *)result = 2621448;
    *(_DWORD *)(result + 8) = 1397899864;
    *(_DWORD *)(result + 12) = 1;
    *(_DWORD *)(result + 16) = v4;
    *(_WORD *)(result + 36) = 2;
    *(_DWORD *)(result + 52) = 0;
    *(_QWORD *)(result + 56) = 1LL;
    *(_DWORD *)(result + 20) = a2 != 0 ? 44 : 10;
    *(_QWORD *)(result + 64) = 0LL;
    *(_DWORD *)(result + 24) = 0;
    *(_DWORD *)(result + 120) = 128;
    if ( a2 )
    {
      *(_DWORD *)(result + 128) = 68;
      *(_DWORD *)(result + 132) = 12;
      *(_WORD *)(result + 136) = 1;
    }
    else
    {
      *(_DWORD *)(result + 128) = 67;
      *(_DWORD *)(result + 132) = 100;
      *(_QWORD *)(result + 136) = *(_QWORD *)(a1 + 560);
    }
  }
  return result;
}
