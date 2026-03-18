/*
 * XREFs of ?SetMinBlurRadius@CProjectedShadowScene@@AEAAXM@Z @ 0x18021A2B8
 * Callers:
 *     ?ProcessSetMinBlurRadius@CProjectedShadowScene@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_PROJECTEDSHADOWSCENE_SETMINBLURRADIUS@@@Z @ 0x18021A298 (-ProcessSetMinBlurRadius@CProjectedShadowScene@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_PROJECTED.c)
 *     ?SetProperty@CProjectedShadowScene@@UEAAJUDCOMPOSITION_PROPERTY_ID@@W4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z @ 0x18027E590 (-SetProperty@CProjectedShadowScene@@UEAAJUDCOMPOSITION_PROPERTY_ID@@W4DCOMPOSITION_EXPRESSION_TY.c)
 * Callees:
 *     ?InvalidateConsumingAnimationsInternal@CResource@@AEAAXUDCOMPOSITION_PROPERTY_ID@@@Z @ 0x180022E18 (-InvalidateConsumingAnimationsInternal@CResource@@AEAAXUDCOMPOSITION_PROPERTY_ID@@@Z.c)
 *     ?RequestRedrawAll@CProjectedShadowScene@@QEAAXXZ @ 0x180190F7C (-RequestRedrawAll@CProjectedShadowScene@@QEAAXXZ.c)
 */

void __fastcall CProjectedShadowScene::SetMinBlurRadius(CProjectedShadowScene *this, float a2)
{
  float v3; // xmm0_4
  bool v4; // zf

  v3 = fmaxf(0.0, a2);
  if ( *((float *)this + 31) != v3 )
  {
    v4 = *((_QWORD *)this + 6) == 0LL;
    *((float *)this + 31) = v3;
    if ( !v4 )
      CResource::InvalidateConsumingAnimationsInternal((__int64)this);
    CProjectedShadowScene::RequestRedrawAll(this);
  }
}
