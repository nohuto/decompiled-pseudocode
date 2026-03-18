/*
 * XREFs of McTemplateU0xf_EventWriteTransfer @ 0x18025D444
 * Callers:
 *     ?CreateWakeupFence@CComputeScribbleScheduler@@AEAAJAEBUScribbleFrame@1@PEAPEAUID3D12Fence@@@Z @ 0x1801DCA28 (-CreateWakeupFence@CComputeScribbleScheduler@@AEAAJAEBUScribbleFrame@1@PEAPEAUID3D12Fence@@@Z.c)
 * Callees:
 *     McGenEventWrite_EventWriteTransfer @ 0x18002F930 (McGenEventWrite_EventWriteTransfer.c)
 *     __security_check_cookie @ 0x1802202A0 (__security_check_cookie.c)
 */

ULONG __fastcall McTemplateU0xf_EventWriteTransfer(__int64 a1, __int64 a2, __int64 a3, float a4)
{
  struct _EVENT_DATA_DESCRIPTOR v5; // [rsp+30h] [rbp-48h] BYREF
  __int64 *v6; // [rsp+40h] [rbp-38h]
  __int64 v7; // [rsp+48h] [rbp-30h]
  float *v8; // [rsp+50h] [rbp-28h]
  __int64 v9; // [rsp+58h] [rbp-20h]
  __int64 v10; // [rsp+90h] [rbp+18h] BYREF
  float v11; // [rsp+98h] [rbp+20h] BYREF

  v11 = a4;
  v10 = a3;
  v7 = 8LL;
  v6 = &v10;
  v9 = 4LL;
  v8 = &v11;
  return McGenEventWrite_EventWriteTransfer(
           &Microsoft_Windows_Dwm_Core_Provider_Context,
           &EVTDESC_COMPUTESCRIBBLE_WAKEUPEVENTCREATED,
           a3,
           3u,
           &v5);
}
