/*
 * XREFs of FWUPDATE_EvtDeviceReportedMissing @ 0x140091920
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1400024E0 (WPP_RECORDER_SF_d.c)
 *     _guard_dispatch_icall @ 0x1400467F0 (_guard_dispatch_icall.c)
 *     FWUPDATE_CreateFirmwareUpdateDevice @ 0x140091124 (FWUPDATE_CreateFirmwareUpdateDevice.c)
 */

_BYTE *__fastcall FWUPDATE_EvtDeviceReportedMissing(__int64 a1)
{
  _BYTE *result; // rax
  __int64 v3; // rdi
  __int64 v4; // rcx
  int v5; // [rsp+28h] [rbp-10h]

  result = (_BYTE *)(*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01015 + 1616))(
                      WdfDriverGlobals,
                      a1,
                      off_14006D248);
  v3 = *(_QWORD *)result;
  if ( *(_QWORD *)(*(_QWORD *)result + 2672LL) == a1 && result[24] == 1 )
  {
    v4 = *(_QWORD *)result;
    *(_QWORD *)(v3 + 2672) = 0LL;
    result = (_BYTE *)FWUPDATE_CreateFirmwareUpdateDevice(v4);
    if ( (int)result < 0 && WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v5 = (int)result;
      return (_BYTE *)WPP_RECORDER_SF_d(
                        *(_QWORD *)(v3 + 2536),
                        2u,
                        2u,
                        0xAu,
                        (__int64)&WPP_2fd11ae104fa34a9334eddada324a17a_Traceguids,
                        v5);
    }
  }
  return result;
}
