/*
 * XREFs of x86BiosWriteCmosPortByte @ 0x140580F90
 * Callers:
 *     x86BiosWriteCmosPort @ 0x140580F18 (x86BiosWriteCmosPort.c)
 * Callees:
 *     HalpReleaseCmosSpinLock @ 0x140451A74 (HalpReleaseCmosSpinLock.c)
 *     HalpAcquireCmosSpinLock @ 0x140530540 (HalpAcquireCmosSpinLock.c)
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
