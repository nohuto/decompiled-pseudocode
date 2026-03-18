/*
 * XREFs of VfMiscKeInitializeMutant_Entry @ 0x140C3CD50
 * Callers:
 *     <none>
 * Callees:
 *     ViMiscValidateSynchronizationObject @ 0x140C20518 (ViMiscValidateSynchronizationObject.c)
 */

BOOLEAN __fastcall VfMiscKeInitializeMutant_Entry(__int64 a1)
{
  return ViMiscValidateSynchronizationObject(*(PVOID *)(a1 + 16), 0x38uLL, *(_QWORD *)a1);
}
