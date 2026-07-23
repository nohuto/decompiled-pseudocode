/*
 * XREFs of ExpTranslateNtPath @ 0x140B597F4
 * Callers:
 *     ExpConvertArcName @ 0x140841144 (ExpConvertArcName.c)
 *     NtTranslateFilePath @ 0x140A2D4D0 (NtTranslateFilePath.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x14041DA70 (RtlInitUnicodeString.c)
 *     Feature_Mbr2Gpt_FixPartitionOrdering__private_IsEnabledDeviceUsageNoInline @ 0x1406D3ED4 (Feature_Mbr2Gpt_FixPartitionOrdering__private_IsEnabledDeviceUsageNoInline.c)
 *     ZwDeviceIoControlFile @ 0x1407280A0 (ZwDeviceIoControlFile.c)
 *     ZwClose @ 0x1407281A0 (ZwClose.c)
 *     ZwOpenFile @ 0x140728620 (ZwOpenFile.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 *     ExpCreateOutputARC @ 0x140841558 (ExpCreateOutputARC.c)
 *     ExpCreateOutputSIGNATURE @ 0x140841654 (ExpCreateOutputSIGNATURE.c)
 *     SyspartEnumerateDisks @ 0x14089AB98 (SyspartEnumerateDisks.c)
 *     ExpCreateOutputEFI @ 0x140A2CBBC (ExpCreateOutputEFI.c)
 *     ExpTranslateSymbolicLink @ 0x140A2DD60 (ExpTranslateSymbolicLink.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

int __fastcall ExpTranslateNtPath(__int64 a1, int a2, char *a3, unsigned int *a4)
{
  int v5; // esi
  const WCHAR *v8; // rbx
  char v9; // di
  char v10; // r15
  unsigned __int64 v11; // rdx
  __int64 v12; // rax
  wchar_t *v13; // r14
  int result; // eax
  wchar_t *Buffer; // rbx
  int OutputARC; // esi
  NTSTATUS v17; // ebx
  ULONG OutputBufferLength; // esi
  _DWORD *Pool2; // rax
  _DWORD *v20; // rbx
  NTSTATUS v21; // r15d
  GUID *v22; // rbx
  int v23; // eax
  HANDLE FileHandle; // [rsp+50h] [rbp-B0h] BYREF
  UNICODE_STRING v25; // [rsp+58h] [rbp-A8h] BYREF
  UNICODE_STRING DestinationString; // [rsp+68h] [rbp-98h] BYREF
  __int128 v27; // [rsp+78h] [rbp-88h]
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+88h] [rbp-78h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+98h] [rbp-68h] BYREF
  int OutputBuffer; // [rsp+D0h] [rbp-30h] BYREF
  unsigned __int16 v31; // [rsp+D4h] [rbp-2Ch]
  __int64 v32; // [rsp+D8h] [rbp-28h] BYREF
  __int64 v33; // [rsp+E0h] [rbp-20h] BYREF
  int v34[6]; // [rsp+E8h] [rbp-18h] BYREF
  char v35; // [rsp+100h] [rbp+0h] BYREF
  int v36; // [rsp+1A0h] [rbp+A0h] BYREF
  int v37; // [rsp+1A8h] [rbp+A8h]

  v37 = a2;
  *(&ObjectAttributes.Length + 1) = 0;
  v5 = a2;
  *(&ObjectAttributes.Attributes + 1) = 0;
  FileHandle = 0LL;
  DestinationString = 0LL;
  v25 = 0LL;
  IoStatusBlock = 0LL;
  memset_0(&OutputBuffer, 0, 0x90uLL);
  v36 = 0;
  v8 = (const WCHAR *)(a1 + 12);
  v9 = 1;
  v27 = 0LL;
  v10 = 1;
  RtlInitUnicodeString(&DestinationString, v8);
  v11 = (unsigned __int64)v8 + DestinationString.Length + 2;
  v12 = -1LL;
  do
    ++v12;
  while ( *(_WORD *)(v11 + 2 * v12) );
  v13 = (wchar_t *)(v11 & -(__int64)((_DWORD)v12 != 0));
  if ( v5 != 1 )
  {
    ObjectAttributes.ObjectName = &DestinationString;
    ObjectAttributes.Length = 48;
    ObjectAttributes.RootDirectory = 0LL;
    ObjectAttributes.Attributes = 576;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    result = ZwOpenFile(&FileHandle, 0x100080u, &ObjectAttributes, &IoStatusBlock, 3u, 0x60u);
    if ( result < 0 )
      return result;
    v17 = ZwDeviceIoControlFile(FileHandle, 0LL, 0LL, 0LL, &IoStatusBlock, 0x70048u, 0LL, 0, &OutputBuffer, 0x90u);
    if ( v17 < 0 )
      goto LABEL_22;
    if ( !OutputBuffer )
    {
      for ( OutputBufferLength = 2352; ; OutputBufferLength *= 2 )
      {
        Pool2 = (_DWORD *)ExAllocatePool2(0x40uLL);
        v20 = Pool2;
        if ( !Pool2 )
          break;
        v21 = ZwDeviceIoControlFile(
                FileHandle,
                0LL,
                0LL,
                0LL,
                &IoStatusBlock,
                0x70050u,
                0LL,
                0,
                Pool2,
                OutputBufferLength);
        if ( v21 >= 0 )
        {
          v36 = v20[2];
          ExFreePoolWithTag(v20, 0);
          v5 = v37;
          goto LABEL_24;
        }
        ExFreePoolWithTag(v20, 0);
        if ( v21 != -1073741789 )
        {
          v17 = v21;
          goto LABEL_22;
        }
      }
      ZwClose(FileHandle);
      return -1073741670;
    }
    if ( OutputBuffer != 1 )
    {
      v17 = -1073741804;
LABEL_22:
      ZwClose(FileHandle);
      return v17;
    }
LABEL_24:
    ZwClose(FileHandle);
    if ( OutputBuffer == 1 )
    {
      v22 = (GUID *)&v35;
    }
    else
    {
      v22 = (GUID *)&v36;
      v9 = 0;
    }
    if ( v5 != 4 )
      return ExpCreateOutputSIGNATURE((__int64)a3, a4, v22, (unsigned int *)v34, &v32, &v33, v13, v9);
    if ( (unsigned int)Feature_Mbr2Gpt_FixPartitionOrdering__private_IsEnabledDeviceUsageNoInline() && v9 )
    {
      v23 = v31;
      if ( v31 )
      {
LABEL_34:
        v34[0] = v23;
        return ExpCreateOutputEFI(a3, a4, v22, v34, &v32, &v33, v13, v9);
      }
      *(_QWORD *)&v27 = v22;
      if ( (int)SyspartEnumerateDisks() >= 0 )
      {
        v23 = v34[0];
        if ( BYTE12(v27) )
          v23 = DWORD2(v27);
        goto LABEL_34;
      }
    }
    return ExpCreateOutputEFI(a3, a4, v22, v34, &v32, &v33, v13, v9);
  }
  result = ExpTranslateSymbolicLink(v8, &v25);
  if ( result >= 0 )
  {
    Buffer = v25.Buffer;
  }
  else
  {
    if ( result != -1073741788 )
      return result;
    v10 = 0;
    Buffer = DestinationString.Buffer;
    *(_DWORD *)&v25.Length = *(_DWORD *)&DestinationString.Length;
    v25.Buffer = DestinationString.Buffer;
  }
  OutputARC = ExpCreateOutputARC(a3, a4, (__int64)&v25, v13);
  if ( v10 == 1 )
    ExFreePoolWithTag(Buffer, 0);
  return OutputARC;
}
