/*
 * XREFs of HalpReadCmosTime @ 0x1404499A8
 * Callers:
 *     HalQueryRealTimeClock @ 0x1404495B0 (HalQueryRealTimeClock.c)
 * Callees:
 *     HalpReleaseCmosSpinLock @ 0x140449BA4 (HalpReleaseCmosSpinLock.c)
 *     HalpAcquireCmosSpinLockAndWait @ 0x140449BC0 (HalpAcquireCmosSpinLockAndWait.c)
 *     HalpGetCmosCenturyByte @ 0x140449C0C (HalpGetCmosCenturyByte.c)
 */

__int64 __fastcall HalpReadCmosTime(_WORD *a1)
{
  unsigned __int8 v2; // al
  unsigned __int8 v3; // al
  unsigned __int8 v4; // al
  unsigned __int8 v5; // al
  unsigned __int8 v6; // al
  unsigned __int8 v7; // al
  __int64 v8; // r8
  unsigned __int8 CmosCenturyByte; // r11
  unsigned __int8 v10; // al
  __int64 v11; // rcx
  __int64 v12; // rdx

  HalpAcquireCmosSpinLockAndWait();
  a1[6] = 500;
  __outbyte(0x70u, 0);
  v2 = __inbyte(0x71u);
  a1[5] = (unsigned __int8)((v2 & 0xF) + 10 * (v2 >> 4));
  __outbyte(0x70u, 2u);
  v3 = __inbyte(0x71u);
  a1[4] = (unsigned __int8)((v3 & 0xF) + 10 * (v3 >> 4));
  __outbyte(0x70u, 4u);
  v4 = __inbyte(0x71u);
  a1[3] = (unsigned __int8)((v4 & 0xF) + 10 * (v4 >> 4));
  __outbyte(0x70u, 6u);
  v5 = __inbyte(0x71u);
  a1[7] = (unsigned __int8)((v5 & 0xF) + 10 * (v5 >> 4));
  __outbyte(0x70u, 7u);
  v6 = __inbyte(0x71u);
  a1[2] = (unsigned __int8)((v6 & 0xF) + 10 * (v6 >> 4));
  __outbyte(0x70u, 8u);
  v7 = __inbyte(0x71u);
  a1[1] = (unsigned __int8)((v7 & 0xF) + 10 * (v7 >> 4));
  CmosCenturyByte = HalpGetCmosCenturyByte();
  __outbyte(0x70u, 9u);
  v10 = __inbyte(0x71u);
  v12 = 100 * (unsigned int)(unsigned __int8)((CmosCenturyByte & 0xF) + 10 * (CmosCenturyByte >> 4));
  LOBYTE(v11) = (v10 & 0xF) + 10 * (v10 >> 4);
  LOWORD(v12) = (unsigned __int8)v11 + 100 * (unsigned __int8)((CmosCenturyByte & 0xF) + 10 * (CmosCenturyByte >> 4));
  if ( (unsigned __int16)v12 >= 0x76Cu && (unsigned __int16)v12 < 0x780u )
    LOWORD(v12) = v12 + 100;
  *a1 = v12;
  LOBYTE(v8) = v10 & 0xF;
  return HalpReleaseCmosSpinLock(v11, v12, v8);
}
