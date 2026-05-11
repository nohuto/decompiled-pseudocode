/*
 * XREFs of USBHwAbortOrResetPipe @ 0x14003BD84
 * Callers:
 *     USBType1AsyncEndpointPoll @ 0x140003EE0 (USBType1AsyncEndpointPoll.c)
 *     USBHwStopMIDIPipe @ 0x14000D7E0 (USBHwStopMIDIPipe.c)
 *     USBHwDataPipeReset @ 0x14002D724 (USBHwDataPipeReset.c)
 * Callees:
 *     USBHwSubmitUrbToUsbdSynch @ 0x14003BE20 (USBHwSubmitUrbToUsbdSynch.c)
 */

__int64 __fastcall USBHwAbortOrResetPipe(PDEVICE_OBJECT DeviceObject, void *a2, USHORT a3)
{
  unsigned int v6; // edi
  struct _URB *Pool2; // rax
  struct _URB *v8; // rbx

  v6 = -1073741670;
  Pool2 = (struct _URB *)ExAllocatePool2(64LL, 40LL, 1096972357LL);
  v8 = Pool2;
  if ( Pool2 )
  {
    Pool2->UrbHeader.Length = 40;
    Pool2->UrbHeader.Function = a3;
    Pool2->UrbSelectInterface.ConfigurationHandle = a2;
    v6 = USBHwSubmitUrbToUsbdSynch(DeviceObject, Pool2, 0LL);
    ExFreePool(v8);
  }
  return v6;
}
