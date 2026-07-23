/*
 * XREFs of MiTransformVadSecure @ 0x140A9E8F4
 * Callers:
 *     MmLockPhysicalPagesByVa @ 0x1406EF4CC (MmLockPhysicalPagesByVa.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiTransformVadSecure(__int64 a1)
{
  return qword_140E2D7C0 ^ a1;
}
