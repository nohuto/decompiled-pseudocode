/*
 * XREFs of ZwDuplicateObject @ 0x140728740
 * Callers:
 *     SepReferenceCachedTokenHandles @ 0x1404C81E0 (SepReferenceCachedTokenHandles.c)
 *     DifZwDuplicateObjectWrapper @ 0x1406A8A00 (DifZwDuplicateObjectWrapper.c)
 *     _SysCtxOpenMachine @ 0x1408A3070 (_SysCtxOpenMachine.c)
 *     ObpCreateHandle @ 0x140908590 (ObpCreateHandle.c)
 *     SeAuditHandleCreation @ 0x14091F860 (SeAuditHandleCreation.c)
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
  return KiServiceInternal(SourceProcessHandle);
}
