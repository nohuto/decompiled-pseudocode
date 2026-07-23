/*
 * XREFs of _get_fpsr @ 0x14053D4F0
 * Callers:
 *     _clrfp @ 0x14053D3C0 (_clrfp.c)
 *     _ctrlfp @ 0x14053D3F0 (_ctrlfp.c)
 *     _set_statfp @ 0x14053D480 (_set_statfp.c)
 *     _statfp @ 0x14053D4B0 (_statfp.c)
 * Callees:
 *     <none>
 */

__int64 get_fpsr()
{
  return (unsigned int)_mm_getcsr();
}
