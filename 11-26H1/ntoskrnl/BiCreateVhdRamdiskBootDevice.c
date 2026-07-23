/*
 * XREFs of BiCreateVhdRamdiskBootDevice @ 0x1408982DC
 * Callers:
 *     BiCreatePartitionDevice @ 0x140897EAC (BiCreatePartitionDevice.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x14041DA70 (RtlInitUnicodeString.c)
 *     ZwDeviceIoControlFile @ 0x1407280A0 (ZwDeviceIoControlFile.c)
 *     ZwClose @ 0x1407281A0 (ZwClose.c)
 *     ZwOpenFile @ 0x140728620 (ZwOpenFile.c)
 *     memmove @ 0x140742080 (memmove.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 */

__int64 __fastcall BiCreateVhdRamdiskBootDevice(__int64 a1, _QWORD *a2)
{
  NTSTATUS v4; // ebx
  __int64 v5; // rax
  size_t v6; // rsi
  unsigned int v7; // r14d
  char *Pool2; // rax
  char *v9; // rbx
  int v10; // eax
  UNICODE_STRING DestinationString; // [rsp+58h] [rbp-59h] BYREF
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+68h] [rbp-49h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+78h] [rbp-39h] BYREF
  _BYTE OutputBuffer[20]; // [rsp+A8h] [rbp-9h] BYREF
  int v16; // [rsp+BCh] [rbp+Bh]
  __int64 v17; // [rsp+C8h] [rbp+17h]
  int v18; // [rsp+D0h] [rbp+1Fh]
  __int64 v19; // [rsp+D8h] [rbp+27h]
  HANDLE FileHandle; // [rsp+128h] [rbp+77h] BYREF

  *(&ObjectAttributes.Length + 1) = 0;
  *(&ObjectAttributes.Attributes + 1) = 0;
  IoStatusBlock = 0LL;
  memset_0(OutputBuffer, 0, 0x40uLL);
  FileHandle = 0LL;
  DestinationString = 0LL;
  RtlInitUnicodeString(&DestinationString, L"\\Device\\Ramdisk{d9b257fc-684e-4dcb-ab79-03cfa2f6b750}");
  ObjectAttributes.ObjectName = &DestinationString;
  ObjectAttributes.Length = 48;
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.Attributes = 576;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  v4 = ZwOpenFile(&FileHandle, 0xC0000000, &ObjectAttributes, &IoStatusBlock, 3u, 0x20u);
  if ( v4 >= 0 )
  {
    v4 = ZwDeviceIoControlFile(FileHandle, 0LL, 0LL, 0LL, &IoStatusBlock, 0x240008u, 0LL, 0, OutputBuffer, 0x40u);
    ZwClose(FileHandle);
    if ( v4 >= 0 )
    {
      if ( v16 == 3 )
      {
        v5 = -1LL;
        do
          ++v5;
        while ( *(_WORD *)(a1 + 2 * v5 + 106) );
        v6 = 2 * v5 + 2;
        v7 = 2 * v5 + 106;
        Pool2 = (char *)ExAllocatePool2(0x102uLL);
        v9 = Pool2;
        if ( Pool2 )
        {
          memset_0(Pool2, 0, v7);
          *(_DWORD *)v9 = 0;
          *((_DWORD *)v9 + 4) = 5;
          *(_QWORD *)(v9 + 28) = 5LL;
          *((_DWORD *)v9 + 6) = v6 + 84;
          *((_DWORD *)v9 + 2) = v7;
          *((_DWORD *)v9 + 5) = 1;
          *((_DWORD *)v9 + 10) = 72;
          *((_DWORD *)v9 + 9) = 16;
          *((_DWORD *)v9 + 12) = 3;
          *(_QWORD *)(v9 + 52) = v19 << 12;
          *(_QWORD *)(v9 + 60) = v17;
          v10 = v18;
          *((_DWORD *)v9 + 18) = 1;
          *((_DWORD *)v9 + 20) = 5;
          *((_DWORD *)v9 + 17) = v10;
          *((_DWORD *)v9 + 19) = 12;
          memmove(v9 + 104, (const void *)(a1 + 106), v6);
          *a2 = v9;
          return 0;
        }
        else
        {
          return (unsigned int)-1073741670;
        }
      }
      else
      {
        return (unsigned int)-1073741808;
      }
    }
  }
  return (unsigned int)v4;
}
