/*
 * XREFs of WMI_FireNotificationOld @ 0x140090190
 * Callers:
 *     HUBPDO_EvtDeviceD0Exit @ 0x140015C40 (HUBPDO_EvtDeviceD0Exit.c)
 *     HUBPDO_EvtOutOfBandwidthTimer @ 0x140018AC0 (HUBPDO_EvtOutOfBandwidthTimer.c)
 *     HUBPDO_ValidateSelectConfigUrb @ 0x14001C108 (HUBPDO_ValidateSelectConfigUrb.c)
 *     HUBPDO_CreatePdoInternal @ 0x1400811BC (HUBPDO_CreatePdoInternal.c)
 *     HUBPDO_EvtDevicePrepareHardware @ 0x140082630 (HUBPDO_EvtDevicePrepareHardware.c)
 *     HUBMISC_GenerateUserNotificationForPersistentOverCurrent @ 0x1400869EC (HUBMISC_GenerateUserNotificationForPersistentOverCurrent.c)
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1400024E0 (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF_ @ 0x1400068F8 (WPP_RECORDER_SF_.c)
 *     HUBMISC_StripSymbolicNamePrefix @ 0x140033D50 (HUBMISC_StripSymbolicNamePrefix.c)
 *     __security_check_cookie @ 0x1400467B0 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x1400467F0 (_guard_dispatch_icall.c)
 */

_UNKNOWN **__fastcall WMI_FireNotificationOld(__int64 a1, unsigned __int16 a2, int a3)
{
  int v4; // edi
  __int64 v6; // rdx
  __int64 (__fastcall *v7)(PWDF_DRIVER_GLOBALS, __int64); // rax
  __int64 v8; // rax
  int v9; // edx
  _UNKNOWN **result; // rax
  __int64 v11; // rdx
  int v12; // ecx
  int v13; // [rsp+28h] [rbp-50h]
  __int64 v14; // [rsp+30h] [rbp-48h] BYREF
  _DWORD v15[2]; // [rsp+38h] [rbp-40h] BYREF
  __int64 v16; // [rsp+40h] [rbp-38h]
  int v17; // [rsp+48h] [rbp-30h]
  int v18; // [rsp+4Ch] [rbp-2Ch]

  v4 = a2;
  v6 = *(_QWORD *)(a1 + 2552);
  v16 = 0LL;
  v17 = 0;
  v7 = *(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 3016);
  v14 = 0LL;
  v8 = v7(WdfDriverGlobals, v6);
  if ( (*(unsigned __int8 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, __int64))(WdfFunctions_01015 + 2968))(
         WdfDriverGlobals,
         v8,
         1LL) )
  {
    HUBMISC_StripSymbolicNamePrefix((unsigned __int16 *)(a1 + 2560), &v14);
    v11 = *(_QWORD *)(a1 + 2552);
    v18 = v14 + 6;
    v15[1] = v4;
    v15[0] = a3;
    result = (_UNKNOWN **)(*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, __int64, _DWORD *))(WdfFunctions_01015 + 3024))(
                            WdfDriverGlobals,
                            v11,
                            24LL,
                            v15);
    v12 = (int)result;
    if ( (int)result < 0 )
    {
      result = &WPP_RECORDER_INITIALIZED;
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v13 = v12;
        return (_UNKNOWN **)WPP_RECORDER_SF_d(
                              *(_QWORD *)(a1 + 2536),
                              2u,
                              3u,
                              0x15u,
                              (__int64)&WPP_b48bfb8efb7f3208dce8b8d3052aa366_Traceguids,
                              v13);
      }
    }
  }
  else
  {
    result = &WPP_RECORDER_INITIALIZED;
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v9) = 2;
      return (_UNKNOWN **)WPP_RECORDER_SF_(
                            *(_QWORD *)(a1 + 2536),
                            v9,
                            3,
                            20,
                            (__int64)&WPP_b48bfb8efb7f3208dce8b8d3052aa366_Traceguids);
    }
  }
  return result;
}
