/*
 * XREFs of _clrfp @ 0x14001C4D0
 * Callers:
 *     _raise_exc_ex @ 0x14001C170 (_raise_exc_ex.c)
 * Callees:
 *     _get_fpsr @ 0x14001C600 (_get_fpsr.c)
 *     _fclrf @ 0x14001C620 (_fclrf.c)
 */

__int64 clrfp()
{
  __int64 v0; // rbx

  v0 = get_fpsr() & 0x3F;
  fclrf();
  return (unsigned int)v0;
}
