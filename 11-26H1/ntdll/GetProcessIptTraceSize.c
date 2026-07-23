/*
 * XREFs of GetProcessIptTraceSize @ 0x18015A82C
 * Callers:
 *     PsspCaptureIptTrace @ 0x18015967C (PsspCaptureIptTrace.c)
 * Callees:
 *     RtlReleasePrivilege @ 0x1800D2590 (RtlReleasePrivilege.c)
 *     AcquireDebugPrivilege @ 0x18015A6E8 (AcquireDebugPrivilege.c)
 *     OpenIptDevice @ 0x18015A960 (OpenIptDevice.c)
 *     NtDeviceIoControlFile @ 0x18015EF20 (NtDeviceIoControlFile.c)
 *     NtClose @ 0x18015F020 (NtClose.c)
 *     __security_check_cookie @ 0x180162B90 (__security_check_cookie.c)
 */

__int64 __fastcall GetProcessIptTraceSize(__int64 a1, _DWORD *a2)
{
  __int64 result; // rax
  bool v5; // bl
  NTSTATUS v6; // edi
  HANDLE FileHandle; // [rsp+50h] [rbp-29h] BYREF
  PVOID StatePointer; // [rsp+58h] [rbp-21h] BYREF
  __int128 InputBuffer; // [rsp+60h] [rbp-19h] BYREF
  __int128 v10; // [rsp+70h] [rbp-9h]
  __int128 v11; // [rsp+80h] [rbp+7h]
  _IO_STATUS_BLOCK IoStatusBlock; // [rsp+90h] [rbp+17h] BYREF
  __int128 OutputBuffer; // [rsp+A0h] [rbp+27h] BYREF
  __int64 v14; // [rsp+B0h] [rbp+37h]

  FileHandle = 0LL;
  v14 = 0LL;
  InputBuffer = 0LL;
  StatePointer = 0LL;
  v10 = 0LL;
  *a2 = 0;
  v11 = 0LL;
  OutputBuffer = 0LL;
  IoStatusBlock = 0LL;
  result = OpenIptDevice(&FileHandle);
  if ( (int)result >= 0 )
  {
    v5 = AcquireDebugPrivilege(&StatePointer);
    *(_QWORD *)&InputBuffer = 1LL;
    DWORD2(InputBuffer) = 1;
    LOWORD(v10) = 1;
    *((_QWORD *)&v10 + 1) = a1;
    v6 = NtDeviceIoControlFile(
           FileHandle,
           0LL,
           0LL,
           0LL,
           &IoStatusBlock,
           0x220004u,
           &InputBuffer,
           0x30u,
           &OutputBuffer,
           0x18u);
    NtClose(FileHandle);
    if ( v5 )
      RtlReleasePrivilege(StatePointer);
    if ( v6 >= 0 )
    {
      if ( *((_QWORD *)&OutputBuffer + 1) <= 0xFFFFFFFFuLL )
      {
        *a2 = DWORD2(OutputBuffer);
        return 0LL;
      }
      else
      {
        return 3221226539LL;
      }
    }
    else
    {
      return (unsigned int)v6;
    }
  }
  return result;
}
