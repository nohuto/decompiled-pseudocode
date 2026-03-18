/*
 * XREFs of ??0ENTER_DWM_CRIT_COMMON@@QEAA@AEAUSESSION_GLOBALS@Base@Gre@@PEAUHDEV__@@W4Options@0@@Z @ 0x140073358
 * Callers:
 *     GreGetSpriteAttributes @ 0x140041B20 (GreGetSpriteAttributes.c)
 *     ?GreCreateSpriteInternal@@YAPEAXPEAUHDEV__@@PEAUHWND__@@PEAUtagRECT@@PEAUtagMINIWINDOWINFO@@KHHHHHHPEBG@Z @ 0x1400A34B8 (-GreCreateSpriteInternal@@YAPEAXPEAUHDEV__@@PEAUHWND__@@PEAUtagRECT@@PEAUtagMINIWINDOWINFO@@KHHH.c)
 *     GreDwmGetSurfaceData @ 0x1400A54E0 (GreDwmGetSurfaceData.c)
 *     DwmDestroyDeviceSpecificResources @ 0x1400F6C40 (DwmDestroyDeviceSpecificResources.c)
 *     GreDwmHasSoftwareCursor @ 0x1400F6CF4 (GreDwmHasSoftwareCursor.c)
 *     GreGetSprite @ 0x14014B798 (GreGetSprite.c)
 *     GreUpdateSpriteClipRgn @ 0x14014CB00 (GreUpdateSpriteClipRgn.c)
 *     GreWindowResizeComplete @ 0x1402259FC (GreWindowResizeComplete.c)
 *     GreWindowResizeStarted @ 0x14022FFF0 (GreWindowResizeStarted.c)
 *     GreDwmEnableSoftwareCursorRendering @ 0x140245370 (GreDwmEnableSoftwareCursorRendering.c)
 *     GreProtectSpriteContent @ 0x140266204 (GreProtectSpriteContent.c)
 *     ?SpDdDestroyFullscreenSprite@@YAJAEAVXDCOBJ@@PEAX@Z @ 0x140344860 (-SpDdDestroyFullscreenSprite@@YAJAEAVXDCOBJ@@PEAX@Z.c)
 *     GreDeleteSpriteDelayDelete @ 0x140344DC0 (GreDeleteSpriteDelayDelete.c)
 * Callees:
 *     ??$GrepAcquireLockValidate@$05@@YAXXZ @ 0x140072750 (--$GrepAcquireLockValidate@$05@@YAXXZ.c)
 *     ??$GrepAcquireLockValidate@$06@@YAXXZ @ 0x14007347C (--$GrepAcquireLockValidate@$06@@YAXXZ.c)
 */

__int64 __fastcall ENTER_DWM_CRIT_COMMON::ENTER_DWM_CRIT_COMMON(__int64 a1, __int64 *a2, __int64 a3, char a4)
{
  char v4; // bl
  _QWORD *CurrentThreadWin32Thread; // rax
  __int64 v9; // rcx
  Gre::Base *v10; // rcx
  __int64 v11; // rbx
  __int64 v12; // rcx
  HSEMAPHORE v13; // rcx
  __int64 v14; // rcx

  *(_QWORD *)a1 = a3;
  v4 = a4 & 4;
  *(_DWORD *)(a1 + 8) = 0;
  if ( (a4 & 1) == 0 )
  {
    CurrentThreadWin32Thread = (_QWORD *)PsGetCurrentThreadWin32Thread(a1);
    v9 = CurrentThreadWin32Thread ? *CurrentThreadWin32Thread : 0LL;
    v10 = (Gre::Base *)((v9 + 8) & -(__int64)(v9 != 0));
    if ( !v10 || v4 || !*((_DWORD *)v10 + 85) && !*((_DWORD *)v10 + 86) )
    {
      v11 = *(_QWORD *)Gre::Base::Globals(v10);
      EtwTraceGreLockAcquireSemaphoreExclusive(L"Sprite", v11 + 1040, 0LL);
      GreAcquireSemaphoreInternal((HSEMAPHORE)(v11 + 1040));
      GrepAcquireLockValidate<6>();
      *(_DWORD *)(a1 + 8) = 1;
    }
  }
  v12 = *a2;
  *(_BYTE *)(a1 + 24) = (a4 & 2) != 0;
  v13 = (HSEMAPHORE)(v12 + 520);
  *(_QWORD *)(a1 + 16) = v13;
  if ( (a4 & 2) != 0 )
    GreAcquireSemaphoreSharedInternal(v13);
  else
    GreAcquireSemaphoreInternal(v13);
  GrepAcquireLockValidate<7>(v14);
  return a1;
}
