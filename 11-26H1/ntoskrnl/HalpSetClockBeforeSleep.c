/*
 * XREFs of HalpSetClockBeforeSleep @ 0x1404493B8
 * Callers:
 *     HalpDpPreReplace @ 0x140BF4240 (HalpDpPreReplace.c)
 *     HalpAcpiPreSleep @ 0x140C0EB98 (HalpAcpiPreSleep.c)
 * Callees:
 *     HalpReleaseCmosSpinLock @ 0x140449BA4 (HalpReleaseCmosSpinLock.c)
 *     HalpAcquireCmosSpinLock @ 0x140532A40 (HalpAcquireCmosSpinLock.c)
 */

__int64 HalpSetClockBeforeSleep()
{
  unsigned __int8 v0; // al
  unsigned __int8 v1; // al
  __int64 v2; // rcx

  HalpAcquireCmosSpinLock(0LL);
  __outbyte(0x70u, 0xAu);
  v0 = __inbyte(0x71u);
  BYTE4(HalpDeviceBlockUnblockPushLock.LastXStateSaveDebugInfo) = v0;
  __outbyte(0x70u, 0xBu);
  v1 = __inbyte(0x71u);
  BYTE5(HalpDeviceBlockUnblockPushLock.LastXStateSaveDebugInfo) = v1;
  LOBYTE(v2) = v1 & 0xBD | 2;
  __outbyte(0x70u, 0xBu);
  __outbyte(0x71u, v2);
  __outbyte(0x70u, 0xCu);
  __inbyte(0x71u);
  __outbyte(0x70u, 0xDu);
  __inbyte(0x71u);
  return HalpReleaseCmosSpinLock(v2, 113LL, 113LL);
}
