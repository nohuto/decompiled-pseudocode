/*
 * XREFs of PiPdcDeactivate @ 0x140A1B44C
 * Callers:
 *     PnpRequestDeviceAction @ 0x14047BEF8 (PnpRequestDeviceAction.c)
 *     PnpCompleteDeviceEvent @ 0x140A1B2E0 (PnpCompleteDeviceEvent.c)
 *     PnpDeleteDeviceActionRequest @ 0x140B05244 (PnpDeleteDeviceActionRequest.c)
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
