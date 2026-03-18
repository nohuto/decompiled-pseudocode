/*
 * XREFs of _get_fpsr @ 0x14053B070
 * Callers:
 *     _clrfp @ 0x14053AF40 (_clrfp.c)
 *     _ctrlfp @ 0x14053AF70 (_ctrlfp.c)
 *     _set_statfp @ 0x14053B000 (_set_statfp.c)
 *     _statfp @ 0x14053B030 (_statfp.c)
 * Callees:
 *     <none>
 */

__int64 get_fpsr()
{
  return (unsigned int)_mm_getcsr();
}
