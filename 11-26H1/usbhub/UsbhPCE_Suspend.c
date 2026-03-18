/*
 * XREFs of UsbhPCE_Suspend @ 0x140011294
 * Callers:
 *     Usbh_PCE_Suspend_Action @ 0x140004A34 (Usbh_PCE_Suspend_Action.c)
 *     UsbhSyncSuspendPdoPort @ 0x1400113C4 (UsbhSyncSuspendPdoPort.c)
 *     UsbhBusSuspend_Action @ 0x1400412BC (UsbhBusSuspend_Action.c)
 *     Usbh_PCE_ResumeDone_Action @ 0x14004508C (Usbh_PCE_ResumeDone_Action.c)
 * Callees:
 *     UsbhGetPortData @ 0x1400186A0 (UsbhGetPortData.c)
 *     FdoExt @ 0x1400196E0 (FdoExt.c)
 *     UsbhDispatch_PortChangeQueueEventEx @ 0x14001E990 (UsbhDispatch_PortChangeQueueEventEx.c)
 *     WPP_RECORDER_SF_d @ 0x14003E3EC (WPP_RECORDER_SF_d.c)
 */

__int64 __fastcall UsbhPCE_Suspend(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rsi
  int v5; // ebp
  __int64 v7; // rcx
  signed __int32 v8; // eax
  unsigned int v9; // edx
  __int64 v10; // rcx
  __int64 v11; // rdx
  __int64 PortData; // rax
  unsigned int v14[6]; // [rsp+40h] [rbp-18h] BYREF

  v4 = (unsigned __int16)a3;
  v5 = a2;
  v14[0] = -1073741667;
  FdoExt(a1, a2, a3, a4);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_d(
      WPP_GLOBAL_Control->DeviceExtension,
      0,
      1,
      64,
      (__int64)&WPP_ccf2d5d86ecd3ff97d61dec65be5cc3f_Traceguids,
      v4);
  if ( (UsbhLogMask & 0x200) != 0 )
  {
    if ( a1 )
    {
      v7 = *(_QWORD *)(a1 + 64);
      if ( v7 )
      {
        v8 = _InterlockedExchangeAdd((volatile signed __int32 *)(v7 + 880), 0xFFFFFFFF);
        v9 = *(_DWORD *)(v7 + 884);
        v10 = *(_QWORD *)(v7 + 888);
        v11 = 32LL * ((v8 - 1) & v9);
        *(_DWORD *)(v11 + v10) = 808535376;
        *(_QWORD *)(v11 + v10 + 8) = 0LL;
        *(_QWORD *)(v11 + v10 + 16) = 0LL;
        *(_QWORD *)(v11 + v10 + 24) = v4;
      }
    }
  }
  PortData = UsbhGetPortData(a1, (unsigned __int16)v4);
  if ( PortData )
    UsbhDispatch_PortChangeQueueEventEx(a1, PortData, 10, v5, 0LL, 0, 0LL, (__int64)v14);
  return v14[0];
}
