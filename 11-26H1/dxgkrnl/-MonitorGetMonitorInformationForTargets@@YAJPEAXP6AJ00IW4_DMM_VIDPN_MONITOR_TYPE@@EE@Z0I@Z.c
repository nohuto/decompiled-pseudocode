/*
 * XREFs of ?MonitorGetMonitorInformationForTargets@@YAJPEAXP6AJ00IW4_DMM_VIDPN_MONITOR_TYPE@@EE@Z0I@Z @ 0x14033F7DC
 * Callers:
 *     ?_FillTargetInfoAdaptersCallback@CCD_TOPOLOGY@@CAJPEAVDXGADAPTER@@PEAX@Z @ 0x14033E820 (-_FillTargetInfoAdaptersCallback@CCD_TOPOLOGY@@CAJPEAVDXGADAPTER@@PEAX@Z.c)
 * Callees:
 *     ?_GetMonitorInformationForTargets@MONITOR_MGR@@QEAAJP6AJPEAX0IW4_DMM_VIDPN_MONITOR_TYPE@@EE@Z0I@Z @ 0x1403403F8 (-_GetMonitorInformationForTargets@MONITOR_MGR@@QEAAJP6AJPEAX0IW4_DMM_VIDPN_MONITOR_TYPE@@EE@Z0I@.c)
 */

__int64 __fastcall MonitorGetMonitorInformationForTargets(
        _QWORD *a1,
        int (__high *a2)(void *, void *, unsigned int, enum _DMM_VIDPN_MONITOR_TYPE, unsigned __int8, unsigned __int8),
        void *a3)
{
  __int64 v3; // rax
  __int64 v4; // r9
  __int64 result; // rax

  if ( a1 )
  {
    v3 = a1[395];
    if ( !v3 )
    {
      WdLogSingleEntry1(2LL);
      result = 3221226021LL;
      WdLogGlobalForLineNumber = 4469;
      return result;
    }
    v4 = *(_QWORD *)(v3 + 112);
    if ( v4 )
      return MONITOR_MGR::_GetMonitorInformationForTargets(
               *(MONITOR_MGR **)(v3 + 112),
               (int (__high *)(void *, void *, unsigned int, enum _DMM_VIDPN_MONITOR_TYPE, unsigned __int8, unsigned __int8))CCD_TOPOLOGY::_FillTargetInfoMonitorsCallback,
               a3,
               v4);
    WdLogSingleEntry1(2LL);
    WdLogGlobalForLineNumber = 4482;
  }
  return 3221225485LL;
}
