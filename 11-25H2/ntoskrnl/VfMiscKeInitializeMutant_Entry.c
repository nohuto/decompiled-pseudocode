/*
 * XREFs of VfMiscKeInitializeMutant_Entry @ 0x140B8DD40
 * Callers:
 *     <none>
 * Callees:
 *     ViMiscValidateSynchronizationObject @ 0x140B8F6C8 (ViMiscValidateSynchronizationObject.c)
 */

__int64 __fastcall VfMiscKeInitializeMutant_Entry(__int64 a1)
{
  return ViMiscValidateSynchronizationObject(*(_QWORD *)(a1 + 16));
}
