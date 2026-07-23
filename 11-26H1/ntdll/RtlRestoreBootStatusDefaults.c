/*
 * XREFs of RtlRestoreBootStatusDefaults @ 0x18010BBE0
 * Callers:
 *     RtlCreateBootStatusDataFile @ 0x18010B9B0 (RtlCreateBootStatusDataFile.c)
 * Callees:
 *     RtlGetNtProductType @ 0x1800840F0 (RtlGetNtProductType.c)
 *     NtWriteFile @ 0x18015EF40 (NtWriteFile.c)
 *     NtPowerInformation @ 0x18015FA10 (NtPowerInformation.c)
 *     __security_check_cookie @ 0x180162B90 (__security_check_cookie.c)
 *     memset$thunk$772440563353939046 @ 0x18016F030 (memset$thunk$772440563353939046.c)
 */

NTSTATUS __cdecl RtlRestoreBootStatusDefaults(HANDLE FileHandle)
{
  char v2; // cl
  int *p_Buffer; // rax
  __int64 v4; // rdx
  LARGE_INTEGER ByteOffset; // [rsp+50h] [rbp-B0h] BYREF
  _QWORD InputBuffer[4]; // [rsp+58h] [rbp-A8h] BYREF
  _IO_STATUS_BLOCK IoStatusBlock; // [rsp+78h] [rbp-88h] BYREF
  int Buffer; // [rsp+90h] [rbp-70h] BYREF
  _NT_PRODUCT_TYPE NtProductType; // [rsp+94h] [rbp-6Ch] BYREF
  __int16 v11; // [rsp+99h] [rbp-67h]
  char v12; // [rsp+9Bh] [rbp-65h]
  char v13; // [rsp+C1h] [rbp-3Fh]
  char v14; // [rsp+C2h] [rbp-3Eh]
  int v15; // [rsp+148h] [rbp+48h]

  IoStatusBlock = 0LL;
  memset_thunk_772440563353939046(&NtProductType, 0, 0xC4uLL);
  Buffer = 200;
  RtlGetNtProductType(&NtProductType);
  v2 = 0;
  v11 = 286;
  p_Buffer = &Buffer;
  v13 = 1;
  v4 = 200LL;
  v12 = 0;
  v15 = 0;
  do
  {
    v2 -= *(_BYTE *)p_Buffer;
    p_Buffer = (int *)((char *)p_Buffer + 1);
    --v4;
  }
  while ( v4 );
  v14 = v2;
  ByteOffset.QuadPart = 0LL;
  InputBuffer[2] = 0LL;
  InputBuffer[3] = 1LL;
  InputBuffer[0] = &Buffer;
  InputBuffer[1] = 200LL;
  NtPowerInformation(UpdateBlackBoxRecorder, InputBuffer, 0x20u, 0LL, 0);
  return NtWriteFile(FileHandle, 0LL, 0LL, 0LL, &IoStatusBlock, &Buffer, 0xC8u, &ByteOffset, 0LL);
}
