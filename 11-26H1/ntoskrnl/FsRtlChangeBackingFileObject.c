/*
 * XREFs of FsRtlChangeBackingFileObject @ 0x14047AFF0
 * Callers:
 *     <none>
 * Callees:
 *     MmChangeSectionBackingFile @ 0x14047B03C (MmChangeSectionBackingFile.c)
 *     CcChangeBackingFileObject @ 0x14047B150 (CcChangeBackingFileObject.c)
 */

NTSTATUS __stdcall FsRtlChangeBackingFileObject(
        PFILE_OBJECT CurrentFileObject,
        PFILE_OBJECT NewFileObject,
        FSRTL_CHANGE_BACKING_TYPE ChangeBackingType,
        ULONG Flags)
{
  __int64 v4; // r8
  __int32 v6; // r8d

  if ( Flags )
    return -1073741582;
  if ( ChangeBackingType == ChangeDataControlArea )
  {
    v4 = 1LL;
    return MmChangeSectionBackingFile(CurrentFileObject, NewFileObject, v4);
  }
  v6 = ChangeBackingType - 1;
  if ( !v6 )
  {
    v4 = 2LL;
    return MmChangeSectionBackingFile(CurrentFileObject, NewFileObject, v4);
  }
  if ( v6 == 1 )
    return CcChangeBackingFileObject(CurrentFileObject, NewFileObject);
  else
    return -1073741583;
}
