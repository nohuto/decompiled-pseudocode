/*
 * XREFs of FsRtlGetSectorSizeInformation @ 0x140A2EE50
 * Callers:
 *     RawQueryVolumeInformation @ 0x14091A99C (RawQueryVolumeInformation.c)
 * Callees:
 *     IofCallDriver @ 0x140264B10 (IofCallDriver.c)
 *     IoBuildDeviceIoControlRequest @ 0x14026A6C0 (IoBuildDeviceIoControlRequest.c)
 *     KeWaitForSingleObject @ 0x140277AD0 (KeWaitForSingleObject.c)
 *     KeInitializeEvent @ 0x140460680 (KeInitializeEvent.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 *     FsRtlIssueDeviceIoControl @ 0x140A2F470 (FsRtlIssueDeviceIoControl.c)
 */

__int64 __fastcall FsRtlGetSectorSizeInformation(PDEVICE_OBJECT DeviceObject, __int64 a2)
{
  __int64 result; // rax
  PIRP v5; // rax
  NTSTATUS Status; // eax
  unsigned int v7; // r9d
  unsigned int v8; // ecx
  unsigned int v9; // r8d
  int v10; // esi
  PIRP v11; // rax
  NTSTATUS v12; // eax
  unsigned int v13; // r8d
  int v14; // edx
  unsigned int v15; // eax
  PIRP v16; // rax
  NTSTATUS v17; // eax
  PIRP v18; // rax
  NTSTATUS v19; // eax
  PIRP v20; // rax
  NTSTATUS v21; // eax
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+50h] [rbp-B0h] BYREF
  struct _KEVENT Event; // [rsp+60h] [rbp-A0h] BYREF
  _BYTE v24[8]; // [rsp+80h] [rbp-80h] BYREF
  __int64 v25; // [rsp+88h] [rbp-78h]
  int InputBuffer; // [rsp+110h] [rbp+10h] BYREF
  __int64 v27; // [rsp+114h] [rbp+14h]
  __int64 OutputBuffer; // [rsp+120h] [rbp+20h] BYREF
  __int128 v29; // [rsp+128h] [rbp+28h]
  unsigned int v30; // [rsp+138h] [rbp+38h]
  __int64 v31; // [rsp+140h] [rbp+40h] BYREF
  int v32; // [rsp+148h] [rbp+48h]
  __int64 v33; // [rsp+150h] [rbp+50h] BYREF
  int v34; // [rsp+158h] [rbp+58h]
  __int128 v35; // [rsp+160h] [rbp+60h] BYREF
  __int64 v36; // [rsp+170h] [rbp+70h]
  __int128 v37; // [rsp+178h] [rbp+78h] BYREF

  v36 = 0LL;
  HIDWORD(v27) = 0;
  v30 = 0;
  v35 = 0LL;
  v29 = 0LL;
  memset_0(v24, 0, 0x90uLL);
  *(_OWORD *)a2 = 0LL;
  *(_QWORD *)(a2 + 16) = 0LL;
  *(_DWORD *)(a2 + 24) = 0;
  result = FsRtlIssueDeviceIoControl(DeviceObject, 0x70000u, 0, &v35, 0x18u, 0LL);
  if ( (int)result < 0 )
    return result;
  if ( !HIDWORD(v36) || ((HIDWORD(v36) - 1) & HIDWORD(v36)) != 0 )
    return 3221225675LL;
  v27 = 0LL;
  InputBuffer = 6;
  v30 = 0;
  OutputBuffer = 0x100000002LL;
  v29 = 0LL;
  memset(&Event, 0, sizeof(Event));
  IoStatusBlock = 0LL;
  KeInitializeEvent(&Event, NotificationEvent, 0);
  v5 = IoBuildDeviceIoControlRequest(
         0x2D1400u,
         DeviceObject,
         &InputBuffer,
         0xCu,
         &OutputBuffer,
         0x1Cu,
         0,
         &Event,
         &IoStatusBlock);
  if ( !v5 )
    goto LABEL_8;
  v5->Tail.Overlay.CurrentStackLocation[-1].Flags |= 2u;
  Status = IofCallDriver(DeviceObject, v5);
  if ( Status == 259 )
  {
    KeWaitForSingleObject(&Event, Executive, 0, 0, 0LL);
    Status = IoStatusBlock.Status;
  }
  if ( Status >= 0
    && IoStatusBlock.Information >= 0x1C
    && (unsigned int)OutputBuffer >= 0x1C
    && HIDWORD(OutputBuffer) >= IoStatusBlock.Information
    && DWORD2(v29) )
  {
    v7 = HIDWORD(v36);
    if ( DWORD2(v29) == HIDWORD(v36) )
    {
      v8 = HIDWORD(v29);
      if ( HIDWORD(v29) >= DWORD2(v29) )
      {
        if ( HIDWORD(v29) )
        {
          if ( ((HIDWORD(v29) - 1) & HIDWORD(v29)) == 0 && !(HIDWORD(v29) % DWORD2(v29)) )
          {
            v9 = v30;
            if ( !(v30 % DWORD2(v29)) )
              goto LABEL_10;
          }
        }
      }
    }
  }
  else
  {
LABEL_8:
    v7 = HIDWORD(v36);
  }
  v8 = v7;
  OutputBuffer = 0LL;
  HIDWORD(v29) = v7;
  v9 = -1;
  *(_QWORD *)&v29 = 0LL;
  DWORD2(v29) = v7;
  v30 = -1;
LABEL_10:
  *(_DWORD *)a2 = v7;
  *(_DWORD *)(a2 + 4) = v8;
  *(_DWORD *)(a2 + 8) = v8;
  *(_DWORD *)(a2 + 16) = 3;
  *(_DWORD *)(a2 + 20) = v9;
  *(_DWORD *)(a2 + 24) = -1;
  *(_DWORD *)(a2 + 12) = v7;
  if ( v9 != -1 )
  {
    *(_DWORD *)(a2 + 20) = v9;
    v10 = v9 % v8;
    if ( v9 % v8 )
      *(_DWORD *)(a2 + 16) = 2;
    memset(&Event, 0, sizeof(Event));
    IoStatusBlock = 0LL;
    KeInitializeEvent(&Event, NotificationEvent, 0);
    v11 = IoBuildDeviceIoControlRequest(0x70048u, DeviceObject, 0LL, 0, v24, 0x90u, 0, &Event, &IoStatusBlock);
    if ( v11 )
    {
      v11->Tail.Overlay.CurrentStackLocation[-1].Flags |= 2u;
      v12 = IofCallDriver(DeviceObject, v11);
      if ( v12 == 259 )
      {
        KeWaitForSingleObject(&Event, Executive, 0, 0, 0LL);
        v12 = IoStatusBlock.Status;
      }
      if ( v12 >= 0 )
      {
        v13 = HIDWORD(v29);
        v14 = v25 % HIDWORD(v29);
        v15 = HIDWORD(v29) - v14;
        *(_DWORD *)(a2 + 24) = v14;
        if ( v15 % v13 != v10 )
          *(_DWORD *)(a2 + 16) &= ~2u;
      }
    }
  }
  v27 = 0LL;
  v31 = 0LL;
  v32 = 0;
  InputBuffer = 7;
  memset(&Event, 0, sizeof(Event));
  IoStatusBlock = 0LL;
  KeInitializeEvent(&Event, NotificationEvent, 0);
  v16 = IoBuildDeviceIoControlRequest(
          0x2D1400u,
          DeviceObject,
          &InputBuffer,
          0xCu,
          &v31,
          0xCu,
          0,
          &Event,
          &IoStatusBlock);
  if ( v16 )
  {
    v16->Tail.Overlay.CurrentStackLocation[-1].Flags |= 2u;
    v17 = IofCallDriver(DeviceObject, v16);
    if ( v17 == 259 )
    {
      KeWaitForSingleObject(&Event, Executive, 0, 0, 0LL);
      v17 = IoStatusBlock.Status;
    }
    if ( v17 >= 0
      && (unsigned int)v31 >= 0xC
      && IoStatusBlock.Information >= 0xC
      && HIDWORD(v31) >= IoStatusBlock.Information
      && !(_BYTE)v32 )
    {
      *(_DWORD *)(a2 + 16) |= 4u;
    }
  }
  v27 = 0LL;
  v33 = 0LL;
  v34 = 0;
  InputBuffer = 8;
  memset(&Event, 0, sizeof(Event));
  IoStatusBlock = 0LL;
  KeInitializeEvent(&Event, NotificationEvent, 0);
  v18 = IoBuildDeviceIoControlRequest(
          0x2D1400u,
          DeviceObject,
          &InputBuffer,
          0xCu,
          &v33,
          0xCu,
          0,
          &Event,
          &IoStatusBlock);
  if ( v18 )
  {
    v18->Tail.Overlay.CurrentStackLocation[-1].Flags |= 2u;
    v19 = IofCallDriver(DeviceObject, v18);
    if ( v19 == 259 )
    {
      KeWaitForSingleObject(&Event, Executive, 0, 0, 0LL);
      v19 = IoStatusBlock.Status;
    }
    if ( v19 >= 0
      && IoStatusBlock.Information >= 0xC
      && (unsigned int)v33 >= 0xC
      && HIDWORD(v33) >= IoStatusBlock.Information
      && (_BYTE)v34 )
    {
      *(_DWORD *)(a2 + 16) |= 8u;
    }
  }
  v27 = 0LL;
  InputBuffer = 55;
  v37 = 0LL;
  memset(&Event, 0, sizeof(Event));
  IoStatusBlock = 0LL;
  KeInitializeEvent(&Event, NotificationEvent, 0);
  v20 = IoBuildDeviceIoControlRequest(
          0x2D1400u,
          DeviceObject,
          &InputBuffer,
          0xCu,
          &v37,
          0x10u,
          0,
          &Event,
          &IoStatusBlock);
  if ( v20 )
  {
    v20->Tail.Overlay.CurrentStackLocation[-1].Flags |= 2u;
    v21 = IofCallDriver(DeviceObject, v20);
    if ( v21 == 259 )
    {
      KeWaitForSingleObject(&Event, Executive, 0, 0, 0LL);
      v21 = IoStatusBlock.Status;
    }
    if ( v21 >= 0 && IoStatusBlock.Information == 16 && (BYTE8(v37) & 1) != 0 )
      *(_DWORD *)(a2 + 16) |= 0x10u;
  }
  return 0LL;
}
