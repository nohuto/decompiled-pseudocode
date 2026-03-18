/*
 * XREFs of UsbhCancelOutOfBandwidthTimer @ 0x14003A9EC
 * Callers:
 *     UsbhSelectConfigOrInterfaceComplete @ 0x1400385D0 (UsbhSelectConfigOrInterfaceComplete.c)
 * Callees:
 *     UsbhGetPortData @ 0x140008540 (UsbhGetPortData.c)
 *     Log @ 0x14001C5D0 (Log.c)
 */

void __fastcall UsbhCancelOutOfBandwidthTimer(__int64 a1, unsigned __int16 a2)
{
  __int64 PortData; // rax

  PortData = UsbhGetPortData(a1, a2);
  if ( PortData )
    Log(a1, 8, 1869567096, PortData, _InterlockedExchange64((volatile __int64 *)(PortData + 688), 0LL));
}
