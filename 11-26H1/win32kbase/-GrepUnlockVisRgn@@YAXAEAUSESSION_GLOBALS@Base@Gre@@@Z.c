/*
 * XREFs of ?GrepUnlockVisRgn@@YAXAEAUSESSION_GLOBALS@Base@Gre@@@Z @ 0x14003B7CC
 * Callers:
 *     UserGetMonitorDC @ 0x140035F78 (UserGetMonitorDC.c)
 *     _GetDCEx @ 0x140036140 (_GetDCEx.c)
 *     ?GrepRestoreDCOBJ@@YAHAEAVXDCOBJ@@H@Z @ 0x1400372F0 (-GrepRestoreDCOBJ@@YAHAEAVXDCOBJ@@H@Z.c)
 *     DestroyCacheDCEntries @ 0x14003B704 (DestroyCacheDCEntries.c)
 *     ReleaseCacheDC @ 0x14003BF80 (ReleaseCacheDC.c)
 *     DestroyMonitorDCs @ 0x14007F970 (DestroyMonitorDCs.c)
 *     xxxEnumDisplayMonitors @ 0x140086930 (xxxEnumDisplayMonitors.c)
 *     GreUnlockVisRgn @ 0x140179DD0 (GreUnlockVisRgn.c)
 *     DelayedDestroyCacheDC @ 0x1401867E4 (DelayedDestroyCacheDC.c)
 *     NtUserGetDC @ 0x1401A2020 (NtUserGetDC.c)
 *     ?DxLddmPrimaryLockCleanUpSinglePDev@@YAXAEAVPDEVOBJ@@@Z @ 0x1401B6D9C (-DxLddmPrimaryLockCleanUpSinglePDev@@YAXAEAVPDEVOBJ@@@Z.c)
 *     ?DxLddmCleanupAtProcessDestroy@@YAXK@Z @ 0x1401B9304 (-DxLddmCleanupAtProcessDestroy@@YAXK@Z.c)
 *     ?GrepSuspendDirectDraw@@YAXAEAVPDEVOBJ@@U_DXG_SR_DDRAW_FLAGS@@E@Z @ 0x1401BFB84 (-GrepSuspendDirectDraw@@YAXAEAVPDEVOBJ@@U_DXG_SR_DDRAW_FLAGS@@E@Z.c)
 *     InitUserScreen @ 0x1401D1E4C (InitUserScreen.c)
 *     ?UserProcessDestroyCallout@@YAXPEAU_W32PROCESS@@@Z @ 0x1401D82B8 (-UserProcessDestroyCallout@@YAXPEAU_W32PROCESS@@@Z.c)
 *     xxxUserProcessCallout @ 0x1401D8EA0 (xxxUserProcessCallout.c)
 *     DestroyCacheDC @ 0x1401D9EE0 (DestroyCacheDC.c)
 * Callees:
 *     ??$GreReleaseSemaphoreShared@$00$$V@@YAXAEAUSESSION_GLOBALS@Base@Gre@@@Z @ 0x14001AA0C (--$GreReleaseSemaphoreShared@$00$$V@@YAXAEAUSESSION_GLOBALS@Base@Gre@@@Z.c)
 *     ??$GreReleaseSemaphoreShared@$02$$V@@YAXAEAUSESSION_GLOBALS@Base@Gre@@@Z @ 0x14001D03C (--$GreReleaseSemaphoreShared@$02$$V@@YAXAEAUSESSION_GLOBALS@Base@Gre@@@Z.c)
 *     ??$GreReleaseSemaphoreShared@$01$$V@@YAXAEAUSESSION_GLOBALS@Base@Gre@@@Z @ 0x14001D12C (--$GreReleaseSemaphoreShared@$01$$V@@YAXAEAUSESSION_GLOBALS@Base@Gre@@@Z.c)
 */

void __fastcall GrepUnlockVisRgn(struct _ERESOURCE **a1, __int64 a2, int a3)
{
  __int64 v4; // rdx
  int v5; // r8d
  __int64 v6; // rdx
  int v7; // r8d

  GreReleaseSemaphoreShared<3,>(a1, a2, a3);
  GreReleaseSemaphoreShared<2,>(a1, v4, v5);
  GreReleaseSemaphoreShared<1,>((__int64 *)a1, v6, v7);
}
