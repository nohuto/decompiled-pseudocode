/*
 * XREFs of ??1?$SEMOBJEXORSHARED@$06@@QEAA@XZ @ 0x14001D1B0
 * Callers:
 *     GreUpdateSpriteVisRgn @ 0x14001BBB0 (GreUpdateSpriteVisRgn.c)
 *     zzzLockDisplayAreaAndInvalidateDCCache @ 0x14001C3E0 (zzzLockDisplayAreaAndInvalidateDCCache.c)
 *     ?GreDeleteSpriteInternal@@YAJPEAUHDEV__@@PEAUHWND__@@PEAXH@Z @ 0x14005AF5C (-GreDeleteSpriteInternal@@YAJPEAUHDEV__@@PEAUHWND__@@PEAXH@Z.c)
 *     CreateOrGetRedirectionBitmap @ 0x14005D1D0 (CreateOrGetRedirectionBitmap.c)
 *     GreUpdateSpriteClipRgn @ 0x14005D774 (GreUpdateSpriteClipRgn.c)
 *     GrePtInSprite @ 0x14008CE90 (GrePtInSprite.c)
 *     GreZorderSprite @ 0x14008FC58 (GreZorderSprite.c)
 *     GreDwmNotifySpriteMonitorChange @ 0x14009009C (GreDwmNotifySpriteMonitorChange.c)
 *     GreHintSpriteShape @ 0x1400922F0 (GreHintSpriteShape.c)
 *     GreDwmGetSurfaceData @ 0x1400949E4 (GreDwmGetSurfaceData.c)
 *     vCleanupUMWindowlessSprite @ 0x140094D90 (vCleanupUMWindowlessSprite.c)
 *     ?GrepUpdateSpriteImpl@@YAHPEAUHDEV__@@PEAUHWND__@@PEAXAEAVOPTAPIDCOBJ@@PEAUtagPOINT@@PEAUtagSIZE@@34KPEAU_BLENDFUNCTION@@KPEAUtagRECT@@PEAUtagMINIWINDOWINFO@@HHK@Z @ 0x140098880 (-GrepUpdateSpriteImpl@@YAHPEAUHDEV__@@PEAUHWND__@@PEAXAEAVOPTAPIDCOBJ@@PEAUtagPOINT@@PEAUtagSIZE.c)
 *     GreGetSpriteAttributes @ 0x1400DFB44 (GreGetSpriteAttributes.c)
 *     GreDwmHasSoftwareCursor @ 0x140123660 (GreDwmHasSoftwareCursor.c)
 *     GreDwmEnableSoftwareCursorRendering @ 0x140123744 (GreDwmEnableSoftwareCursorRendering.c)
 *     DwmDestroyDeviceSpecificResources @ 0x140124D60 (DwmDestroyDeviceSpecificResources.c)
 *     ??1ENTER_DWM_CRIT_COMMON@@QEAA@XZ @ 0x1401A16C0 (--1ENTER_DWM_CRIT_COMMON@@QEAA@XZ.c)
 *     GreWindowResizeComplete @ 0x1401F855C (GreWindowResizeComplete.c)
 *     GreWindowResizeStarted @ 0x1401F9E2C (GreWindowResizeStarted.c)
 *     GreGetSprite @ 0x1401FF5EC (GreGetSprite.c)
 * Callees:
 *     ?GreGetCurrentThreadCrossSessionCheck@@YAPEAU_GRETHREAD@@XZ @ 0x14001B170 (-GreGetCurrentThreadCrossSessionCheck@@YAPEAU_GRETHREAD@@XZ.c)
 */

void __fastcall SEMOBJEXORSHARED<7>::~SEMOBJEXORSHARED<7>(__int64 a1)
{
  HSEMAPHORE v1; // rbx
  HSEMAPHORE v2; // rdx
  struct _GRETHREAD *v3; // rax
  bool v4; // zf
  struct _GRETHREAD *v5; // rax

  v1 = *(HSEMAPHORE *)a1;
  v2 = *(HSEMAPHORE *)a1;
  if ( *(_BYTE *)(a1 + 8) )
  {
    EtwTraceGreLockReleaseSemaphore(L"DwmState", v2);
    v3 = GreGetCurrentThreadCrossSessionCheck();
    if ( v3 )
    {
      v4 = (*((_BYTE *)v3 + 15))-- == 1;
      if ( v4 )
        *(_QWORD *)v3 &= ~0x80uLL;
      if ( !*(_QWORD *)v3 )
        GrepOnAllLocksReleased();
    }
    GreReleaseSemaphoreSharedInternal(v1);
  }
  else
  {
    EtwTraceGreLockReleaseSemaphore(L"DwmState", v2);
    v5 = GreGetCurrentThreadCrossSessionCheck();
    if ( v5 )
    {
      v4 = (*((_BYTE *)v5 + 15))-- == 1;
      if ( v4 )
        *(_QWORD *)v5 &= ~0x80uLL;
      if ( !*(_QWORD *)v5 )
        GrepOnAllLocksReleased();
    }
    GreReleaseSemaphoreExclusiveInternal(v1);
  }
}
