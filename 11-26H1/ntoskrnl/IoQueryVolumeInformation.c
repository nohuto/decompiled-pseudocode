/*
 * XREFs of IoQueryVolumeInformation @ 0x1409B7DE0
 * Callers:
 *     MiPageFileVolumeFreeSpace @ 0x1404E7680 (MiPageFileVolumeFreeSpace.c)
 * Callees:
 *     IopQueryXxxInformation @ 0x1409B8C10 (IopQueryXxxInformation.c)
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
