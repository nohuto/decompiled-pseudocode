/*
 * XREFs of GreCreateSprite @ 0x14005ADD0
 * Callers:
 *     CreateSprite @ 0x14005C580 (CreateSprite.c)
 *     bSetDevPreviewRect @ 0x1401E068C (bSetDevPreviewRect.c)
 *     bSetDevDragRect @ 0x1401E08E0 (bSetDevDragRect.c)
 *     ?CreateFadeInternal@@YAPEAUHDC__@@PEAUtagWND@@PEAUtagRECT@@KKK@Z @ 0x1401F46B0 (-CreateFadeInternal@@YAPEAUHDC__@@PEAUtagWND@@PEAUtagRECT@@KKK@Z.c)
 *     ?SpDdCreateFullscreenSprite@@YAJAEAVXDCOBJ@@KPEAPEAXPEAPEAUHDC__@@@Z @ 0x140321FE8 (-SpDdCreateFullscreenSprite@@YAJAEAVXDCOBJ@@KPEAPEAXPEAPEAUHDC__@@@Z.c)
 * Callees:
 *     ??$GreAcquireSemaphoreCommon@$01P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z @ 0x14005B3F8 (--$GreAcquireSemaphoreCommon@$01P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z.c)
 *     ??$GreReleaseSemaphoreCommon@$01P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z @ 0x14008FD90 (--$GreReleaseSemaphoreCommon@$01P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z.c)
 *     ?GreCreateSpriteInternal@@YAPEAXPEAUHDEV__@@PEAUHWND__@@PEAUtagRECT@@PEAUtagMINIWINDOWINFO@@KHHHHHHPEBG@Z @ 0x1403219F0 (-GreCreateSpriteInternal@@YAPEAXPEAUHDEV__@@PEAUHWND__@@PEAUtagRECT@@PEAUtagMINIWINDOWINFO@@KHHH.c)
 */

void *__fastcall GreCreateSprite(
        Gre::Base *a1,
        HWND a2,
        struct tagRECT *a3,
        struct tagMINIWINDOWINFO *a4,
        unsigned int a5,
        int a6,
        int a7,
        int a8,
        int a9,
        int a10,
        int a11,
        unsigned __int16 *a12)
{
  __int64 v16; // r14
  void *SpriteInternal; // rbx

  v16 = *(_QWORD *)Gre::Base::Globals(a1) + 1144LL;
  GreAcquireSemaphoreCommon<2,void (*)(HSEMAPHORE__ *)>(GreAcquireSemaphoreInternal, v16);
  SpriteInternal = GreCreateSpriteInternal((HDEV)a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12);
  if ( v16 )
    GreReleaseSemaphoreCommon<2,void (*)(HSEMAPHORE__ *)>(GreReleaseSemaphoreExclusiveInternal, v16);
  return SpriteInternal;
}
