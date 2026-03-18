/*
 * XREFs of ??$GreAcquireSemaphore@$0BB@$$V@@YAXAEAUGLOBALS@Font@Gre@@@Z @ 0x1400FE100
 * Callers:
 *     vCleanupPrivateFonts @ 0x1400FD9B0 (vCleanupPrivateFonts.c)
 *     ?bUnloadEUDCFont@PFTOBJ@@QEAAHPEAG@Z @ 0x140104000 (-bUnloadEUDCFont@PFTOBJ@@QEAAHPEAG@Z.c)
 *     HDEV_DeleteRfontsAndUnloadDeviceFonts @ 0x140105ED0 (HDEV_DeleteRfontsAndUnloadDeviceFonts.c)
 *     ?GrepRemoveFontResource@@YAHPEBGKKKKPEAUtagDESIGNVECTOR@@K@Z @ 0x1401062B4 (-GrepRemoveFontResource@@YAHPEBGKKKKPEAUtagDESIGNVECTOR@@K@Z.c)
 *     GrepAcquirePublicPFTSemaphoreEx @ 0x140257A20 (GrepAcquirePublicPFTSemaphoreEx.c)
 *     ?bAttemptReload@PFFOBJ@@QEAAHXZ @ 0x14026C658 (-bAttemptReload@PFFOBJ@@QEAAHXZ.c)
 *     ?bCleanupPFT@PUBLIC_PFTOBJ@@QEAAXW4eCleanupMode@1@PEAK@Z @ 0x14028F80C (-bCleanupPFT@PUBLIC_PFTOBJ@@QEAAXW4eCleanupMode@1@PEAK@Z.c)
 *     PFF_bUnloadWorkhorseForDCOBJ @ 0x140329980 (PFF_bUnloadWorkhorseForDCOBJ.c)
 *     ?bRemoveMergeFont@XDCOBJ@@QEAAHU_UNIVERSAL_FONT_ID@@@Z @ 0x140329BC8 (-bRemoveMergeFont@XDCOBJ@@QEAAHU_UNIVERSAL_FONT_ID@@@Z.c)
 * Callees:
 *     ??$GreAcquireSemaphoreCommon@$0BB@P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z @ 0x1400FE8E0 (--$GreAcquireSemaphoreCommon@$0BB@P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z.c)
 */

__int64 __fastcall GreAcquireSemaphore<17,>(__int64 a1)
{
  EtwTraceGreLockAcquireSemaphoreExclusive(L"PublicPFT", *(_QWORD *)(a1 + 15456), 0LL);
  return GreAcquireSemaphoreCommon<17,void (*)(HSEMAPHORE__ *)>(GreAcquireSemaphoreInternal);
}
