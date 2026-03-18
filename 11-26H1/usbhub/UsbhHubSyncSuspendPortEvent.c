/*
 * XREFs of UsbhHubSyncSuspendPortEvent @ 0x140043680
 * Callers:
 *     Usbh_PCE_Suspend_Action @ 0x140004A34 (Usbh_PCE_Suspend_Action.c)
 * Callees:
 *     Log @ 0x140009B80 (Log.c)
 *     UsbhUnlatchPdo @ 0x140013A70 (UsbhUnlatchPdo.c)
 *     UsbhLatchPdo @ 0x140017B30 (UsbhLatchPdo.c)
 *     FdoExt @ 0x1400196E0 (FdoExt.c)
 *     UsbhQueryPortState @ 0x1400199F0 (UsbhQueryPortState.c)
 *     Usbh_PcLogEntry @ 0x140021228 (Usbh_PcLogEntry.c)
 *     UsbhSuspendPort @ 0x14002198C (UsbhSuspendPort.c)
 *     WPP_RECORDER_SF_dq @ 0x14003E7C4 (WPP_RECORDER_SF_dq.c)
 */

__int64 __fastcall UsbhHubSyncSuspendPortEvent(__int64 a1, __int64 a2, __int64 a3)
{
  char v4; // r14
  __int64 v6; // rdx
  __int64 v7; // r8
  unsigned int v8; // esi
  __int64 v9; // rbp
  char v10; // dl
  char v11; // r9
  char v12; // dl
  int v14; // [rsp+28h] [rbp-40h]
  __int16 v15; // [rsp+28h] [rbp-40h]
  int v16; // [rsp+78h] [rbp+10h] BYREF
  int v17; // [rsp+7Ch] [rbp+14h]
  int v18; // [rsp+80h] [rbp+18h] BYREF

  v17 = HIDWORD(a2);
  v4 = 0;
  v18 = 0;
  v16 = 0;
  FdoExt(a1);
  Log(a1, 512, 1885697579, a3, *(unsigned __int16 *)(a3 + 4));
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    v14 = *(unsigned __int16 *)(a3 + 4);
    WPP_RECORDER_SF_dq(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      v6,
      v7,
      0x57u,
      (__int64)&WPP_ccf2d5d86ecd3ff97d61dec65be5cc3f_Traceguids,
      v14,
      0LL);
  }
  v8 = *(_DWORD *)(a3 + 400);
  if ( (UsbhQueryPortState(a1, *(_WORD *)(a3 + 4), (__int64)&v16, &v18) & 0xC0000000) != 0xC0000000 && (v16 & 1) != 0 )
  {
    v9 = UsbhLatchPdo(a1, *(_WORD *)(a3 + 4), 0LL, 0x7350444Fu);
    if ( v9 )
    {
      v10 = (16 * (v16 & 1)) | 3;
      if ( (v16 & 4) == 0 )
        v10 = (16 * (v16 & 1)) | 1;
      v11 = v10;
      v12 = v10 | 4;
      if ( (v16 & 8) == 0 )
        v12 = v11;
      v4 = v12 | 8;
      if ( (v16 & 2) == 0 )
        v4 = v12;
    }
    v15 = v16;
    *(_WORD *)(a3 + 420) = v16;
    Usbh_PcLogEntry(a1, a3, v9, 0x10000000, 0, v15, v4, 0);
    if ( v9 )
      UsbhUnlatchPdo(a1, v9, 0LL, 0x7350444Fu);
    if ( (UsbhSuspendPort(a1, *(_WORD *)(a3 + 4)) & 0xC0000000) != 0xC0000000 )
      return 5;
  }
  return v8;
}
