/*
 * XREFs of ?GetFinalValue@CNaturalAnimationScalarForceAdapter@@UEBAMM@Z @ 0x18028EDF0
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@VCBrushRenderingGraph@@@WRL@Microsoft@@IEAAKXZ @ 0x1800AAF14 (-InternalRelease@-$ComPtr@VCBrushRenderingGraph@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ModuleFailFastForHRESULT @ 0x180208768 (ModuleFailFastForHRESULT.c)
 *     ?GetOwner@CNaturalAnimationScalarForceAdapter@@AEBAPEAVCNaturalAnimation@@XZ @ 0x18028EE88 (-GetOwner@CNaturalAnimationScalarForceAdapter@@AEBAPEAVCNaturalAnimation@@XZ.c)
 *     ?GetVector3Force@CNaturalAnimation@@QEBAXPEAPEAVCVector3Force@@@Z @ 0x18028EEC8 (-GetVector3Force@CNaturalAnimation@@QEBAXPEAPEAVCVector3Force@@@Z.c)
 */

float __fastcall CNaturalAnimationScalarForceAdapter::GetFinalValue(
        CNaturalAnimationScalarForceAdapter *this,
        float a2)
{
  CNaturalAnimation *Owner; // rbx
  int v4; // ecx
  float v5; // xmm6_4
  void *retaddr; // [rsp+38h] [rbp+0h]
  struct CVector3Force *v8; // [rsp+40h] [rbp+8h] BYREF

  v8 = 0LL;
  Owner = CNaturalAnimationScalarForceAdapter::GetOwner(this);
  Microsoft::WRL::ComPtr<CBrushRenderingGraph>::InternalRelease((__int64 *)&v8);
  CNaturalAnimation::GetVector3Force(Owner, &v8);
  v4 = *((_DWORD *)this + 4);
  if ( v4 )
  {
    if ( v4 != 1 )
      ModuleFailFastForHRESULT(-2147467259, retaddr);
    v5 = *((float *)v8 + 86);
  }
  else
  {
    v5 = *((float *)v8 + 85);
  }
  Microsoft::WRL::ComPtr<CBrushRenderingGraph>::InternalRelease((__int64 *)&v8);
  return v5;
}
