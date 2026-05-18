/*
 * XREFs of __delayLoadHelper2 @ 0x180011340
 * Callers:
 *     __tailMerge_sspicli_dll @ 0x180003349 (__tailMerge_sspicli_dll.c)
 *     __tailMerge_api_ms_win_security_lsalookup_l1_1_0_dll @ 0x1800033D4 (__tailMerge_api_ms_win_security_lsalookup_l1_1_0_dll.c)
 *     __tailMerge_ext_ms_win_ntuser_misc_l1_1_0_dll @ 0x1800034C6 (__tailMerge_ext_ms_win_ntuser_misc_l1_1_0_dll.c)
 *     __tailMerge_ext_ms_win_rtcore_ntuser_sysparams_l1_1_0_dll @ 0x1800035A6 (__tailMerge_ext_ms_win_rtcore_ntuser_sysparams_l1_1_0_dll.c)
 *     __tailMerge_ext_ms_win_ntuser_private_l1_1_1_dll @ 0x180003686 (__tailMerge_ext_ms_win_ntuser_private_l1_1_1_dll.c)
 *     __tailMerge_ext_ms_onecore_comp_dwmmonitor_l1_1_0_dll @ 0x180003711 (__tailMerge_ext_ms_onecore_comp_dwmmonitor_l1_1_0_dll.c)
 *     __tailMerge_faultrep_dll @ 0x180003816 (__tailMerge_faultrep_dll.c)
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
