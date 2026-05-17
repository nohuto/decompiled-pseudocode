/*
 * XREFs of _ctrlfp @ 0x1801316F0
 * Callers:
 *     fabs @ 0x18012AB10 (fabs.c)
 *     _call_matherr @ 0x180130280 (_call_matherr.c)
 *     _handle_error @ 0x1801303D0 (_handle_error.c)
 *     _except1 @ 0x180130B90 (_except1.c)
 *     _handle_qnan1 @ 0x180130FD0 (_handle_qnan1.c)
 *     _umatherr @ 0x1801313B0 (_umatherr.c)
 * Callees:
 *     _get_fpsr @ 0x1801327A0 (_get_fpsr.c)
 *     _set_fpsr @ 0x1801327B0 (_set_fpsr.c)
 */

__int64 __fastcall ctrlfp(int a1, int a2)
{
  unsigned int fpsr; // esi
  __int64 v5; // rcx

  fpsr = get_fpsr();
  v5 = a2 & a1 | fpsr & (~(_WORD)a2 | 0xFFFF807F);
  if ( byte_1801C5EF0 && (((unsigned __int8)(a2 & a1) | fpsr & ((unsigned __int8)~(_BYTE)a2 | 0x7F)) & 0x40) != 0 )
    set_fpsr(v5);
  else
    set_fpsr((unsigned int)v5 & 0xFFFFFFBF);
  return fpsr;
}
