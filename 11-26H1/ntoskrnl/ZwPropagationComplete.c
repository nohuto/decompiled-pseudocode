/*
 * XREFs of ZwPropagationComplete @ 0x14072A880
 * Callers:
 *     DifZwPropagationCompleteWrapper @ 0x1406B2DD0 (DifZwPropagationCompleteWrapper.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwPropagationComplete(
        HANDLE ResourceManagerHandle,
        ULONG RequestCookie,
        ULONG BufferLength,
        PVOID Buffer)
{
  _disable();
  __readeflags();
  return KiServiceInternal(ResourceManagerHandle);
}
