/*
 * XREFs of KeGenericCallDpc @ 0x1404CAE90
 * Callers:
 *     MiDbgCopyMemoryInLiveSystem @ 0x1407024AC (MiDbgCopyMemoryInLiveSystem.c)
 *     MiApplyImageHotPatch @ 0x140874A08 (MiApplyImageHotPatch.c)
 *     EtwpUpdateGuidFilterData @ 0x140913B50 (EtwpUpdateGuidFilterData.c)
 *     EtwpFreeLoggerContext @ 0x140A16604 (EtwpFreeLoggerContext.c)
 *     KiInitializeDynamicProcessor @ 0x140BFAFC4 (KiInitializeDynamicProcessor.c)
 * Callees:
 *     KeGenericProcessorCallback @ 0x14037BD24 (KeGenericProcessorCallback.c)
 *     KiCpuPartitionCheckGenericDpc @ 0x1405F6CF0 (KiCpuPartitionCheckGenericDpc.c)
 */

__int64 __fastcall KeGenericCallDpc(__int64 a1, __int64 a2)
{
  _QWORD v5[3]; // [rsp+20h] [rbp-18h] BYREF

  if ( (WORD2(xmmword_140FC0C10) & 0x200) != 0 )
    KiCpuPartitionCheckGenericDpc(a1);
  v5[0] = a1;
  v5[1] = a2;
  return KeGenericProcessorCallback(0LL, (__int64)KiGenericCallDpcInitiatorWorker, (__int64)v5, 1);
}
