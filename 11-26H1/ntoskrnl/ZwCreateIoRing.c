/*
 * XREFs of ZwCreateIoRing @ 0x140729620
 * Callers:
 *     DifZwCreateIoRingWrapper @ 0x1406A3180 (DifZwCreateIoRingWrapper.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwCreateIoRing(
        PHANDLE IoRingHandle,
        ULONG CreateParametersLength,
        PVOID CreateParameters,
        ULONG OutputParametersLength,
        PVOID OutputParameters)
{
  _disable();
  __readeflags();
  return KiServiceInternal(IoRingHandle);
}
