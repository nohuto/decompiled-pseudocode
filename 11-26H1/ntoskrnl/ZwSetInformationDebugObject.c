/*
 * XREFs of ZwSetInformationDebugObject @ 0x14072B4A0
 * Callers:
 *     DifZwSetInformationDebugObjectWrapper @ 0x1406BD6C0 (DifZwSetInformationDebugObjectWrapper.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwSetInformationDebugObject(
        HANDLE DebugObjectHandle,
        DEBUGOBJECTINFOCLASS DebugObjectInformationClass,
        PVOID DebugInformation,
        ULONG DebugInformationLength,
        PULONG ReturnLength)
{
  _disable();
  __readeflags();
  return KiServiceInternal(DebugObjectHandle);
}
