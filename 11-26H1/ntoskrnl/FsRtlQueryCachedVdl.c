/*
 * XREFs of FsRtlQueryCachedVdl @ 0x140ABA7B0
 * Callers:
 *     <none>
 * Callees:
 *     IofCallDriver @ 0x140264B10 (IofCallDriver.c)
 *     IoBuildDeviceIoControlRequest @ 0x14026A6C0 (IoBuildDeviceIoControlRequest.c)
 *     IoGetRelatedDeviceObject @ 0x14026BFA0 (IoGetRelatedDeviceObject.c)
 *     KeWaitForSingleObject @ 0x140277AD0 (KeWaitForSingleObject.c)
 *     KeInitializeEvent @ 0x140460680 (KeInitializeEvent.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 */

__int64 __fastcall FsRtlQueryCachedVdl(PFILE_OBJECT FileObject, _QWORD *a2)
{
  struct _DEVICE_OBJECT *RelatedDeviceObject; // rsi
  PIRP v5; // rax
  IRP *v6; // rdx
  struct _IO_STACK_LOCATION *CurrentStackLocation; // rax
  unsigned int Status; // edx
  unsigned __int32 v9; // eax
  int *v10; // rcx
  __int64 v11; // r8
  struct _KEVENT Event; // [rsp+50h] [rbp-39h] BYREF
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+68h] [rbp-21h] BYREF
  __m128i si128; // [rsp+80h] [rbp-9h] BYREF
  int v16; // [rsp+90h] [rbp+7h] BYREF

  memset(&Event, 0, sizeof(Event));
  IoStatusBlock = 0LL;
  KeInitializeEvent(&Event, NotificationEvent, 0);
  RelatedDeviceObject = IoGetRelatedDeviceObject(FileObject);
  v5 = IoBuildDeviceIoControlRequest(0x90284u, RelatedDeviceObject, 0LL, 0, 0LL, 0, 0, &Event, &IoStatusBlock);
  v6 = v5;
  if ( !v5 )
    return 3221225626LL;
  si128 = _mm_load_si128((const __m128i *)&_xmm);
  v16 = 1;
  v5->AssociatedIrp.MasterIrp = (struct _IRP *)&si128;
  CurrentStackLocation = v5->Tail.Overlay.CurrentStackLocation;
  CurrentStackLocation[-1].FileObject = FileObject;
  CurrentStackLocation[-1].MajorFunction = 13;
  CurrentStackLocation[-1].Parameters.Create.Options = 24;
  CurrentStackLocation[-1].Parameters.Read.Length = 64;
  Status = IofCallDriver(RelatedDeviceObject, v6);
  if ( Status == 259 )
  {
    KeWaitForSingleObject(&Event, Executive, 0, 0, 0LL);
    Status = IoStatusBlock.Status;
  }
  if ( (Status & 0xC0000000) != 0xC0000000 )
  {
    v9 = si128.m128i_u32[2];
    *a2 = 0LL;
    if ( v9 )
    {
      v10 = &v16;
      v11 = v9;
      do
      {
        if ( (v10[4] & 1) != 0 )
          *a2 = *(_QWORD *)v10 + *((_QWORD *)v10 + 1);
        v10 += 6;
        --v11;
      }
      while ( v11 );
    }
  }
  return Status;
}
