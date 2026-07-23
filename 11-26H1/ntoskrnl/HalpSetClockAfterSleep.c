/*
 * XREFs of HalpSetClockAfterSleep @ 0x140449344
 * Callers:
 *     HalpAcpiPostSleep @ 0x140BF2AA0 (HalpAcpiPostSleep.c)
 *     HalpDpPostReplace @ 0x140BF3F84 (HalpDpPostReplace.c)
 * Callees:
 *     HalpReleaseCmosSpinLock @ 0x140449BA4 (HalpReleaseCmosSpinLock.c)
 *     HalpAcquireCmosSpinLock @ 0x140532A40 (HalpAcquireCmosSpinLock.c)
 */

__int64 HalpSetClockAfterSleep()
{
  unsigned __int8 v0; // cl
  __int64 v1; // rcx

  HalpAcquireCmosSpinLock(0LL);
  v0 = BYTE4(HalpDeviceBlockUnblockPushLock.LastXStateSaveDebugInfo);
  __outbyte(0x70u, 0xAu);
  __outbyte(0x71u, v0);
  LOBYTE(v1) = BYTE5(HalpDeviceBlockUnblockPushLock.LastXStateSaveDebugInfo) & 0xDF;
  __outbyte(0x70u, 0xBu);
  LOBYTE(v1) = v1 | 2;
  __outbyte(0x71u, v1);
  __outbyte(0x70u, 0xCu);
  __inbyte(0x71u);
  __outbyte(0x70u, 0xDu);
  __inbyte(0x71u);
  return HalpReleaseCmosSpinLock(v1, 113LL, 113LL);
}
