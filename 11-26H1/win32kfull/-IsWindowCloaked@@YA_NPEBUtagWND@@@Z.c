/*
 * XREFs of ?IsWindowCloaked@@YA_NPEBUtagWND@@@Z @ 0x140047DD0
 * Callers:
 *     _ChildWindowFromPointEx @ 0x140047B90 (_ChildWindowFromPointEx.c)
 *     ?NextTopWindow@FindNextTopWindow@@YAPEAUtagWND@@PEBU2@0W4FindOption@1@@Z @ 0x1400483F8 (-NextTopWindow@FindNextTopWindow@@YAPEAUtagWND@@PEBU2@0W4FindOption@1@@Z.c)
 *     xxxAddShadow @ 0x140083B00 (xxxAddShadow.c)
 *     xxxTouchTargetWindow @ 0x14008868C (xxxTouchTargetWindow.c)
 *     ?xxxWindowHitTestWithTargeting@@YAPEAUHWND__@@PEAUtagWND@@UtagPOINT@@PEAUtagPNTRWINDOWHITTTESTARGS@@UtagRECT@@W4tagTARGETING_PROPERTY@@@Z @ 0x14008A1B8 (-xxxWindowHitTestWithTargeting@@YAPEAUHWND__@@PEAUtagWND@@UtagPOINT@@PEAUtagPNTRWINDOWHITTTESTAR.c)
 *     ?_GetNextQueueWindow@@YAPEAUtagWND@@PEAU1@HH@Z @ 0x14008BAC4 (-_GetNextQueueWindow@@YAPEAUtagWND@@PEAU1@HH@Z.c)
 *     _RealChildWindowFromPoint @ 0x14008BE64 (_RealChildWindowFromPoint.c)
 *     ?xxxDCEWindowHitTestIndirect@@YAPEAUHWND__@@PEAUtagWND@@UtagPOINT@@_NPEAUtagDCE_WINDOW_HIT_TEST_ARGS@@@Z @ 0x14008E350 (-xxxDCEWindowHitTestIndirect@@YAPEAUHWND__@@PEAUtagWND@@UtagPOINT@@_NPEAUtagDCE_WINDOW_HIT_TEST_.c)
 *     ?FindRestorableRecalcState@CRecalcProp@@AEAAPEAVCRecalcState@@XZ @ 0x14011CF74 (-FindRestorableRecalcState@CRecalcProp@@AEAAPEAVCRecalcState@@XZ.c)
 *     ?ShouldDeferRecalc@CRecalcState@@QEBA_NPEBUtagWND@@W4ShouldDeferRecalcOption@1@@Z @ 0x14015F738 (-ShouldDeferRecalc@CRecalcState@@QEBA_NPEBUtagWND@@W4ShouldDeferRecalcOption@1@@Z.c)
 *     ?ShouldProcessHungWindow@@YAPEAUtagWND@@PEAU1@@Z @ 0x140163388 (-ShouldProcessHungWindow@@YAPEAUtagWND@@PEAU1@@Z.c)
 *     ?xxxActivateOnMinimize@@YAHPEAUtagWND@@@Z @ 0x14019EDB0 (-xxxActivateOnMinimize@@YAHPEAUtagWND@@@Z.c)
 *     ?IsWindowActivateable@@YA_NPEBUtagWND@@@Z @ 0x1401A36FC (-IsWindowActivateable@@YA_NPEBUtagWND@@@Z.c)
 *     _lambda_0626be66eec18444efdef0f40e13a11c_::operator() @ 0x1402A4D54 (_lambda_0626be66eec18444efdef0f40e13a11c_--operator().c)
 *     ?PositioningChanged@NotifyShell@@YAXPEAUtagWND@@AEBUtagCVR@@@Z @ 0x1402DB9D8 (-PositioningChanged@NotifyShell@@YAXPEAUtagWND@@AEBUtagCVR@@@Z.c)
 * Callees:
 *     <none>
 */

bool __fastcall IsWindowCloaked(const struct tagWND *a1)
{
  int v1; // eax
  char v2; // dl

  v1 = 0;
  v2 = *(_BYTE *)(*((_QWORD *)a1 + 5) + 233LL);
  if ( (v2 & 0x20) != 0 )
    v1 = 2;
  if ( (v2 & 0x40) != 0 )
    v1 |= 1u;
  return v1 != 0;
}
