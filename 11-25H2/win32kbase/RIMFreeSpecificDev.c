/*
 * XREFs of RIMFreeSpecificDev @ 0x1401D5330
 * Callers:
 *     RIMIDERemoveInjectionDevice @ 0x1400339A4 (RIMIDERemoveInjectionDevice.c)
 *     RIMUnregisterForInput @ 0x14009DC10 (RIMUnregisterForInput.c)
 *     RIMFreeDev @ 0x1401D5288 (RIMFreeDev.c)
 *     RIMRemoveDevOfInputType @ 0x1401D5944 (RIMRemoveDevOfInputType.c)
 * Callees:
 *     rimDoRimDevChange @ 0x140033D40 (rimDoRimDevChange.c)
 *     rimQueueRimDevChangeAsyncWorkItem @ 0x140132014 (rimQueueRimDevChangeAsyncWorkItem.c)
 *     rimFreeSpecificDevFinal @ 0x14017E314 (rimFreeSpecificDevFinal.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14019E99C (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     ?GET_USERCRIT_DISPOSITION@@YA?AW4tagUserCritDisposition@@XZ @ 0x1401A5130 (-GET_USERCRIT_DISPOSITION@@YA-AW4tagUserCritDisposition@@XZ.c)
 */

_UNKNOWN **__fastcall RIMFreeSpecificDev(struct RawInputManagerObject *a1, __int64 a2)
{
  if ( !*(_QWORD *)(a2 + 320) )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 862);
  if ( a1 != *(struct RawInputManagerObject **)(a2 + 320) )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 863);
  if ( !*((_QWORD *)a1 + 104) || *((_DWORD *)a1 + 264) || (*(_DWORD *)(a2 + 168) & 0x2000) == 0 )
  {
    if ( !(unsigned int)GET_USERCRIT_DISPOSITION() )
      return rimQueueRimDevChangeAsyncWorkItem(a1, a2, 4);
    rimDoRimDevChange((__int64)a1, a2, 4u);
  }
  return (_UNKNOWN **)rimFreeSpecificDevFinal((__int64)a1, a2);
}
