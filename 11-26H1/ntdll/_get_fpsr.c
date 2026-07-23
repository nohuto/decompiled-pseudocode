/*
 * XREFs of _get_fpsr @ 0x180132510
 * Callers:
 *     _control87 @ 0x18012FD30 (_control87.c)
 *     _clrfp @ 0x180131430 (_clrfp.c)
 *     _ctrlfp @ 0x180131460 (_ctrlfp.c)
 *     _set_statfp @ 0x1801314F0 (_set_statfp.c)
 *     _statfp @ 0x180131520 (_statfp.c)
 * Callees:
 *     <none>
 */

__int64 get_fpsr()
{
  return (unsigned int)_mm_getcsr();
}
