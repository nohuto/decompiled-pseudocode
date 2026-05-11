/*
 * XREFs of Feature_MIDI2__private_IsEnabledDeviceUsageNoInline @ 0x14000C0D8
 * Callers:
 *     USBMIDIInReQueueUrb @ 0x140008CC0 (USBMIDIInReQueueUrb.c)
 *     USBMidiInAddEventToPinQueue @ 0x140008FA4 (USBMidiInAddEventToPinQueue.c)
 *     USBMidiInProcessPin @ 0x140009100 (USBMidiInProcessPin.c)
 *     USBMidiOutCreateBulkUrbs @ 0x1400093B8 (USBMidiOutCreateBulkUrbs.c)
 *     DeviceRemove @ 0x14000BF80 (DeviceRemove.c)
 *     DeviceStart @ 0x14002E790 (DeviceStart.c)
 *     USBMidiInPipePrimer @ 0x1400399C8 (USBMidiInPipePrimer.c)
 *     PinCreate @ 0x140041530 (PinCreate.c)
 * Callees:
 *     Feature_MIDI2__private_IsEnabledFallback @ 0x14000C114 (Feature_MIDI2__private_IsEnabledFallback.c)
 */

__int64 Feature_MIDI2__private_IsEnabledDeviceUsageNoInline()
{
  if ( ((__int64)WPP_MAIN_CB.Dpc.DpcData & 0x10) != 0 )
    return (__int64)WPP_MAIN_CB.Dpc.DpcData & 1;
  else
    return Feature_MIDI2__private_IsEnabledFallback(LODWORD(WPP_MAIN_CB.Dpc.DpcData), 3LL);
}
