/*
 * XREFs of HalpWriteCmosTime @ 0x14044943C
 * Callers:
 *     HalSetRealTimeClock @ 0x14057A830 (HalSetRealTimeClock.c)
 * Callees:
 *     HalpReleaseCmosSpinLock @ 0x140449BA4 (HalpReleaseCmosSpinLock.c)
 *     HalpAcquireCmosSpinLockAndWait @ 0x140449BC0 (HalpAcquireCmosSpinLockAndWait.c)
 *     HalpSetCmosCenturyByte @ 0x14044A6D8 (HalpSetCmosCenturyByte.c)
 */

__int64 __fastcall HalpWriteCmosTime(unsigned __int8 *a1)
{
  unsigned int v2; // r8d
  unsigned int v3; // ecx
  unsigned int v4; // ecx
  unsigned int v5; // ecx
  unsigned int v6; // ecx
  __int64 v7; // rcx
  unsigned int v8; // ebx
  char v9; // r11
  unsigned __int8 v10; // bl
  __int64 v11; // r8

  HalpAcquireCmosSpinLockAndWait();
  v2 = a1[10];
  __outbyte(0x70u, 0);
  __outbyte(0x71u, v2 + 6 * (v2 / 0xA));
  v3 = a1[8];
  __outbyte(0x70u, 2u);
  __outbyte(0x71u, v3 + 6 * (v3 / 0xA));
  v4 = a1[6];
  __outbyte(0x70u, 4u);
  __outbyte(0x71u, v4 + 6 * (v4 / 0xA));
  v5 = a1[14];
  __outbyte(0x70u, 6u);
  __outbyte(0x71u, v5 + 6 * (v5 / 0xA));
  v6 = a1[4];
  __outbyte(0x70u, 7u);
  __outbyte(0x71u, v6 + 6 * (v6 / 0xA));
  v7 = a1[2];
  __outbyte(0x70u, 8u);
  __outbyte(0x71u, v7 + 6 * ((unsigned int)v7 / 0xA));
  v8 = *(__int16 *)a1;
  if ( v8 > 0x270F )
    v8 = 9999;
  LOBYTE(v7) = v8 / 0x64 + 6 * ((unsigned __int8)(v8 / 0x64) / 0xAu);
  HalpSetCmosCenturyByte(v7);
  __outbyte(0x70u, 9u);
  v10 = v8 - 100 * v9;
  __outbyte(0x71u, v10 + 6 * (v10 / 0xAu));
  return HalpReleaseCmosSpinLock(v10, 113LL, v11);
}
