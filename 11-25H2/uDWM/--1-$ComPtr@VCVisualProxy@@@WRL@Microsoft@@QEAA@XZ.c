/*
 * XREFs of ??1?$ComPtr@VCVisualProxy@@@WRL@Microsoft@@QEAA@XZ @ 0x180079E50
 * Callers:
 *     _CAnimationEngine::OnTick_::_1_::dtor$1 @ 0x1800EB294 (_CAnimationEngine--OnTick_--_1_--dtor$1.c)
 *     _CClientArea::CloneVisualTree_::_1_::dtor$0 @ 0x1800EB5D9 (_CClientArea--CloneVisualTree_--_1_--dtor$0.c)
 *     _CBitmapSource::Create_::_1_::dtor$1 @ 0x1800EB894 (_CBitmapSource--Create_--_1_--dtor$1.c)
 *     _CAnimationEngine::StartAnimations_::_1_::dtor$0 @ 0x1800EBC35 (_CAnimationEngine--StartAnimations_--_1_--dtor$0.c)
 *     _CAnimationEngine::StopAnimations_::_1_::dtor$0 @ 0x1800EC210 (_CAnimationEngine--StopAnimations_--_1_--dtor$0.c)
 * Callees:
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x1800086B0 (-Release@CBaseObject@@QEAAKXZ.c)
 */

CBaseObject *__fastcall Microsoft::WRL::ComPtr<CVisualProxy>::~ComPtr<CVisualProxy>(CBaseObject **a1)
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
