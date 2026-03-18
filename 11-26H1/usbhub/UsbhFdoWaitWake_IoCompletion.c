/*
 * XREFs of UsbhFdoWaitWake_IoCompletion @ 0x14000D840
 * Callers:
 *     <none>
 * Callees:
 *     UsbhEtwLogHubIrpEvent @ 0x14000C7E0 (UsbhEtwLogHubIrpEvent.c)
 *     FdoExt @ 0x1400196E0 (FdoExt.c)
 *     WPP_RECORDER_SF_ @ 0x14003E310 (WPP_RECORDER_SF_.c)
 */

__int64 __fastcall UsbhFdoWaitWake_IoCompletion(__int64 DeviceObject, __int64 Irp, PVOID Context, __int64 a4)
{
  PIRP v4; // rbp
  volatile signed __int32 *v6; // rcx
  signed __int32 v7; // eax
  unsigned int v8; // edx
  __int64 v9; // rcx
  __int64 v10; // rdi
  unsigned int v11; // esi

  v4 = (PIRP)Irp;
  if ( (UsbhLogMask & 0x10) != 0 )
  {
    if ( DeviceObject )
    {
      v6 = *(volatile signed __int32 **)(DeviceObject + 64);
      if ( v6 )
      {
        v7 = _InterlockedExchangeAdd(v6 + 220, 0xFFFFFFFF);
        v8 = *((_DWORD *)v6 + 221);
        v9 = *((_QWORD *)v6 + 111);
        Irp = 32LL * ((v7 - 1) & v8);
        *(_DWORD *)(Irp + v9) = 1767331686;
        *(_QWORD *)(Irp + v9 + 8) = 0LL;
        *(_QWORD *)(Irp + v9 + 16) = 0LL;
        *(_QWORD *)(Irp + v9 + 24) = v4;
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
  v10 = FdoExt(DeviceObject, Irp, Context, a4);
  if ( _InterlockedExchange((volatile __int32 *)(v10 + 4884), 7) == 4 )
  {
    v11 = 0;
    *(_DWORD *)(v10 + 2560) = *(_DWORD *)(v10 + 2560) & 0xFBFFFFFF | (PoGetSystemWake(v4) != 0 ? 0x4000000 : 0);
  }
  else
  {
    v11 = -1073741802;
  }
  UsbhEtwLogHubIrpEvent(DeviceObject, (__int64)v4, 0LL, &USBHUB_ETW_EVENT_HUB_WAIT_WAKE_COMPLETE);
  IoReleaseRemoveLockEx((PIO_REMOVE_LOCK)(v10 + 1224), v4, 0x20u);
  return v11;
}
