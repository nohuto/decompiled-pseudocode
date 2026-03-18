/*
 * XREFs of VfMiscKeInitializeSemaphore_Entry @ 0x140C3CD80
 * Callers:
 *     <none>
 * Callees:
 *     ViMiscValidateSynchronizationObject @ 0x140C20518 (ViMiscValidateSynchronizationObject.c)
 */

BOOLEAN __fastcall VfMiscKeInitializeSemaphore_Entry(__int64 a1)
{
  return ViMiscValidateSynchronizationObject(*(PVOID *)(a1 + 16), 0x20uLL, *(_QWORD *)a1);
}
