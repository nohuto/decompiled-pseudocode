/*
 * XREFs of HalpGetCmosCenturyByte @ 0x140449C0C
 * Callers:
 *     HalpReadCmosTime @ 0x1404499A8 (HalpReadCmosTime.c)
 * Callees:
 *     <none>
 */

unsigned __int8 HalpGetCmosCenturyByte()
{
  unsigned __int8 v1; // r10
  unsigned __int8 v3; // al
  unsigned __int8 v4; // cl
  unsigned __int8 v5; // al

  if ( (HalpCmosCenturyOffset & 0x100) != 0 )
  {
    __outbyte(0x70u, 0xAu);
    v3 = __inbyte(0x71u);
    v4 = v3;
    __outbyte(0x70u, 0xAu);
    __outbyte(0x71u, v3 | 0x10);
    __outbyte(0x70u, HalpCmosCenturyOffset);
    v5 = __inbyte(0x71u);
    v1 = v5;
    __outbyte(0x70u, 0xAu);
    __outbyte(0x71u, v4);
  }
  else
  {
    __outbyte(0x70u, HalpCmosCenturyOffset);
    return __inbyte(0x71u);
  }
  return v1;
}
