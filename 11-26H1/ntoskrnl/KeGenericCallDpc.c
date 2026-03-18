/*
 * XREFs of KeGenericCallDpc @ 0x1404D1460
 * Callers:
 *     MiDbgCopyMemoryInLiveSystem @ 0x1406FD7DC (MiDbgCopyMemoryInLiveSystem.c)
 *     MiApplyImageHotPatch @ 0x14086E638 (MiApplyImageHotPatch.c)
 *     EtwpUpdateGuidFilterData @ 0x140937FB0 (EtwpUpdateGuidFilterData.c)
 *     EtwpFreeLoggerContext @ 0x140A6CBB4 (EtwpFreeLoggerContext.c)
 *     KiInitializeDynamicProcessor @ 0x140BF4FC4 (KiInitializeDynamicProcessor.c)
 * Callees:
 *     KeGenericProcessorCallback @ 0x140379F74 (KeGenericProcessorCallback.c)
 *     KiCpuPartitionCheckGenericDpc @ 0x1405F4330 (KiCpuPartitionCheckGenericDpc.c)
 */

__int64 __fastcall KeGenericCallDpc(__int64 a1, __int64 a2)
{
  _QWORD v5[3]; // [rsp+20h] [rbp-18h] BYREF

  if ( (WORD2(xmmword_140FBFC10) & 0x200) != 0 )
    KiCpuPartitionCheckGenericDpc(a1);
  v5[0] = a1;
  v5[1] = a2;
  return KeGenericProcessorCallback(0LL, (__int64)KiGenericCallDpcInitiatorWorker, (__int64)v5, 1);
}
