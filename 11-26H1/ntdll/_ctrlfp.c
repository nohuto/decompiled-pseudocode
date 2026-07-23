/*
 * XREFs of _ctrlfp @ 0x180131460
 * Callers:
 *     fabs @ 0x18012A880 (fabs.c)
 *     _call_matherr @ 0x18012FFF0 (_call_matherr.c)
 *     _handle_error @ 0x180130140 (_handle_error.c)
 *     _except1 @ 0x180130900 (_except1.c)
 *     _handle_qnan1 @ 0x180130D40 (_handle_qnan1.c)
 *     _umatherr @ 0x180131120 (_umatherr.c)
 * Callees:
 *     _get_fpsr @ 0x180132510 (_get_fpsr.c)
 *     _set_fpsr @ 0x180132520 (_set_fpsr.c)
 */

__int64 __fastcall ctrlfp(int a1, int a2)
{
  unsigned int fpsr; // esi
  __int64 v5; // rcx

  fpsr = get_fpsr();
  v5 = a2 & a1 | fpsr & (~(_WORD)a2 | 0xFFFF807F);
  if ( byte_1801C4EF0 && (((unsigned __int8)(a2 & a1) | fpsr & ((unsigned __int8)~(_BYTE)a2 | 0x7F)) & 0x40) != 0 )
    set_fpsr(v5);
  else
    set_fpsr((unsigned int)v5 & 0xFFFFFFBF);
  return fpsr;
}
