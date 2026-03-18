/*
 * XREFs of UsbhCancelOutOfBandwidthTimer @ 0x14003A44C
 * Callers:
 *     UsbhSelectConfigOrInterfaceComplete @ 0x140036A90 (UsbhSelectConfigOrInterfaceComplete.c)
 * Callees:
 *     Log @ 0x140009B80 (Log.c)
 *     UsbhGetPortData @ 0x1400186A0 (UsbhGetPortData.c)
 */

void __fastcall UsbhCancelOutOfBandwidthTimer(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 PortData; // rax

  PortData = UsbhGetPortData(a1, a2, a3, a4);
  if ( PortData )
    Log(a1, 8, 1869567096, PortData, _InterlockedExchange64((volatile __int64 *)(PortData + 688), 0LL));
}
