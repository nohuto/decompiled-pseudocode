/*
 * XREFs of ZwOpenMutant @ 0x1407259F0
 * Callers:
 *     DifZwOpenMutantWrapper @ 0x1406AC620 (DifZwOpenMutantWrapper.c)
 *     BiAcquireBcdSyncMutant @ 0x1409D415C (BiAcquireBcdSyncMutant.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ZwOpenMutant(__int64 a1, __int64 a2)
{
  _disable();
  __readeflags();
  return KiServiceInternal(a1, a2);
}
