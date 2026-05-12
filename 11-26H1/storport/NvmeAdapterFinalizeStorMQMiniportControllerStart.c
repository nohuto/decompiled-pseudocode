/*
 * XREFs of NvmeAdapterFinalizeStorMQMiniportControllerStart @ 0x1400D52F4
 * Callers:
 *     NvmeAdapterStorMQControllerInitializeWorker @ 0x1400DF420 (NvmeAdapterStorMQControllerInitializeWorker.c)
 * Callees:
 *     NvmeControllerAdvancedInitialize @ 0x1400F057C (NvmeControllerAdvancedInitialize.c)
 *     NvmeControllerCreateAdminQueue @ 0x1400F1CF0 (NvmeControllerCreateAdminQueue.c)
 *     NvmeControllerGetReadyTimeout @ 0x1400F4AD0 (NvmeControllerGetReadyTimeout.c)
 *     NvmeControllerInitPhase1 @ 0x1400F570C (NvmeControllerInitPhase1.c)
 *     NvmeControllerQueryStorMQProperty @ 0x1400F958C (NvmeControllerQueryStorMQProperty.c)
 *     NvmeControllerReset @ 0x1400FA490 (NvmeControllerReset.c)
 *     NvmeControllerSetStorMQProperty @ 0x1400FAC28 (NvmeControllerSetStorMQProperty.c)
 *     NvmeGetRegistrySettings @ 0x1400FEF44 (NvmeGetRegistrySettings.c)
 *     NvmeControllerCreateExtendedCommandPool @ 0x14011FB74 (NvmeControllerCreateExtendedCommandPool.c)
 */

__int64 __fastcall NvmeAdapterFinalizeStorMQMiniportControllerStart(_QWORD *DeferredContext)
{
  __int64 v1; // rdi
  unsigned int v3; // r8d
  unsigned int v4; // eax
  __int64 v5; // rdx
  unsigned int v6; // edi

  v1 = DeferredContext[16];
  v3 = *(_DWORD *)(v1 + 200);
  v4 = 0xA00000 / v3;
  *((_DWORD *)DeferredContext + 155) = v3;
  if ( 0xA00000 / v3 >= 0x20 )
  {
    LOBYTE(v4) = 32;
  }
  else if ( v4 <= 0xA )
  {
    LOBYTE(v4) = 10;
  }
  *((_BYTE *)DeferredContext + 1730) = v4;
  DeferredContext[121] &= ~2uLL;
  NvmeGetRegistrySettings(DeferredContext, 0xA00000 % v3);
  if ( (*(_DWORD *)(DeferredContext[16] + 992LL) & 8) != 0 && (*(_DWORD *)(DeferredContext[131] + 24LL) & 8) != 0 )
    DeferredContext[17] |= 0x100000000uLL;
  else
    DeferredContext[17] &= ~0x100000000uLL;
  NvmeControllerQueryStorMQProperty(DeferredContext, 8LL, 4LL);
  NvmeControllerQueryStorMQProperty(DeferredContext, 0LL, 8LL);
  DeferredContext[73] = 0LL;
  *((_DWORD *)DeferredContext + 2) = 1;
  *((_DWORD *)DeferredContext + 304) = 4;
  *((_DWORD *)DeferredContext + 305) = NvmeControllerGetReadyTimeout(DeferredContext);
  NvmeControllerQueryStorMQProperty(DeferredContext, 36LL, 4LL);
  *((_WORD *)DeferredContext + 3) = 1;
  NvmeControllerQueryStorMQProperty(DeferredContext, 2147483652LL, 4LL);
  *((_BYTE *)DeferredContext + 1729) = 1;
  if ( (*(_DWORD *)(v1 + 416) & 8) != 0
    && !(unsigned int)NvmeControllerQueryStorMQProperty(DeferredContext, 2147483653LL, 1LL) )
  {
    *((_BYTE *)DeferredContext + 1729) = 1;
  }
  NvmeControllerCreateAdminQueue(DeferredContext);
  NvmeControllerCreateExtendedCommandPool(DeferredContext);
  NvmeControllerReset(DeferredContext, v5, 1LL);
  NvmeControllerInitPhase1(DeferredContext);
  v6 = NvmeControllerAdvancedInitialize(DeferredContext);
  if ( !_InterlockedCompareExchange((volatile signed __int32 *)(*(_QWORD *)(DeferredContext[161] + 40LL) + 192LL), 1, 0) )
    KeSetCoalescableTimer(
      (PKTIMER)(*(_QWORD *)(DeferredContext[161] + 40LL) + 128LL),
      (LARGE_INTEGER)-50000000LL,
      0x7D0u,
      0x12Cu,
      (PKDPC)(*(_QWORD *)(DeferredContext[161] + 40LL) + 64LL));
  return v6;
}
