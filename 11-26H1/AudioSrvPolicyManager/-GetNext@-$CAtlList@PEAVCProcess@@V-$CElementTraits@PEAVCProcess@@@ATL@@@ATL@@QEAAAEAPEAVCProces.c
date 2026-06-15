/*
 * XREFs of ?GetNext@?$CAtlList@PEAVCProcess@@V?$CElementTraits@PEAVCProcess@@@ATL@@@ATL@@QEAAAEAPEAVCProcess@@AEAPEAU__POSITION@@@Z @ 0x18001EA10
 * Callers:
 *     ?SendSoundLevelNotification@CApplication@@IEAAXW4__MIDL___MIDL_itf_audiosrv_0000_0000_0004@@@Z @ 0x180012250 (-SendSoundLevelNotification@CApplication@@IEAAXW4__MIDL___MIDL_itf_audiosrv_0000_0000_0004@@@Z.c)
 *     ?GetSmtcProcesses@CApplication@@QEAAJPEAV?$forward_list@V?$com_ptr_t@VCProcess@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@VCProcess@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@PEAI@Z @ 0x1800153A0 (-GetSmtcProcesses@CApplication@@QEAAJPEAV-$forward_list@V-$com_ptr_t@VCProcess@@Uerr_returncode_.c)
 *     ?GetActiveProcessCount@CApplication@@QEAAIXZ @ 0x18001A850 (-GetActiveProcessCount@CApplication@@QEAAIXZ.c)
 *     ?HasDuckedStream@CApplication@@QEAAHXZ @ 0x18002BF3C (-HasDuckedStream@CApplication@@QEAAHXZ.c)
 *     ?IsMutedForSleep@CApplication@@QEAAHXZ @ 0x18002BFD0 (-IsMutedForSleep@CApplication@@QEAAHXZ.c)
 *     ?GetTotalActiveRenderStreamCount@CApplication@@QEAAIXZ @ 0x18002DAB8 (-GetTotalActiveRenderStreamCount@CApplication@@QEAAIXZ.c)
 *     ?GetTotalActiveCaptureStreamCount@CApplication@@QEAAIXZ @ 0x18002DB40 (-GetTotalActiveCaptureStreamCount@CApplication@@QEAAIXZ.c)
 *     ?RawCategory@CApplication@@QEAA?AW4_APPLICATION_CATEGORY@@XZ @ 0x18002EAA4 (-RawCategory@CApplication@@QEAA-AW4_APPLICATION_CATEGORY@@XZ.c)
 *     ?GetBackgroundTaskId@CApplication@@QEAA?AU_GUID@@XZ @ 0x1800386DC (-GetBackgroundTaskId@CApplication@@QEAA-AU_GUID@@XZ.c)
 *     ?HasPLMExemption@CApplication@@QEAAHXZ @ 0x180038A90 (-HasPLMExemption@CApplication@@QEAAHXZ.c)
 *     ?IsPlaying@CApplication@@QEAAHH@Z @ 0x180038CD4 (-IsPlaying@CApplication@@QEAAHH@Z.c)
 *     ?IsVoipCallCapableAndCallIsActive@CApplication@@QEAAHXZ @ 0x180038DA0 (-IsVoipCallCapableAndCallIsActive@CApplication@@QEAAHXZ.c)
 *     ?MarkAsPendingTermination@CApplication@@QEAAXXZ @ 0x180038EAC (-MarkAsPendingTermination@CApplication@@QEAAXXZ.c)
 *     ?RemoveCategoryOverrideFromProcesses@CApplication@@IEAAXW4OverridePolicy@@@Z @ 0x180039A28 (-RemoveCategoryOverrideFromProcesses@CApplication@@IEAAXW4OverridePolicy@@@Z.c)
 *     ?ReviveProcessesPendingTermination@CApplication@@QEAAXXZ @ 0x180039D58 (-ReviveProcessesPendingTermination@CApplication@@QEAAXXZ.c)
 *     ?SendAppClosureNotification@CApplication@@QEAAXXZ @ 0x180039E1C (-SendAppClosureNotification@CApplication@@QEAAXXZ.c)
 *     ??1CApplicationManager@@MEAA@XZ @ 0x18003B43C (--1CApplicationManager@@MEAA@XZ.c)
 *     ?FindAppFromProcessId@CApplicationManager@@QEAAPEAVCApplication@@K@Z @ 0x18003B790 (-FindAppFromProcessId@CApplicationManager@@QEAAPEAVCApplication@@K@Z.c)
 *     ?IsInPlmSponsoredGracePeriod@CApplication@@QEAAHXZ @ 0x18003BEC4 (-IsInPlmSponsoredGracePeriod@CApplication@@QEAAHXZ.c)
 *     ?OnApplicationClosed@CApplicationManager@@QEAAJPEBG_KK@Z @ 0x18003C010 (-OnApplicationClosed@CApplicationManager@@QEAAJPEBG_KK@Z.c)
 *     ?ResetAllApplicationSpecificEndpoints@CApplicationManager@@QEAAJK@Z @ 0x18003CEF8 (-ResetAllApplicationSpecificEndpoints@CApplicationManager@@QEAAJK@Z.c)
 *     ?ResetProcessDataFlowAccessCheckResults@CApplicationManager@@QEAAXPEBG0@Z @ 0x18003CFA0 (-ResetProcessDataFlowAccessCheckResults@CApplicationManager@@QEAAXPEBG0@Z.c)
 *     ?SendBackgroundStreamStateChangedNotifiction@CApplicationManager@@QEAAXXZ @ 0x18003D238 (-SendBackgroundStreamStateChangedNotifiction@CApplicationManager@@QEAAXXZ.c)
 *     ?UnmuteDesktopAppsInSession@CApplicationManager@@QEAAXK@Z @ 0x18003D368 (-UnmuteDesktopAppsInSession@CApplicationManager@@QEAAXK@Z.c)
 *     ?TsSessionLaunchBackgroundTask@@YAJKPEBG0PEAU_GUID@@@Z @ 0x180044B74 (-TsSessionLaunchBackgroundTask@@YAJKPEBG0PEAU_GUID@@@Z.c)
 * Callees:
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x18002E7E8 (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 */

_QWORD *__fastcall ATL::CAtlList<CProcess *,ATL::CElementTraits<CProcess *>>::GetNext(__int64 a1, _QWORD **a2)
{
  _QWORD *v2; // rax

  v2 = *a2;
  if ( !*a2 )
    ATL::AtlThrowImpl(-2147467259);
  *a2 = (_QWORD *)*v2;
  return v2 + 2;
}
