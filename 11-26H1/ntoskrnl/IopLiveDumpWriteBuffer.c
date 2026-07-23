/*
 * XREFs of IopLiveDumpWriteBuffer @ 0x140346114
 * Callers:
 *     IopLiveDumpWriteDumpFile @ 0x140345D88 (IopLiveDumpWriteDumpFile.c)
 *     IopLiveDumpWriteDumpFileWithExtraPages @ 0x1405D583C (IopLiveDumpWriteDumpFileWithExtraPages.c)
 *     IopLiveDumpWriteSecondaryData @ 0x1405D6154 (IopLiveDumpWriteSecondaryData.c)
 * Callees:
 *     SecureDump_Encrypt_DmpData @ 0x1405D8D20 (SecureDump_Encrypt_DmpData.c)
 *     IopLiveDumpTraceWriteBuffer @ 0x1405DA4AC (IopLiveDumpTraceWriteBuffer.c)
 *     ZwWriteFile @ 0x1407280C0 (ZwWriteFile.c)
 */

__int64 __fastcall IopLiveDumpWriteBuffer(
        HANDLE FileHandle,
        PVOID Buffer,
        ULONG Length,
        PLARGE_INTEGER ByteOffset,
        __int64 a5,
        char a6)
{
  LARGE_INTEGER *v6; // rbx
  __int64 v7; // rdi
  bool v10; // zf
  NTSTATUS Status; // ecx
  __int64 result; // rax
  __int64 v13; // [rsp+50h] [rbp-28h] BYREF
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+58h] [rbp-20h] BYREF

  v6 = ByteOffset;
  v7 = Length;
  v13 = 0LL;
  v10 = (*(_DWORD *)(a5 + 80) & 0x20000) == 0;
  IoStatusBlock = 0LL;
  if ( !v10 )
  {
    LOBYTE(ByteOffset) = a6;
    IopLiveDumpTraceWriteBuffer(Buffer, Length, v6->QuadPart, ByteOffset);
  }
  if ( !*(_BYTE *)(a5 + 984)
    || a6
    || (result = SecureDump_Encrypt_DmpData((_DWORD)Buffer, v7, (_DWORD)Buffer, v7, (__int64)&v13), (int)result >= 0) )
  {
    Status = ZwWriteFile(FileHandle, 0LL, 0LL, 0LL, &IoStatusBlock, Buffer, v7, v6, 0LL);
    if ( Status >= 0 )
    {
      Status = IoStatusBlock.Status;
      if ( IoStatusBlock.Status >= 0 )
        v6->QuadPart += v7;
    }
    return (unsigned int)Status;
  }
  return result;
}
