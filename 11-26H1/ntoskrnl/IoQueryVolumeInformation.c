/*
 * XREFs of IoQueryVolumeInformation @ 0x140988DC0
 * Callers:
 *     MiPageFileVolumeFreeSpace @ 0x1404E0A3C (MiPageFileVolumeFreeSpace.c)
 * Callees:
 *     IopQueryXxxInformation @ 0x140989BF0 (IopQueryXxxInformation.c)
 */

NTSTATUS __stdcall IoQueryVolumeInformation(
        PFILE_OBJECT FileObject,
        FS_INFORMATION_CLASS FsInformationClass,
        ULONG Length,
        PVOID FsInformation,
        PULONG ReturnedLength)
{
  return IopQueryXxxInformation((ULONG_PTR)FileObject, (__int64)FsInformation, (__int64)ReturnedLength, 0);
}
