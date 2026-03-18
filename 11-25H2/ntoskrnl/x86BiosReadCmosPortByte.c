/*
 * XREFs of x86BiosReadCmosPortByte @ 0x140543DC4
 * Callers:
 *     x86BiosReadCmosPort @ 0x140543D44 (x86BiosReadCmosPort.c)
 * Callees:
 *     HalpReleaseCmosSpinLock @ 0x14042DD34 (HalpReleaseCmosSpinLock.c)
 *     HalpAcquireCmosSpinLock @ 0x14042DE18 (HalpAcquireCmosSpinLock.c)
 */

char __fastcall x86BiosReadCmosPortByte(char a1)
{
  char v1; // dl

  if ( (a1 & 1) == 0 )
    return XmCmosAddress;
  HalpAcquireCmosSpinLock();
  __outbyte(0x70u, XmCmosAddress);
  __inbyte(0x71u);
  HalpReleaseCmosSpinLock();
  return v1;
}
