/*
 * XREFs of _matherr @ 0x180132580
 * Callers:
 *     _call_matherr @ 0x18012FFF0 (_call_matherr.c)
 *     _umatherr @ 0x180131120 (_umatherr.c)
 * Callees:
 *     <none>
 */

int __cdecl matherr(struct _exception *Except)
{
  return 0;
}
