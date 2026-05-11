/*
 * XREFs of _get_fpsr @ 0x14001C600
 * Callers:
 *     _clrfp @ 0x14001C4D0 (_clrfp.c)
 *     _ctrlfp @ 0x14001C500 (_ctrlfp.c)
 *     _set_statfp @ 0x14001C590 (_set_statfp.c)
 *     _statfp @ 0x14001C5C0 (_statfp.c)
 * Callees:
 *     <none>
 */

__int64 get_fpsr()
{
  return (unsigned int)_mm_getcsr();
}
