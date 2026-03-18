/*
 * XREFs of HUBPDO_EvtDeviceResourceRequirementsQuery @ 0x140083A90
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1400024E0 (WPP_RECORDER_SF_d.c)
 *     HUBSM_AddDsmEvent @ 0x14000A800 (HUBSM_AddDsmEvent.c)
 *     HUBMISC_WaitForSignal @ 0x14003436C (HUBMISC_WaitForSignal.c)
 *     _guard_dispatch_icall @ 0x1400467F0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall HUBPDO_EvtDeviceResourceRequirementsQuery(const void *a1)
{
  _QWORD *v2; // rdi
  __int64 v3; // rax
  __int64 v4; // r8
  int v5; // eax
  __int64 v6; // rax
  __int64 v8; // [rsp+28h] [rbp-20h]

  v2 = *(_QWORD **)((*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, const void *, void *))(WdfFunctions_01015 + 1616))(
                      WdfDriverGlobals,
                      a1,
                      off_14006D1D0)
                  + 24);
  v3 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD))(WdfFunctions_01015 + 1632))(WdfDriverGlobals, *v2);
  LOBYTE(v4) = 1;
  v5 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, __int64, _QWORD, int, const char *))(WdfFunctions_01015 + 3504))(
         WdfDriverGlobals,
         v3,
         v4,
         0LL,
         10972,
         "onecore\\drivers\\wdm\\usb\\usb3\\hub\\src\\hubpdo.c");
  if ( v5 >= 0 )
  {
    if ( (*((_DWORD *)v2 + 411) & 0x4000) == 0 )
    {
      KeClearEvent((PRKEVENT)(v2 + 202));
      HUBSM_AddDsmEvent((__int64)v2, 4095LL);
      HUBMISC_WaitForSignal(v2 + 202, "Pre Start Completion", a1);
    }
    KeClearEvent((PRKEVENT)(v2 + 199));
    HUBSM_AddDsmEvent((__int64)v2, 4091LL);
    HUBMISC_WaitForSignal(v2 + 199, "Device ResourcesQuery", a1);
    v6 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD))(WdfFunctions_01015 + 1632))(WdfDriverGlobals, *v2);
    (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD, __int64, const char *))(WdfFunctions_01015 + 3512))(
      WdfDriverGlobals,
      v6,
      0LL,
      11011LL,
      "onecore\\drivers\\wdm\\usb\\usb3\\hub\\src\\hubpdo.c");
  }
  else if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LODWORD(v8) = v5;
    WPP_RECORDER_SF_d(
      *(_QWORD *)(v2[1] + 1432LL),
      2u,
      5u,
      0xA5u,
      (__int64)&WPP_8beb7df92ba934db5f6899fb45b5938a_Traceguids,
      v8);
  }
  return 0LL;
}
