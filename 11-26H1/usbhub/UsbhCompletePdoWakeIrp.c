/*
 * XREFs of UsbhCompletePdoWakeIrp @ 0x14001087C
 * Callers:
 *     UsbhPdoRemoveCleanup @ 0x140010CF0 (UsbhPdoRemoveCleanup.c)
 *     UsbhPdoSetDx @ 0x140012618 (UsbhPdoSetDx.c)
 *     UsbhSS_PdoWakeWorker @ 0x1400145D0 (UsbhSS_PdoWakeWorker.c)
 *     UsbhFdoSetPowerDx_Action @ 0x14003743C (UsbhFdoSetPowerDx_Action.c)
 *     UsbhCompletePdoWakeIrps @ 0x14004A2A4 (UsbhCompletePdoWakeIrps.c)
 * Callees:
 *     UsbhDecPdoIoCount @ 0x140007EA0 (UsbhDecPdoIoCount.c)
 *     UsbhEtwLogDeviceIrpEvent @ 0x14000F910 (UsbhEtwLogDeviceIrpEvent.c)
 *     PdoExt @ 0x140016350 (PdoExt.c)
 *     FdoExt @ 0x1400196E0 (FdoExt.c)
 *     WPP_RECORDER_SF_ddqqD @ 0x14004BDD0 (WPP_RECORDER_SF_ddqqD.c)
 */

char __fastcall UsbhCompletePdoWakeIrp(__int64 a1, __int64 a2, int a3)
{
  __int64 v4; // r14
  char v5; // bl
  __int64 v6; // rdi
  __int64 v7; // rdx
  PIRP v8; // rsi
  __int64 v9; // r8
  __int64 v10; // r9
  __int64 v12; // rcx
  signed __int32 v13; // eax
  unsigned int v14; // edx
  __int64 v15; // rcx
  int v16; // edx
  int v17; // r8d
  int v18; // r9d

  v4 = a3;
  v5 = 0;
  v6 = PdoExt(a2);
  v8 = IoCsqRemoveNextIrp((PIO_CSQ)(v6 + 2280), 0LL);
  if ( v8 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
    {
      FdoExt(a1, v7, v9, v10);
      WPP_RECORDER_SF_ddqqD(WPP_GLOBAL_Control->DeviceExtension, v16, v17, v18);
    }
    if ( (UsbhLogMask & 0x10) != 0 )
    {
      if ( a1 )
      {
        v12 = *(_QWORD *)(a1 + 64);
        if ( v12 )
        {
          v13 = _InterlockedExchangeAdd((volatile signed __int32 *)(v12 + 880), 0xFFFFFFFF);
          v14 = *(_DWORD *)(v12 + 884);
          v15 = *(_QWORD *)(v12 + 888);
          v7 = 32LL * ((v13 - 1) & v14);
          *(_DWORD *)(v7 + v15) = 1346598775;
          *(_QWORD *)(v7 + v15 + 8) = 0LL;
          *(_QWORD *)(v7 + v15 + 16) = v4;
          *(_QWORD *)(v7 + v15 + 24) = v8;
        }
      }
    }
    if ( (int)v4 >= 0 && (*(_DWORD *)(FdoExt(a1, v7, v9, v10) + 2560) & 0x4000000) != 0 )
      PoSetSystemWake(v8);
    UsbhEtwLogDeviceIrpEvent(v6, 0LL, &USBHUB_ETW_EVENT_DEVICE_WAIT_WAKE_COMPLETE, (unsigned int)v4);
    v8->IoStatus.Status = v4;
    IofCompleteRequest(v8, 0);
    UsbhDecPdoIoCount(*(_QWORD *)(v6 + 840), (ULONG_PTR)v8);
    v5 = 1;
  }
  *(_DWORD *)(v6 + 1420) &= ~0x2000u;
  return v5;
}
