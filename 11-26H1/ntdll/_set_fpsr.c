/*
 * XREFs of _set_fpsr @ 0x1801327B0
 * Callers:
 *     _control87 @ 0x18012FFC0 (_control87.c)
 *     _ctrlfp @ 0x1801316F0 (_ctrlfp.c)
 *     _set_statfp @ 0x180131780 (_set_statfp.c)
 * Callees:
 *     <none>
 */

void __fastcall set_fpsr(unsigned int a1)
{
  _mm_setcsr(a1);
}
