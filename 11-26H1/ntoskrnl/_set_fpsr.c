/*
 * XREFs of _set_fpsr @ 0x14053D500
 * Callers:
 *     _ctrlfp @ 0x14053D3F0 (_ctrlfp.c)
 *     _set_statfp @ 0x14053D480 (_set_statfp.c)
 * Callees:
 *     <none>
 */

void __fastcall set_fpsr(unsigned int a1)
{
  _mm_setcsr(a1);
}
