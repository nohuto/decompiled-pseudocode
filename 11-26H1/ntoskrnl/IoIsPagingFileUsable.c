/*
 * XREFs of IoIsPagingFileUsable @ 0x140799034
 * Callers:
 *     MiCreatePagingFile @ 0x140871844 (MiCreatePagingFile.c)
 * Callees:
 *     IoGetRelatedDeviceObject @ 0x14026BFA0 (IoGetRelatedDeviceObject.c)
 *     PiPagePathSetState @ 0x1407A6950 (PiPagePathSetState.c)
 *     IopQueryXxxInformation @ 0x140989BF0 (IopQueryXxxInformation.c)
 *     FsRtlIssueFileNotificationFsctl @ 0x140B3B354 (FsRtlIssueFileNotificationFsctl.c)
 */

__int64 __fastcall IoIsPagingFileUsable(PFILE_OBJECT FileObject)
{
  ULONG DeviceType; // eax
  __int64 result; // rax
  unsigned int v4; // ebx
  __int64 v5; // [rsp+58h] [rbp+10h] BYREF
  __int64 v6; // [rsp+60h] [rbp+18h] BYREF

  v6 = 0LL;
  DeviceType = IoGetRelatedDeviceObject(FileObject)->DeviceType;
  if ( DeviceType != 8 && DeviceType != 20 && DeviceType - 53 > 1 )
    return 3221225807LL;
  result = IopQueryXxxInformation((ULONG_PTR)FileObject, (__int64)&v6, (__int64)&v5, 0);
  if ( (int)result >= 0 )
  {
    if ( (v6 & 0x400000000LL) != 0 )
    {
      return 3221225828LL;
    }
    else
    {
      result = PiPagePathSetState(FileObject);
      v4 = result;
      if ( (int)result >= 0 )
      {
        FsRtlIssueFileNotificationFsctl(FileObject);
        return v4;
      }
    }
  }
  return result;
}
