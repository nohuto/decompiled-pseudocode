/*
 * XREFs of MiMoveBadPageChargesCrossPartition @ 0x140711E2C
 * Callers:
 *     MiChangePagesPartitionId @ 0x14070D318 (MiChangePagesPartitionId.c)
 *     MiTransferPartitionPageRun @ 0x14070E734 (MiTransferPartitionPageRun.c)
 * Callees:
 *     MiPageToNode @ 0x140288C70 (MiPageToNode.c)
 *     MiReleaseNonPagedResources @ 0x14028B5D0 (MiReleaseNonPagedResources.c)
 *     MiAcquireNonPagedResources @ 0x1402D6AD0 (MiAcquireNonPagedResources.c)
 */

__int64 __fastcall MiMoveBadPageChargesCrossPartition(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v5; // rcx

  v5 = 56320LL * (unsigned int)MiPageToNode((a1 + 0x220000000000LL) / 48);
  _InterlockedDecrement64((volatile signed __int64 *)(*(_QWORD *)(a2 + 16) + v5 + 14176));
  _InterlockedIncrement64((volatile signed __int64 *)(*(_QWORD *)(a3 + 16) + v5 + 14176));
  MiAcquireNonPagedResources((ULONG *)a3, 1uLL, 0LL, 1LL);
  return MiReleaseNonPagedResources(a2, 1LL);
}
