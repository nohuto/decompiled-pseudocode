/*
 * XREFs of MiJumpStack @ 0x1403C12B0
 * Callers:
 *     <none>
 * Callees:
 *     KeGenericCallDpcEx @ 0x1403C2284 (KeGenericCallDpcEx.c)
 */

__int64 __fastcall MiJumpStack(__int64 a1)
{
  return KeGenericCallDpcEx(MiDoStackCopy, a1);
}
