/*
 * XREFs of ZwCreateMutant @ 0x140729700
 * Callers:
 *     DifZwCreateMutantWrapper @ 0x1406A3F00 (DifZwCreateMutantWrapper.c)
 *     BcdInitializeBcdSyncMutant @ 0x1408973B8 (BcdInitializeBcdSyncMutant.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwCreateMutant(
        PHANDLE MutantHandle,
        ACCESS_MASK DesiredAccess,
        POBJECT_ATTRIBUTES ObjectAttributes,
        BOOLEAN InitialOwner)
{
  _disable();
  __readeflags();
  return KiServiceInternal(MutantHandle);
}
