/*
 * XREFs of Controller_EvtDeviceFileClose @ 0x140034210
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_qd @ 0x1400071EC (WPP_RECORDER_SF_qd.c)
 *     Controller_StopTimeTrackingForHandle @ 0x140042DD4 (Controller_StopTimeTrackingForHandle.c)
 *     _guard_dispatch_icall @ 0x140059490 (_guard_dispatch_icall.c)
 */

__int64 __fastcall Controller_EvtDeviceFileClose(__int64 a1)
{
  __int64 result; // rax
  __int64 v3; // rdi

  result = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01033 + 1616))(
             WdfDriverGlobals,
             a1,
             off_14006B218);
  if ( *(_BYTE *)(result + 48) )
  {
    v3 = *(_QWORD *)(result + 40);
    result = Controller_StopTimeTrackingForHandle(v3, a1, 0LL);
    if ( (int)result < 0 && WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      return WPP_RECORDER_SF_qd(
               *(_QWORD *)(v3 + 72),
               2u,
               4u,
               0x12Du,
               (__int64)&WPP_aa3f12a561783a7e2659a97375f632db_Traceguids,
               a1,
               result);
  }
  return result;
}
