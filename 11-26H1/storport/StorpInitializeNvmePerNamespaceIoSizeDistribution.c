/*
 * XREFs of StorpInitializeNvmePerNamespaceIoSizeDistribution @ 0x14018FC18
 * Callers:
 *     StorpInitializeNvmePerNamespacePerfTelemetry @ 0x14018FD08 (StorpInitializeNvmePerNamespacePerfTelemetry.c)
 * Callees:
 *     RaidAllocatePool @ 0x14000A250 (RaidAllocatePool.c)
 *     StorpUninitializeNvmePerNamespaceIoSizeDistribution @ 0x1400C42AC (StorpUninitializeNvmePerNamespaceIoSizeDistribution.c)
 *     memset_0 @ 0x140138980 (memset_0.c)
 */

__int64 __fastcall StorpInitializeNvmePerNamespaceIoSizeDistribution(__int64 *a1)
{
  unsigned int v2; // edi
  __int64 v3; // rax
  __int64 v4; // rbx
  void *v5; // rcx
  __int64 v6; // rbx

  v2 = 0;
  if ( (_DWORD)dword_1401730C4 && g_RaidNumberProcessors )
  {
    v3 = a1[76];
    if ( *(_QWORD *)(v3 + 16) )
    {
      memset_0(*(void **)(v3 + 16), 0, (unsigned int)dword_1401730C4);
    }
    else
    {
      v4 = a1[76];
      *(_QWORD *)(v4 + 16) = RaidAllocatePool(72LL, (unsigned int)dword_1401730C4, 1700028754LL, a1[1]);
      if ( !*(_QWORD *)(a1[76] + 16) )
        goto LABEL_9;
    }
    v5 = *(void **)(a1[76] + 40);
    if ( v5 )
    {
      memset_0(v5, 0, (unsigned int)dword_1401730BC);
    }
    else
    {
      v6 = a1[76];
      *(_QWORD *)(v6 + 40) = RaidAllocatePool(72LL, (unsigned int)dword_1401730BC, 1700028754LL, a1[1]);
      if ( !*(_QWORD *)(a1[76] + 40) )
      {
LABEL_9:
        v2 = -1073741801;
        StorpUninitializeNvmePerNamespaceIoSizeDistribution((__int64)a1);
        return v2;
      }
    }
    a1[14] |= 0x100uLL;
  }
  return v2;
}
