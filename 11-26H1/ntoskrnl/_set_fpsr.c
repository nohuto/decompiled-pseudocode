/*
 * XREFs of _set_fpsr @ 0x14053B080
 * Callers:
 *     _ctrlfp @ 0x14053AF70 (_ctrlfp.c)
 *     _set_statfp @ 0x14053B000 (_set_statfp.c)
 * Callees:
 *     <none>
 */

void __fastcall set_fpsr(unsigned int a1)
{
  _mm_setcsr(a1);
}
