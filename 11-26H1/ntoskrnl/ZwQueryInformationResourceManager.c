/*
 * XREFs of ZwQueryInformationResourceManager @ 0x14072AAE0
 * Callers:
 *     DifZwQueryInformationResourceManagerWrapper @ 0x1406B54A0 (DifZwQueryInformationResourceManagerWrapper.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwQueryInformationResourceManager(
        HANDLE ResourceManagerHandle,
        RESOURCEMANAGER_INFORMATION_CLASS ResourceManagerInformationClass,
        PVOID ResourceManagerInformation,
        ULONG ResourceManagerInformationLength,
        PULONG ReturnLength)
{
  _disable();
  __readeflags();
  return KiServiceInternal(ResourceManagerHandle);
}
