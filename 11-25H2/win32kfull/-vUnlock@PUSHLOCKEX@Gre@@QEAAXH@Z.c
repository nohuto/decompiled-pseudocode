/*
 * XREFs of ?vUnlock@PUSHLOCKEX@Gre@@QEAAXH@Z @ 0x1401717F4
 * Callers:
 *     ?EnsureUmfdHost@UmfdHostLifeTimeManager@@SA_NXZ @ 0x14001922C (-EnsureUmfdHost@UmfdHostLifeTimeManager@@SA_NXZ.c)
 *     ?UmfdInsertFontFileViewForLookup@@YAHPEAPEAUFONTFILEVIEW@@I@Z @ 0x1400B58A4 (-UmfdInsertFontFileViewForLookup@@YAHPEAPEAUFONTFILEVIEW@@I@Z.c)
 *     ??0UMPDENGCALL@UMPDOBJ@@QEAA@PEAU_GRETHREAD@@@Z @ 0x1400D3B24 (--0UMPDENGCALL@UMPDOBJ@@QEAA@PEAU_GRETHREAD@@@Z.c)
 *     ?vSpRedrawSprite@@YAXPEAVSPRITE@@@Z @ 0x1400DF7B0 (-vSpRedrawSprite@@YAXPEAVSPRITE@@@Z.c)
 *     ?GreMakeFontDir@@YAKKPEAEPEAG@Z @ 0x14010BDE4 (-GreMakeFontDir@@YAKKPEAEPEAG@Z.c)
 *     GreTransferSpriteStateToDwmState @ 0x140172718 (GreTransferSpriteStateToDwmState.c)
 *     ?TerminateUmfdHost@UmfdHostLifeTimeManager@@SAX_N@Z @ 0x140263A94 (-TerminateUmfdHost@UmfdHostLifeTimeManager@@SAX_N@Z.c)
 *     GreEnsureDpiDepDefaultGuiFontForPlateau @ 0x140309F70 (GreEnsureDpiDepDefaultGuiFontForPlateau.c)
 *     GreHLsurfSetPresentFlags @ 0x140323030 (GreHLsurfSetPresentFlags.c)
 *     GreHLsurfSetUpdateId @ 0x140323134 (GreHLsurfSetUpdateId.c)
 *     ?vSpRedrawAreaExMirror@@YAXPEAU_SPRITESTATE@@PEAU_RECTL@@@Z @ 0x14032EA5C (-vSpRedrawAreaExMirror@@YAXPEAU_SPRITESTATE@@PEAU_RECTL@@@Z.c)
 *     ?BackPropagateLargeBitmapBits@UMPDOBJ@@QEAAXPEAU_SURFOBJ@@PEAXH@Z @ 0x1403345D0 (-BackPropagateLargeBitmapBits@UMPDOBJ@@QEAAXPEAU_SURFOBJ@@PEAXH@Z.c)
 *     ?ReferenceServerProcess@UMPDOBJ@@QEAAXPEAU_EPROCESS@@@Z @ 0x140337E80 (-ReferenceServerProcess@UMPDOBJ@@QEAAXPEAU_EPROCESS@@@Z.c)
 *     UmfdNotifyCleanupLogonProcess @ 0x140338A50 (UmfdNotifyCleanupLogonProcess.c)
 * Callees:
 *     <none>
 */

void __fastcall Gre::PUSHLOCKEX::vUnlock(struct W32_PUSH_LOCK **this, int a2)
{
  struct W32_PUSH_LOCK *v4; // rcx

  v4 = *this;
  if ( v4 )
  {
    GreReleasePushLockExclusive(v4);
    if ( a2 )
      *this = 0LL;
  }
}
