/*
 * XREFs of Feature_AgenticSessionCapQoSPolicy__private_IsEnabledDeviceUsageNoInline @ 0x1401CC878
 * Callers:
 *     ?ReportProcess@CQoSReport@@QEAAXPEAUtagPROCESSINFO@@@Z @ 0x1401A83E0 (-ReportProcess@CQoSReport@@QEAAXPEAUtagPROCESSINFO@@@Z.c)
 *     ??1CQoSReport@@QEAA@XZ @ 0x1401CBBA0 (--1CQoSReport@@QEAA@XZ.c)
 *     ?DwsUnlinkAllWindows@tagPROCESSINFO@@QEAAXXZ @ 0x1401CC084 (-DwsUnlinkAllWindows@tagPROCESSINFO@@QEAAXXZ.c)
 *     ?GetPsProcessWindowState@tagPROCESSINFO@@QEBA?AW4_PS_PROCESS_WINDOW_STATE@@W4GetWindowStatePolicy@1@@Z @ 0x1401CC3C4 (-GetPsProcessWindowState@tagPROCESSINFO@@QEBA-AW4_PS_PROCESS_WINDOW_STATE@@W4GetWindowStatePolic.c)
 *     ?Initialize@QualityOfService@@YAJXZ @ 0x1401CC4F0 (-Initialize@QualityOfService@@YAJXZ.c)
 *     ?LogProcessInformation@ForegroundBoost@@YAXXZ @ 0x1401D3C30 (-LogProcessInformation@ForegroundBoost@@YAXXZ.c)
 * Callees:
 *     Feature_AgenticSessionCapQoSPolicy__private_IsEnabledFallback @ 0x1401CC8B4 (Feature_AgenticSessionCapQoSPolicy__private_IsEnabledFallback.c)
 */

__int64 Feature_AgenticSessionCapQoSPolicy__private_IsEnabledDeviceUsageNoInline()
{
  if ( (Feature_AgenticSessionCapQoSPolicy__private_featureState & 0x10) != 0 )
    return Feature_AgenticSessionCapQoSPolicy__private_featureState & 1;
  else
    return Feature_AgenticSessionCapQoSPolicy__private_IsEnabledFallback(
             (unsigned int)Feature_AgenticSessionCapQoSPolicy__private_featureState,
             3LL);
}
