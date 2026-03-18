/*
 * XREFs of ??1ENTER_DWM_CRIT_COMMON@@QEAA@XZ @ 0x1401A16C0
 * Callers:
 *     GreProtectSpriteContent @ 0x14022C1CC (GreProtectSpriteContent.c)
 *     GreSetLWContentOwner @ 0x1403112C4 (GreSetLWContentOwner.c)
 *     ?GreCreateSpriteInternal@@YAPEAXPEAUHDEV__@@PEAUHWND__@@PEAUtagRECT@@PEAUtagMINIWINDOWINFO@@KHHHHHHPEBG@Z @ 0x1403219F0 (-GreCreateSpriteInternal@@YAPEAXPEAUHDEV__@@PEAUHWND__@@PEAUtagRECT@@PEAUtagMINIWINDOWINFO@@KHHH.c)
 *     ?SpDdCreateFullscreenSprite@@YAJAEAVXDCOBJ@@KPEAPEAXPEAPEAUHDC__@@@Z @ 0x140321FE8 (-SpDdCreateFullscreenSprite@@YAJAEAVXDCOBJ@@KPEAPEAXPEAPEAUHDC__@@@Z.c)
 *     ?SpDdDestroyFullscreenSprite@@YAJAEAVXDCOBJ@@PEAX@Z @ 0x14032258C (-SpDdDestroyFullscreenSprite@@YAJAEAVXDCOBJ@@PEAX@Z.c)
 *     GreDeleteSpriteDelayDelete @ 0x140322BC0 (GreDeleteSpriteDelayDelete.c)
 *     GreDwmGetRedirectionStyle @ 0x140322D94 (GreDwmGetRedirectionStyle.c)
 * Callees:
 *     ??1DWMSPRITELOCK@@QEAA@XZ @ 0x14001D154 (--1DWMSPRITELOCK@@QEAA@XZ.c)
 *     ??1?$SEMOBJEXORSHARED@$06@@QEAA@XZ @ 0x14001D1B0 (--1-$SEMOBJEXORSHARED@$06@@QEAA@XZ.c)
 */

void __fastcall ENTER_DWM_CRIT_COMMON::~ENTER_DWM_CRIT_COMMON(ENTER_DWM_CRIT_COMMON *this)
{
  SEMOBJEXORSHARED<7>::~SEMOBJEXORSHARED<7>((__int64)this + 16);
  DWMSPRITELOCK::~DWMSPRITELOCK((ENTER_DWM_CRIT_COMMON *)((char *)this + 8));
}
