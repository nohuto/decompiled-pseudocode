/*
 * XREFs of HUBFDO_SetFriendlyNameForBlockedHub @ 0x1400809B4
 * Callers:
 *     HUBFDO_EvtDevicePrepareHardware @ 0x14007B960 (HUBFDO_EvtDevicePrepareHardware.c)
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1400024E0 (WPP_RECORDER_SF_d.c)
 *     _guard_dispatch_icall @ 0x1400467F0 (_guard_dispatch_icall.c)
 */

NTSTATUS __fastcall HUBFDO_SetFriendlyNameForBlockedHub(__int64 a1)
{
  __int64 v2; // rax
  struct _DEVICE_OBJECT *v3; // rax
  NTSTATUS result; // eax
  __int64 Size; // [rsp+28h] [rbp-20h]

  v2 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 1632))(WdfDriverGlobals, a1);
  v3 = (struct _DEVICE_OBJECT *)(*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 264))(
                                  WdfDriverGlobals,
                                  v2);
  result = IoSetDevicePropertyData(
             v3,
             &DEVPKEY_Device_DeviceDesc,
             0,
             1u,
             0x12u,
             0x48u,
             L"SuperSpeed USB Hub (Non Functional)");
  if ( result < 0 && WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LODWORD(Size) = result;
    return WPP_RECORDER_SF_d(
             *(_QWORD *)(a1 + 2536),
             3u,
             3u,
             0xBu,
             (__int64)&WPP_ca13ed422d4834673d018685416879c0_Traceguids,
             Size);
  }
  return result;
}
