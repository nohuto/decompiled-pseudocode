/*
 * XREFs of ?IsInMotion@CNaturalAnimationScalarForceAdapter@@UEBA_NXZ @ 0x18028EF20
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@VCBrushRenderingGraph@@@WRL@Microsoft@@IEAAKXZ @ 0x1800AAF14 (-InternalRelease@-$ComPtr@VCBrushRenderingGraph@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?IsInMotion@CScalarForceEvaluator@@QEBA_NXZ @ 0x1801BE990 (-IsInMotion@CScalarForceEvaluator@@QEBA_NXZ.c)
 *     ?GetOwner@CNaturalAnimationScalarForceAdapter@@AEBAPEAVCNaturalAnimation@@XZ @ 0x18028EE88 (-GetOwner@CNaturalAnimationScalarForceAdapter@@AEBAPEAVCNaturalAnimation@@XZ.c)
 *     ?GetVector3Force@CNaturalAnimation@@QEBAXPEAPEAVCVector3Force@@@Z @ 0x18028EEC8 (-GetVector3Force@CNaturalAnimation@@QEBAXPEAPEAVCVector3Force@@@Z.c)
 */

char __fastcall CNaturalAnimationScalarForceAdapter::IsInMotion(CNaturalAnimationScalarForceAdapter *this)
{
  char v1; // di
  CNaturalAnimation *Owner; // rbx
  __int64 v3; // rdx
  __int64 v4; // rdx
  struct CVector3Force *v6; // [rsp+38h] [rbp+10h] BYREF

  v1 = 0;
  v6 = 0LL;
  Owner = CNaturalAnimationScalarForceAdapter::GetOwner(this);
  Microsoft::WRL::ComPtr<CBrushRenderingGraph>::InternalRelease((__int64 *)&v6);
  CNaturalAnimation::GetVector3Force(Owner, &v6);
  if ( CScalarForceEvaluator::IsInMotion((struct CVector3Force *)((char *)v6 + 16))
    || CScalarForceEvaluator::IsInMotion((CScalarForceEvaluator *)(v3 + 84))
    || CScalarForceEvaluator::IsInMotion((CScalarForceEvaluator *)(v4 + 152)) )
  {
    v1 = 1;
  }
  Microsoft::WRL::ComPtr<CBrushRenderingGraph>::InternalRelease((__int64 *)&v6);
  return v1;
}
