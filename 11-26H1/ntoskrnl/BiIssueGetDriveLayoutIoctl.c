/*
 * XREFs of BiIssueGetDriveLayoutIoctl @ 0x140B152C8
 * Callers:
 *     BiGetDriveLayoutInformation @ 0x140B151FC (BiGetDriveLayoutInformation.c)
 * Callees:
 *     ZwDeviceIoControlFile @ 0x1407280A0 (ZwDeviceIoControlFile.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall BiIssueGetDriveLayoutIoctl(HANDLE FileHandle, _QWORD *a2)
{
  ULONG OutputBufferLength; // ebp
  unsigned int *Pool2; // rsi
  _DWORD *OutputBuffer; // rax
  _DWORD *v7; // rdi
  NTSTATUS v8; // eax
  int v9; // ebx
  ULONG i; // ebp
  NTSTATUS v12; // eax
  size_t v13; // rbp
  _DWORD *v14; // rax
  _QWORD *v15; // rdx
  _DWORD *v16; // rcx
  unsigned int v17; // r8d
  __int64 v18; // rax
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+50h] [rbp-28h] BYREF

  OutputBufferLength = 18480;
  IoStatusBlock = 0LL;
  Pool2 = 0LL;
  while ( 1 )
  {
    OutputBuffer = (_DWORD *)ExAllocatePool2(0x102uLL);
    v7 = OutputBuffer;
    if ( !OutputBuffer )
      return (unsigned int)-1073741670;
    v8 = ZwDeviceIoControlFile(
           FileHandle,
           0LL,
           0LL,
           0LL,
           &IoStatusBlock,
           0x70050u,
           0LL,
           0,
           OutputBuffer,
           OutputBufferLength);
    v9 = v8;
    if ( v8 != -1073741789 )
      break;
    ExFreePoolWithTag(v7, 0x4B444342u);
    OutputBufferLength += 9216;
  }
  if ( v8 >= 0 )
    goto LABEL_5;
  for ( i = 2056; ; i += 2048 )
  {
    Pool2 = (unsigned int *)ExAllocatePool2(0x102uLL);
    if ( !Pool2 )
    {
      v9 = -1073741670;
      goto LABEL_13;
    }
    v12 = ZwDeviceIoControlFile(FileHandle, 0LL, 0LL, 0LL, &IoStatusBlock, 0x7400Cu, 0LL, 0, Pool2, i);
    v9 = v12;
    if ( v12 != -1073741789 )
      break;
    ExFreePoolWithTag(Pool2, 0x4B444342u);
  }
  if ( v12 < 0 )
    goto LABEL_6;
  ExFreePoolWithTag(v7, 0x4B444342u);
  v13 = 144 * *Pool2 + 48;
  v14 = (_DWORD *)ExAllocatePool2(0x102uLL);
  v7 = v14;
  if ( v14 )
  {
    memset_0(v14, 0, v13);
    *v7 = 0;
    v15 = Pool2 + 2;
    v16 = v7 + 12;
    v7[1] = *Pool2;
    v17 = 0;
    for ( v7[2] = Pool2[1]; v17 < *Pool2; *(v16 - 27) = *((_DWORD *)v15 - 4) )
    {
      *v16 = 0;
      ++v17;
      v18 = *v15;
      v15 += 4;
      *((_QWORD *)v16 + 1) = v18;
      v16 += 36;
      *((_QWORD *)v16 - 16) = *(v15 - 3);
      *(v16 - 30) = *((_DWORD *)v15 - 3);
      *((_BYTE *)v16 - 116) = *((_BYTE *)v15 - 5);
      *((_BYTE *)v16 - 112) = *((_BYTE *)v15 - 8);
      *((_BYTE *)v16 - 111) = *((_BYTE *)v15 - 7);
      *((_BYTE *)v16 - 110) = *((_BYTE *)v15 - 6);
    }
LABEL_5:
    *a2 = v7;
    goto LABEL_6;
  }
  v9 = -1073741670;
LABEL_6:
  if ( Pool2 )
    ExFreePoolWithTag(Pool2, 0x4B444342u);
  if ( v9 < 0 )
  {
LABEL_13:
    if ( v7 )
      ExFreePoolWithTag(v7, 0x4B444342u);
  }
  return (unsigned int)v9;
}
