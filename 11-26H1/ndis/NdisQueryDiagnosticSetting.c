/*
 * XREFs of NdisQueryDiagnosticSetting @ 0x14013B420
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_S @ 0x140096C80 (WPP_RECORDER_SF_S.c)
 *     WPP_RECORDER_SF_SD @ 0x1400A4C48 (WPP_RECORDER_SF_SD_ea_1400A4C48.c)
 *     wcscmp_0 @ 0x1400EA036 (wcscmp_0.c)
 */

__int64 __fastcall NdisQueryDiagnosticSetting(const wchar_t *a1)
{
  __int64 v2; // rdx
  __int64 v3; // r8
  __int64 v5; // rdx
  __int64 v6; // r8
  int v7; // [rsp+20h] [rbp-28h]

  if ( !wcscmp_0(a1, L"NblTracking") )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_SD(*((_QWORD *)WPP_GLOBAL_Control + 8), v2, v3, 0xFu, v7, a1);
    return *(unsigned int *)ndisNblTrackerMode;
  }
  else if ( !wcscmp_0(a1, L"OidWatchdogTimeout") )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_SD(*((_QWORD *)WPP_GLOBAL_Control + 8), v5, v6, 0x10u, v7, a1);
    return ndisWatchdogOidTimeout;
  }
  else
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_S(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        3u,
        0x1Bu,
        0x11u,
        (struct _GUID *)&WPP_c6acfce6d57133817f1512edb4fbf215_Traceguids,
        a1);
    return 0xFFFFFFFFLL;
  }
}
