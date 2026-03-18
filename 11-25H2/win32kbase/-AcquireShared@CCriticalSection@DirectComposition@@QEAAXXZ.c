/*
 * XREFs of ?AcquireShared@CCriticalSection@DirectComposition@@QEAAXXZ @ 0x14004F5A0
 * Callers:
 *     ?BoostCompositorClock@CConnection@DirectComposition@@QEAAJH@Z @ 0x14004F120 (-BoostCompositorClock@CConnection@DirectComposition@@QEAAJH@Z.c)
 *     ?CheckConnectionState@CChannel@DirectComposition@@IEAAXXZ @ 0x14004FD80 (-CheckConnectionState@CChannel@DirectComposition@@IEAAXXZ.c)
 *     ?AcquireShellResourceAccess@CConnection@DirectComposition@@QEAAJXZ @ 0x140051474 (-AcquireShellResourceAccess@CConnection@DirectComposition@@QEAAJXZ.c)
 *     ?Shutdown@CApplicationChannel@DirectComposition@@MEAAXXZ @ 0x140054CB0 (-Shutdown@CApplicationChannel@DirectComposition@@MEAAXXZ.c)
 *     ?Initialize@CApplicationChannel@DirectComposition@@IEAAJPEAIPEAPEAX@Z @ 0x1400554CC (-Initialize@CApplicationChannel@DirectComposition@@IEAAJPEAIPEAPEAX@Z.c)
 *     ?EnableMMCSS@CConnection@DirectComposition@@QEAAJH@Z @ 0x140057E84 (-EnableMMCSS@CConnection@DirectComposition@@QEAAJH@Z.c)
 *     ?ReleaseShellResourceAccess@CConnection@DirectComposition@@QEAAXI@Z @ 0x140058C98 (-ReleaseShellResourceAccess@CConnection@DirectComposition@@QEAAXI@Z.c)
 *     ?CompleteReconnection@CApplicationChannel@DirectComposition@@MEAAXXZ @ 0x1400591F0 (-CompleteReconnection@CApplicationChannel@DirectComposition@@MEAAXXZ.c)
 *     ?StartNextFrameNow@CApplicationChannel@DirectComposition@@IEAAXXZ @ 0x14010F2E0 (-StartNextFrameNow@CApplicationChannel@DirectComposition@@IEAAXXZ.c)
 *     ?BeginFrame@CConnection@DirectComposition@@QEAAJAEBUCOMPOSITION_FRAME_INFO@@PEA_K@Z @ 0x140197B80 (-BeginFrame@CConnection@DirectComposition@@QEAAJAEBUCOMPOSITION_FRAME_INFO@@PEA_K@Z.c)
 *     ?GetBatches@CConnection@DirectComposition@@QEAAJPEAPEBUUCE_RDP_HEADER@@@Z @ 0x14019EE64 (-GetBatches@CConnection@DirectComposition@@QEAAJPEAPEBUUCE_RDP_HEADER@@@Z.c)
 *     NtDCompositionNotifySuperWetInkWork @ 0x140227090 (NtDCompositionNotifySuperWetInkWork.c)
 * Callees:
 *     <none>
 */

void __fastcall DirectComposition::CCriticalSection::AcquireShared(PERESOURCE Resource)
{
  KeEnterCriticalRegion();
  ExAcquireResourceSharedLite(Resource, 1u);
}
