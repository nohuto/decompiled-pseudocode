/*
 * XREFs of ZwDuplicateObject @ 0x140723B70
 * Callers:
 *     SepReferenceCachedTokenHandles @ 0x1404CE7B0 (SepReferenceCachedTokenHandles.c)
 *     DifZwDuplicateObjectWrapper @ 0x1406A4E20 (DifZwDuplicateObjectWrapper.c)
 *     _SysCtxOpenMachine @ 0x14089CC70 (_SysCtxOpenMachine.c)
 *     ObpCreateHandle @ 0x14092CA60 (ObpCreateHandle.c)
 *     SeAuditHandleCreation @ 0x1409FAC60 (SeAuditHandleCreation.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwDuplicateObject(
        HANDLE SourceProcessHandle,
        HANDLE SourceHandle,
        HANDLE TargetProcessHandle,
        PHANDLE TargetHandle,
        ACCESS_MASK DesiredAccess,
        ULONG HandleAttributes,
        ULONG Options)
{
  _disable();
  __readeflags();
  return KiServiceInternal(SourceProcessHandle, SourceHandle);
}
