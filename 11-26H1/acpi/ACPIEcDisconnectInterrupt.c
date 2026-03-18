/*
 * XREFs of ACPIEcDisconnectInterrupt @ 0x1400AEF7C
 * Callers:
 *     ACPIEcStopRemoveDeviceCommon @ 0x1400602F0 (ACPIEcStopRemoveDeviceCommon.c)
 * Callees:
 *     ACPIEcDisconnectGpeVector @ 0x1400AEF00 (ACPIEcDisconnectGpeVector.c)
 *     ACPIEcDisconnectGpioInterrupt @ 0x1400AEF30 (ACPIEcDisconnectGpioInterrupt.c)
 */

__int64 __fastcall ACPIEcDisconnectInterrupt(__int64 a1)
{
  if ( *(_BYTE *)(a1 + 2221) )
    return ACPIEcDisconnectGpioInterrupt(a1);
  else
    return ACPIEcDisconnectGpeVector(a1);
}
