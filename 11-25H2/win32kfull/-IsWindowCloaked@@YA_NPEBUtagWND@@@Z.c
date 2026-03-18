/*
 * XREFs of ?IsWindowCloaked@@YA_NPEBUtagWND@@@Z @ 0x140022220
 * Callers:
 *     _ChildWindowFromPointEx @ 0x140021FDC (_ChildWindowFromPointEx.c)
 *     ?ShouldDeferRecalc@CRecalcState@@QEBA_NPEBUtagWND@@W4ShouldDeferRecalcOption@1@@Z @ 0x14002237C (-ShouldDeferRecalc@CRecalcState@@QEBA_NPEBUtagWND@@W4ShouldDeferRecalcOption@1@@Z.c)
 *     xxxTouchTargetWindow @ 0x1400230D8 (xxxTouchTargetWindow.c)
 *     _RealChildWindowFromPoint @ 0x1400234DC (_RealChildWindowFromPoint.c)
 *     ?NextTopWindow@FindNextTopWindow@@YAPEAUtagWND@@PEBU2@0W4FindOption@1@@Z @ 0x140023AEC (-NextTopWindow@FindNextTopWindow@@YAPEAUtagWND@@PEBU2@0W4FindOption@1@@Z.c)
 *     ?IsWindowActivateable@@YA_NPEBUtagWND@@@Z @ 0x140023FA0 (-IsWindowActivateable@@YA_NPEBUtagWND@@@Z.c)
 *     xxxAddShadow @ 0x1400E0A5C (xxxAddShadow.c)
 *     ?ShouldProcessHungWindow@@YAPEAUtagWND@@PEAU1@@Z @ 0x14014BE9C (-ShouldProcessHungWindow@@YAPEAUtagWND@@PEAU1@@Z.c)
 *     ?_GetNextQueueWindow@@YAPEAUtagWND@@PEAU1@HH@Z @ 0x140169118 (-_GetNextQueueWindow@@YAPEAUtagWND@@PEAU1@HH@Z.c)
 *     ?xxxActivateOnMinimize@@YAHPEAUtagWND@@@Z @ 0x1401A77E4 (-xxxActivateOnMinimize@@YAHPEAUtagWND@@@Z.c)
 *     ?xxxWindowHitTestWithTargeting@@YAPEAUHWND__@@PEAUtagWND@@UtagPOINT@@PEAUtagPNTRWINDOWHITTTESTARGS@@UtagRECT@@W4tagTARGETING_PROPERTY@@@Z @ 0x1401C1988 (-xxxWindowHitTestWithTargeting@@YAPEAUHWND__@@PEAUtagWND@@UtagPOINT@@PEAUtagPNTRWINDOWHITTTESTAR.c)
 *     xxxSwitchDesktop @ 0x1401FD254 (xxxSwitchDesktop.c)
 *     ?FindRestorableRecalcState@CRecalcProp@@AEAAPEAVCRecalcState@@XZ @ 0x140204E88 (-FindRestorableRecalcState@CRecalcProp@@AEAAPEAVCRecalcState@@XZ.c)
 *     ?PositioningChanged@NotifyShell@@YAXPEAUtagWND@@AEBUtagCVR@@@Z @ 0x1402597B4 (-PositioningChanged@NotifyShell@@YAXPEAUtagWND@@AEBUtagCVR@@@Z.c)
 *     _lambda_4804acc9578694ef1c6c05a323239c10_::operator() @ 0x140288384 (_lambda_4804acc9578694ef1c6c05a323239c10_--operator().c)
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
  if ( v2 < 0 )
    v1 |= 1u;
  return v1 != 0;
}
