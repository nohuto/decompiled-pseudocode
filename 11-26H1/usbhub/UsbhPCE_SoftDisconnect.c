/*
 * XREFs of UsbhPCE_SoftDisconnect @ 0x1400441FC
 * Callers:
 *     Usbh_PdoSurpriseRemove_PdoEvent @ 0x14004964C (Usbh_PdoSurpriseRemove_PdoEvent.c)
 * Callees:
 *     Log @ 0x140009B80 (Log.c)
 *     UsbhGetPortData @ 0x1400186A0 (UsbhGetPortData.c)
 *     UsbhDispatch_PortChangeQueueEvent @ 0x14001E94C (UsbhDispatch_PortChangeQueueEvent.c)
 *     WPP_RECORDER_SF_d @ 0x14003E3EC (WPP_RECORDER_SF_d.c)
 */

__int64 __fastcall UsbhPCE_SoftDisconnect(__int64 a1, unsigned __int16 a2, __int64 a3)
{
  int v3; // edi
  int v4; // ebp
  __int64 v6; // r8
  __int64 v7; // r9
  __int64 result; // rax
  __int64 v9; // [rsp+28h] [rbp-30h]
  int v10; // [rsp+28h] [rbp-30h]

  v3 = a2;
  v4 = a3;
  Log(a1, 512, 7562852, a3, a2);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    v10 = v3;
    WPP_RECORDER_SF_d(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      0,
      1u,
      0x52u,
      (__int64)&WPP_ccf2d5d86ecd3ff97d61dec65be5cc3f_Traceguids,
      v10);
  }
  result = UsbhGetPortData(a1, (unsigned __int16)v3, v6, v7);
  if ( result )
    result = UsbhDispatch_PortChangeQueueEvent(a1, result, 8, v4, 0LL, 0, 0LL);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    {
      LODWORD(v9) = v3;
      return WPP_RECORDER_SF_d(
               (__int64)WPP_GLOBAL_Control->DeviceExtension,
               0,
               1u,
               0x53u,
               (__int64)&WPP_ccf2d5d86ecd3ff97d61dec65be5cc3f_Traceguids,
               v9);
    }
  }
  return result;
}
