/*
 * XREFs of UsbhCompletePdoWakeIrp @ 0x14000E4EC
 * Callers:
 *     UsbhSS_PdoWakeWorker @ 0x14000D9A0 (UsbhSS_PdoWakeWorker.c)
 *     UsbhPdoSetDx @ 0x14000E090 (UsbhPdoSetDx.c)
 *     UsbhPdoRemoveCleanup @ 0x1400177EC (UsbhPdoRemoveCleanup.c)
 *     UsbhFdoSetPowerDx_Action @ 0x1400325B8 (UsbhFdoSetPowerDx_Action.c)
 *     UsbhCompletePdoWakeIrps @ 0x14004A6F0 (UsbhCompletePdoWakeIrps.c)
 * Callees:
 *     PdoExt @ 0x140004330 (PdoExt.c)
 *     FdoExt @ 0x140009560 (FdoExt.c)
 *     UsbhDecPdoIoCount @ 0x14000F830 (UsbhDecPdoIoCount.c)
 *     UsbhEtwLogDeviceIrpEvent @ 0x140016858 (UsbhEtwLogDeviceIrpEvent.c)
 *     WPP_RECORDER_SF_ddqqD @ 0x14004C210 (WPP_RECORDER_SF_ddqqD.c)
 */

char __fastcall UsbhCompletePdoWakeIrp(__int64 a1, __int64 a2, int a3)
{
  __int64 v4; // r14
  char v5; // bl
  _DWORD *v6; // rdi
  PIRP v7; // rsi
  __int64 v9; // rdx
  __int64 v10; // rcx
  int v11; // edx
  int v12; // r8d
  int v13; // r9d

  v4 = a3;
  v5 = 0;
  v6 = PdoExt(a2);
  v7 = IoCsqRemoveNextIrp((PIO_CSQ)(v6 + 570), 0LL);
  if ( v7 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
    {
      FdoExt(a1);
      WPP_RECORDER_SF_ddqqD(WPP_GLOBAL_Control->DeviceExtension, v11, v12, v13);
    }
    if ( (UsbhLogMask & 0x10) != 0 )
    {
      if ( a1 )
      {
        v9 = *(_QWORD *)(a1 + 64);
        if ( v9 )
        {
          v10 = *(_QWORD *)(v9 + 888)
              + 32LL
              * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v9 + 880)) & *(_DWORD *)(v9 + 884));
          *(_DWORD *)v10 = 1346598775;
          *(_QWORD *)(v10 + 8) = 0LL;
          *(_QWORD *)(v10 + 16) = v4;
          *(_QWORD *)(v10 + 24) = v7;
        }
      }
    }
    if ( (int)v4 >= 0 && (FdoExt(a1)[640] & 0x4000000) != 0 )
      PoSetSystemWake(v7);
    UsbhEtwLogDeviceIrpEvent(v6, 0LL, &USBHUB_ETW_EVENT_DEVICE_WAIT_WAKE_COMPLETE, (unsigned int)v4);
    v7->IoStatus.Status = v4;
    IofCompleteRequest(v7, 0);
    UsbhDecPdoIoCount(*((_QWORD *)v6 + 105), (ULONG_PTR)v7);
    v5 = 1;
  }
  v6[355] &= ~0x2000u;
  return v5;
}
