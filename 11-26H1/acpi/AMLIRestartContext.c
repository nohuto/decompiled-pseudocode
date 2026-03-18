/*
 * XREFs of AMLIRestartContext @ 0x14004A10C
 * Callers:
 *     AcpiNativeMethodEvalRequestCompletion @ 0x14004A0F0 (AcpiNativeMethodEvalRequestCompletion.c)
 *     ACPIFlushDeviceQueueCallback @ 0x140059E80 (ACPIFlushDeviceQueueCallback.c)
 *     ACPIFlushPowerQueueCallback @ 0x140059EC0 (ACPIFlushPowerQueueCallback.c)
 *     GenericDeviceFirmwareLockCompletion @ 0x14005CB60 (GenericDeviceFirmwareLockCompletion.c)
 *     ACPITableUnloadCallBack @ 0x140069AE0 (ACPITableUnloadCallBack.c)
 *     AMLIFinalizeObject @ 0x14006C4CC (AMLIFinalizeObject.c)
 *     FreeObjOwnerWorker @ 0x14006E090 (FreeObjOwnerWorker.c)
 * Callees:
 *     RestartContext @ 0x14000E2E0 (RestartContext.c)
 */

__int64 __fastcall AMLIRestartContext(_QWORD *a1)
{
  return RestartContext(a1);
}
