/*
 * XREFs of USBHwAllocateAndBag @ 0x14002D6A0
 * Callers:
 *     USBHwCreateInterfaceList @ 0x14003540C (USBHwCreateInterfaceList.c)
 *     USBHwSelectAudioConfiguration @ 0x140035AB0 (USBHwSelectAudioConfiguration.c)
 *     USBHwSelectStreamingMIDIInterface @ 0x1400363BC (USBHwSelectStreamingMIDIInterface.c)
 *     USBParseGetMIDIJackStringFromDeviceID @ 0x14003799C (USBParseGetMIDIJackStringFromDeviceID.c)
 *     USBParseGetMIDIStreamingDatarange @ 0x140037AA4 (USBParseGetMIDIStreamingDatarange.c)
 *     USBParseGetMicArrayDescriptor @ 0x140037E4C (USBParseGetMicArrayDescriptor.c)
 *     USBParseGetUnitString @ 0x1400381A0 (USBParseGetUnitString.c)
 *     USBParseMixerUnit @ 0x1400387E0 (USBParseMixerUnit.c)
 *     USBType1AsyncEndpointInitialize @ 0x14003965C (USBType1AsyncEndpointInitialize.c)
 *     USBMidiInPipePrimer @ 0x1400399C8 (USBMidiInPipePrimer.c)
 *     USBType1Create1MsecBuffers @ 0x14003D104 (USBType1Create1MsecBuffers.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall USBHwAllocateAndBag(PVOID *a1, unsigned int a2, __int64 a3, void *a4)
{
  NTSTATUS v6; // ebx
  void *Pool2; // rax

  v6 = -1073741670;
  Pool2 = (void *)ExAllocatePool2(a3, a2, 1096972357LL);
  *a1 = Pool2;
  if ( Pool2 )
  {
    v6 = KsAddItemToObjectBag(a4, Pool2, ExFreePool);
    if ( v6 < 0 )
      ExFreePool(*a1);
  }
  return (unsigned int)v6;
}
