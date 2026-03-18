/*
 * XREFs of ZwReleaseMutant @ 0x1407237F0
 * Callers:
 *     DifZwReleaseMutantWrapper @ 0x1406B68C0 (DifZwReleaseMutantWrapper.c)
 *     BiReleaseBcdSyncMutant @ 0x1409D3F58 (BiReleaseBcdSyncMutant.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ZwReleaseMutant(__int64 a1, __int64 a2)
{
  _disable();
  __readeflags();
  return KiServiceInternal(a1, a2);
}
