/*
 * XREFs of ??1DWMSPRITEREF@@QEAA@XZ @ 0x1401E783C
 * Callers:
 *     GreTransferSpriteStateToDwmState @ 0x1402029BC (GreTransferSpriteStateToDwmState.c)
 *     GreProtectSpriteContent @ 0x140266204 (GreProtectSpriteContent.c)
 *     ?SpDdCreateFullscreenSprite@@YAJAEAVXDCOBJ@@KPEAPEAXPEAPEAUHDC__@@@Z @ 0x1403442D4 (-SpDdCreateFullscreenSprite@@YAJAEAVXDCOBJ@@KPEAPEAXPEAPEAUHDC__@@@Z.c)
 *     ?SpDdNotifyFullscreenSpriteUpdate@@YAJAEAVXDCOBJ@@PEAX@Z @ 0x140344914 (-SpDdNotifyFullscreenSpriteUpdate@@YAJAEAVXDCOBJ@@PEAX@Z.c)
 *     GreCancelSynchronizedWindowResize @ 0x140344C40 (GreCancelSynchronizedWindowResize.c)
 *     GreConfirmWindowResizeCommit @ 0x140344D00 (GreConfirmWindowResizeCommit.c)
 *     GreDeleteSpriteDelayDelete @ 0x140344DC0 (GreDeleteSpriteDelayDelete.c)
 * Callees:
 *     ?Detach@DWMSPRITEREF@@QEAAPEAVDWMSPRITE@@XZ @ 0x1401E7860 (-Detach@DWMSPRITEREF@@QEAAPEAVDWMSPRITE@@XZ.c)
 */

void __fastcall DWMSPRITEREF::~DWMSPRITEREF(DWMSPRITEREF *this)
{
  __int64 v1; // rcx

  DWMSPRITEREF::Detach(this);
  PopThreadGuardedObject(v1);
}
