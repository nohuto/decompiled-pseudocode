/*
 * XREFs of RawInputManagerDeviceObjectReference @ 0x1400955E0
 * Callers:
 *     rimOnPnpArrived @ 0x140093AC0 (rimOnPnpArrived.c)
 *     ?RIMDeviceCallback_Created@CBaseInput@@AEAAKPEAURawInputManagerDeviceObject@@@Z @ 0x140095000 (-RIMDeviceCallback_Created@CBaseInput@@AEAAKPEAURawInputManagerDeviceObject@@@Z.c)
 *     HMCreateHandleForObject @ 0x140095100 (HMCreateHandleForObject.c)
 *     rimQueueCompleteFrame @ 0x140095460 (rimQueueCompleteFrame.c)
 *     RIMStartDeviceSpecificRead @ 0x1400996FC (RIMStartDeviceSpecificRead.c)
 *     RIMFindSiblingPointerDeviceForMouseWorker @ 0x14017B7F0 (RIMFindSiblingPointerDeviceForMouseWorker.c)
 *     RIMFindSiblingMouseDeviceWorker @ 0x140204868 (RIMFindSiblingMouseDeviceWorker.c)
 *     RIMFindTouchDigitizerWithSize @ 0x140205AA0 (RIMFindTouchDigitizerWithSize.c)
 *     RIMHandleTTMDeviceArrival @ 0x14021164C (RIMHandleTTMDeviceArrival.c)
 * Callees:
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1401B44F4 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

__int64 __fastcall RawInputManagerDeviceObjectReference(void *a1)
{
  NTSTATUS v1; // ebx

  v1 = ObReferenceObjectByPointer(a1, 3u, ExRawInputManagerObjectType, 0);
  if ( v1 < 0 )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 857LL);
  return (unsigned int)v1;
}
