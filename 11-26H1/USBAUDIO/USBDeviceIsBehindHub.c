/*
 * XREFs of USBDeviceIsBehindHub @ 0x1400351D8
 * Callers:
 *     USBDeviceGetControllerInfo @ 0x140034FD0 (USBDeviceGetControllerInfo.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_d @ 0x140005B28 (WPP_RECORDER_AND_TRACE_SF_d.c)
 *     __security_check_cookie @ 0x14001C6A0 (__security_check_cookie.c)
 */

__int64 __fastcall USBDeviceIsBehindHub(__int64 a1, _DWORD *a2)
{
  struct _DEVICE_OBJECT *v4; // rdx
  int v5; // ebx
  PIRP v6; // rax
  int v7; // r8d
  IRP *v8; // rdx
  NTSTATUS Status; // edi
  PDEVICE_OBJECT v10; // rcx
  struct _IO_STACK_LOCATION *CurrentStackLocation; // rax
  struct _KEVENT Event; // [rsp+50h] [rbp-9h] BYREF
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+68h] [rbp+Fh] BYREF
  __int128 v15; // [rsp+78h] [rbp+1Fh] BYREF
  __int128 v16; // [rsp+88h] [rbp+2Fh]

  memset(&Event, 0, sizeof(Event));
  KeInitializeEvent(&Event, NotificationEvent, 0);
  v4 = *(struct _DEVICE_OBJECT **)(a1 + 40);
  v5 = 0;
  IoStatusBlock = 0LL;
  v6 = IoBuildSynchronousFsdRequest(0xFu, v4, 0LL, 0, 0LL, &Event, &IoStatusBlock);
  v8 = v6;
  if ( v6 )
  {
    v15 = 0LL;
    v16 = 0LL;
    CurrentStackLocation = v6->Tail.Overlay.CurrentStackLocation;
    CurrentStackLocation[-1].Parameters.Read.ByteOffset.LowPart = 2229311;
    CurrentStackLocation[-1].Parameters.WMI.ProviderId = (ULONG_PTR)&v15;
    v8->IoStatus.Status = -1073741637;
    Status = IofCallDriver(*(PDEVICE_OBJECT *)(a1 + 40), v8);
    if ( Status == 259 )
    {
      KeWaitForSingleObject(&Event, Executive, 0, 0, 0LL);
      Status = IoStatusBlock.Status;
    }
    if ( Status >= 0 )
    {
      LOBYTE(v5) = WORD1(v16) != 0;
      *a2 = v5;
      return (unsigned int)Status;
    }
    v10 = WPP_GLOBAL_Control;
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x100) == 0
      || (LOBYTE(v8) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 2u) )
    {
      LOBYTE(v8) = 0;
    }
    LOBYTE(v7) = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
    if ( (_BYTE)v8 || *(ULONG **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
      goto LABEL_8;
  }
  else
  {
    Status = -1073741670;
    v10 = WPP_GLOBAL_Control;
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x100) == 0
      || (LOBYTE(v8) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 2u) )
    {
      LOBYTE(v8) = 0;
    }
    LOBYTE(v7) = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
    if ( (_BYTE)v8 || *(ULONG **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
LABEL_8:
      WPP_RECORDER_AND_TRACE_SF_d(v10->AttachedDevice, (_DWORD)v8, v7, v10->DeviceExtension);
  }
  return (unsigned int)Status;
}
