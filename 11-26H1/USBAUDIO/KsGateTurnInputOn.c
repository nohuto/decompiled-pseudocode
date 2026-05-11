/*
 * XREFs of KsGateTurnInputOn @ 0x140003EB8
 * Callers:
 *     USBType1AsyncEndpointPollCallback @ 0x140003BF0 (USBType1AsyncEndpointPollCallback.c)
 *     USBMidiOutCompleteCallback @ 0x14000EC00 (USBMidiOutCompleteCallback.c)
 * Callees:
 *     <none>
 */

void __stdcall KsGateTurnInputOn(PKSGATE Gate)
{
  while ( Gate && _InterlockedIncrement(&Gate->Count) == 1 )
    Gate = Gate->NextGate;
}
