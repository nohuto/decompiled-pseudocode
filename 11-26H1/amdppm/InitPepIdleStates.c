/*
 * XREFs of InitPepIdleStates @ 0x140037C68
 * Callers:
 *     ProcLibDeviceStart @ 0x14002E514 (ProcLibDeviceStart.c)
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x140003760 (WPP_RECORDER_SF_d.c)
 *     _guard_dispatch_icall @ 0x14000E680 (_guard_dispatch_icall.c)
 *     PepNotifyQueryProcessorIdleStatesV2 @ 0x14003865C (PepNotifyQueryProcessorIdleStatesV2.c)
 *     PepNotifyReportCStates @ 0x140038A80 (PepNotifyReportCStates.c)
 *     ProcLibTraceGetProcessorIdleStatesV2 @ 0x140040EF4 (ProcLibTraceGetProcessorIdleStatesV2.c)
 */

__int64 __fastcall InitPepIdleStates(__int64 a1)
{
  int v2; // eax
  int v3; // edx
  unsigned int v4; // edi
  int v5; // eax
  int v6; // edx
  __int64 v8; // [rsp+40h] [rbp+8h] BYREF

  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, _QWORD))(WdfFunctions_01015 + 2504))(
    WdfDriverGlobals,
    *(_QWORD *)(a1 + 208),
    0LL);
  if ( (*(_DWORD *)(a1 + 280) & 0x200LL) != 0 )
  {
    v2 = PepNotifyReportCStates(a1);
    if ( v2 < 0 && WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v3) = 3;
      WPP_RECORDER_SF_d(
        WPP_GLOBAL_Control->DeviceExtension,
        v3,
        3,
        10,
        (__int64)&WPP_26d143b2c37434b937c9d64095e12d77_Traceguids,
        v2);
    }
  }
  v8 = 0LL;
  v4 = -1073741823;
  if ( (*(_QWORD *)(a1 + 280) & 0x200000200LL) != 0 )
  {
    v5 = PepNotifyQueryProcessorIdleStatesV2(a1, &v8);
    v4 = v5;
    if ( v5 < 0 )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v6) = 3;
        WPP_RECORDER_SF_d(
          WPP_GLOBAL_Control->DeviceExtension,
          v6,
          3,
          11,
          (__int64)&WPP_26d143b2c37434b937c9d64095e12d77_Traceguids,
          v5);
      }
      *(_QWORD *)(a1 + 280) &= 0xFFFFFFFDFFFFFDFFuLL;
    }
  }
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD))(WdfFunctions_01015 + 2504))(
    WdfDriverGlobals,
    qword_1400155E8,
    0LL);
  *(_QWORD *)(a1 + 1144) = v8;
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 2512))(WdfDriverGlobals, qword_1400155E8);
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD))(WdfFunctions_01015 + 2512))(
    WdfDriverGlobals,
    *(_QWORD *)(a1 + 208));
  ProcLibTraceGetProcessorIdleStatesV2(a1, 0LL);
  return v4;
}
