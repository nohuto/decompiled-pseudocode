/*
 * XREFs of HalpAcquireCmosSpinLockAndWait @ 0x140451A90
 * Callers:
 *     HalpWriteCmosTime @ 0x14045130C (HalpWriteCmosTime.c)
 *     HalpSetWakeAlarm @ 0x1404515F8 (HalpSetWakeAlarm.c)
 *     HalpReadCmosTime @ 0x140451878 (HalpReadCmosTime.c)
 * Callees:
 *     HalpReleaseCmosSpinLock @ 0x140451A74 (HalpReleaseCmosSpinLock.c)
 *     HalpAcquireCmosSpinLock @ 0x140530540 (HalpAcquireCmosSpinLock.c)
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
