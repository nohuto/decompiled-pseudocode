/*
 * XREFs of HUBUCX_UpdateDeviceExitLatencyUsingUCXIoctl @ 0x140029800
 * Callers:
 *     HUBDSM_UpdatingDeviceExitLatencyInTheControllerAfterIncreasingExitLatency @ 0x140024F20 (HUBDSM_UpdatingDeviceExitLatencyInTheControllerAfterIncreasingExitLatency.c)
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1400024E0 (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF_dD @ 0x1400025E4 (WPP_RECORDER_SF_dD.c)
 *     HUBSM_AddEvent @ 0x14000A81C (HUBSM_AddEvent.c)
 *     HUBUCX_SubmitUcxIoctl @ 0x140028CF4 (HUBUCX_SubmitUcxIoctl.c)
 *     _guard_dispatch_icall @ 0x1400467F0 (_guard_dispatch_icall.c)
 *     memset @ 0x140046BC0 (memset.c)
 */

_UNKNOWN **__fastcall HUBUCX_UpdateDeviceExitLatencyUsingUCXIoctl(__int64 *a1)
{
  unsigned int v1; // edx
  unsigned __int16 *v2; // rsi
  _UNKNOWN **result; // rax
  _DWORD *v5; // rbx
  int v6; // edx
  int v7; // [rsp+28h] [rbp-20h]
  int v8; // [rsp+28h] [rbp-20h]
  int v9; // [rsp+30h] [rbp-18h]

  v1 = *((_DWORD *)a1 + 648);
  v2 = (unsigned __int16 *)a1 + 1109;
  if ( v1 && *v2 > v1 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v9 = *((_DWORD *)a1 + 648);
      v7 = *v2;
      WPP_RECORDER_SF_dD(
        *(_QWORD *)(a1[1] + 1432),
        2u,
        5u,
        0x23u,
        (__int64)&WPP_6f1e94dad5dd3d9188df346061fdcafd_Traceguids,
        v7,
        v9);
    }
    return (_UNKNOWN **)HUBSM_AddEvent((__int64)(a1 + 64), 4024);
  }
  else
  {
    v5 = (_DWORD *)(*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD))(WdfFunctions_01015 + 1552))(
                     WdfDriverGlobals,
                     a1[55],
                     0LL);
    memset(v5, 0, 0x48uLL);
    v5[6] |= 4u;
    *v5 = 72;
    *((_QWORD *)v5 + 1) = *(_QWORD *)(*a1 + 248);
    *((_QWORD *)v5 + 2) = a1[3];
    v5[12] = *v2;
    result = (_UNKNOWN **)HUBUCX_SubmitUcxIoctl(a1, 0x491023u);
    v6 = (int)result;
    if ( (int)result < 0 )
    {
      result = &WPP_RECORDER_INITIALIZED;
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v8 = v6;
        return (_UNKNOWN **)WPP_RECORDER_SF_d(
                              *(_QWORD *)(a1[1] + 1432),
                              2u,
                              5u,
                              0x24u,
                              (__int64)&WPP_6f1e94dad5dd3d9188df346061fdcafd_Traceguids,
                              v8);
      }
    }
  }
  return result;
}
