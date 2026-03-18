/*
 * XREFs of VfMiscKeInitializeTimerEx_Entry @ 0x140C3CDB0
 * Callers:
 *     <none>
 * Callees:
 *     ViMiscValidateSynchronizationObject @ 0x140C20518 (ViMiscValidateSynchronizationObject.c)
 */

BOOLEAN __fastcall VfMiscKeInitializeTimerEx_Entry(__int64 a1)
{
  return ViMiscValidateSynchronizationObject(*(PVOID *)(a1 + 16), 0x40uLL, *(_QWORD *)a1);
}
