/*
 * XREFs of LdrAccessResource @ 0x140A8DDE0
 * Callers:
 *     InitBootProcessor @ 0x140CB07CC (InitBootProcessor.c)
 *     FindBitmapResource @ 0x140CC035C (FindBitmapResource.c)
 * Callees:
 *     LdrpAccessResourceData @ 0x140A8E9F8 (LdrpAccessResourceData.c)
 */

NTSTATUS __cdecl LdrAccessResource(
        PVOID DllHandle,
        PIMAGE_RESOURCE_DATA_ENTRY ResourceDataEntry,
        PVOID *ResourceBuffer,
        ULONG *ResourceLength)
{
  return LdrpAccessResourceData(DllHandle, ResourceDataEntry, ResourceBuffer, ResourceLength);
}
