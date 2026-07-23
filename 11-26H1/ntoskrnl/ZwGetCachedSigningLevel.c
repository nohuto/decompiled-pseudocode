/*
 * XREFs of ZwGetCachedSigningLevel @ 0x140729EE0
 * Callers:
 *     DifZwGetCachedSigningLevelWrapper @ 0x1406AAD80 (DifZwGetCachedSigningLevelWrapper.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwGetCachedSigningLevel(
        HANDLE File,
        PULONG Flags,
        PSE_SIGNING_LEVEL SigningLevel,
        PUCHAR Thumbprint,
        PULONG ThumbprintSize,
        PULONG ThumbprintAlgorithm)
{
  _disable();
  __readeflags();
  return KiServiceInternal(File);
}
