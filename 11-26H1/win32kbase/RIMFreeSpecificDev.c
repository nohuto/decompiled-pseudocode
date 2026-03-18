/*
 * XREFs of RIMFreeSpecificDev @ 0x14009270C
 * Callers:
 *     RIMIDERemoveInjectionDevice @ 0x14005A710 (RIMIDERemoveInjectionDevice.c)
 *     RIMFreeDev @ 0x140092664 (RIMFreeDev.c)
 *     RIMRemoveDevOfInputType @ 0x140092B8C (RIMRemoveDevOfInputType.c)
 *     rimHandleAnyPnpRemovePendingDevices @ 0x140098420 (rimHandleAnyPnpRemovePendingDevices.c)
 *     RIMUnregisterForInput @ 0x140129F90 (RIMUnregisterForInput.c)
 * Callees:
 *     ?GET_USERCRIT_DISPOSITION@@YA?AW4tagUserCritDisposition@@XZ @ 0x140048BE0 (-GET_USERCRIT_DISPOSITION@@YA-AW4tagUserCritDisposition@@XZ.c)
 *     rimQueueRimDevChangeAsyncWorkItem @ 0x140092458 (rimQueueRimDevChangeAsyncWorkItem.c)
 *     rimDoRimDevChange @ 0x140096D74 (rimDoRimDevChange.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1401B44F4 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     rimFreeSpecificDevFinal @ 0x1401BB4C0 (rimFreeSpecificDevFinal.c)
 */

_UNKNOWN **__fastcall RIMFreeSpecificDev(struct RawInputManagerObject *a1, __int64 a2)
{
  if ( !*(_QWORD *)(a2 + 320) )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 859LL);
  if ( a1 != *(struct RawInputManagerObject **)(a2 + 320) )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 860LL);
  if ( !*((_QWORD *)a1 + 104) || *((_DWORD *)a1 + 264) || (*(_DWORD *)(a2 + 168) & 0x2000) == 0 )
  {
    if ( !(unsigned int)GET_USERCRIT_DISPOSITION((__int64)a1, a2) )
      return rimQueueRimDevChangeAsyncWorkItem(a1, a2, 4);
    rimDoRimDevChange(a1, a2, 4LL);
  }
  return (_UNKNOWN **)rimFreeSpecificDevFinal(a1, a2);
}
