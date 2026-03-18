/*
 * XREFs of Controller_WdfEvtDeviceSelfManagedIoCleanup @ 0x1400796B0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_q @ 0x14002E028 (WPP_RECORDER_SF_q.c)
 *     XilCommonBuffer_ReleaseBuffer @ 0x140036CA0 (XilCommonBuffer_ReleaseBuffer.c)
 *     Controller_ReleaseWdfPowerReferenceForDebugger @ 0x140042CD4 (Controller_ReleaseWdfPowerReferenceForDebugger.c)
 *     _guard_dispatch_icall @ 0x140059490 (_guard_dispatch_icall.c)
 *     Controller_UpdateSqmDatapoints @ 0x1400787F0 (Controller_UpdateSqmDatapoints.c)
 */

__int64 __fastcall Controller_WdfEvtDeviceSelfManagedIoCleanup(__int64 a1)
{
  char v1; // di
  int v2; // edx
  __int64 *v3; // rbx
  void *v4; // rcx

  v1 = a1;
  v3 = *(__int64 **)((*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01033 + 1616))(
                       WdfDriverGlobals,
                       a1,
                       off_14006B240)
                   + 8);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    LOBYTE(v2) = 5;
    WPP_RECORDER_SF_q(v3[9], v2, 4, 62, (__int64)&WPP_aa3f12a561783a7e2659a97375f632db_Traceguids, v1);
  }
  v4 = (void *)v3[124];
  if ( v4 )
  {
    PoUnregisterPowerSettingCallback(v4);
    v3[124] = 0LL;
  }
  Controller_ReleaseWdfPowerReferenceForDebugger((__int64)v3);
  if ( v3[107] )
  {
    XilCommonBuffer_ReleaseBuffer(v3[15]);
    v3[107] = 0LL;
  }
  Controller_UpdateSqmDatapoints(v3);
  return (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01033 + 1664))(WdfDriverGlobals, v3[1]);
}
