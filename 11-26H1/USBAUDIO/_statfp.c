/*
 * XREFs of _statfp @ 0x14001C5C0
 * Callers:
 *     _raise_exc_ex @ 0x14001C170 (_raise_exc_ex.c)
 * Callees:
 *     _get_fpsr @ 0x14001C600 (_get_fpsr.c)
 */

__int64 statfp()
{
  return get_fpsr() & 0x3F;
}
