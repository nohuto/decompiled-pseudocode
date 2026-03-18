/*
 * XREFs of HalpSetClockBeforeSleep @ 0x140451288
 * Callers:
 *     HalpDpPreReplace @ 0x140BEE240 (HalpDpPreReplace.c)
 *     HalpAcpiPreSleep @ 0x140C08988 (HalpAcpiPreSleep.c)
 * Callees:
 *     HalpReleaseCmosSpinLock @ 0x140451A74 (HalpReleaseCmosSpinLock.c)
 *     HalpAcquireCmosSpinLock @ 0x140530540 (HalpAcquireCmosSpinLock.c)
 */

__int64 HalpSetClockBeforeSleep()
{
  unsigned __int8 v0; // al
  unsigned __int8 v1; // al
  __int64 v2; // rcx

  HalpAcquireCmosSpinLock(0LL);
  __outbyte(0x70u, 0xAu);
  v0 = __inbyte(0x71u);
  LOBYTE(HalpDeviceBlockUnblockPushLock.QueuePriority) = v0;
  __outbyte(0x70u, 0xBu);
  v1 = __inbyte(0x71u);
  BYTE1(HalpDeviceBlockUnblockPushLock.QueuePriority) = v1;
  LOBYTE(v2) = v1 & 0xBD | 2;
  __outbyte(0x70u, 0xBu);
  __outbyte(0x71u, v2);
  __outbyte(0x70u, 0xCu);
  __inbyte(0x71u);
  __outbyte(0x70u, 0xDu);
  __inbyte(0x71u);
  return HalpReleaseCmosSpinLock(v2, 113LL, 113LL);
}
