/*
 * XREFs of ZwDuplicateObject @ 0x14069B8C0
 * Callers:
 *     SepReferenceCachedTokenHandles @ 0x140492024 (SepReferenceCachedTokenHandles.c)
 *     DifZwDuplicateObjectWrapper @ 0x1406333D0 (DifZwDuplicateObjectWrapper.c)
 *     _SysCtxOpenMachine @ 0x140810504 (_SysCtxOpenMachine.c)
 *     ObpCreateHandle @ 0x1408518D0 (ObpCreateHandle.c)
 *     SeAuditHandleCreation @ 0x140984F00 (SeAuditHandleCreation.c)
 *     SmKmFileInfoDuplicate @ 0x140AAC5AC (SmKmFileInfoDuplicate.c)
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
