/*
 * XREFs of VfMiscKeInitializeTimerEx_Entry @ 0x140C42DC0
 * Callers:
 *     <none>
 * Callees:
 *     ViMiscValidateSynchronizationObject @ 0x140C26524 (ViMiscValidateSynchronizationObject.c)
 */

BOOLEAN __fastcall VfMiscKeInitializeTimerEx_Entry(__int64 a1)
{
  return ViMiscValidateSynchronizationObject(*(PVOID *)(a1 + 16), 0x40uLL, *(_QWORD *)a1);
}
