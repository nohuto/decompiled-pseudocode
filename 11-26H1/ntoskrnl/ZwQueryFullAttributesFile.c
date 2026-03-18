/*
 * XREFs of ZwQueryFullAttributesFile @ 0x140725E30
 * Callers:
 *     DifZwQueryFullAttributesFileWrapper @ 0x1406B0BB0 (DifZwQueryFullAttributesFileWrapper.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwQueryFullAttributesFile(
        POBJECT_ATTRIBUTES ObjectAttributes,
        PFILE_NETWORK_OPEN_INFORMATION FileInformation)
{
  _disable();
  __readeflags();
  return KiServiceInternal(ObjectAttributes, FileInformation);
}
