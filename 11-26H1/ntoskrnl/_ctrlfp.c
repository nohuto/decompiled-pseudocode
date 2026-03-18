/*
 * XREFs of _ctrlfp @ 0x14053AF70
 * Callers:
 *     _call_matherr @ 0x14053A450 (_call_matherr.c)
 *     _handle_error @ 0x14053A5A0 (_handle_error.c)
 *     _handle_errorf @ 0x14053A720 (_handle_errorf.c)
 * Callees:
 *     _get_fpsr @ 0x14053B070 (_get_fpsr.c)
 *     _set_fpsr @ 0x14053B080 (_set_fpsr.c)
 */

__int64 __fastcall ctrlfp(int a1, int a2)
{
  unsigned int fpsr; // esi
  __int64 v5; // rcx

  fpsr = get_fpsr();
  v5 = a2 & a1 | fpsr & (~(_WORD)a2 | 0xFFFF807F);
  if ( byte_140E0A690 && (((unsigned __int8)(a2 & a1) | fpsr & ((unsigned __int8)~(_BYTE)a2 | 0x7F)) & 0x40) != 0 )
    set_fpsr(v5);
  else
    set_fpsr((unsigned int)v5 & 0xFFFFFFBF);
  return fpsr;
}
