/*
 * XREFs of VfMiscKeInitializeEvent_Entry @ 0x140C480A0
 * Callers:
 *     <none>
 * Callees:
 *     ViMiscValidateSynchronizationObject @ 0x140C20518 (ViMiscValidateSynchronizationObject.c)
 */

BOOLEAN __fastcall VfMiscKeInitializeEvent_Entry(__int64 a1)
{
  return ViMiscValidateSynchronizationObject(*(PVOID *)(a1 + 16), 0x18uLL, *(_QWORD *)a1);
}
