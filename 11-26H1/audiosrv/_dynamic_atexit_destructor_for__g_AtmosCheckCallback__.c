/*
 * XREFs of _dynamic_atexit_destructor_for__g_AtmosCheckCallback__ @ 0x18016CF30
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void **dynamic_atexit_destructor_for__g_AtmosCheckCallback__()
{
  void **result; // rax

  result = &MyAtmosCheckCallback::`vftable';
  g_AtmosCheckCallback[0] = &MyAtmosCheckCallback::`vftable';
  return result;
}
