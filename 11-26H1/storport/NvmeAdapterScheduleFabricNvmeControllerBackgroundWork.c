/*
 * XREFs of NvmeAdapterScheduleFabricNvmeControllerBackgroundWork @ 0x1400ED198
 * Callers:
 *     NvmeAdapterCompleteFabricControllerAsyncEventCommand @ 0x1400E53B0 (NvmeAdapterCompleteFabricControllerAsyncEventCommand.c)
 *     NvmeAdapterCompleteGetControllerLogPageRequestAsyncEvent @ 0x1400E58B0 (NvmeAdapterCompleteGetControllerLogPageRequestAsyncEvent.c)
 *     NvmeAdapterNvmeControllerBackgroundWork @ 0x1400EA6E0 (NvmeAdapterNvmeControllerBackgroundWork.c)
 * Callees:
 *     <none>
 */

BOOLEAN __fastcall NvmeAdapterScheduleFabricNvmeControllerBackgroundWork(__int64 a1, __int64 a2)
{
  KeClearEvent((PRKEVENT)(a1 + 184));
  return KeSetCoalescableTimer((PKTIMER)(a1 + 280), (LARGE_INTEGER)(-10000 * a2), 0, 1u, (PKDPC)(a1 + 344));
}
