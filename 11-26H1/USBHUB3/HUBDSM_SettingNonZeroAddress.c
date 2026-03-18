/*
 * XREFs of HUBDSM_SettingNonZeroAddress @ 0x140024860
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1400024E0 (WPP_RECORDER_SF_d.c)
 *     HUBUCX_SubmitUcxIoctl @ 0x140028CF4 (HUBUCX_SubmitUcxIoctl.c)
 *     _guard_dispatch_icall @ 0x1400467F0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall HUBDSM_SettingNonZeroAddress(__int64 a1)
{
  _QWORD *v1; // rbx
  __int64 v2; // rax
  int v3; // eax
  int v5; // [rsp+28h] [rbp-10h]

  v1 = *(_QWORD **)(a1 + 960);
  v2 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, _QWORD))(WdfFunctions_01015 + 1552))(
         WdfDriverGlobals,
         v1[55],
         0LL);
  *(_OWORD *)v2 = 0LL;
  *(_OWORD *)(v2 + 16) = 0LL;
  *(_DWORD *)v2 = 32;
  *(_QWORD *)(v2 + 8) = *(_QWORD *)(*v1 + 248LL);
  *(_QWORD *)(v2 + 16) = v1[3];
  v3 = HUBUCX_SubmitUcxIoctl(v1, 4788255LL);
  if ( v3 < 0 && WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v5 = v3;
    WPP_RECORDER_SF_d(
      *(_QWORD *)(v1[1] + 1432LL),
      2u,
      5u,
      0x1Fu,
      (__int64)&WPP_6f1e94dad5dd3d9188df346061fdcafd_Traceguids,
      v5);
  }
  return 1000LL;
}
