/*
 * XREFs of ZwSetInformationResourceManager @ 0x14072B540
 * Callers:
 *     DifZwSetInformationResourceManagerWrapper @ 0x1406BE370 (DifZwSetInformationResourceManagerWrapper.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwSetInformationResourceManager(
        HANDLE ResourceManagerHandle,
        RESOURCEMANAGER_INFORMATION_CLASS ResourceManagerInformationClass,
        PVOID ResourceManagerInformation,
        ULONG ResourceManagerInformationLength)
{
  _disable();
  __readeflags();
  return KiServiceInternal(ResourceManagerHandle);
}
