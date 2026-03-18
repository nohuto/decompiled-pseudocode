/*
 * XREFs of ?VerifyDWMApiSetImplementation@@YAJXZ @ 0x140189774
 * Callers:
 *     Win32kBaseDriverEntry @ 0x1402F04E0 (Win32kBaseDriverEntry.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_d @ 0x140099D08 (WPP_RECORDER_AND_TRACE_SF_d.c)
 */

__int64 VerifyDWMApiSetImplementation(void)
{
  char v0; // di
  int v1; // edx
  NTSTATUS v2; // ebx
  int v3; // r8d
  bool v4; // si
  __int64 UserSessionState; // rax
  int v6; // r8d
  int v7; // edx
  struct _UNICODE_STRING DestinationString; // [rsp+58h] [rbp+7h] BYREF
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+68h] [rbp+17h] BYREF
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+78h] [rbp+27h] BYREF
  void *FileHandle; // [rsp+B8h] [rbp+67h] BYREF

  *(&ObjectAttributes.Length + 1) = 0;
  *(&ObjectAttributes.Attributes + 1) = 0;
  FileHandle = 0LL;
  IoStatusBlock = 0LL;
  DestinationString = 0LL;
  RtlInitUnicodeString(&DestinationString, L"\\SystemRoot\\System32\\dwminit.dll");
  ObjectAttributes.ObjectName = &DestinationString;
  v0 = 1;
  ObjectAttributes.Length = 48;
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.Attributes = 576;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  v2 = ZwOpenFile(&FileHandle, 0x80000000, &ObjectAttributes, &IoStatusBlock, 1u, 0);
  if ( v2 < 0 )
  {
    if ( v2 != -1073741772 )
    {
      if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
        || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 4) == 0
        || *((_BYTE *)WPP_GLOBAL_Control + 41) < 3u )
      {
        v0 = 0;
      }
      v4 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      if ( v0 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        UserSessionState = W32GetUserSessionState((_DWORD)WPP_GLOBAL_Control, v1, v3);
        LOBYTE(v6) = v4;
        LOBYTE(v7) = v0;
        WPP_RECORDER_AND_TRACE_SF_d(
          *((_QWORD *)WPP_GLOBAL_Control + 3),
          v7,
          v6,
          *(_QWORD *)(UserSessionState + 69136),
          3,
          3,
          12,
          (__int64)&WPP_1694f8648fb7338eb8af492443ee6fcc_Traceguids,
          v2);
      }
    }
  }
  else
  {
    ZwClose(FileHandle);
  }
  return (unsigned int)v2;
}
