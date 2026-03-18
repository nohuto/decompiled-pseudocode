/*
 * XREFs of EngAcquireSemaphoreShared @ 0x140045A70
 * Callers:
 *     ??$GreAcquireSemaphoreShared@$01$$V@@YAXAEAUSESSION_GLOBALS@Base@Gre@@@Z @ 0x140043C18 (--$GreAcquireSemaphoreShared@$01$$V@@YAXAEAUSESSION_GLOBALS@Base@Gre@@@Z.c)
 *     ?bLock@DEVLOCKOBJ@@QEAAHAEAVXDCOBJ@@H@Z @ 0x140044190 (-bLock@DEVLOCKOBJ@@QEAAHAEAVXDCOBJ@@H@Z.c)
 *     ??$GreAcquireSemaphoreShared@$00$$V@@YAXAEAUSESSION_GLOBALS@Base@Gre@@@Z @ 0x1400458F8 (--$GreAcquireSemaphoreShared@$00$$V@@YAXAEAUSESSION_GLOBALS@Base@Gre@@@Z.c)
 *     ??$GreAcquireSemaphoreShared@$02$$V@@YAXAEAUSESSION_GLOBALS@Base@Gre@@@Z @ 0x140045A94 (--$GreAcquireSemaphoreShared@$02$$V@@YAXAEAUSESSION_GLOBALS@Base@Gre@@@Z.c)
 *     GreLockVisRgn @ 0x140045F80 (GreLockVisRgn.c)
 *     ??0NEEDDYNAMICMODECHANGESHARELOCK@@QEAA@_N@Z @ 0x1400465D0 (--0NEEDDYNAMICMODECHANGESHARELOCK@@QEAA@_N@Z.c)
 *     ??0?$SEMOBJSHARED@$00@@QEAA@AEAUSESSION_GLOBALS@Base@Gre@@@Z @ 0x140046760 (--0-$SEMOBJSHARED@$00@@QEAA@AEAUSESSION_GLOBALS@Base@Gre@@@Z.c)
 *     ??0?$SEMOBJSHARED@$00@@QEAA@XZ @ 0x140046948 (--0-$SEMOBJSHARED@$00@@QEAA@XZ.c)
 *     ??0?$SEMOBJSHARED@$0O@@@QEAA@AEAUSESSION_GLOBALS@Base@Gre@@@Z @ 0x140046A5C (--0-$SEMOBJSHARED@$0O@@@QEAA@AEAUSESSION_GLOBALS@Base@Gre@@@Z.c)
 *     GreSfmGetNotificationTokens @ 0x140073330 (GreSfmGetNotificationTokens.c)
 *     GreIsDisconnectDeviceAttached @ 0x14008E108 (GreIsDisconnectDeviceAttached.c)
 *     DxgkEngVisRgnUniq @ 0x1400F3650 (DxgkEngVisRgnUniq.c)
 * Callees:
 *     <none>
 */

void __stdcall EngAcquireSemaphoreShared(HSEMAPHORE hsem)
{
  if ( hsem )
    ExEnterPriorityRegionAndAcquireResourceShared();
}
