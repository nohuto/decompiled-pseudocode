/*
 * XREFs of SmpReplaceSystemHiveOnSoftReboot @ 0x140017C5C
 * Callers:
 *     SmpLoadDataFromRegistry @ 0x140015DF4 (SmpLoadDataFromRegistry.c)
 * Callees:
 *     SmpLogFailure @ 0x14000D7F0 (SmpLogFailure.c)
 *     SmpDeleteFile @ 0x14001499C (SmpDeleteFile.c)
 *     SmpOpenTargetFile @ 0x1400174CC (SmpOpenTargetFile.c)
 *     SmpRenameTargetFile @ 0x140017B28 (SmpRenameTargetFile.c)
 *     SmpTerminate @ 0x14001913C (SmpTerminate.c)
 *     __security_check_cookie @ 0x14001EFE0 (__security_check_cookie.c)
 */

NTSTATUS SmpReplaceSystemHiveOnSoftReboot()
{
  NTSTATUS result; // eax
  int v1; // eax
  unsigned __int64 v2; // rbx
  HANDLE Handle; // [rsp+30h] [rbp-59h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+38h] [rbp-51h] BYREF
  struct _UNICODE_STRING v5; // [rsp+48h] [rbp-41h] BYREF
  struct _UNICODE_STRING v6; // [rsp+58h] [rbp-31h] BYREF
  struct _UNICODE_STRING v7; // [rsp+68h] [rbp-21h] BYREF
  struct _UNICODE_STRING v8; // [rsp+78h] [rbp-11h] BYREF
  struct _OBJECT_ATTRIBUTES v9; // [rsp+88h] [rbp-1h] BYREF
  unsigned __int64 Parameters[2]; // [rsp+B8h] [rbp+2Fh] BYREF
  __int128 v11; // [rsp+C8h] [rbp+3Fh]

  *(&v9.Attributes + 1) = 0;
  Handle = 0LL;
  *(&v9.Length + 1) = 0;
  v5 = 0LL;
  v7 = 0LL;
  v8 = 0LL;
  DestinationString = 0LL;
  RtlInitUnicodeString(&DestinationString, L"\\SystemRoot\\System32\\config\\SYSTEM.ksr.tmp");
  v9.RootDirectory = 0LL;
  v9.ObjectName = &DestinationString;
  v9.Length = 48;
  v9.Attributes = 64;
  *(_OWORD *)&v9.SecurityDescriptor = 0LL;
  result = SmpOpenTargetFile(&Handle, 0x110000u, &v9, 1, 3u);
  if ( result >= 0 )
  {
    RtlInitUnicodeString(&v5, L"\\SystemRoot\\System32\\config\\SYSTEM");
    v1 = SmpRenameTargetFile((const void **)&v5, Handle, 1, 0);
    v2 = v1;
    if ( v1 < 0 )
    {
      v6 = 0LL;
      RtlInitUnicodeString(&v6, L"Failed to replace system hive on soft reboot");
      Parameters[1] = v2;
      Parameters[0] = (unsigned __int64)&v6;
      v11 = 0LL;
      SmpLogFailure((__int64)"SmpReplaceSystemHiveOnSoftReboot", 13230, v2);
      SmpTerminate(Parameters, 1u, 4u);
      __debugbreak();
    }
    NtClose(Handle);
    RtlInitUnicodeString(&v7, L"\\SystemRoot\\System32\\config\\SYSTEM.LOG1");
    RtlInitUnicodeString(&v8, L"\\SystemRoot\\System32\\config\\SYSTEM.LOG2");
    SmpDeleteFile(&v7);
    return SmpDeleteFile(&v8);
  }
  return result;
}
