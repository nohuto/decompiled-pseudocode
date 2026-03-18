/*
 * XREFs of UsbhPortCycle @ 0x140058480
 * Callers:
 *     UsbhReset2CycleDevice @ 0x140059170 (UsbhReset2CycleDevice.c)
 * Callees:
 *     Log @ 0x140009B80 (Log.c)
 *     UsbhSignalResumeEvent @ 0x14000BD28 (UsbhSignalResumeEvent.c)
 *     PdoExt @ 0x140016350 (PdoExt.c)
 *     FdoExt @ 0x1400196E0 (FdoExt.c)
 *     UsbhPortDisconnect @ 0x140021F00 (UsbhPortDisconnect.c)
 *     WPP_RECORDER_SF_d @ 0x14003E3EC (WPP_RECORDER_SF_d.c)
 *     UsbhQueueSoftConnectChange @ 0x1400443D0 (UsbhQueueSoftConnectChange.c)
 */

__int64 __fastcall UsbhPortCycle(__int64 a1, __int64 a2, __int64 a3)
{
  _DWORD *v6; // rbx
  _DWORD *v7; // r14
  __int64 v8; // rax
  __int64 v9; // r8
  __int64 v10; // r9
  int v12; // [rsp+28h] [rbp-20h]

  v6 = PdoExt(a3);
  v7 = FdoExt(a1);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    v12 = *(unsigned __int16 *)(a2 + 4);
    WPP_RECORDER_SF_d(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      0,
      1u,
      0x23u,
      (__int64)&WPP_8026ecaf353e33c620bb7ebcf688be2f_Traceguids,
      v12);
  }
  Log(a1, 1024, 1883461955, a2, a3);
  if ( *((_BYTE *)v6 + 2740) )
  {
    if ( v7[702] == 2 )
    {
      v8 = *((_QWORD *)v6 + 349);
      if ( v8 )
      {
        *(_DWORD *)(v8 + 48) = 0;
        IofCompleteRequest(*((PIRP *)v6 + 349), 0);
      }
    }
  }
  else
  {
    v6[355] |= 0x20000u;
    UsbhPortDisconnect(a1, a2, a3);
    UsbhSignalResumeEvent(a1, a2, v9, v10);
    UsbhQueueSoftConnectChange(a1, *(_WORD *)(a2 + 4), *(_QWORD *)(a2 + 376), 0LL);
  }
  return 0LL;
}
