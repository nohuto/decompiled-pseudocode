/*
 * XREFs of ZwSetInformationIoRing @ 0x14072B4E0
 * Callers:
 *     DifZwSetInformationIoRingWrapper @ 0x1406BDBA0 (DifZwSetInformationIoRingWrapper.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwSetInformationIoRing(
        HANDLE IoRingHandle,
        ULONG IoRingInformationClass,
        ULONG IoRingInformationLength,
        PVOID IoRingInformation)
{
  _disable();
  __readeflags();
  return KiServiceInternal(IoRingHandle);
}
