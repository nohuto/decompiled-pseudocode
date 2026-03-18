/*
 * XREFs of HUBFDO_EvtDeviceCleanupCallback @ 0x14000D210
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1400024E0 (WPP_RECORDER_SF_d.c)
 *     McTemplateK0p_EtwWriteTransfer @ 0x140008774 (McTemplateK0p_EtwWriteTransfer.c)
 *     HUBSM_AddEvent @ 0x14000A81C (HUBSM_AddEvent.c)
 *     HUBMISC_WaitForSignal @ 0x14003436C (HUBMISC_WaitForSignal.c)
 *     _guard_dispatch_icall @ 0x1400467F0 (_guard_dispatch_icall.c)
 *     TUNNEL_CloseAllUsb4RemoteTargets @ 0x140091CA8 (TUNNEL_CloseAllUsb4RemoteTargets.c)
 */

NTSTATUS __fastcall HUBFDO_EvtDeviceCleanupCallback(__int64 a1)
{
  __int64 v1; // rax
  __int64 v2; // rcx
  __int64 v3; // rdi
  void *v4; // rcx
  NTSTATUS v5; // eax
  void *v6; // rcx
  NTSTATUS v7; // eax
  void *v8; // rcx
  NTSTATUS v9; // eax
  void *v10; // rcx
  NTSTATUS v11; // eax
  void *v12; // rcx
  NTSTATUS result; // eax
  __int64 v14; // rcx
  __int64 v15; // [rsp+28h] [rbp-10h]
  NTSTATUS v16; // [rsp+28h] [rbp-10h]

  v1 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01015 + 1616))(
         WdfDriverGlobals,
         a1,
         off_14006D270);
  v3 = v1;
  if ( (Microsoft_Windows_USB_USBHUB3EnableBits & 2) != 0 )
    McTemplateK0p_EtwWriteTransfer(v2, (const EVENT_DESCRIPTOR *)"'", 0LL, *(_QWORD *)(v1 + 248));
  TUNNEL_CloseAllUsb4RemoteTargets(v3);
  v4 = *(void **)(v3 + 2656);
  if ( v4 )
  {
    v5 = PoUnregisterPowerSettingCallback(v4);
    if ( v5 < 0 && WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v16 = v5;
      WPP_RECORDER_SF_d(
        *(_QWORD *)(v3 + 2536),
        2u,
        3u,
        0x35u,
        (__int64)&WPP_ca13ed422d4834673d018685416879c0_Traceguids,
        v16);
    }
    *(_QWORD *)(v3 + 2656) = 0LL;
  }
  v6 = *(void **)(v3 + 2784);
  if ( v6 )
  {
    v7 = PoUnregisterPowerSettingCallback(v6);
    if ( v7 < 0 && WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LODWORD(v15) = v7;
      WPP_RECORDER_SF_d(
        *(_QWORD *)(v3 + 2536),
        2u,
        3u,
        0x36u,
        (__int64)&WPP_ca13ed422d4834673d018685416879c0_Traceguids,
        v15);
    }
    *(_QWORD *)(v3 + 2784) = 0LL;
  }
  v8 = *(void **)(v3 + 2584);
  if ( v8 )
  {
    v9 = PoUnregisterPowerSettingCallback(v8);
    if ( v9 < 0 && WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LODWORD(v15) = v9;
      WPP_RECORDER_SF_d(
        *(_QWORD *)(v3 + 2536),
        2u,
        3u,
        0x37u,
        (__int64)&WPP_ca13ed422d4834673d018685416879c0_Traceguids,
        v15);
    }
    *(_QWORD *)(v3 + 2584) = 0LL;
  }
  v10 = *(void **)(v3 + 2576);
  if ( v10 )
  {
    v11 = PoUnregisterPowerSettingCallback(v10);
    if ( v11 < 0 && WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LODWORD(v15) = v11;
      WPP_RECORDER_SF_d(
        *(_QWORD *)(v3 + 2536),
        2u,
        3u,
        0x38u,
        (__int64)&WPP_ca13ed422d4834673d018685416879c0_Traceguids,
        v15);
    }
    *(_QWORD *)(v3 + 2576) = 0LL;
  }
  if ( (*(_DWORD *)(v3 + 40) & 0x20) != 0 )
  {
    KeResetEvent((PRKEVENT)(v3 + 1168));
    HUBSM_AddEvent(v3 + 1280, 2027);
    (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 1632))(WdfDriverGlobals, v3);
    HUBMISC_WaitForSignal((PVOID)(v3 + 1168));
  }
  if ( *(_QWORD *)(v3 + 2272) )
  {
    (*(void (**)(void))(v3 + 528))();
    (*(void (__fastcall **)(_QWORD))(v3 + 512))(*(_QWORD *)(v3 + 2272));
    *(_QWORD *)(v3 + 2272) = 0LL;
  }
  v12 = *(void **)(v3 + 1272);
  if ( v12 )
    ExFreePoolWithTag(v12, 0x68334855u);
  result = imp_WppRecorderLogDelete(WPP_GLOBAL_Control, *(_QWORD *)(v3 + 2536));
  v14 = *(unsigned int *)(v3 + 96);
  if ( (_DWORD)v14 )
  {
    result = USBD_ReleaseHubNumber();
    *(_DWORD *)(v3 + 96) = 0;
  }
  if ( (Microsoft_Windows_USB_USBHUB3EnableBits & 2) != 0 )
    return McTemplateK0p_EtwWriteTransfer(v14, &USBHUB3_ETW_EVENT_HUB_CLEANUP_COMPLETE, 0LL, *(_QWORD *)(v3 + 248));
  return result;
}
