/*
 * XREFs of _statfp @ 0x180131520
 * Callers:
 *     _raise_exc_ex @ 0x180130DE0 (_raise_exc_ex.c)
 * Callees:
 *     _get_fpsr @ 0x180132510 (_get_fpsr.c)
 */

__int64 statfp()
{
  return get_fpsr() & 0x3F;
}
