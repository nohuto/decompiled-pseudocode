/*
 * XREFs of iswgraph @ 0x18012AB00
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

int __cdecl iswgraph(wint_t C)
{
  return iswctype(C, 0x117u);
}
