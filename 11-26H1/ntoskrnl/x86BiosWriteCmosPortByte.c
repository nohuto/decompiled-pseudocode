/*
 * XREFs of x86BiosWriteCmosPortByte @ 0x1405834B0
 * Callers:
 *     x86BiosWriteCmosPort @ 0x140583438 (x86BiosWriteCmosPort.c)
 * Callees:
 *     HalpReleaseCmosSpinLock @ 0x140449BA4 (HalpReleaseCmosSpinLock.c)
 *     HalpAcquireCmosSpinLock @ 0x140532A40 (HalpAcquireCmosSpinLock.c)
 */

__int64 __fastcall x86BiosWriteCmosPortByte(char a1, unsigned __int8 a2)
{
  __int64 result; // rax

  if ( (a1 & 1) != 0 )
  {
    HalpAcquireCmosSpinLock(a1);
    __outbyte(0x70u, XmCmosAddress);
    __outbyte(0x71u, a2);
    return HalpReleaseCmosSpinLock();
  }
  else
  {
    XmCmosAddress = a2;
  }
  return result;
}
