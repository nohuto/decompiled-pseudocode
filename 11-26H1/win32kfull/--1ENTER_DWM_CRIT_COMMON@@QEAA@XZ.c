/*
 * XREFs of ??1ENTER_DWM_CRIT_COMMON@@QEAA@XZ @ 0x1400A6E04
 * Callers:
 *     GreZorderSprite @ 0x14001DFD4 (GreZorderSprite.c)
 *     GreGetSpriteAttributes @ 0x140041B20 (GreGetSpriteAttributes.c)
 *     GrePtInSprite @ 0x14008CE2C (GrePtInSprite.c)
 *     ?GreDeleteSpriteInternal@@YAJPEAUHDEV__@@PEAUHWND__@@PEAXH@Z @ 0x14009CB84 (-GreDeleteSpriteInternal@@YAJPEAUHDEV__@@PEAUHWND__@@PEAXH@Z.c)
 *     ?GreCreateSpriteInternal@@YAPEAXPEAUHDEV__@@PEAUHWND__@@PEAUtagRECT@@PEAUtagMINIWINDOWINFO@@KHHHHHHPEBG@Z @ 0x1400A34B8 (-GreCreateSpriteInternal@@YAPEAXPEAUHDEV__@@PEAUHWND__@@PEAUtagRECT@@PEAUtagMINIWINDOWINFO@@KHHH.c)
 *     vCleanupUMWindowlessSprite @ 0x1400A4F50 (vCleanupUMWindowlessSprite.c)
 *     GreDwmGetSurfaceData @ 0x1400A54E0 (GreDwmGetSurfaceData.c)
 *     GreHintSpriteShape @ 0x1400A5AB4 (GreHintSpriteShape.c)
 *     GreDwmNotifySpriteMonitorChange @ 0x1400A67DC (GreDwmNotifySpriteMonitorChange.c)
 *     ??1ENTER_DWM_CRIT@@QEAA@XZ @ 0x1400A6DEC (--1ENTER_DWM_CRIT@@QEAA@XZ.c)
 *     DwmDestroyDeviceSpecificResources @ 0x1400F6C40 (DwmDestroyDeviceSpecificResources.c)
 *     GreDwmHasSoftwareCursor @ 0x1400F6CF4 (GreDwmHasSoftwareCursor.c)
 *     GreGetSprite @ 0x14014B798 (GreGetSprite.c)
 *     GreUpdateSpriteClipRgn @ 0x14014CB00 (GreUpdateSpriteClipRgn.c)
 *     GreWindowResizeComplete @ 0x1402259FC (GreWindowResizeComplete.c)
 *     GreWindowResizeStarted @ 0x14022FFF0 (GreWindowResizeStarted.c)
 *     GreDwmEnableSoftwareCursorRendering @ 0x140245370 (GreDwmEnableSoftwareCursorRendering.c)
 *     GreProtectSpriteContent @ 0x140266204 (GreProtectSpriteContent.c)
 *     GreSetLWContentOwner @ 0x140333598 (GreSetLWContentOwner.c)
 *     ?SpDdDestroyFullscreenSprite@@YAJAEAVXDCOBJ@@PEAX@Z @ 0x140344860 (-SpDdDestroyFullscreenSprite@@YAJAEAVXDCOBJ@@PEAX@Z.c)
 *     GreDeleteSpriteDelayDelete @ 0x140344DC0 (GreDeleteSpriteDelayDelete.c)
 *     GreDwmGetRedirectionStyle @ 0x140344F94 (GreDwmGetRedirectionStyle.c)
 * Callees:
 *     ??1?$SEMOBJEXORSHARED@$06@@QEAA@XZ @ 0x140038CFC (--1-$SEMOBJEXORSHARED@$06@@QEAA@XZ.c)
 *     ??$GrepReleaseLockValidate@$05@@YAXXZ @ 0x1400726A4 (--$GrepReleaseLockValidate@$05@@YAXXZ.c)
 */

void __fastcall ENTER_DWM_CRIT_COMMON::~ENTER_DWM_CRIT_COMMON(ENTER_DWM_CRIT_COMMON *this)
{
  Gre::Base *v2; // rcx
  __int64 v3; // rbx

  SEMOBJEXORSHARED<7>::~SEMOBJEXORSHARED<7>((__int64)this + 16);
  if ( *((_DWORD *)this + 2) )
  {
    v3 = *(_QWORD *)Gre::Base::Globals(v2);
    EtwTraceGreLockReleaseSemaphore(L"Sprite", v3 + 1040);
    GrepReleaseLockValidate<6>();
    GreReleaseSemaphoreExclusiveInternal((HSEMAPHORE)(v3 + 1040));
  }
}
