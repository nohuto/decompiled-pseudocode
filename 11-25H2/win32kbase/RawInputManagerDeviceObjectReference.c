/*
 * XREFs of RawInputManagerDeviceObjectReference @ 0x1401806B0
 * Callers:
 *     RIMStartDeviceSpecificRead @ 0x140033FDC (RIMStartDeviceSpecificRead.c)
 *     HMCreateHandleForObject @ 0x14003B950 (HMCreateHandleForObject.c)
 *     rimOnPnpArrived @ 0x140181640 (rimOnPnpArrived.c)
 *     rimQueueCompleteFrame @ 0x1401836BC (rimQueueCompleteFrame.c)
 *     ?RIMDeviceCallback_Created@CBaseInput@@AEAAKPEAURawInputManagerDeviceObject@@@Z @ 0x14018A790 (-RIMDeviceCallback_Created@CBaseInput@@AEAAKPEAURawInputManagerDeviceObject@@@Z.c)
 *     RIMFindSiblingMouseDeviceWorker @ 0x1401E04B8 (RIMFindSiblingMouseDeviceWorker.c)
 *     RIMFindSiblingPointerDeviceForMouseWorker @ 0x1401E06B0 (RIMFindSiblingPointerDeviceForMouseWorker.c)
 *     RIMFindTouchDigitizerWithSize @ 0x1401E50C0 (RIMFindTouchDigitizerWithSize.c)
 *     RIMHandleTTMDeviceArrival @ 0x1401F662C (RIMHandleTTMDeviceArrival.c)
 * Callees:
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14019E99C (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

__int64 __fastcall RawInputManagerDeviceObjectReference(void *a1)
{
  NTSTATUS v1; // ebx

  v1 = ObReferenceObjectByPointer(a1, 3u, ExRawInputManagerObjectType, 0);
  if ( v1 < 0 )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 857LL);
  return (unsigned int)v1;
}
