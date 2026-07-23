/*
 * XREFs of ZwReleaseMutant @ 0x1407283C0
 * Callers:
 *     DifZwReleaseMutantWrapper @ 0x1406BA4A0 (DifZwReleaseMutantWrapper.c)
 *     BiReleaseBcdSyncMutant @ 0x1409A4F38 (BiReleaseBcdSyncMutant.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwReleaseMutant(HANDLE MutantHandle, PLONG PreviousCount)
{
  _disable();
  __readeflags();
  return KiServiceInternal(MutantHandle);
}
