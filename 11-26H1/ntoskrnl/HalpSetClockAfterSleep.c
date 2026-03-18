/*
 * XREFs of HalpSetClockAfterSleep @ 0x140451214
 * Callers:
 *     HalpAcpiPostSleep @ 0x140BECAA0 (HalpAcpiPostSleep.c)
 *     HalpDpPostReplace @ 0x140BEDF84 (HalpDpPostReplace.c)
 * Callees:
 *     HalpReleaseCmosSpinLock @ 0x140451A74 (HalpReleaseCmosSpinLock.c)
 *     HalpAcquireCmosSpinLock @ 0x140530540 (HalpAcquireCmosSpinLock.c)
 */

__int64 HalpSetClockAfterSleep()
{
  unsigned __int8 QueuePriority; // cl
  __int64 v1; // rcx

  HalpAcquireCmosSpinLock(0LL);
  QueuePriority = HalpDeviceBlockUnblockPushLock.QueuePriority;
  __outbyte(0x70u, 0xAu);
  __outbyte(0x71u, QueuePriority);
  LOBYTE(v1) = BYTE1(HalpDeviceBlockUnblockPushLock.QueuePriority) & 0xDF;
  __outbyte(0x70u, 0xBu);
  LOBYTE(v1) = v1 | 2;
  __outbyte(0x71u, v1);
  __outbyte(0x70u, 0xCu);
  __inbyte(0x71u);
  __outbyte(0x70u, 0xDu);
  __inbyte(0x71u);
  return HalpReleaseCmosSpinLock(v1, 113LL, 113LL);
}
