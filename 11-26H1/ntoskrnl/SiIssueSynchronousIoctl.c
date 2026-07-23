/*
 * XREFs of SiIssueSynchronousIoctl @ 0x14089AF6C
 * Callers:
 *     SyspartResolveEfiEspCallback @ 0x14089B930 (SyspartResolveEfiEspCallback.c)
 *     SiIsWinPeHardDiskZeroUfdBoot @ 0x14089BDAC (SiIsWinPeHardDiskZeroUfdBoot.c)
 *     SiValidateSystemPartition @ 0x140ADE8BC (SiValidateSystemPartition.c)
 * Callees:
 *     ZwDeviceIoControlFile @ 0x1407280A0 (ZwDeviceIoControlFile.c)
 *     ZwClose @ 0x1407281A0 (ZwClose.c)
 *     SiOpenDevice @ 0x140ADEA3C (SiOpenDevice.c)
 */

__int64 __fastcall SiIssueSynchronousIoctl(
        const WCHAR *a1,
        ULONG a2,
        void *a3,
        ULONG a4,
        PVOID OutputBuffer,
        ULONG OutputBufferLength)
{
  NTSTATUS v9; // ebx
  HANDLE FileHandle; // [rsp+50h] [rbp-28h] BYREF
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+58h] [rbp-20h] BYREF

  FileHandle = 0LL;
  IoStatusBlock = 0LL;
  v9 = SiOpenDevice(a1, &FileHandle);
  if ( v9 >= 0 )
    v9 = ZwDeviceIoControlFile(FileHandle, 0LL, 0LL, 0LL, &IoStatusBlock, a2, a3, a4, OutputBuffer, OutputBufferLength);
  if ( FileHandle )
    ZwClose(FileHandle);
  return (unsigned int)v9;
}
