/*
 * XREFs of ?GetOwner@CNaturalAnimationScalarForceAdapter@@AEBAPEAVCNaturalAnimation@@XZ @ 0x18028EE88
 * Callers:
 *     ?GetCurrentState@CNaturalAnimationScalarForceAdapter@@UEBA?BUIntegrationState@@XZ @ 0x18028ED40 (-GetCurrentState@CNaturalAnimationScalarForceAdapter@@UEBA-BUIntegrationState@@XZ.c)
 *     ?GetFinalValue@CNaturalAnimationScalarForceAdapter@@UEBAMM@Z @ 0x18028EDF0 (-GetFinalValue@CNaturalAnimationScalarForceAdapter@@UEBAMM@Z.c)
 *     ?IsInMotion@CNaturalAnimationScalarForceAdapter@@UEBA_NXZ @ 0x18028EF20 (-IsInMotion@CNaturalAnimationScalarForceAdapter@@UEBA_NXZ.c)
 *     ?Update@CNaturalAnimationScalarForceAdapter@@UEAAMMPEAVCExpressionValueStack@@@Z @ 0x18028EFB0 (-Update@CNaturalAnimationScalarForceAdapter@@UEAAMMPEAVCExpressionValueStack@@@Z.c)
 * Callees:
 *     ?CanGetTargetResource@CResourceWeakRef@@KA_NXZ @ 0x18013A9B0 (-CanGetTargetResource@CResourceWeakRef@@KA_NXZ.c)
 *     ModuleFailFastForHRESULT @ 0x180208768 (ModuleFailFastForHRESULT.c)
 */

struct CNaturalAnimation *__fastcall CNaturalAnimationScalarForceAdapter::GetOwner(
        CNaturalAnimationScalarForceAdapter *this)
{
  __int64 v1; // rbx
  void *retaddr; // [rsp+28h] [rbp+0h]

  v1 = *((_QWORD *)this + 4);
  if ( !v1 )
    return 0LL;
  if ( !CResourceWeakRef::CanGetTargetResource() )
    ModuleFailFastForHRESULT(-2003304313, retaddr);
  return *(struct CNaturalAnimation **)(v1 + 64);
}
