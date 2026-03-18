/*
 * XREFs of Controller_WdfEvtDeviceFilterRemoveResourceRequirements @ 0x140078EF0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_qq @ 0x140038B04 (WPP_RECORDER_SF_qq.c)
 *     Etw_ReportFatalError @ 0x14003D584 (Etw_ReportFatalError.c)
 *     _guard_dispatch_icall @ 0x140059490 (_guard_dispatch_icall.c)
 *     Interrupter_FilterRemoveResourceRequirements @ 0x14007B6A4 (Interrupter_FilterRemoveResourceRequirements.c)
 */

__int64 __fastcall Controller_WdfEvtDeviceFilterRemoveResourceRequirements(__int64 a1, __int64 a2)
{
  __int64 v4; // rdi
  int v5; // eax
  __int64 v6; // rcx
  unsigned int v7; // ebx

  v4 = *(_QWORD *)((*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01033 + 1616))(
                     WdfDriverGlobals,
                     a1,
                     off_14006B240)
                 + 8);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qq(
      *(_QWORD *)(v4 + 72),
      4u,
      4u,
      0xE1u,
      (__int64)&WPP_aa3f12a561783a7e2659a97375f632db_Traceguids,
      a1,
      a2);
  v5 = Interrupter_FilterRemoveResourceRequirements(*(_QWORD *)(v4 + 128), a2);
  v7 = v5;
  if ( v5 < 0 )
    Etw_ReportFatalError(v6, v4, 0, 4148, v5, 0LL);
  return v7;
}
