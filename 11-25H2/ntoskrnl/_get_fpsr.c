/*
 * XREFs of _get_fpsr @ 0x140500660
 * Callers:
 *     _clrfp @ 0x140500530 (_clrfp.c)
 *     _ctrlfp @ 0x140500560 (_ctrlfp.c)
 *     _set_statfp @ 0x1405005F0 (_set_statfp.c)
 *     _statfp @ 0x140500620 (_statfp.c)
 * Callees:
 *     <none>
 */

__int64 get_fpsr()
{
  return (unsigned int)_mm_getcsr();
}
