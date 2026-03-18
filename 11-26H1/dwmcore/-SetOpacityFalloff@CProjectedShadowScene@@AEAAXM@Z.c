/*
 * XREFs of ?SetOpacityFalloff@CProjectedShadowScene@@AEAAXM@Z @ 0x18021B078
 * Callers:
 *     ?ProcessSetOpacityFalloff@CProjectedShadowScene@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_PROJECTEDSHADOWSCENE_SETOPACITYFALLOFF@@@Z @ 0x18021B058 (-ProcessSetOpacityFalloff@CProjectedShadowScene@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_PROJECTE.c)
 *     ?SetProperty@CProjectedShadowScene@@UEAAJUDCOMPOSITION_PROPERTY_ID@@W4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z @ 0x18027E590 (-SetProperty@CProjectedShadowScene@@UEAAJUDCOMPOSITION_PROPERTY_ID@@W4DCOMPOSITION_EXPRESSION_TY.c)
 * Callees:
 *     ?InvalidateConsumingAnimationsInternal@CResource@@AEAAXUDCOMPOSITION_PROPERTY_ID@@@Z @ 0x180022E18 (-InvalidateConsumingAnimationsInternal@CResource@@AEAAXUDCOMPOSITION_PROPERTY_ID@@@Z.c)
 *     ?RequestRedrawAll@CProjectedShadowScene@@QEAAXXZ @ 0x180190F7C (-RequestRedrawAll@CProjectedShadowScene@@QEAAXXZ.c)
 */

void __fastcall CProjectedShadowScene::SetOpacityFalloff(CProjectedShadowScene *this, float a2)
{
  bool v3; // zf

  if ( *((float *)this + 35) != a2 )
  {
    v3 = *((_QWORD *)this + 6) == 0LL;
    *((float *)this + 35) = a2;
    if ( !v3 )
      CResource::InvalidateConsumingAnimationsInternal((__int64)this);
    CProjectedShadowScene::RequestRedrawAll(this);
  }
}
