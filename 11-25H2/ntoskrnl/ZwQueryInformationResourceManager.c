/*
 * XREFs of ZwQueryInformationResourceManager @ 0x14069DC40
 * Callers:
 *     DifZwQueryInformationResourceManagerWrapper @ 0x140639520 (DifZwQueryInformationResourceManagerWrapper.c)
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
