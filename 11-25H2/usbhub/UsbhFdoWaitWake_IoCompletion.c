/*
 * XREFs of UsbhFdoWaitWake_IoCompletion @ 0x140036460
 * Callers:
 *     <none>
 * Callees:
 *     FdoExt @ 0x140009560 (FdoExt.c)
 *     UsbhEtwLogHubIrpEvent @ 0x14000C5A0 (UsbhEtwLogHubIrpEvent.c)
 *     WPP_RECORDER_SF_ @ 0x14003E860 (WPP_RECORDER_SF_.c)
 */

__int64 __fastcall UsbhFdoWaitWake_IoCompletion(__int64 DeviceObject, PIRP Irp, PVOID Context)
{
  void *v5; // r8
  __int64 v6; // rcx
  _DWORD *v7; // rdi
  unsigned int v8; // esi
  __int64 v10; // [rsp+20h] [rbp-28h]
  unsigned int v11; // [rsp+28h] [rbp-20h]

  if ( (UsbhLogMask & 0x10) != 0 )
  {
    if ( DeviceObject )
    {
      v5 = *(void **)(DeviceObject + 64);
      if ( v5 )
      {
        v6 = *((_QWORD *)v5 + 111)
           + 32LL * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)v5 + 220) & *((_DWORD *)v5 + 221));
        *(_DWORD *)v6 = 1767331686;
        *(_QWORD *)(v6 + 8) = 0LL;
        *(_QWORD *)(v6 + 16) = 0LL;
        *(_QWORD *)(v6 + 24) = Irp;
      }
    }
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      0,
      1,
      12,
      (__int64)&WPP_a1eb007e7448359bd872fcf3001d4cf6_Traceguids);
  v7 = FdoExt(DeviceObject);
  if ( _InterlockedExchange(v7 + 1221, 7) == 4 )
  {
    v8 = 0;
    v7[640] = v7[640] & 0xFBFFFFFF | (PoGetSystemWake(Irp) != 0 ? 0x4000000 : 0);
  }
  else
  {
    v8 = -1073741802;
  }
  v11 = v8;
  LODWORD(v10) = 0;
  UsbhEtwLogHubIrpEvent(DeviceObject, (__int64)Irp, 0LL, &USBHUB_ETW_EVENT_HUB_WAIT_WAKE_COMPLETE, v10, v11);
  IoReleaseRemoveLockEx((PIO_REMOVE_LOCK)(v7 + 306), Irp, 0x20u);
  return v8;
}
