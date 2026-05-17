/*
 * XREFs of _matherr @ 0x180132810
 * Callers:
 *     _call_matherr @ 0x180130280 (_call_matherr.c)
 *     _umatherr @ 0x1801313B0 (_umatherr.c)
 * Callees:
 *     <none>
 */

int __cdecl matherr(struct _exception *Except)
{
  return 0;
}
