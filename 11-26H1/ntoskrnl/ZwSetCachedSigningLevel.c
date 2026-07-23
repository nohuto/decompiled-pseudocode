/*
 * XREFs of ZwSetCachedSigningLevel @ 0x14072B2E0
 * Callers:
 *     DifZwSetCachedSigningLevelWrapper @ 0x1406BCA90 (DifZwSetCachedSigningLevelWrapper.c)
 *     sub_140A231CC @ 0x140A231CC (sub_140A231CC.c)
 * Callees:
 *     <none>
 */

// local variable allocation has failed, the output may be wrong!
NTSTATUS __cdecl ZwSetCachedSigningLevel(
        ULONG Flags,
        SE_SIGNING_LEVEL InputSigningLevel,
        PHANDLE SourceFiles,
        ULONG SourceFileCount,
        HANDLE TargetFile)
{
  _disable();
  __readeflags();
  return KiServiceInternal(*(_QWORD *)&Flags);
}
