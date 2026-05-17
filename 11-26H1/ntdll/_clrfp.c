/*
 * XREFs of _clrfp @ 0x1801316C0
 * Callers:
 *     _raise_exc_ex @ 0x180131070 (_raise_exc_ex.c)
 * Callees:
 *     _get_fpsr @ 0x1801327A0 (_get_fpsr.c)
 *     _fclrf @ 0x1801327C0 (_fclrf.c)
 */

__int64 clrfp()
{
  __int64 v0; // rbx

  v0 = get_fpsr() & 0x3F;
  fclrf();
  return (unsigned int)v0;
}
