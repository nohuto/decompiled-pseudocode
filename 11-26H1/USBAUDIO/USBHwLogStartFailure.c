/*
 * XREFs of USBHwLogStartFailure @ 0x14002DBCC
 * Callers:
 *     USBDeviceStart @ 0x140040220 (USBDeviceStart.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_sd @ 0x14000DBA4 (WPP_RECORDER_AND_TRACE_SF_sd.c)
 *     memmove @ 0x14001C7C0 (memmove.c)
 */

void __fastcall USBHwLogStartFailure(__int64 a1, int a2, const char *a3, unsigned int a4)
{
  size_t v4; // r13
  __int64 v7; // rsi
  char v9; // dl
  _DWORD *Pool2; // rbx
  PIRP v11; // rdi
  int OutputBuffer; // [rsp+20h] [rbp-78h]
  ULONG OutputBufferLength; // [rsp+28h] [rbp-70h]
  int InternalDeviceIoControl; // [rsp+30h] [rbp-68h]
  int v15; // [rsp+38h] [rbp-60h]
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+50h] [rbp-48h] BYREF
  struct _KEVENT Event; // [rsp+60h] [rbp-38h] BYREF

  v4 = a4;
  memset(&Event, 0, sizeof(Event));
  v7 = a4 + 20;
  IoStatusBlock = 0LL;
  v9 = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x80u) != 0
    && BYTE1(WPP_GLOBAL_Control->Timer) >= 2u;
  if ( v9 || *(ULONG **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_AND_TRACE_SF_sd(
      (__int64)WPP_GLOBAL_Control->AttachedDevice,
      v9,
      *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED,
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      OutputBuffer,
      OutputBufferLength,
      InternalDeviceIoControl,
      v15,
      a3);
  KeInitializeEvent(&Event, NotificationEvent, 0);
  if ( (unsigned __int64)(v7 - 4) <= 0x1000 )
  {
    Pool2 = (_DWORD *)ExAllocatePool2(64LL, (unsigned int)v7, 1096972357LL);
    if ( Pool2 )
    {
      v11 = IoBuildDeviceIoControlRequest(
              0x22002Bu,
              *(PDEVICE_OBJECT *)(a1 + 40),
              0LL,
              0,
              0LL,
              0,
              1u,
              &Event,
              &IoStatusBlock);
      if ( v11 )
      {
        *Pool2 = v7;
        Pool2[3] = 3;
        Pool2[1] = a2;
        memmove(Pool2 + 4, a3, v4);
        v11->Tail.Overlay.CurrentStackLocation[-1].Parameters.WMI.ProviderId = (ULONG_PTR)Pool2;
        if ( IofCallDriver(*(PDEVICE_OBJECT *)(a1 + 40), v11) == 259 )
          KeWaitForSingleObject(&Event, Executive, 0, 0, 0LL);
      }
      ExFreePool(Pool2);
    }
  }
}
