/*
 * XREFs of _statfp @ 0x140500620
 * Callers:
 *     _raise_exc_ex @ 0x1405001D0 (_raise_exc_ex.c)
 * Callees:
 *     _get_fpsr @ 0x140500660 (_get_fpsr.c)
 */

__int64 statfp()
{
  return get_fpsr() & 0x3F;
}
