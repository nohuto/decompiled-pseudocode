/*
 * XREFs of HalpECmosWriteByte @ 0x14058EAF0
 * Callers:
 *     <none>
 * Callees:
 *     WRITE_PORT_USHORT_PAIR @ 0x140581388 (WRITE_PORT_USHORT_PAIR.c)
 *     HalpIoDelay @ 0x140727680 (HalpIoDelay.c)
 */

__int64 __fastcall HalpECmosWriteByte(__int16 a1, unsigned __int8 a2)
{
  WRITE_PORT_USHORT_PAIR(0x74u, 0x75u, a1);
  HalpIoDelay();
  __outbyte(0x76u, a2);
  return HalpIoDelay();
}
