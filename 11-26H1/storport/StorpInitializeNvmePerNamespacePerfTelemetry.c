/*
 * XREFs of StorpInitializeNvmePerNamespacePerfTelemetry @ 0x14018FD08
 * Callers:
 *     StorpInitializeNvmeNamespaceTelemetry @ 0x1400B7678 (StorpInitializeNvmeNamespaceTelemetry.c)
 * Callees:
 *     RaidAllocatePool @ 0x14000A250 (RaidAllocatePool.c)
 *     StorEtwNvmeNamespaceEvent @ 0x1400B2058 (StorEtwNvmeNamespaceEvent.c)
 *     StorpUninitializeNvmePerNamespacePerfTelemetry @ 0x1400C4328 (StorpUninitializeNvmePerNamespacePerfTelemetry.c)
 *     StorpInitializeNvmePerNamespaceIoSizeDistribution @ 0x14018FC18 (StorpInitializeNvmePerNamespaceIoSizeDistribution.c)
 */

__int64 __fastcall StorpInitializeNvmePerNamespacePerfTelemetry(__int64 *a1)
{
  unsigned int v1; // edi
  __int64 v3; // rbx
  __int64 v4; // rbx
  LARGE_INTEGER PerformanceCounter; // rax
  __int64 v6; // rbx
  __int64 Pool; // rax
  bool v8; // zf
  __int64 v9; // rax
  int v10; // eax

  v1 = 0;
  *(_QWORD *)(a1[76] + 8) = 0LL;
  *(_QWORD *)(a1[76] + 32) = 0LL;
  *(_QWORD *)(a1[76] + 16) = 0LL;
  *(_QWORD *)(a1[76] + 40) = 0LL;
  *(_QWORD *)(a1[76] + 48) = 0LL;
  *(_QWORD *)(a1[76] + 88) = 0LL;
  *(_QWORD *)(a1[76] + 96) = 0LL;
  *(_QWORD *)(a1[76] + 2304) = 0LL;
  *(_QWORD *)(a1[76] + 2312) = 0LL;
  *(_DWORD *)a1[76] = 0;
  if ( (_DWORD)Size && g_RaidNumberProcessors )
  {
    v3 = a1[76];
    *(_QWORD *)(v3 + 8) = RaidAllocatePool(72LL, (unsigned int)Size, 1700028754LL, a1[1]);
    if ( *(_QWORD *)(a1[76] + 8)
      && (v4 = a1[76],
          *(_QWORD *)(v4 + 32) = RaidAllocatePool(72LL, (unsigned int)dword_1401730B8, 1700028754LL, a1[1]),
          *(_QWORD *)(a1[76] + 32)) )
    {
      if ( UseQPCTime )
        PerformanceCounter = KeQueryPerformanceCounter(0LL);
      else
        PerformanceCounter.QuadPart = KeQueryUnbiasedInterruptTime();
      *(LARGE_INTEGER *)(a1[76] + 24) = PerformanceCounter;
      v6 = a1[76];
      Pool = RaidAllocatePool(72LL, (unsigned int)dword_1401730D4, 1700028754LL, a1[1]);
      v8 = g_StorpTraceLoggingIoSizeDistributionEnabled == 0;
      *(_QWORD *)(v6 + 48) = Pool;
      v9 = a1[76];
      *(_OWORD *)(v9 + 56) = 0LL;
      *(_OWORD *)(v9 + 72) = 0LL;
      if ( !v8 )
      {
        v10 = StorpInitializeNvmePerNamespaceIoSizeDistribution(a1);
        if ( v10 )
          StorEtwNvmeNamespaceEvent(
            (__int64)a1,
            1,
            3,
            (__int64)L"Initializing IO size distribution telemetry failed.",
            L"NtStatus",
            v10,
            0LL,
            0);
        else
          return 0;
      }
    }
    else
    {
      v1 = -1073741801;
      StorpUninitializeNvmePerNamespacePerfTelemetry((__int64)a1);
    }
  }
  return v1;
}
