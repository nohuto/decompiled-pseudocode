/*
 * XREFs of ?Release@CPushLockCriticalSection@@QEAAXXZ @ 0x140037180
 * Callers:
 *     ?PopulateFromInfo@CAdapterCollection@@QEAAJPEAUCSM_TOKEN_ADAPTER_INFO@@PEAPEAXI@Z @ 0x140036AD8 (-PopulateFromInfo@CAdapterCollection@@QEAAJPEAUCSM_TOKEN_ADAPTER_INFO@@PEAPEAXI@Z.c)
 *     ?DiscardAllCompositionFrames@CCompositionFrameCollection@@UEAAXXZ @ 0x140036ED0 (-DiscardAllCompositionFrames@CCompositionFrameCollection@@UEAAXXZ.c)
 *     ?UpdateCollection@CAdapterCollection@@QEAA_NPEAUCSM_TOKEN_ADAPTER_INFO@@PEAPEAXI@Z @ 0x14003700C (-UpdateCollection@CAdapterCollection@@QEAA_NPEAUCSM_TOKEN_ADAPTER_INFO@@PEAPEAXI@Z.c)
 *     ?ResetAdapterCollection@CTokenManager@@UEAAXXZ @ 0x14006E190 (-ResetAdapterCollection@CTokenManager@@UEAAXXZ.c)
 *     ?DeferDestroyFlipManagerSyncContexts@CAdapterCollection@@QEAAXXZ @ 0x1400A13EC (-DeferDestroyFlipManagerSyncContexts@CAdapterCollection@@QEAAXXZ.c)
 *     ?DestroySyncContextForFlipManager@CAdapterCollection@@QEAAXAEAU_LUID@@PEAUFlipManagerObject@@PEA_N@Z @ 0x1400A1490 (-DestroySyncContextForFlipManager@CAdapterCollection@@QEAAXAEAU_LUID@@PEAUFlipManagerObject@@PEA.c)
 *     ?FreeFlipAwayFence@CAdapterCollection@@QEAAX_K@Z @ 0x1400A1584 (-FreeFlipAwayFence@CAdapterCollection@@QEAAX_K@Z.c)
 *     ?IssueFlipManagerSignal@CAdapterCollection@@QEAAJPEAUFlipManagerObject@@AEBU_LUID@@PEAXPEAU_KEVENT@@_K@Z @ 0x1400A161C (-IssueFlipManagerSignal@CAdapterCollection@@QEAAJPEAUFlipManagerObject@@AEBU_LUID@@PEAXPEAU_KEVE.c)
 *     ?IssueFlipManagerWaitForFlipAway@CAdapterCollection@@QEAAJPEAUFlipManagerObject@@AEBUtagCOMPOSITION_TARGET_FLIP_AWAY_FENCE@@_K@Z @ 0x1400A1784 (-IssueFlipManagerWaitForFlipAway@CAdapterCollection@@QEAAJPEAUFlipManagerObject@@AEBUtagCOMPOSIT.c)
 *     ?IssueFlipManagerWaitForFrameRenderingComplete@CAdapterCollection@@QEAAJPEAUFlipManagerObject@@_KAEBU_LUID@@@Z @ 0x1400A1848 (-IssueFlipManagerWaitForFrameRenderingComplete@CAdapterCollection@@QEAAJPEAUFlipManagerObject@@_.c)
 * Callees:
 *     <none>
 */

void __fastcall CPushLockCriticalSection::Release(CPushLockCriticalSection *this)
{
  if ( *((_BYTE *)this + 8) )
    ExReleasePushLockExclusiveEx(this, 0LL);
  else
    ExReleasePushLockSharedEx(this, 0LL);
}
