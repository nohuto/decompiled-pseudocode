/*
 * XREFs of _set_statfp @ 0x1405005F0
 * Callers:
 *     _exception_enabled @ 0x1404FFAC0 (_exception_enabled.c)
 * Callees:
 *     _get_fpsr @ 0x140500660 (_get_fpsr.c)
 *     _set_fpsr @ 0x140500670 (_set_fpsr.c)
 */

__int64 __fastcall set_statfp(char a1)
{
  unsigned int fpsr; // eax

  fpsr = get_fpsr();
  return set_fpsr(a1 & 0x3F | fpsr);
}
