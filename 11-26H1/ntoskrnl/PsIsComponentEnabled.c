/*
 * XREFs of PsIsComponentEnabled @ 0x1404F5350
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

bool __fastcall PsIsComponentEnabled(int a1)
{
  return (a1 & (__int64)KeGetCurrentThread()->ApcState.Process[4].ActiveProcessors) == 0;
}
