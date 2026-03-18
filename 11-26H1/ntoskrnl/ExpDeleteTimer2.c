/*
 * XREFs of ExpDeleteTimer2 @ 0x140AD4610
 * Callers:
 *     <none>
 * Callees:
 *     KeDisableTimer2 @ 0x1403AA104 (KeDisableTimer2.c)
 */

char __fastcall ExpDeleteTimer2(__int64 a1)
{
  return KeDisableTimer2(a1, 1, 1, 0LL);
}
