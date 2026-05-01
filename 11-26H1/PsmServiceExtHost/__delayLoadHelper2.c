/*
 * XREFs of __delayLoadHelper2 @ 0x180069230
 * Callers:
 *     __tailMerge_ext_ms_win_session_usermgr_l1_1_0_dll @ 0x18006FA76 (__tailMerge_ext_ms_win_session_usermgr_l1_1_0_dll.c)
 *     __tailMerge_ext_ms_win_session_usertoken_l1_1_0_dll @ 0x18006FB6A (__tailMerge_ext_ms_win_session_usertoken_l1_1_0_dll.c)
 *     __tailMerge_ext_ms_win_core_storelicensing_l1_2_0_dll @ 0x18006FC4A (__tailMerge_ext_ms_win_core_storelicensing_l1_2_0_dll.c)
 *     __tailMerge_ext_ms_win_core_xbrm_l1_1_0_dll @ 0x18006FD60 (__tailMerge_ext_ms_win_core_xbrm_l1_1_0_dll.c)
 *     __tailMerge_ext_ms_win_core_xbrm_l1_1_1_dll @ 0x18006FE96 (__tailMerge_ext_ms_win_core_xbrm_l1_1_1_dll.c)
 *     __tailMerge_ext_ms_win_edputil_policy_l1_1_0_dll @ 0x18006FF69 (__tailMerge_ext_ms_win_edputil_policy_l1_1_0_dll.c)
 *     __tailMerge_ext_ms_win_security_efswrt_l1_1_2_dll @ 0x180070018 (__tailMerge_ext_ms_win_security_efswrt_l1_1_2_dll.c)
 *     __tailMerge_ext_ms_win_session_wtsapi32_l1_1_0_dll @ 0x1800700A3 (__tailMerge_ext_ms_win_session_wtsapi32_l1_1_0_dll.c)
 *     __tailMerge_api_ms_win_appmodel_state_l1_2_0_dll @ 0x18007013A (__tailMerge_api_ms_win_appmodel_state_l1_2_0_dll.c)
 *     __tailMerge_api_ms_win_appmodel_identity_l1_2_0_dll @ 0x1800701E9 (__tailMerge_api_ms_win_appmodel_identity_l1_2_0_dll.c)
 *     __tailMerge_ext_ms_win_dxcore_l1_1_0_dll @ 0x180070342 (__tailMerge_ext_ms_win_dxcore_l1_1_0_dll.c)
 *     __tailMerge_api_ms_win_dx_d3dkmt_l1_1_3_dll @ 0x1800703CD (__tailMerge_api_ms_win_dx_d3dkmt_l1_1_3_dll.c)
 *     __tailMerge_api_ms_win_dx_d3dkmt_l1_1_2_dll @ 0x180070458 (__tailMerge_api_ms_win_dx_d3dkmt_l1_1_2_dll.c)
 *     __tailMerge_ext_ms_win_core_resourcepolicyserver_l1_1_1_dll @ 0x18007052B (__tailMerge_ext_ms_win_core_resourcepolicyserver_l1_1_1_dll.c)
 *     __tailMerge_ext_ms_win_core_resourcepolicyserver_l1_1_0_dll @ 0x18007061C (__tailMerge_ext_ms_win_core_resourcepolicyserver_l1_1_0_dll.c)
 *     __tailMerge_api_ms_win_appmodel_runtime_internal_l1_1_2_dll @ 0x1800706A7 (__tailMerge_api_ms_win_appmodel_runtime_internal_l1_1_2_dll.c)
 *     __tailMerge_feclient_dll @ 0x180070744 (__tailMerge_feclient_dll.c)
 *     __tailMerge_ext_ms_win_sysmain_plmapi_l1_1_0_dll @ 0x1800707F3 (__tailMerge_ext_ms_win_sysmain_plmapi_l1_1_0_dll.c)
 *     __tailMerge_ext_ms_win_sysmain_plmapi_l1_1_1_dll @ 0x18007087E (__tailMerge_ext_ms_win_sysmain_plmapi_l1_1_1_dll.c)
 *     __tailMerge_ext_ms_win_ntuser_gui_l1_3_0_dll @ 0x180070A0A (__tailMerge_ext_ms_win_ntuser_gui_l1_3_0_dll.c)
 *     __tailMerge_ext_ms_win_ntuser_message_l1_1_0_dll @ 0x180070AEA (__tailMerge_ext_ms_win_ntuser_message_l1_1_0_dll.c)
 *     __tailMerge_ext_ms_win_ntuser_windowstation_l1_1_0_dll @ 0x180070BCA (__tailMerge_ext_ms_win_ntuser_windowstation_l1_1_0_dll.c)
 *     __tailMerge_ext_ms_win_com_psmregister_l1_1_0_dll @ 0x180070C67 (__tailMerge_ext_ms_win_com_psmregister_l1_1_0_dll.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall _delayLoadHelper2(__int64 a1, __int64 a2)
{
  return ResolveDelayLoadedAPI(
           &_ImageBase,
           a1,
           _pfnDefaultDliFailureHook2,
           DelayLoadFailureHook,
           a2,
           _ResolveDelayLoadedAPIFlags);
}
