/*
 * XREFs of ??1?$ComPtr@VCProjectionBorderVisual@@@WRL@Microsoft@@QEAA@XZ @ 0x18006A34C
 * Callers:
 *     _CAnimationEngine::OnTick_::_1_::dtor$1 @ 0x1800E72B8 (_CAnimationEngine--OnTick_--_1_--dtor$1.c)
 *     _CAnimationEngine::StartAnimations_::_1_::dtor$0 @ 0x1800E7B7A (_CAnimationEngine--StartAnimations_--_1_--dtor$0.c)
 *     _CAnimationEngine::StopAnimations_::_1_::dtor$0 @ 0x1800E7D6B (_CAnimationEngine--StopAnimations_--_1_--dtor$0.c)
 *     _CCaptureManager::_AddProjectionBorderForDisplay_::_1_::dtor$1 @ 0x1800E8E74 (_CCaptureManager--_AddProjectionBorderForDisplay_--_1_--dtor$1.c)
 * Callees:
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x18001BCE0 (-Release@CBaseObject@@QEAAKXZ.c)
 */

CBaseObject *__fastcall Microsoft::WRL::ComPtr<CProjectionBorderVisual>::~ComPtr<CProjectionBorderVisual>(
        CBaseObject **a1)
{
  CBaseObject *result; // rax

  result = *a1;
  if ( *a1 )
  {
    *a1 = 0LL;
    return (CBaseObject *)CBaseObject::Release(result);
  }
  return result;
}
