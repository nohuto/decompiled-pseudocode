/*
 * XREFs of _set_fpsr @ 0x14001C610
 * Callers:
 *     _ctrlfp @ 0x14001C500 (_ctrlfp.c)
 *     _set_statfp @ 0x14001C590 (_set_statfp.c)
 * Callees:
 *     <none>
 */

void __fastcall set_fpsr(unsigned int a1)
{
  _mm_setcsr(a1);
}
