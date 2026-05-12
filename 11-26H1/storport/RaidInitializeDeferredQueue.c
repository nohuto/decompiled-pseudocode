/*
 * XREFs of RaidInitializeDeferredQueue @ 0x140072180
 * Callers:
 *     RaidAdapterInitializeWmi @ 0x14004632C (RaidAdapterInitializeWmi.c)
 *     RaidAdapterConfigureResources @ 0x14005AF28 (RaidAdapterConfigureResources.c)
 *     NvmeAdapterConfigureResources @ 0x1400D3CA4 (NvmeAdapterConfigureResources.c)
 *     NvmeAdapterInitializeWmi @ 0x1400D9030 (NvmeAdapterInitializeWmi.c)
 * Callees:
 *     RaidAdjustDeferredQueueDepth @ 0x140045798 (RaidAdjustDeferredQueueDepth.c)
 */

__int64 __fastcall RaidInitializeDeferredQueue(__int64 a1, void *a2, __int64 a3, unsigned int a4, __int64 a5)
{
  if ( a4 < 0x20 )
    return 3221225714LL;
  *(_QWORD *)(a1 + 112) = a5;
  *(_WORD *)(a1 + 2) = a4;
  KeInitializeDpc((PRKDPC)(a1 + 8), (PKDEFERRED_ROUTINE)RaidDeferredQueueDpcRoutine, a2);
  return RaidAdjustDeferredQueueDepth((union _SLIST_HEADER *)a1);
}
