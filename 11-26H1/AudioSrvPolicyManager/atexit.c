/*
 * XREFs of atexit @ 0x18002FCC4
 * Callers:
 *     wil::details::_dynamic_initializer_for__g_featureStateManager__ @ 0x1800018A0 (wil--details--_dynamic_initializer_for__g_featureStateManager__.c)
 *     wil::details::_dynamic_initializer_for__g_enabledStateManager__ @ 0x180001970 (wil--details--_dynamic_initializer_for__g_enabledStateManager__.c)
 *     _dynamic_initializer_for__s_HostedAppInteractivityManager__ @ 0x180001A30 (_dynamic_initializer_for__s_HostedAppInteractivityManager__.c)
 *     ATL::_dynamic_initializer_for__g_strheap__ @ 0x180001A90 (ATL--_dynamic_initializer_for__g_strheap__.c)
 *     ATL::_dynamic_initializer_for___AtlWinModule__ @ 0x180001AE0 (ATL--_dynamic_initializer_for___AtlWinModule__.c)
 *     wil::details::_dynamic_initializer_for__g_threadFailureCallbacks__ @ 0x180001B20 (wil--details--_dynamic_initializer_for__g_threadFailureCallbacks__.c)
 *     _dynamic_initializer_for__TsSessionListLock__ @ 0x180001C00 (_dynamic_initializer_for__TsSessionListLock__.c)
 *     PickerHostContextManager::_dynamic_initializer_for__s_csPickerHostContextList__ @ 0x180001C40 (PickerHostContextManager--_dynamic_initializer_for__s_csPickerHostContextList__.c)
 *     _dynamic_initializer_for__TsSessionList__ @ 0x180001C80 (_dynamic_initializer_for__TsSessionList__.c)
 *     ATL::_dynamic_initializer_for___AtlBaseModule__ @ 0x180001CB0 (ATL--_dynamic_initializer_for___AtlBaseModule__.c)
 *     wil::details::_dynamic_initializer_for__g_processLocalData__ @ 0x180001CD0 (wil--details--_dynamic_initializer_for__g_processLocalData__.c)
 *     PickerHostContextManager::_dynamic_initializer_for__s_PickerHostContextList__ @ 0x180001CF0 (PickerHostContextManager--_dynamic_initializer_for__s_PickerHostContextList__.c)
 *     _dynamic_initializer_for__g_StreamClassPolicyManager__ @ 0x180001D10 (_dynamic_initializer_for__g_StreamClassPolicyManager__.c)
 *     ATL::_dynamic_initializer_for__g_strmgr__ @ 0x180001D30 (ATL--_dynamic_initializer_for__g_strmgr__.c)
 *     ?Provider@AudioSrvPolicyManagerTelemetryProvider@@SAPEBU_tlgProvider_t@@XZ @ 0x18000F6B0 (-Provider@AudioSrvPolicyManagerTelemetryProvider@@SAPEBU_tlgProvider_t@@XZ.c)
 *     ?UpdateVolume@CApplication@@IEAAXW4__MIDL___MIDL_itf_audiosrv_0000_0000_0004@@PEAH1@Z @ 0x180010C60 (-UpdateVolume@CApplication@@IEAAXW4__MIDL___MIDL_itf_audiosrv_0000_0000_0004@@PEAH1@Z.c)
 *     ?GetApplicationPBMStatus@CApplicationManager@@QEAAJPEAVCApplication@@PEAW4__MIDL___MIDL_itf_audiosrv_0000_0000_0004@@1PEAW4_PLM_EXEMPTION@@@Z @ 0x180011710 (-GetApplicationPBMStatus@CApplicationManager@@QEAAJPEAVCApplication@@PEAW4__MIDL___MIDL_itf_audi.c)
 *     ?OnStreamStopped@CApplicationManager@@QEAAJPEAVCProcess@@PEAUIAudioSessionInfo@@PEAUIAudioStreamInfo@@@Z @ 0x1800133E0 (-OnStreamStopped@CApplicationManager@@QEAAJPEAVCProcess@@PEAUIAudioSessionInfo@@PEAUIAudioStream.c)
 *     ?SafeRegCreateKeyEx@@YAJPEAUHKEY__@@PEBGKPEAGKKPEAU_SECURITY_ATTRIBUTES@@PEAPEAU1@PEAK@Z @ 0x18001CC00 (-SafeRegCreateKeyEx@@YAJPEAUHKEY__@@PEBGKPEAGKKPEAU_SECURITY_ATTRIBUTES@@PEAPEAU1@PEAK@Z.c)
 *     ?get@?$static_lazy@VAudioSrvPolicyManagerTelemetryProvider@@@details@wil@@QEAAPEAVAudioSrvPolicyManagerTelemetryProvider@@P6AXXZ@Z @ 0x18001F5D0 (-get@-$static_lazy@VAudioSrvPolicyManagerTelemetryProvider@@@details@wil@@QEAAPEAVAudioSrvPolicy.c)
 *     ?LogState@CApplicationManager@@QEAAXXZ @ 0x1800216D0 (-LogState@CApplicationManager@@QEAAXXZ.c)
 *     ?Instance@AudioSrvPolicyManagerTelemetryProvider@@KAPEAV1@XZ @ 0x1800223F0 (-Instance@AudioSrvPolicyManagerTelemetryProvider@@KAPEAV1@XZ.c)
 *     __scrt_initialize_thread_safe_statics @ 0x18002FDC0 (__scrt_initialize_thread_safe_statics.c)
 * Callees:
 *     _onexit @ 0x18002FC84 (_onexit.c)
 */

int __cdecl atexit(void (__cdecl *a1)())
{
  return (onexit((_onexit_t)a1) != 0LL) - 1;
}
