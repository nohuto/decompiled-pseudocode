/*
 * XREFs of HUBPDO_EvtDeviceD0Entry @ 0x1400159E0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1400068F8 (WPP_RECORDER_SF_.c)
 *     HUBSM_AddEvent @ 0x14000A81C (HUBSM_AddEvent.c)
 *     McTemplateK0pqq_EtwWriteTransfer @ 0x14000F6F4 (McTemplateK0pqq_EtwWriteTransfer.c)
 *     McTemplateK0pqqh_EtwWriteTransfer @ 0x14000F76C (McTemplateK0pqqh_EtwWriteTransfer.c)
 *     HUBMISC_WaitForSignal @ 0x14003436C (HUBMISC_WaitForSignal.c)
 *     HUBIDLE_AddEvent @ 0x14004073C (HUBIDLE_AddEvent.c)
 *     __security_check_cookie @ 0x1400467B0 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x1400467F0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall HUBPDO_EvtDeviceD0Entry(__int64 a1)
{
  __int64 v2; // rbp
  __int64 v3; // rdi
  int v4; // eax
  int v5; // edx
  int v6; // esi
  __int64 v7; // rcx
  __int64 v8; // rcx
  int v9; // eax
  __int64 v10; // rcx
  unsigned int v11; // ebx
  __int64 v13; // [rsp+20h] [rbp-58h]
  __int64 v14; // [rsp+28h] [rbp-50h]
  GUID v15; // [rsp+40h] [rbp-38h] BYREF

  v2 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01015 + 1616))(
         WdfDriverGlobals,
         a1,
         off_14006D1D0);
  v3 = *(_QWORD *)(v2 + 24);
  *(_DWORD *)(v2 + 384) = 1;
  v15 = 0LL;
  if ( (*(_DWORD *)((*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, WDFDRIVER__ *, void *))(WdfFunctions_01015 + 1616))(
                      WdfDriverGlobals,
                      WdfDriverGlobals->Driver,
                      off_14006D2C0)
                  + 4) & 0x1000) != 0
    && EtwActivityIdControl(3u, (LPGUID)(v3 + 2184)) >= 0 )
  {
    v15 = *(GUID *)(v3 + 2184);
    _InterlockedOr((volatile signed __int32 *)(v3 + 1644), 0x80u);
  }
  v4 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 3104))(WdfDriverGlobals, a1);
  v6 = v4;
  if ( (Microsoft_Windows_USB_USBHUB3EnableBits & 4) != 0 )
  {
    v7 = *(_DWORD *)(v2 + 32) >> 3;
    LOWORD(v7) = (*(_DWORD *)(v2 + 32) & 8) != 0;
    McTemplateK0pqqh_EtwWriteTransfer(
      v7,
      &USBHUB3_ETW_EVENT_DEVICE_D0_ENTRY_START,
      &v15,
      *(_QWORD *)(v3 + 24),
      1,
      v4,
      v7);
  }
  v8 = *(_QWORD *)(v3 + 8);
  if ( (*(_DWORD *)(v8 + 204) & 0x800) != 0 )
  {
    v9 = *(_DWORD *)(v3 + 2732);
    if ( v9 == 2 || v9 == 4 )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v5) = 4;
        WPP_RECORDER_SF_(*(_QWORD *)(v8 + 1432), v5, 5, 74, (__int64)&WPP_8beb7df92ba934db5f6899fb45b5938a_Traceguids);
      }
      PoFxActivateComponent(*(_QWORD *)(*(_QWORD *)v3 + 2624LL), 0LL, 1LL);
    }
  }
  HUBIDLE_AddEvent(v2 + 72, 6007LL, 0LL);
  KeClearEvent((PRKEVENT)(v3 + 1592));
  HUBSM_AddEvent(v3 + 512, 4067);
  HUBMISC_WaitForSignal((PVOID)(v3 + 1592));
  v10 = *(_QWORD *)(v2 + 392);
  v11 = *(_DWORD *)(v3 + 1584);
  if ( v10 )
    SleepstudyHelper_ComponentActive();
  if ( (Microsoft_Windows_USB_USBHUB3EnableBits & 4) != 0 )
  {
    LODWORD(v14) = v6;
    LODWORD(v13) = v11;
    McTemplateK0pqq_EtwWriteTransfer(
      v10,
      &USBHUB3_ETW_EVENT_DEVICE_D0_ENTRY_COMPLETE,
      &v15,
      *(_QWORD *)(v3 + 24),
      v13,
      v14);
  }
  _InterlockedAnd((volatile signed __int32 *)(v3 + 1644), 0xFFFFFF7F);
  return v11;
}
