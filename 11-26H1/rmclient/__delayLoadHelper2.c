/*
 * XREFs of __delayLoadHelper2 @ 0x18000F5A0
 * Callers:
 *     __tailMerge_api_ms_win_core_winrt_string_l1_1_0_dll @ 0x180013240 (__tailMerge_api_ms_win_core_winrt_string_l1_1_0_dll.c)
 *     __tailMerge_api_ms_win_core_com_l1_1_0_dll @ 0x1800132CB (__tailMerge_api_ms_win_core_com_l1_1_0_dll.c)
 *     __tailMerge_api_ms_win_core_winrt_error_l1_1_0_dll @ 0x18001337A (__tailMerge_api_ms_win_core_winrt_error_l1_1_0_dll.c)
 *     __tailMerge_rpcrt4_dll @ 0x180013429 (__tailMerge_rpcrt4_dll.c)
 *     __tailMerge_ext_ms_win_com_psmregister_l1_1_0_dll @ 0x1800134D8 (__tailMerge_ext_ms_win_com_psmregister_l1_1_0_dll.c)
 *     __tailMerge_api_ms_win_appmodel_runtime_l1_1_1_dll @ 0x180013563 (__tailMerge_api_ms_win_appmodel_runtime_l1_1_1_dll.c)
 *     __tailMerge_api_ms_win_appmodel_state_l1_2_0_dll @ 0x1800135EE (__tailMerge_api_ms_win_appmodel_state_l1_2_0_dll.c)
 *     __tailMerge_ext_ms_win_resourcemanager_crm_private_ext_l1_1_0_dll @ 0x18001369D (__tailMerge_ext_ms_win_resourcemanager_crm_private_ext_l1_1_0_dll.c)
 *     __tailMerge_ext_ms_win_hostactivitymanager_ham_private_ext_l1_1_0_dll @ 0x180013794 (__tailMerge_ext_ms_win_hostactivitymanager_ham_private_ext_l1_1_0_dll.c)
 *     __tailMerge_api_ms_win_core_winrt_error_l1_1_1_dll @ 0x180013997 (__tailMerge_api_ms_win_core_winrt_error_l1_1_1_dll.c)
 *     __tailMerge_api_ms_win_core_com_l1_1_1_dll @ 0x180013A46 (__tailMerge_api_ms_win_core_com_l1_1_1_dll.c)
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
