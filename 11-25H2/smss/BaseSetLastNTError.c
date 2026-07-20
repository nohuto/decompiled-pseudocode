/*
 * XREFs of BaseSetLastNTError @ 0x14001EE28
 * Callers:
 *     BasepGetFileNameInformation @ 0x14001A318 (BasepGetFileNameInformation.c)
 *     BasepGetObjectNTName @ 0x14001A43C (BasepGetObjectNTName.c)
 *     DeviceIoControl @ 0x14001ACD0 (DeviceIoControl.c)
 *     InternalGetFileAttributesW @ 0x14001B4F8 (InternalGetFileAttributesW.c)
 *     CreateFileInternal @ 0x14001C07C (CreateFileInternal.c)
 *     CloseHandle @ 0x14001CA80 (CloseHandle.c)
 *     BasepGetModuleHandleExW @ 0x14001D250 (BasepGetModuleHandleExW.c)
 *     GetProcAddressForCaller @ 0x14001D308 (GetProcAddressForCaller.c)
 *     BasepOpenParentDirectoryNoRedirection @ 0x14001D7FC (BasepOpenParentDirectoryNoRedirection.c)
 *     SetErrorMode @ 0x14001DC10 (SetErrorMode.c)
 *     FindClose @ 0x14001DD64 (FindClose.c)
 *     InternalFindFirstFileExW @ 0x14001DE78 (InternalFindFirstFileExW.c)
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
