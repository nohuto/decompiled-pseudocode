/*
 * XREFs of PiPdcDeactivate @ 0x1409DE320
 * Callers:
 *     PnpRequestDeviceAction @ 0x140482588 (PnpRequestDeviceAction.c)
 *     PnpCompleteDeviceEvent @ 0x1409DE1B4 (PnpCompleteDeviceEvent.c)
 *     PnpDeleteDeviceActionRequest @ 0x140B03630 (PnpDeleteDeviceActionRequest.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PiPdcDeactivate(__int64 a1)
{
  __int64 result; // rax

  if ( a1 )
    return Pdcv2ActivationClientDeactivate();
  return result;
}
