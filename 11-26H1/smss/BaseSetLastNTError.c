/*
 * XREFs of BaseSetLastNTError @ 0x14001E6D0
 * Callers:
 *     BasepGetFileNameInformation @ 0x14001AA60 (BasepGetFileNameInformation.c)
 *     BasepGetObjectNTName @ 0x14001AB84 (BasepGetObjectNTName.c)
 *     DeviceIoControl @ 0x14001B414 (DeviceIoControl.c)
 *     InternalGetFileAttributesW @ 0x14001BBC8 (InternalGetFileAttributesW.c)
 *     CreateFileInternal @ 0x14001BD6C (CreateFileInternal.c)
 *     CloseHandle @ 0x14001C5D4 (CloseHandle.c)
 *     BasepOpenParentDirectoryNoRedirection @ 0x14001D0E8 (BasepOpenParentDirectoryNoRedirection.c)
 *     SetErrorMode @ 0x14001D490 (SetErrorMode.c)
 *     FindClose @ 0x14001D5F0 (FindClose.c)
 *     InternalFindFirstFileExW @ 0x14001D704 (InternalFindFirstFileExW.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall BaseSetLastNTError(NTSTATUS a1)
{
  ULONG v1; // ebx

  v1 = RtlNtStatusToDosError(a1);
  RtlSetLastWin32Error(v1);
  return v1;
}
