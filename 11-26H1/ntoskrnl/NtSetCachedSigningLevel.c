/*
 * XREFs of NtSetCachedSigningLevel @ 0x140B0E290
 * Callers:
 *     DifNtSetCachedSigningLevelWrapper @ 0x14068E730 (DifNtSetCachedSigningLevelWrapper.c)
 * Callees:
 *     NtSetCachedSigningLevel2 @ 0x140B0E2C0 (NtSetCachedSigningLevel2.c)
 */

NTSTATUS __cdecl NtSetCachedSigningLevel(
        ULONG Flags,
        SE_SIGNING_LEVEL InputSigningLevel,
        PHANDLE SourceFiles,
        ULONG SourceFileCount,
        HANDLE TargetFile)
{
  return NtSetCachedSigningLevel2(Flags, InputSigningLevel, SourceFiles, SourceFileCount, TargetFile, 0LL);
}
