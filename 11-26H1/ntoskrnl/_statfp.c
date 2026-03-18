/*
 * XREFs of _statfp @ 0x14053B030
 * Callers:
 *     _raise_exc_ex @ 0x14053ABE0 (_raise_exc_ex.c)
 * Callees:
 *     _get_fpsr @ 0x14053B070 (_get_fpsr.c)
 */

__int64 statfp()
{
  return get_fpsr() & 0x3F;
}
