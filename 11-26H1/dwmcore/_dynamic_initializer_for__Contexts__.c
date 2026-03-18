/*
 * XREFs of _dynamic_initializer_for__Contexts__ @ 0x180007520
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

int dynamic_initializer_for__Contexts__()
{
  RtlInitializeSRWLock(&unk_1803DE630);
  return atexit((void (__cdecl *)())dynamic_atexit_destructor_for__Contexts__);
}
