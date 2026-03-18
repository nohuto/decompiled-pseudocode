/*
 * XREFs of ?SetEvent@details@wil@@YAXPEAX@Z @ 0x180150EAC
 * Callers:
 *     ?OnShutdown@CComposition@@QEAAXXZ @ 0x18014F3A4 (-OnShutdown@CComposition@@QEAAXXZ.c)
 *     ?Run@CKstBase@@AEAAKXZ @ 0x180150618 (-Run@CKstBase@@AEAAKXZ.c)
 *     ?ResetMmcss@CGlobalMit@@UEAAJXZ @ 0x180150910 (-ResetMmcss@CGlobalMit@@UEAAJXZ.c)
 *     ?TriggerMmcss@CKst@@QEAAJXZ @ 0x180150948 (-TriggerMmcss@CKst@@QEAAJXZ.c)
 *     ?RequestCursorUpdate@CGlobalMit@@UEAAXXZ @ 0x180150B00 (-RequestCursorUpdate@CGlobalMit@@UEAAXXZ.c)
 *     ?UpdateDelayedWorkStatus@CComposition@@QEAAXXZ @ 0x180150B30 (-UpdateDelayedWorkStatus@CComposition@@QEAAXXZ.c)
 *     ?SetupWakeupFence@CComputeScribbleScheduler@@AEAAJAEBUScribbleFrame@1@@Z @ 0x18021B8C8 (-SetupWakeupFence@CComputeScribbleScheduler@@AEAAJAEBUScribbleFrame@1@@Z.c)
 *     ??1CComputeScribbleScheduler@@QEAA@XZ @ 0x18025C824 (--1CComputeScribbleScheduler@@QEAA@XZ.c)
 *     ?Stop@CKstBase@@QEAAXXZ @ 0x1802950BC (-Stop@CKstBase@@QEAAXXZ.c)
 * Callees:
 *     ?_FailFast_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x1802016C8 (-_FailFast_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 */

void __fastcall wil::details::SetEvent(wil::details *this, void *a2)
{
  const char *v2; // r9
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  if ( !SetEvent(this) )
    wil::details::in1diag3::_FailFast_GetLastError(
      retaddr,
      (void *)0x9D8,
      (unsigned int)"onecore\\internal\\sdk\\inc\\wil\\opensource/wil/resource.h",
      v2);
}
