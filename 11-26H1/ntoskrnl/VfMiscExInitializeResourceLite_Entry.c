/*
 * XREFs of VfMiscExInitializeResourceLite_Entry @ 0x140C3CA10
 * Callers:
 *     <none>
 * Callees:
 *     ViMiscValidateSynchronizationObject @ 0x140C20518 (ViMiscValidateSynchronizationObject.c)
 */

BOOLEAN __fastcall VfMiscExInitializeResourceLite_Entry(__int64 a1)
{
  return ViMiscValidateSynchronizationObject(*(PVOID *)(a1 + 8), 0x68uLL, *(_QWORD *)a1);
}
