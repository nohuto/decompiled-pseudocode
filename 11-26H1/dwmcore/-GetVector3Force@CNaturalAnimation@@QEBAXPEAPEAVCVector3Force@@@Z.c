/*
 * XREFs of ?GetVector3Force@CNaturalAnimation@@QEBAXPEAPEAVCVector3Force@@@Z @ 0x18028EEC8
 * Callers:
 *     ?GetCurrentState@CNaturalAnimationScalarForceAdapter@@UEBA?BUIntegrationState@@XZ @ 0x18028ED40 (-GetCurrentState@CNaturalAnimationScalarForceAdapter@@UEBA-BUIntegrationState@@XZ.c)
 *     ?GetFinalValue@CNaturalAnimationScalarForceAdapter@@UEBAMM@Z @ 0x18028EDF0 (-GetFinalValue@CNaturalAnimationScalarForceAdapter@@UEBAMM@Z.c)
 *     ?IsInMotion@CNaturalAnimationScalarForceAdapter@@UEBA_NXZ @ 0x18028EF20 (-IsInMotion@CNaturalAnimationScalarForceAdapter@@UEBA_NXZ.c)
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIInteractionContextWrapper@@@WRL@Microsoft@@IEBAXXZ @ 0x1800A9EDC (-InternalAddRef@-$ComPtr@UIInteractionContextWrapper@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?InternalRelease@?$ComPtr@VCBrushRenderingGraph@@@WRL@Microsoft@@IEAAKXZ @ 0x1800AAF14 (-InternalRelease@-$ComPtr@VCBrushRenderingGraph@@@WRL@Microsoft@@IEAAKXZ.c)
 */

void __fastcall CNaturalAnimation::GetVector3Force(CNaturalAnimation *this, struct CVector3Force **a2)
{
  struct CVector3Force *v2; // rbx
  struct CVector3Force *v4; // [rsp+30h] [rbp+8h] BYREF

  v4 = (struct CVector3Force *)*((_QWORD *)this + 48);
  v2 = v4;
  Microsoft::WRL::ComPtr<IInteractionContextWrapper>::InternalAddRef((__int64 (__fastcall ****)(_QWORD))&v4);
  v4 = 0LL;
  *a2 = v2;
  Microsoft::WRL::ComPtr<CBrushRenderingGraph>::InternalRelease((__int64 *)&v4);
}
