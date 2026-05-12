/*
 * XREFs of RaidCaptureLivedumpInternal @ 0x140093748
 * Callers:
 *     NvmeAdapterStorMQControllerRemoveWorker @ 0x1400DF4C0 (NvmeAdapterStorMQControllerRemoveWorker.c)
 *     NvmeAdapterNvmeControllerKeepAliveWork @ 0x1400EAA20 (NvmeAdapterNvmeControllerKeepAliveWork.c)
 *     NvmeAdapterNvmeControllerTransportErrorWork @ 0x1400EB3C0 (NvmeAdapterNvmeControllerTransportErrorWork.c)
 *     NvmeAdapterRemoveFabricControllerNamespaces @ 0x1400ED110 (NvmeAdapterRemoveFabricControllerNamespaces.c)
 *     NvmeControllerDetectCommandTimeout @ 0x14012B43C (NvmeControllerDetectCommandTimeout.c)
 * Callees:
 *     <none>
 */

KIRQL __fastcall RaidCaptureLivedumpInternal(int a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rsi
  KIRQL result; // al

  v4 = a1;
  result = KeGetCurrentIrql();
  if ( !result )
    return DbgkWerCaptureLiveKernelDump(L"Storport", 520LL, v4, a2, a3, 0LL, 0LL, 0LL, 8);
  return result;
}
