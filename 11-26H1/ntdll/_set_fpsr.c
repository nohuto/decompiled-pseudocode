/*
 * XREFs of _set_fpsr @ 0x180132520
 * Callers:
 *     _control87 @ 0x18012FD30 (_control87.c)
 *     _ctrlfp @ 0x180131460 (_ctrlfp.c)
 *     _set_statfp @ 0x1801314F0 (_set_statfp.c)
 * Callees:
 *     <none>
 */

void __fastcall set_fpsr(unsigned int a1)
{
  _mm_setcsr(a1);
}
