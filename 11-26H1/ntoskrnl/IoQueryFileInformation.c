/*
 * XREFs of IoQueryFileInformation @ 0x140989BC0
 * Callers:
 *     <none>
 * Callees:
 *     IopQueryXxxInformation @ 0x140989BF0 (IopQueryXxxInformation.c)
 */

NTSTATUS __stdcall IoQueryFileInformation(
        PFILE_OBJECT FileObject,
        FILE_INFORMATION_CLASS FileInformationClass,
        ULONG Length,
        PVOID FileInformation,
        PULONG ReturnedLength)
{
  return IopQueryXxxInformation((ULONG_PTR)FileObject, (__int64)FileInformation, (__int64)ReturnedLength, 1);
}
