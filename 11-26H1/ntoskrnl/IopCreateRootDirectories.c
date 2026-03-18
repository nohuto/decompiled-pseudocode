/*
 * XREFs of IopCreateRootDirectories @ 0x140CBCD38
 * Callers:
 *     IoInitSystemPreDrivers @ 0x140CBACA0 (IoInitSystemPreDrivers.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x140430A40 (RtlInitUnicodeString.c)
 *     ObCloseHandle @ 0x140A00740 (ObCloseHandle.c)
 *     NtCreateDirectoryObject @ 0x140AF9E30 (NtCreateDirectoryObject.c)
 *     IopCreateUmdfDirectory @ 0x140CBCE2C (IopCreateUmdfDirectory.c)
 */

bool IopCreateRootDirectories()
{
  UNICODE_STRING DestinationString; // [rsp+20h] [rbp-40h] BYREF
  _DWORD v2[2]; // [rsp+30h] [rbp-30h] BYREF
  __int64 v3; // [rsp+38h] [rbp-28h]
  UNICODE_STRING *p_DestinationString; // [rsp+40h] [rbp-20h]
  int v5; // [rsp+48h] [rbp-18h]
  int v6; // [rsp+4Ch] [rbp-14h]
  __int128 v7; // [rsp+50h] [rbp-10h]
  HANDLE Handle; // [rsp+70h] [rbp+10h] BYREF

  Handle = 0LL;
  v2[1] = 0;
  v6 = 0;
  DestinationString = 0LL;
  RtlInitUnicodeString(&DestinationString, L"\\Driver");
  v2[0] = 48;
  p_DestinationString = &DestinationString;
  v3 = 0LL;
  v5 = 528;
  v7 = 0LL;
  if ( (int)NtCreateDirectoryObject((__int64)&Handle, 983055LL, (__int64)v2) < 0 )
    return 0;
  ObCloseHandle(Handle, 0);
  RtlInitUnicodeString(&DestinationString, L"\\FileSystem");
  if ( (int)NtCreateDirectoryObject((__int64)&Handle, 983055LL, (__int64)v2) < 0 )
    return 0;
  ObCloseHandle(Handle, 0);
  RtlInitUnicodeString(&DestinationString, L"\\FileSystem\\Filters");
  if ( (int)NtCreateDirectoryObject((__int64)&Handle, 983055LL, (__int64)v2) < 0 )
    return 0;
  ObCloseHandle(Handle, 0);
  return (int)IopCreateUmdfDirectory() >= 0;
}
