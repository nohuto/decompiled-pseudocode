/*
 * XREFs of x86BiosReadCmosPortByte @ 0x140583338
 * Callers:
 *     x86BiosReadCmosPort @ 0x1405832B8 (x86BiosReadCmosPort.c)
 * Callees:
 *     HalpReleaseCmosSpinLock @ 0x140449BA4 (HalpReleaseCmosSpinLock.c)
 *     HalpAcquireCmosSpinLock @ 0x140532A40 (HalpAcquireCmosSpinLock.c)
 */

char __fastcall x86BiosReadCmosPortByte(char a1)
{
  char v1; // dl

  if ( (a1 & 1) == 0 )
    return XmCmosAddress;
  HalpAcquireCmosSpinLock(a1);
  __outbyte(0x70u, XmCmosAddress);
  __inbyte(0x71u);
  HalpReleaseCmosSpinLock();
  return v1;
}
