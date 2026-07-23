/*
 * XREFs of RawQueryFsSizeInfo @ 0x140B28108
 * Callers:
 *     RawQueryVolumeInformation @ 0x14091A99C (RawQueryVolumeInformation.c)
 * Callees:
 *     RawBeginOperation @ 0x140218CC4 (RawBeginOperation.c)
 *     RawEndOperation @ 0x140258E74 (RawEndOperation.c)
 *     IofCallDriver @ 0x140264B10 (IofCallDriver.c)
 *     IoBuildDeviceIoControlRequest @ 0x14026A6C0 (IoBuildDeviceIoControlRequest.c)
 *     KeWaitForSingleObject @ 0x140277AD0 (KeWaitForSingleObject.c)
 *     KeResetEvent @ 0x140397930 (KeResetEvent.c)
 *     KeInitializeEvent @ 0x140460680 (KeInitializeEvent.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 */

__int64 __fastcall RawQueryFsSizeInfo(__int64 a1, __int64 a2, __int64 a3, _DWORD *a4)
{
  bool v4; // cf
  struct _DEVICE_OBJECT *v9; // rdi
  IRP *v10; // rax
  NTSTATUS Status; // ebx
  IRP *v12; // rax
  unsigned __int64 v13; // rax
  bool v15; // al
  unsigned __int64 v16; // r8
  unsigned __int64 v17; // rcx
  NTSTATUS v18; // eax
  IRP *v19; // rax
  NTSTATUS v20; // eax
  struct _KEVENT Event; // [rsp+50h] [rbp-49h] BYREF
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+68h] [rbp-31h] BYREF
  __int64 v23; // [rsp+78h] [rbp-21h] BYREF
  __int128 OutputBuffer; // [rsp+80h] [rbp-19h] BYREF
  __int64 v25; // [rsp+90h] [rbp-9h]
  __int64 v26; // [rsp+98h] [rbp-1h] BYREF
  __int64 v27; // [rsp+A0h] [rbp+7h]
  __int128 v28; // [rsp+A8h] [rbp+Fh]

  v4 = *a4 < 0x18u;
  v25 = 0LL;
  v26 = 0LL;
  v23 = 0LL;
  memset(&Event, 0, sizeof(Event));
  IoStatusBlock = 0LL;
  OutputBuffer = 0LL;
  v28 = 0LL;
  if ( v4 )
    return 2147483653LL;
  if ( RawBeginOperation(a1, a2) )
  {
    *(_OWORD *)a3 = 0LL;
    *(_QWORD *)(a3 + 16) = 0LL;
    KeInitializeEvent(&Event, NotificationEvent, 0);
    v9 = *(struct _DEVICE_OBJECT **)(*(_QWORD *)(a1 + 200) + 16LL);
    v10 = IoBuildDeviceIoControlRequest(0x70000u, v9, 0LL, 0, &OutputBuffer, 0x18u, 0, &Event, &IoStatusBlock);
    if ( v10 )
    {
      Status = IofCallDriver(v9, v10);
      if ( Status == 259 )
      {
        KeWaitForSingleObject(&Event, Executive, 0, 0, 0LL);
        Status = IoStatusBlock.Status;
      }
      if ( Status < 0 )
      {
        *a4 = 0;
        goto LABEL_12;
      }
      if ( (v9->Characteristics & 4) != 0 )
      {
        v15 = 0;
        v16 = 0LL;
        v27 = 0LL;
      }
      else
      {
        KeResetEvent(&Event);
        v12 = IoBuildDeviceIoControlRequest(0x7405Cu, v9, 0LL, 0, &v23, 8u, 0, &Event, &IoStatusBlock);
        if ( !v12 )
          goto LABEL_9;
        v18 = IofCallDriver(v9, v12);
        if ( v18 == 259 )
        {
          KeWaitForSingleObject(&Event, Executive, 0, 0, 0LL);
          v18 = IoStatusBlock.Status;
        }
        v16 = v23;
        v27 = v23;
        if ( v18 < 0 )
        {
          KeResetEvent(&Event);
          v19 = IoBuildDeviceIoControlRequest(0x74004u, v9, 0LL, 0, &v26, 0x20u, 0, &Event, &IoStatusBlock);
          if ( !v19 )
            goto LABEL_9;
          v20 = IofCallDriver(v9, v19);
          if ( v20 == 259 )
          {
            KeWaitForSingleObject(&Event, Executive, 0, 0, 0LL);
            v20 = IoStatusBlock.Status;
          }
          v16 = v27;
          v15 = v20 >= 0;
        }
        else
        {
          v15 = 1;
        }
      }
      v17 = HIDWORD(v25);
      *(_DWORD *)(a3 + 20) = HIDWORD(v25);
      *(_DWORD *)(a3 + 16) = 1;
      if ( v15 )
        v13 = v16 / v17;
      else
        v13 = OutputBuffer * HIDWORD(OutputBuffer) * (int)v25;
      *(_QWORD *)(a3 + 8) = v13;
      *(_QWORD *)a3 = v13;
      *a4 -= 24;
      Status = 0;
      goto LABEL_12;
    }
LABEL_9:
    Status = -1073741670;
LABEL_12:
    RawEndOperation(a1, a2);
    return (unsigned int)Status;
  }
  return 3221226094LL;
}
