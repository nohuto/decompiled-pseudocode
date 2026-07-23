/*
 * XREFs of RtlInitializeBootStatusDataBlackBox @ 0x14080B464
 * Callers:
 *     PoClearTransitionMarker @ 0x1407CB8BC (PoClearTransitionMarker.c)
 * Callees:
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     ZwReadFile @ 0x140728080 (ZwReadFile.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 *     RtlpRecordBootStatusData @ 0x140B162E8 (RtlpRecordBootStatusData.c)
 */

NTSTATUS __fastcall RtlInitializeBootStatusDataBlackBox(HANDLE FileHandle)
{
  NTSTATUS result; // eax
  LARGE_INTEGER ByteOffset; // [rsp+50h] [rbp-108h] BYREF
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+58h] [rbp-100h] BYREF
  _BYTE Buffer[208]; // [rsp+70h] [rbp-E8h] BYREF

  IoStatusBlock = 0LL;
  memset_0(Buffer, 0, 0xC8uLL);
  ByteOffset.QuadPart = 0LL;
  result = ZwReadFile(FileHandle, 0LL, 0LL, 0LL, &IoStatusBlock, Buffer, 0xC8u, &ByteOffset, 0LL);
  if ( result >= 0 )
  {
    result = RtlpRecordBootStatusData(0LL, Buffer, 0LL, 200LL);
    if ( result >= 0 )
      return 0;
  }
  return result;
}
