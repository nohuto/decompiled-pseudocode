/*
 * XREFs of ZwOpenMutant @ 0x14072A5C0
 * Callers:
 *     DifZwOpenMutantWrapper @ 0x1406B0200 (DifZwOpenMutantWrapper.c)
 *     BiAcquireBcdSyncMutant @ 0x1409A513C (BiAcquireBcdSyncMutant.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwOpenMutant(PHANDLE MutantHandle, ACCESS_MASK DesiredAccess, POBJECT_ATTRIBUTES ObjectAttributes)
{
  _disable();
  __readeflags();
  return KiServiceInternal(MutantHandle);
}
