/*
 * XREFs of ??0ENTER_DWM_CRIT_COMMON@@QEAA@AEAUSESSION_GLOBALS@Base@Gre@@PEAUHDEV__@@W4Options@0@@Z @ 0x14008E604
 * Callers:
 *     CreateOrGetRedirectionBitmap @ 0x14005D1D0 (CreateOrGetRedirectionBitmap.c)
 *     GreUpdateSpriteClipRgn @ 0x14005D774 (GreUpdateSpriteClipRgn.c)
 *     GreDwmGetSurfaceData @ 0x1400949E4 (GreDwmGetSurfaceData.c)
 *     GreGetSpriteAttributes @ 0x1400DFB44 (GreGetSpriteAttributes.c)
 *     GreDwmHasSoftwareCursor @ 0x140123660 (GreDwmHasSoftwareCursor.c)
 *     GreDwmEnableSoftwareCursorRendering @ 0x140123744 (GreDwmEnableSoftwareCursorRendering.c)
 *     DwmDestroyDeviceSpecificResources @ 0x140124D60 (DwmDestroyDeviceSpecificResources.c)
 *     GreWindowResizeComplete @ 0x1401F855C (GreWindowResizeComplete.c)
 *     GreWindowResizeStarted @ 0x1401F9E2C (GreWindowResizeStarted.c)
 *     GreGetSprite @ 0x1401FF5EC (GreGetSprite.c)
 *     GreProtectSpriteContent @ 0x14022C1CC (GreProtectSpriteContent.c)
 *     ?GreCreateSpriteInternal@@YAPEAXPEAUHDEV__@@PEAUHWND__@@PEAUtagRECT@@PEAUtagMINIWINDOWINFO@@KHHHHHHPEBG@Z @ 0x1403219F0 (-GreCreateSpriteInternal@@YAPEAXPEAUHDEV__@@PEAUHWND__@@PEAUtagRECT@@PEAUtagMINIWINDOWINFO@@KHHH.c)
 *     ?SpDdDestroyFullscreenSprite@@YAJAEAVXDCOBJ@@PEAX@Z @ 0x14032258C (-SpDdDestroyFullscreenSprite@@YAJAEAVXDCOBJ@@PEAX@Z.c)
 *     GreDeleteSpriteDelayDelete @ 0x140322BC0 (GreDeleteSpriteDelayDelete.c)
 * Callees:
 *     ??$GrepAcquireLockValidate@$06@@YAXXZ @ 0x14001B08C (--$GrepAcquireLockValidate@$06@@YAXXZ.c)
 *     ??$GrepAcquireLockValidate@$05@@YAXXZ @ 0x14008E7A8 (--$GrepAcquireLockValidate@$05@@YAXXZ.c)
 *     W32GetCurrentThreadNonPaged @ 0x140270D34 (W32GetCurrentThreadNonPaged.c)
 */

__int64 __fastcall ENTER_DWM_CRIT_COMMON::ENTER_DWM_CRIT_COMMON(__int64 a1, _QWORD *a2, __int64 a3, char a4)
{
  char v4; // bl
  _QWORD *CurrentThreadNonPaged; // rax
  __int64 v9; // rcx
  Gre::Base *v10; // rcx
  __int64 v11; // rbx
  HSEMAPHORE v12; // rcx

  *(_QWORD *)a1 = a3;
  *(_DWORD *)(a1 + 8) = 0;
  v4 = a4 & 4;
  if ( (a4 & 1) == 0 )
  {
    CurrentThreadNonPaged = (_QWORD *)W32GetCurrentThreadNonPaged(a1, a2);
    v9 = CurrentThreadNonPaged ? *CurrentThreadNonPaged : 0LL;
    v10 = (Gre::Base *)((v9 + 8) & -(__int64)(v9 != 0));
    if ( !v10 || v4 || !*((_DWORD *)v10 + 87) && !*((_DWORD *)v10 + 88) )
    {
      v11 = *(_QWORD *)Gre::Base::Globals(v10);
      EtwTraceGreLockAcquireSemaphoreExclusive(L"Sprite", v11 + 1040, 0LL);
      GreAcquireSemaphoreInternal((HSEMAPHORE)(v11 + 1040));
      GrepAcquireLockValidate<6>();
      *(_DWORD *)(a1 + 8) = 1;
    }
  }
  v12 = (HSEMAPHORE)(*a2 + 520LL);
  *(_QWORD *)(a1 + 16) = v12;
  *(_BYTE *)(a1 + 24) = (a4 & 2) != 0;
  if ( (a4 & 2) != 0 )
    GreAcquireSemaphoreSharedInternal(v12);
  else
    GreAcquireSemaphoreInternal(v12);
  GrepAcquireLockValidate<7>();
  return a1;
}
