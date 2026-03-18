/*
 * XREFs of HUBUCX_DisableDeviceAndDefaultEndpointUsingUCXIoctl @ 0x140026F30
 * Callers:
 *     HUBDSM_DisablingDeviceInControllerOnStopSuspendOnRenumWithAddress0Ownership @ 0x140021C30 (HUBDSM_DisablingDeviceInControllerOnStopSuspendOnRenumWithAddress0Ownership.c)
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1400024E0 (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF_q @ 0x14001DED0 (WPP_RECORDER_SF_q.c)
 *     HUBUCX_SubmitUcxIoctl @ 0x140028CF4 (HUBUCX_SubmitUcxIoctl.c)
 *     _guard_dispatch_icall @ 0x1400467F0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall HUBUCX_DisableDeviceAndDefaultEndpointUsingUCXIoctl(__int64 a1)
{
  __int64 v2; // rdi
  __int64 v3; // rdx
  __int64 v4; // rax
  __int64 result; // rax
  __int64 v6; // [rsp+28h] [rbp-10h]

  v2 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, _QWORD))(WdfFunctions_01015 + 1552))(
         WdfDriverGlobals,
         *(_QWORD *)(a1 + 440),
         0LL);
  *(_OWORD *)v2 = 0LL;
  *(_OWORD *)(v2 + 16) = 0LL;
  *(_QWORD *)(v2 + 32) = 0LL;
  *(_DWORD *)v2 = 40;
  *(_QWORD *)(v2 + 8) = *(_QWORD *)(*(_QWORD *)a1 + 248LL);
  *(_QWORD *)(v2 + 16) = *(_QWORD *)(a1 + 24);
  *(_QWORD *)(v2 + 24) = *(_QWORD *)(a1 + 88);
  if ( (*(_DWORD *)(a1 + 1652) & 0x4000000) != 0 )
  {
    v3 = *(_QWORD *)(a1 + 16);
    if ( v3 )
    {
      if ( *(_DWORD *)(v3 + 4) == 1 )
      {
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          v4 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS))(WdfFunctions_01015 + 1632))(WdfDriverGlobals);
          WPP_RECORDER_SF_q(
            *(_QWORD *)(*(_QWORD *)(a1 + 8) + 1432LL),
            4u,
            5u,
            0x1Cu,
            (__int64)&WPP_6f1e94dad5dd3d9188df346061fdcafd_Traceguids,
            v4);
        }
        *(_DWORD *)(v2 + 32) = 2;
      }
    }
  }
  result = HUBUCX_SubmitUcxIoctl(a1, 4788267LL);
  if ( (int)result < 0 && WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LODWORD(v6) = result;
    return WPP_RECORDER_SF_d(
             *(_QWORD *)(*(_QWORD *)(a1 + 8) + 1432LL),
             2u,
             5u,
             0x1Du,
             (__int64)&WPP_6f1e94dad5dd3d9188df346061fdcafd_Traceguids,
             v6);
  }
  return result;
}
