/*
 * XREFs of _get_fpsr @ 0x1801327A0
 * Callers:
 *     _control87 @ 0x18012FFC0 (_control87.c)
 *     _clrfp @ 0x1801316C0 (_clrfp.c)
 *     _ctrlfp @ 0x1801316F0 (_ctrlfp.c)
 *     _set_statfp @ 0x180131780 (_set_statfp.c)
 *     _statfp @ 0x1801317B0 (_statfp.c)
 * Callees:
 *     <none>
 */

__int64 get_fpsr()
{
  return (unsigned int)_mm_getcsr();
}
