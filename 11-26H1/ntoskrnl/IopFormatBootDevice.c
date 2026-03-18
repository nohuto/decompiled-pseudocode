/*
 * XREFs of IopFormatBootDevice @ 0x140CBD110
 * Callers:
 *     <none>
 * Callees:
 *     IofCallDriver @ 0x1402655A0 (IofCallDriver.c)
 *     ObfDereferenceObjectWithTag @ 0x140265890 (ObfDereferenceObjectWithTag.c)
 *     IoBuildDeviceIoControlRequest @ 0x14026B150 (IoBuildDeviceIoControlRequest.c)
 *     KeWaitForSingleObject @ 0x140278560 (KeWaitForSingleObject.c)
 *     RtlInitUnicodeStringEx @ 0x14045D040 (RtlInitUnicodeStringEx.c)
 *     memmove @ 0x14073D480 (memmove.c)
 *     memset_0 @ 0x14073D880 (memset_0.c)
 *     IoGetDeviceObjectPointer @ 0x140908800 (IoGetDeviceObjectPointer.c)
 *     RtlCreateUnicodeString @ 0x140A70410 (RtlCreateUnicodeString.c)
 *     ExAllocatePool2 @ 0x140C10430 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140C10E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall IopFormatBootDevice(__int64 a1, const WCHAR *a2, UNICODE_STRING *a3)
{
  NTSTATUS inited; // ebx
  __int64 v6; // rbx
  __int64 v7; // rdi
  unsigned __int16 v8; // di
  unsigned __int16 v9; // bx
  unsigned int v10; // r14d
  void *v11; // rax
  unsigned int *v12; // rsi
  ULONG_PTR Pool2; // rax
  _DWORD *OutputBuffer; // rdi
  struct _DEVICE_OBJECT *v15; // rdx
  IRP *v16; // rax
  __int64 v18; // [rsp+50h] [rbp-29h]
  UNICODE_STRING DestinationString; // [rsp+60h] [rbp-19h] BYREF
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+70h] [rbp-9h] BYREF
  struct _KEVENT Object; // [rsp+80h] [rbp+7h] BYREF
  PDEVICE_OBJECT DeviceObject; // [rsp+E8h] [rbp+6Fh] BYREF
  PFILE_OBJECT FileObject; // [rsp+F8h] [rbp+7Fh] BYREF

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
      if ( !RtlCreateUnicodeString(a3, a2) )
        goto LABEL_18;
      LODWORD(v18) = 4096;
      v6 = -1LL;
      WORD2(v18) = 4;
      v7 = -1LL;
      BYTE6(v18) = 1;
      do
        ++v7;
      while ( a2[v7] );
      v8 = 2 * v7;
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
        v12[52] = 1;
        *((_WORD *)v12 + 114) = v8;
        memmove((char *)v12 + 230, a2, v8);
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
LABEL_18:
        inited = -1073741801;
      }
    }
    if ( FileObject )
      ObfDereferenceObjectWithTag(FileObject, 0x746C6644u);
  }
  return (unsigned int)inited;
}
