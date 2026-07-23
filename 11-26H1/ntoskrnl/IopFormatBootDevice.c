/*
 * XREFs of IopFormatBootDevice @ 0x140CC3180
 * Callers:
 *     <none>
 * Callees:
 *     IofCallDriver @ 0x140264B10 (IofCallDriver.c)
 *     ObfDereferenceObjectWithTag @ 0x140264E00 (ObfDereferenceObjectWithTag.c)
 *     IoBuildDeviceIoControlRequest @ 0x14026A6C0 (IoBuildDeviceIoControlRequest.c)
 *     KeWaitForSingleObject @ 0x140277AD0 (KeWaitForSingleObject.c)
 *     RtlStringCbPrintfW @ 0x140420090 (RtlStringCbPrintfW.c)
 *     RtlInitUnicodeStringEx @ 0x140456BE0 (RtlInitUnicodeStringEx.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     memmove @ 0x140742080 (memmove.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 *     IoGetDeviceObjectPointer @ 0x140A30960 (IoGetDeviceObjectPointer.c)
 *     RtlCreateUnicodeString @ 0x140A478B0 (RtlCreateUnicodeString.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall IopFormatBootDevice(__int64 a1, __int64 a2, UNICODE_STRING *a3)
{
  NTSTATUS inited; // ebx
  __int64 v6; // rbx
  __int64 v7; // rax
  size_t v8; // r14
  unsigned __int16 v9; // bx
  unsigned int v10; // edi
  void *v11; // rax
  unsigned int *v12; // rsi
  ULONG_PTR Pool2; // rax
  _DWORD *OutputBuffer; // rdi
  struct _DEVICE_OBJECT *v15; // rdx
  IRP *v16; // rax
  __int64 v18; // [rsp+50h] [rbp-B0h]
  PDEVICE_OBJECT DeviceObject; // [rsp+60h] [rbp-A0h] BYREF
  struct _KEVENT Object; // [rsp+68h] [rbp-98h] BYREF
  PFILE_OBJECT FileObject; // [rsp+80h] [rbp-80h] BYREF
  UNICODE_STRING DestinationString; // [rsp+88h] [rbp-78h] BYREF
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+98h] [rbp-68h] BYREF
  WCHAR pszDest[256]; // [rsp+B0h] [rbp-50h] BYREF

  HIBYTE(v18) = 0;
  FileObject = 0LL;
  DestinationString = 0LL;
  DeviceObject = 0LL;
  memset(&Object, 0, sizeof(Object));
  IoStatusBlock = 0LL;
  inited = RtlInitUnicodeStringEx(&DestinationString, L"\\??\\KernelFSFormatter");
  if ( inited >= 0 )
  {
    inited = IoGetDeviceObjectPointer(&DestinationString, 3u, &FileObject, &DeviceObject);
    if ( inited >= 0 )
    {
      inited = RtlStringCbPrintfW(pszDest, 0x200uLL, L"\\ArcName\\%S", *(_QWORD *)(a1 + 184));
      if ( inited >= 0 )
      {
        if ( !RtlCreateUnicodeString(a3, pszDest) )
          goto LABEL_19;
        LODWORD(v18) = 4096;
        v6 = -1LL;
        WORD2(v18) = 4;
        v7 = -1LL;
        BYTE6(v18) = 1;
        do
          ++v7;
        while ( pszDest[v7] );
        v8 = (unsigned __int16)(2 * v7);
        do
          ++v6;
        while ( aWindows_0[v6] );
        v9 = 2 * v6;
        v10 = v8 + 230;
        if ( v9 < 0x42u && (v11 = (void *)ExAllocatePool2(64LL, v10, 0x746D666Bu), (v12 = (unsigned int *)v11) != 0LL) )
        {
          memset_0(v11, 0, v10);
          *v12 = v10;
          v12[2] = 1;
          *((_WORD *)v12 + 39) = v9;
          memmove(v12 + 3, L"Windows", v9);
          v12[52] = 3;
          *((_WORD *)v12 + 114) = v8;
          memmove((char *)v12 + 230, pszDest, v8);
          *((_QWORD *)v12 + 10) = v18;
          v12[22] = 917507;
          Pool2 = ExAllocatePool2(64LL, 0x7EuLL, 0x746D666Bu);
          OutputBuffer = (_DWORD *)Pool2;
          if ( Pool2 )
          {
            memset_0((void *)(Pool2 + 4), 0, 0x7AuLL);
            v15 = DeviceObject;
            *OutputBuffer = 126;
            Object.Header.WaitListHead.Blink = &Object.Header.WaitListHead;
            Object.Header.Size = 6;
            Object.Header.WaitListHead.Flink = &Object.Header.WaitListHead;
            Object.Header.SignalState = 0;
            v16 = IoBuildDeviceIoControlRequest(
                    0x40001000u,
                    v15,
                    v12,
                    *v12,
                    OutputBuffer,
                    *OutputBuffer,
                    0,
                    &Object,
                    &IoStatusBlock);
            if ( v16 )
            {
              inited = IofCallDriver(DeviceObject, v16);
              if ( inited == 259 )
              {
                KeWaitForSingleObject(&Object, Executive, 0, 0, 0LL);
                inited = IoStatusBlock.Status;
              }
            }
            else
            {
              inited = -1073741670;
            }
          }
          else
          {
            OutputBuffer = 0LL;
            inited = -1073741801;
          }
          ExFreePoolWithTag(v12, 0);
          if ( OutputBuffer )
            ExFreePoolWithTag(OutputBuffer, 0);
        }
        else
        {
LABEL_19:
          inited = -1073741801;
        }
      }
    }
    if ( FileObject )
      ObfDereferenceObjectWithTag(FileObject, 0x746C6644u);
  }
  return (unsigned int)inited;
}
