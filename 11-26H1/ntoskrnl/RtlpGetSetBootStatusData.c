/*
 * XREFs of RtlpGetSetBootStatusData @ 0x140ACDD60
 * Callers:
 *     RtlGetSetBootStatusData @ 0x140ACDBD0 (RtlGetSetBootStatusData.c)
 * Callees:
 *     ZwReadFile @ 0x140728080 (ZwReadFile.c)
 *     ZwWriteFile @ 0x1407280C0 (ZwWriteFile.c)
 *     ZwFlushBuffersFile @ 0x140728920 (ZwFlushBuffersFile.c)
 *     ZwPowerInformation @ 0x140728BA0 (ZwPowerInformation.c)
 *     memmove @ 0x140742080 (memmove.c)
 */

NTSTATUS __fastcall RtlpGetSetBootStatusData(HANDLE FileHandle, char a2, int a3, void *a4, unsigned int a5, _DWORD *a6)
{
  __int64 v8; // rbx
  NTSTATUS result; // eax
  __int64 v11; // rdx
  ULONG_PTR Length; // rbx
  NTSTATUS v13; // edi
  unsigned int Buffer; // [rsp+58h] [rbp-9h] BYREF
  LARGE_INTEGER ByteOffset; // [rsp+60h] [rbp-1h] BYREF
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+68h] [rbp+7h] BYREF
  struct _IO_STATUS_BLOCK v17; // [rsp+78h] [rbp+17h] BYREF
  _QWORD InputBuffer[3]; // [rsp+88h] [rbp+27h] BYREF
  int v19; // [rsp+A0h] [rbp+3Fh]
  int v20; // [rsp+A4h] [rbp+43h]

  v8 = a3;
  Buffer = 0;
  ByteOffset.QuadPart = 0LL;
  IoStatusBlock = 0LL;
  v17 = 0LL;
  result = ZwReadFile(FileHandle, 0LL, 0LL, 0LL, &IoStatusBlock, &Buffer, 4u, &ByteOffset, 0LL);
  if ( result >= 0 )
  {
    if ( (unsigned int)v8 > 0x12 )
      return -1073741811;
    v11 = LODWORD(RtlpBootStatusFields[v8]);
    Length = HIDWORD(RtlpBootStatusFields[v8]);
    ByteOffset.QuadPart = (unsigned int)v11;
    if ( Length + (unsigned int)v11 > Buffer )
      return -1073741735;
    if ( a5 < (unsigned int)Length )
      return -1073741789;
    if ( a2 )
    {
      if ( BYTE4(NormalizationListLock.CycleTime)
        && *(HANDLE *)&NormalizationListLock.CurrentRunTime == FileHandle
        && NormalizationListLock.StateSaveArea )
      {
        IoStatusBlock.Information = Length;
        memmove(a4, (char *)NormalizationListLock.StateSaveArea + v11, Length);
        v13 = 0;
        goto LABEL_16;
      }
      v13 = ZwReadFile(FileHandle, 0LL, 0LL, 0LL, &IoStatusBlock, a4, Length, &ByteOffset, 0LL);
    }
    else
    {
      if ( BYTE4(NormalizationListLock.CycleTime)
        && *(HANDLE *)&NormalizationListLock.CurrentRunTime == FileHandle
        && NormalizationListLock.StateSaveArea )
      {
        memmove((char *)NormalizationListLock.StateSaveArea + v11, a4, (unsigned int)Length);
      }
      v13 = ZwWriteFile(FileHandle, 0LL, 0LL, 0LL, &IoStatusBlock, a4, Length, &ByteOffset, 0LL);
      if ( v13 >= 0 && !LOBYTE(NormalizationListLock.KernelStack) )
        v13 = ZwFlushBuffersFile(FileHandle, &v17);
      InputBuffer[0] = a4;
      InputBuffer[1] = Length;
      InputBuffer[2] = ByteOffset.QuadPart;
      v20 = 1;
      v19 = 1;
      ZwPowerInformation(UpdateBlackBoxRecorder, InputBuffer, 0x20u, 0LL, 0);
    }
    if ( v13 < 0 )
      return v13;
    LODWORD(Length) = IoStatusBlock.Information;
LABEL_16:
    if ( a6 )
      *a6 = Length;
    return v13;
  }
  return result;
}
