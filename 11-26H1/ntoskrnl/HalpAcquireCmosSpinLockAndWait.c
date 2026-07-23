/*
 * XREFs of HalpAcquireCmosSpinLockAndWait @ 0x140449BC0
 * Callers:
 *     HalpWriteCmosTime @ 0x14044943C (HalpWriteCmosTime.c)
 *     HalpSetWakeAlarm @ 0x140449728 (HalpSetWakeAlarm.c)
 *     HalpReadCmosTime @ 0x1404499A8 (HalpReadCmosTime.c)
 * Callees:
 *     HalpReleaseCmosSpinLock @ 0x140449BA4 (HalpReleaseCmosSpinLock.c)
 *     HalpAcquireCmosSpinLock @ 0x140532A40 (HalpAcquireCmosSpinLock.c)
 */

char HalpAcquireCmosSpinLockAndWait()
{
  int v0; // ebx
  char result; // al

  HalpAcquireCmosSpinLock(0LL);
  v0 = 0;
  while ( 1 )
  {
    __outbyte(0x70u, 0xAu);
    result = __inbyte(0x71u);
    if ( result >= 0 )
      break;
    if ( ++v0 == 100 )
    {
      v0 = 0;
      HalpReleaseCmosSpinLock();
      HalpAcquireCmosSpinLock(0LL);
    }
  }
  return result;
}
