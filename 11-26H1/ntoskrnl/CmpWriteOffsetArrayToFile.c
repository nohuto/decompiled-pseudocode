/*
 * XREFs of CmpWriteOffsetArrayToFile @ 0x14085AACC
 * Callers:
 *     CmDumpKeyToFile @ 0x14084D1E8 (CmDumpKeyToFile.c)
 *     CmpFlushBackupHive @ 0x14085A45C (CmpFlushBackupHive.c)
 * Callees:
 *     ZwSetInformationFile @ 0x1407238D0 (ZwSetInformationFile.c)
 *     ZwFlushBuffersFile @ 0x140723D50 (ZwFlushBuffersFile.c)
 *     CmpDoFileWrite @ 0x140AE6B08 (CmpDoFileWrite.c)
 */

NTSTATUS __fastcall CmpWriteOffsetArrayToFile(__int64 a1, int a2, int a3, int a4, HANDLE FileHandle)
{
  NTSTATUS result; // eax
  int v8; // ecx
  int v9; // r8d
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+40h] [rbp-18h] BYREF
  int v11; // [rsp+60h] [rbp+8h] BYREF
  int v12; // [rsp+64h] [rbp+Ch]

  v11 = a4;
  v12 = 0;
  IoStatusBlock = 0LL;
  result = ZwSetInformationFile(FileHandle, &IoStatusBlock, &v11, 8u, FileEndOfFileInformation);
  if ( result >= 0 )
  {
    result = CmpDoFileWrite(v8, (_DWORD)FileHandle, v9, a3, a2, 0);
    if ( result >= 0 )
      return ZwFlushBuffersFile(FileHandle, &IoStatusBlock);
  }
  return result;
}
