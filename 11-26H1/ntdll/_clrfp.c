/*
 * XREFs of _clrfp @ 0x180131430
 * Callers:
 *     _raise_exc_ex @ 0x180130DE0 (_raise_exc_ex.c)
 * Callees:
 *     _get_fpsr @ 0x180132510 (_get_fpsr.c)
 *     _fclrf @ 0x180132530 (_fclrf.c)
 */

__int64 clrfp()
{
  __int64 v0; // rbx

  v0 = get_fpsr() & 0x3F;
  fclrf();
  return (unsigned int)v0;
}
