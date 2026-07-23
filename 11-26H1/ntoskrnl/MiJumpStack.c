/*
 * XREFs of MiJumpStack @ 0x1403CB1B0
 * Callers:
 *     <none>
 * Callees:
 *     KeGenericCallDpcEx @ 0x1403CC184 (KeGenericCallDpcEx.c)
 */

__int64 __fastcall MiJumpStack(__int64 a1)
{
  return KeGenericCallDpcEx(MiDoStackCopy, a1);
}
