/*
 * XREFs of GetProcessIptTrace @ 0x18015A84C
 * Callers:
 *     PsspCaptureIptTrace @ 0x1801597AC (PsspCaptureIptTrace.c)
 * Callees:
 *     RtlReleasePrivilege @ 0x1800D26C0 (RtlReleasePrivilege.c)
 *     AcquireDebugPrivilege @ 0x18015A818 (AcquireDebugPrivilege.c)
 *     OpenIptDevice @ 0x18015AA90 (OpenIptDevice.c)
 *     NtDeviceIoControlFile @ 0x18015F020 (NtDeviceIoControlFile.c)
 *     NtClose @ 0x18015F120 (NtClose.c)
 */

__int64 __fastcall GetProcessIptTrace(__int64 a1, void *a2, ULONG a3)
{
  __int64 result; // rax
  bool v7; // bl
  unsigned int v8; // edi
  HANDLE *v9; // [rsp+50h] [rbp-9h] BYREF
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+58h] [rbp-1h] BYREF
  __int128 InputBuffer; // [rsp+68h] [rbp+Fh] BYREF
  __int128 v12; // [rsp+78h] [rbp+1Fh]
  __int128 v13; // [rsp+88h] [rbp+2Fh]
  HANDLE FileHandle; // [rsp+D8h] [rbp+7Fh] BYREF

  FileHandle = 0LL;
  v9 = 0LL;
  InputBuffer = 0LL;
  v12 = 0LL;
  v13 = 0LL;
  IoStatusBlock = 0LL;
  if ( a3 < 8 )
    return 3221225485LL;
  result = OpenIptDevice(&FileHandle);
  if ( (int)result >= 0 )
  {
    v7 = AcquireDebugPrivilege(&v9);
    *(_QWORD *)&InputBuffer = 1LL;
    LOWORD(v12) = 1;
    DWORD2(InputBuffer) = 2;
    *((_QWORD *)&v12 + 1) = a1;
    v8 = NtDeviceIoControlFile(FileHandle, 0LL, 0LL, 0LL, &IoStatusBlock, 0x220006u, &InputBuffer, 0x30u, a2, a3);
    NtClose(FileHandle);
    if ( v7 )
      RtlReleasePrivilege(v9);
    return v8;
  }
  return result;
}
