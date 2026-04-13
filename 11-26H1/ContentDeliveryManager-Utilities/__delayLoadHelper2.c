/*
 * XREFs of __delayLoadHelper2 @ 0x1800B4EA0
 * Callers:
 *     __tailMerge_cdp_dll @ 0x1800223B0 (__tailMerge_cdp_dll.c)
 *     __tailMerge_ext_ms_win_rtcore_ntuser_cursor_l1_1_0_dll @ 0x180022471 (__tailMerge_ext_ms_win_rtcore_ntuser_cursor_l1_1_0_dll.c)
 *     __tailMerge_ext_ms_win_ole32_bindctx_l1_1_0_dll @ 0x18002250E (__tailMerge_ext_ms_win_ole32_bindctx_l1_1_0_dll.c)
 *     __tailMerge_ext_ms_win_shell_shell32_l1_2_0_dll @ 0x180022599 (__tailMerge_ext_ms_win_shell_shell32_l1_2_0_dll.c)
 *     __tailMerge_ext_ms_win_security_slc_l1_1_0_dll @ 0x180022636 (__tailMerge_ext_ms_win_security_slc_l1_1_0_dll.c)
 *     __tailMerge_api_ms_win_storage_exports_internal_l1_1_0_dll @ 0x1800226C1 (__tailMerge_api_ms_win_storage_exports_internal_l1_1_0_dll.c)
 *     __tailMerge_api_ms_win_rtcore_ntuser_window_l1_1_0_dll @ 0x18002274C (__tailMerge_api_ms_win_rtcore_ntuser_window_l1_1_0_dll.c)
 *     __tailMerge_propsys_dll @ 0x1800227D7 (__tailMerge_propsys_dll.c)
 *     __tailMerge_api_ms_win_shell_namespace_l1_1_0_dll @ 0x180022862 (__tailMerge_api_ms_win_shell_namespace_l1_1_0_dll.c)
 *     __tailMerge_ext_ms_win_shell32_shellfolders_l1_1_0_dll @ 0x1800228FF (__tailMerge_ext_ms_win_shell32_shellfolders_l1_1_0_dll.c)
 *     __tailMerge_api_ms_win_rtcore_ntuser_synch_l1_1_0_dll @ 0x18002298A (__tailMerge_api_ms_win_rtcore_ntuser_synch_l1_1_0_dll.c)
 *     __tailMerge_api_ms_win_core_registry_l2_1_0_dll @ 0x180022A4B (__tailMerge_api_ms_win_core_registry_l2_1_0_dll.c)
 *     __tailMerge_oleaut32_dll @ 0x180022AD6 (__tailMerge_oleaut32_dll.c)
 *     __tailMerge_sspicli_dll @ 0x180022B61 (__tailMerge_sspicli_dll.c)
 *     __tailMerge_rpcrt4_dll @ 0x180022BEC (__tailMerge_rpcrt4_dll.c)
 *     __tailMerge_api_ms_win_security_sddl_l1_1_0_dll @ 0x180022C77 (__tailMerge_api_ms_win_security_sddl_l1_1_0_dll.c)
 *     __tailMerge_api_ms_win_security_capability_l1_1_0_dll @ 0x180022DE6 (__tailMerge_api_ms_win_security_capability_l1_1_0_dll.c)
 *     __tailMerge_api_ms_win_appmodel_runtime_l1_1_0_dll @ 0x180022E71 (__tailMerge_api_ms_win_appmodel_runtime_l1_1_0_dll.c)
 *     __tailMerge_api_ms_win_appmodel_runtime_l1_1_1_dll @ 0x180022EFC (__tailMerge_api_ms_win_appmodel_runtime_l1_1_1_dll.c)
 *     __tailMerge_ext_ms_win_core_iuri_l1_1_0_dll @ 0x180022FAB (__tailMerge_ext_ms_win_core_iuri_l1_1_0_dll.c)
 *     __tailMerge_api_ms_win_appmodel_state_l1_2_0_dll @ 0x180023048 (__tailMerge_api_ms_win_appmodel_state_l1_2_0_dll.c)
 *     __tailMerge_api_ms_win_shcore_obsolete_l1_1_0_dll @ 0x1800230E5 (__tailMerge_api_ms_win_shcore_obsolete_l1_1_0_dll.c)
 *     __tailMerge_ext_ms_win_devmgmt_policy_l1_1_0_dll @ 0x1800231D6 (__tailMerge_ext_ms_win_devmgmt_policy_l1_1_0_dll.c)
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
