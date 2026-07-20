/*
 * XREFs of SmpReplaceSystemHiveOnSoftReboot @ 0x140017924
 * Callers:
 *     SmpLoadDataFromRegistry @ 0x1400159FC (SmpLoadDataFromRegistry.c)
 * Callees:
 *     SmpLogFailure @ 0x14000D404 (SmpLogFailure.c)
 *     SmpDeleteFile @ 0x140014588 (SmpDeleteFile.c)
 *     SmpOpenTargetFile @ 0x14001718C (SmpOpenTargetFile.c)
 *     SmpRenameTargetFile @ 0x1400177D8 (SmpRenameTargetFile.c)
 *     SmpTerminate @ 0x140018DC4 (SmpTerminate.c)
 */

NTSTATUS SmpReplaceSystemHiveOnSoftReboot()
{
  NTSTATUS result; // eax
  int v1; // eax
  unsigned __int64 v2; // rbx
  struct _UNICODE_STRING DestinationString; // [rsp+30h] [rbp-49h] BYREF
  struct _UNICODE_STRING v4; // [rsp+40h] [rbp-39h] BYREF
  struct _UNICODE_STRING v5; // [rsp+50h] [rbp-29h] BYREF
  struct _UNICODE_STRING v6; // [rsp+60h] [rbp-19h] BYREF
  struct _UNICODE_STRING v7; // [rsp+70h] [rbp-9h] BYREF
  struct _OBJECT_ATTRIBUTES v8; // [rsp+80h] [rbp+7h] BYREF
  unsigned __int64 Parameters[2]; // [rsp+B0h] [rbp+37h] BYREF
  __int128 v10; // [rsp+C0h] [rbp+47h]
  HANDLE Handle; // [rsp+E0h] [rbp+67h] BYREF

  *(&v8.Length + 1) = 0;
  v4 = 0LL;
  *(&v8.Attributes + 1) = 0;
  v6 = 0LL;
  Handle = 0LL;
  v7 = 0LL;
  DestinationString = 0LL;
  RtlInitUnicodeString(&DestinationString, L"\\SystemRoot\\System32\\config\\SYSTEM.ksr.tmp");
  v8.Length = 48;
  v8.ObjectName = &DestinationString;
  v8.RootDirectory = 0LL;
  v8.Attributes = 64;
  *(_OWORD *)&v8.SecurityDescriptor = 0LL;
  result = SmpOpenTargetFile(&Handle, 0x110000u, &v8, 1, 3u);
  if ( result >= 0 )
  {
    RtlInitUnicodeString(&v4, L"\\SystemRoot\\System32\\config\\SYSTEM");
    v1 = SmpRenameTargetFile((const void **)&v4, Handle, 1, 0);
    v2 = v1;
    if ( v1 < 0 )
    {
      v5 = 0LL;
      RtlInitUnicodeString(&v5, L"Failed to replace system hive on soft reboot");
      Parameters[1] = v2;
      Parameters[0] = (unsigned __int64)&v5;
      v10 = 0LL;
      SmpLogFailure((__int64)"SmpReplaceSystemHiveOnSoftReboot", 13050, v2);
      SmpTerminate(Parameters, 1u, 4u);
      __debugbreak();
    }
    NtClose(Handle);
    RtlInitUnicodeString(&v6, L"\\SystemRoot\\System32\\config\\SYSTEM.LOG1");
    RtlInitUnicodeString(&v7, L"\\SystemRoot\\System32\\config\\SYSTEM.LOG2");
    SmpDeleteFile(&v6);
    return SmpDeleteFile(&v7);
  }
  return result;
}
