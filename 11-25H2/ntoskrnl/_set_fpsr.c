/*
 * XREFs of _set_fpsr @ 0x140500670
 * Callers:
 *     _ctrlfp @ 0x140500560 (_ctrlfp.c)
 *     _set_statfp @ 0x1405005F0 (_set_statfp.c)
 * Callees:
 *     <none>
 */

void __fastcall set_fpsr(unsigned int a1)
{
  _mm_setcsr(a1);
}
