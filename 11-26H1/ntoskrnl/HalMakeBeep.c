/*
 * XREFs of HalMakeBeep @ 0x1405812C0
 * Callers:
 *     <none>
 * Callees:
 *     HalpReleaseCmosSpinLock @ 0x140449BA4 (HalpReleaseCmosSpinLock.c)
 *     HalpAcquireCmosSpinLock @ 0x140532A40 (HalpAcquireCmosSpinLock.c)
 *     WRITE_PORT_USHORT_PAIR @ 0x140581388 (WRITE_PORT_USHORT_PAIR.c)
 *     HalpMiscIsLegacyPcType @ 0x14058743C (HalpMiscIsLegacyPcType.c)
 *     HalpIoDelay @ 0x140727680 (HalpIoDelay.c)
 */

char __fastcall HalMakeBeep(unsigned int a1)
{
  char result; // al
  char v3; // di
  unsigned __int8 v4; // al
  unsigned __int8 v5; // bl
  unsigned __int8 v6; // al
  unsigned __int8 v7; // bl

  result = HalpMiscIsLegacyPcType();
  if ( result )
  {
    v3 = 1;
    HalpAcquireCmosSpinLock(0);
    v4 = __inbyte(0x61u);
    v5 = v4;
    HalpIoDelay();
    __outbyte(0x61u, v5 & 0xFC);
    HalpIoDelay();
    if ( a1 )
    {
      if ( 0x1234CF / a1 <= 0xFFFF )
      {
        __outbyte(0x43u, 0xB6u);
        HalpIoDelay();
        WRITE_PORT_USHORT_PAIR(66LL, 66LL, (unsigned __int16)(0x1234CF / a1));
        HalpIoDelay();
        v6 = __inbyte(0x61u);
        v7 = v6;
        HalpIoDelay();
        __outbyte(0x61u, v7 | 3);
        HalpIoDelay();
      }
      else
      {
        v3 = 0;
      }
    }
    HalpReleaseCmosSpinLock();
    return v3;
  }
  return result;
}
