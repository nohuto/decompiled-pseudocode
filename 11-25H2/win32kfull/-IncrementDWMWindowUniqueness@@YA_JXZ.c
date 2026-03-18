/*
 * XREFs of ?IncrementDWMWindowUniqueness@@YA_JXZ @ 0x14001D2A8
 * Callers:
 *     GreUpdateSpriteVisRgn @ 0x14001BBB0 (GreUpdateSpriteVisRgn.c)
 *     zzzLockDisplayAreaAndInvalidateDCCache @ 0x14001C3E0 (zzzLockDisplayAreaAndInvalidateDCCache.c)
 *     DwmAsyncSetCompositionAttribute @ 0x140024C10 (DwmAsyncSetCompositionAttribute.c)
 *     xxxSimpleDoSyncPaint @ 0x1400359F0 (xxxSimpleDoSyncPaint.c)
 *     DwmChildRectChange @ 0x140036870 (DwmChildRectChange.c)
 *     DwmAsyncActivationChange @ 0x14003EFD0 (DwmAsyncActivationChange.c)
 *     UnlinkWindow @ 0x14004BBDC (UnlinkWindow.c)
 *     DwmAsyncChildStyleChange @ 0x14004F614 (DwmAsyncChildStyleChange.c)
 *     DwmAsyncDestroySprite @ 0x14005B354 (DwmAsyncDestroySprite.c)
 *     DwmAsyncOwnerChange @ 0x14005E124 (DwmAsyncOwnerChange.c)
 *     DwmAsyncZorderSprite @ 0x140092120 (DwmAsyncZorderSprite.c)
 *     ?GrepUpdateSpriteImpl@@YAHPEAUHDEV__@@PEAUHWND__@@PEAXAEAVOPTAPIDCOBJ@@PEAUtagPOINT@@PEAUtagSIZE@@34KPEAU_BLENDFUNCTION@@KPEAUtagRECT@@PEAUtagMINIWINDOWINFO@@HHK@Z @ 0x140098880 (-GrepUpdateSpriteImpl@@YAHPEAUHDEV__@@PEAUHWND__@@PEAXAEAVOPTAPIDCOBJ@@PEAUtagPOINT@@PEAUtagSIZE.c)
 *     DwmSyncDesktopSwitch @ 0x1401182EC (DwmSyncDesktopSwitch.c)
 *     DwmAsyncChildZBandChange @ 0x140152A44 (DwmAsyncChildZBandChange.c)
 *     DwmAsyncChildLink @ 0x14018ADD0 (DwmAsyncChildLink.c)
 *     DwmAsyncChildUnlink @ 0x14018AE94 (DwmAsyncChildUnlink.c)
 *     DwmAsyncChildCreate @ 0x140190150 (DwmAsyncChildCreate.c)
 *     DwmAsyncChildDestroy @ 0x140190358 (DwmAsyncChildDestroy.c)
 *     DwmAsyncNotifySpriteMonitorChange @ 0x1401B0980 (DwmAsyncNotifySpriteMonitorChange.c)
 *     DwmAsyncCreateSprite @ 0x1401C36CC (DwmAsyncCreateSprite.c)
 *     DwmAsyncDirtySprite @ 0x1401CF5F4 (DwmAsyncDirtySprite.c)
 *     DwmAsyncSendWindowArrangingData @ 0x1401E77E0 (DwmAsyncSendWindowArrangingData.c)
 *     DwmAsyncProcessSurfaceComplete @ 0x1401F3278 (DwmAsyncProcessSurfaceComplete.c)
 *     DwmAsyncNotifyDisplayModeChange @ 0x140208350 (DwmAsyncNotifyDisplayModeChange.c)
 *     DwmAsyncDesktopCreate @ 0x14026B0C4 (DwmAsyncDesktopCreate.c)
 *     DwmAsyncCancelRotationDelay @ 0x140324464 (DwmAsyncCancelRotationDelay.c)
 *     DwmAsyncNotifyRotationModeChange @ 0x140324BC0 (DwmAsyncNotifyRotationModeChange.c)
 * Callees:
 *     <none>
 */

__int64 IncrementDWMWindowUniqueness(void)
{
  return _InterlockedIncrement64((volatile signed __int64 *)(*(_QWORD *)(W32GetSessionState() + 96) + 4648LL));
}
