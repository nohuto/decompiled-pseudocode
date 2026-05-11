/*
 * XREFs of KsGateTurnInputOff @ 0x140003BC0
 * Callers:
 *     USBType1BuildIsochUrbRequest @ 0x1400025D0 (USBType1BuildIsochUrbRequest.c)
 *     USBCaptureStateChangePin @ 0x140004540 (USBCaptureStateChangePin.c)
 *     USBMidiOutCreateBulkUrbs @ 0x1400093B8 (USBMidiOutCreateBulkUrbs.c)
 *     USBCaptureCreatePin @ 0x14003E8D0 (USBCaptureCreatePin.c)
 * Callees:
 *     <none>
 */

void __stdcall KsGateTurnInputOff(PKSGATE Gate)
{
  for ( ; Gate; Gate = Gate->NextGate )
  {
    if ( _InterlockedExchangeAdd(&Gate->Count, 0xFFFFFFFF) != 1 )
      break;
  }
}
