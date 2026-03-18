/*
 * XREFs of MiTransformVadSecure @ 0x140A9BD84
 * Callers:
 *     MmLockPhysicalPagesByVa @ 0x1406EA82C (MmLockPhysicalPagesByVa.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiTransformVadSecure(__int64 a1)
{
  return qword_140E2D640 ^ a1;
}
