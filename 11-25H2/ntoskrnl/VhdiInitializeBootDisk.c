/*
 * XREFs of VhdiInitializeBootDisk @ 0x140C4C530
 * Callers:
 *     <none>
 * Callees:
 *     RtlStringCbPrintfW @ 0x140404520 (RtlStringCbPrintfW.c)
 *     RtlInitUnicodeStringEx @ 0x14045CBF0 (RtlInitUnicodeStringEx.c)
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 *     ZwDeviceIoControlFile @ 0x14069B220 (ZwDeviceIoControlFile.c)
 *     ZwClose @ 0x14069B320 (ZwClose.c)
 *     ZwOpenFile @ 0x14069B7A0 (ZwOpenFile.c)
 *     RtlCompareMemory @ 0x1406A86C0 (RtlCompareMemory.c)
 *     IoGetConfigurationInformation @ 0x1407080D0 (IoGetConfigurationInformation.c)
 *     RtlCreateUnicodeStringFromAsciiz @ 0x14076F0B0 (RtlCreateUnicodeStringFromAsciiz.c)
 *     ExAllocatePool2 @ 0x140B620F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B62CD0 (ExFreePoolWithTag.c)
 *     VhdiGetVolumeNumber @ 0x140C4C3B4 (VhdiGetVolumeNumber.c)
 *     VhdiQueryVolumeVhdFilePath @ 0x140C4C854 (VhdiQueryVolumeVhdFilePath.c)
 */

__int64 __fastcall VhdiInitializeBootDisk(__int64 a1, int **a2, UNICODE_STRING *a3)
{
  int *v3; // rsi
  int *v4; // r15
  int *v5; // r12
  PCONFIGURATION_INFORMATION ConfigurationInformation; // rax
  HANDLE v8; // rcx
  _DWORD *v9; // rbx
  unsigned int v10; // r14d
  ULONG DiskCount; // r13d
  void *VolumeVhdFilePath; // rax
  ULONG OutputBufferLength; // edi
  _DWORD *OutputBuffer; // rax
  NTSTATUS v15; // eax
  int v16; // ecx
  bool v17; // zf
  __int64 i; // r8
  bool v19; // zf
  __int64 v20; // rdx
  unsigned int VolumeNumber; // edi
  HANDLE Handle; // [rsp+50h] [rbp-B0h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+60h] [rbp-A0h] BYREF
  UNICODE_STRING DestinationString; // [rsp+90h] [rbp-70h] BYREF
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+A0h] [rbp-60h] BYREF
  wchar_t pszDest[64]; // [rsp+B0h] [rbp-50h] BYREF

  DestinationString = 0LL;
  IoStatusBlock = 0LL;
  memset(&ObjectAttributes, 0, 44);
  if ( !a1 )
    return 3221225485LL;
  if ( !a2 )
    return 3221225485LL;
  if ( !a3 )
    return 3221225485LL;
  v3 = *a2;
  v4 = a2[1];
  v5 = a2[3];
  if ( !*a2 || !v4 || !a2[2] || !v5 )
    return 3221225485LL;
  if ( !RtlCreateUnicodeStringFromAsciiz(a3, *(PCSTR *)(a1 + 184)) )
    return 3221225473LL;
  ConfigurationInformation = IoGetConfigurationInformation();
  v8 = 0LL;
  v9 = 0LL;
  v10 = 0;
  DiskCount = ConfigurationInformation->DiskCount;
  Handle = 0LL;
  while ( v10 < DiskCount )
  {
    if ( RtlStringCbPrintfW(pszDest, 0x80uLL, L"\\Device\\Harddisk%d\\Partition0", v10) >= 0
      && RtlInitUnicodeStringEx(&DestinationString, pszDest) >= 0 )
    {
      ObjectAttributes.RootDirectory = 0LL;
      ObjectAttributes.Length = 48;
      ObjectAttributes.Attributes = 576;
      ObjectAttributes.ObjectName = &DestinationString;
      *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
      if ( Handle )
      {
        ZwClose(Handle);
        Handle = 0LL;
      }
      if ( ZwOpenFile(&Handle, 0xC0100000, &ObjectAttributes, &IoStatusBlock, 3u, 0x20u) >= 0 )
      {
        VolumeVhdFilePath = (void *)VhdiQueryVolumeVhdFilePath(Handle);
        if ( VolumeVhdFilePath )
        {
          ExFreePoolWithTag(VolumeVhdFilePath, 0x42646856u);
          goto LABEL_19;
        }
        if ( v9 )
          ExFreePoolWithTag(v9, 0);
        for ( OutputBufferLength = 4096; ; OutputBufferLength *= 2 )
        {
          OutputBuffer = (_DWORD *)ExAllocatePool2(0x40uLL, OutputBufferLength, 0x42646856uLL);
          v9 = OutputBuffer;
          if ( !OutputBuffer )
            goto LABEL_19;
          v15 = ZwDeviceIoControlFile(
                  Handle,
                  0LL,
                  0LL,
                  0LL,
                  &IoStatusBlock,
                  0x70050u,
                  0LL,
                  0,
                  OutputBuffer,
                  OutputBufferLength);
          if ( v15 != -1073741789 )
            break;
          ExFreePoolWithTag(v9, 0);
        }
        if ( v15 >= 0 )
        {
          v16 = *v3;
          if ( *v9 == *v3 )
          {
            if ( v16 )
            {
              if ( v16 != 1 )
                goto LABEL_19;
              v17 = RtlCompareMemory(v9 + 2, v4, 0x10uLL) == 16;
            }
            else
            {
              v17 = RtlCompareMemory(v9 + 2, v4, 4uLL) == 4;
            }
            if ( v17 )
            {
              for ( i = 0LL; (unsigned int)i < v9[1]; i = (unsigned int)(i + 1) )
              {
                if ( *v9 )
                {
                  if ( *v9 != 1 )
                    continue;
                  v20 = *(_QWORD *)&v9[36 * i + 24] - *((_QWORD *)v3 + 6);
                  if ( !v20 )
                    v20 = *(_QWORD *)&v9[36 * i + 26] - *((_QWORD *)v3 + 7);
                  v19 = v20 == 0;
                }
                else
                {
                  v19 = *(_QWORD *)&v9[36 * i + 14] == *((_QWORD *)v3 + 1);
                }
                if ( v19 )
                {
                  VolumeNumber = VhdiGetVolumeNumber((__int64)Handle, v10, v9[36 * i + 18], v5);
                  goto LABEL_45;
                }
              }
            }
          }
        }
      }
    }
LABEL_19:
    v8 = Handle;
    ++v10;
  }
  VolumeNumber = -1073741810;
  if ( v9 )
  {
LABEL_45:
    ExFreePoolWithTag(v9, 0x42646856u);
    v8 = Handle;
  }
  if ( v8 )
    ZwClose(v8);
  return VolumeNumber;
}
