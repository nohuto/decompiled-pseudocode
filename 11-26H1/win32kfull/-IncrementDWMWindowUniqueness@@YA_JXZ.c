/*
 * XREFs of ?IncrementDWMWindowUniqueness@@YA_JXZ @ 0x140038D64
 * Callers:
 *     GreAddBitmapD3DDirtyRgn @ 0x14001C31C (GreAddBitmapD3DDirtyRgn.c)
 *     GreUpdateSpriteVisRgn @ 0x1400384E0 (GreUpdateSpriteVisRgn.c)
 *     DwmChildRectChange @ 0x14004E990 (DwmChildRectChange.c)
 *     xxxSimpleDoSyncPaint @ 0x140050370 (xxxSimpleDoSyncPaint.c)
 *     ?GrepUpdateSpriteImpl@@YAHPEAUHDEV__@@PEAUHWND__@@PEAXAEAVOPTAPIDCOBJ@@PEAUtagPOINT@@PEAUtagSIZE@@34KPEAU_BLENDFUNCTION@@KPEAUtagRECT@@PEAUtagMINIWINDOWINFO@@HHK@Z @ 0x140073700 (-GrepUpdateSpriteImpl@@YAHPEAUHDEV__@@PEAUHWND__@@PEAXAEAVOPTAPIDCOBJ@@PEAUtagPOINT@@PEAUtagSIZE.c)
 *     DwmAsyncDestroySprite @ 0x14009D21C (DwmAsyncDestroySprite.c)
 *     DwmAsyncCreateSprite @ 0x1400A19E8 (DwmAsyncCreateSprite.c)
 *     ?DwmWindowCreate@@YAXPEAUtagWND@@PEBU1@PEBUtagRECT@@@Z @ 0x1400A6E6C (-DwmWindowCreate@@YAXPEAUtagWND@@PEBU1@PEBUtagRECT@@@Z.c)
 *     DwmAsyncNotifySpriteMonitorChange @ 0x1400A844C (DwmAsyncNotifySpriteMonitorChange.c)
 *     DwmAsyncActivationChange @ 0x140122DE0 (DwmAsyncActivationChange.c)
 *     DwmAsyncChildLink @ 0x14012ECB4 (DwmAsyncChildLink.c)
 *     DwmSyncDesktopSwitch @ 0x14014A880 (DwmSyncDesktopSwitch.c)
 *     DwmAsyncChildUnlink @ 0x1401780EC (DwmAsyncChildUnlink.c)
 *     DwmAsyncChildZBandChange @ 0x140179E1C (DwmAsyncChildZBandChange.c)
 *     DwmAsyncOwnerChange @ 0x14017A4CC (DwmAsyncOwnerChange.c)
 *     DwmAsyncZorderSprite @ 0x1401C84C4 (DwmAsyncZorderSprite.c)
 *     DwmAsyncChildDestroy @ 0x1401D38DC (DwmAsyncChildDestroy.c)
 *     DwmAsyncSetCompositionAttribute @ 0x1401E6144 (DwmAsyncSetCompositionAttribute.c)
 *     DwmAsyncDirtySprite @ 0x1401F9188 (DwmAsyncDirtySprite.c)
 *     DwmAsyncSendWindowArrangingData @ 0x140219EA8 (DwmAsyncSendWindowArrangingData.c)
 *     DwmAsyncProcessSurfaceComplete @ 0x140222F3C (DwmAsyncProcessSurfaceComplete.c)
 *     DwmAsyncNotifyDisplayModeChange @ 0x14023A480 (DwmAsyncNotifyDisplayModeChange.c)
 *     DwmAsyncDesktopCreate @ 0x1402910D8 (DwmAsyncDesktopCreate.c)
 *     DwmAsyncCancelRotationDelay @ 0x140346A50 (DwmAsyncCancelRotationDelay.c)
 *     DwmAsyncNotifyRotationModeChange @ 0x140347050 (DwmAsyncNotifyRotationModeChange.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall IncrementDWMWindowUniqueness(__int64 a1, __int64 a2, __int64 a3)
{
  return _InterlockedIncrement64((volatile signed __int64 *)(*(_QWORD *)(W32GetSessionState(a1, a2, a3) + 96) + 4648LL));
}
