/*
 * XREFs of GreDeleteSprite @ 0x14005AEC4
 * Callers:
 *     UnsetLayeredWindow @ 0x14005AAD8 (UnsetLayeredWindow.c)
 *     vCleanupUMWindowlessSprite @ 0x140094D90 (vCleanupUMWindowlessSprite.c)
 *     GreTransferDwmStateToSpriteState @ 0x14012313C (GreTransferDwmStateToSpriteState.c)
 *     GreTransferSpriteStateToDwmState @ 0x140172718 (GreTransferSpriteStateToDwmState.c)
 *     bSetDevPreviewRect @ 0x1401E068C (bSetDevPreviewRect.c)
 *     bSetDevDragRect @ 0x1401E08E0 (bSetDevDragRect.c)
 *     ?bCleanupSpriteStateRects@@YAHPEAUHDEV__@@PEAU_SPRITESTATE@@@Z @ 0x1401E0B78 (-bCleanupSpriteStateRects@@YAHPEAUHDEV__@@PEAU_SPRITESTATE@@@Z.c)
 *     DeleteFadeSprite @ 0x1401F4E70 (DeleteFadeSprite.c)
 *     ?SpDdCreateFullscreenSprite@@YAJAEAVXDCOBJ@@KPEAPEAXPEAPEAUHDC__@@@Z @ 0x140321FE8 (-SpDdCreateFullscreenSprite@@YAJAEAVXDCOBJ@@KPEAPEAXPEAPEAUHDC__@@@Z.c)
 *     ?SpDdDestroyFullscreenSprite@@YAJAEAVXDCOBJ@@PEAX@Z @ 0x14032258C (-SpDdDestroyFullscreenSprite@@YAJAEAVXDCOBJ@@PEAX@Z.c)
 * Callees:
 *     ?GreDeleteSpriteInternal@@YAJPEAUHDEV__@@PEAUHWND__@@PEAXH@Z @ 0x14005AF5C (-GreDeleteSpriteInternal@@YAJPEAUHDEV__@@PEAUHWND__@@PEAXH@Z.c)
 *     ??$GreAcquireSemaphoreCommon@$01P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z @ 0x14005B3F8 (--$GreAcquireSemaphoreCommon@$01P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z.c)
 *     ??$GreReleaseSemaphoreCommon@$01P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z @ 0x14008FD90 (--$GreReleaseSemaphoreCommon@$01P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z.c)
 */

__int64 __fastcall GreDeleteSprite(Gre::Base *a1, HWND a2, void *a3, int a4)
{
  __int64 v8; // r14
  unsigned int v9; // ebx

  v8 = *(_QWORD *)Gre::Base::Globals(a1) + 1144LL;
  GreAcquireSemaphoreCommon<2,void (*)(HSEMAPHORE__ *)>(GreAcquireSemaphoreInternal, v8);
  v9 = GreDeleteSpriteInternal((HDEV)a1, a2, a3, a4);
  if ( v8 )
    GreReleaseSemaphoreCommon<2,void (*)(HSEMAPHORE__ *)>(GreReleaseSemaphoreExclusiveInternal, v8);
  return v9;
}
