/*
 * XREFs of CMultitaskingViewTaskCallback__lambda_83256061826219130c74760726d0f103___::_CMultitaskingViewTaskCallback__lambda_83256061826219130c74760726d0f103___ @ 0x1805BC9C0
 * Callers:
 *     CMultitaskingViewTaskCallback__lambda_83256061826219130c74760726d0f103___::_scalar_deleting_destructor_ @ 0x1805BCAF0 (CMultitaskingViewTaskCallback__lambda_83256061826219130c74760726d0f103___--_scalar_deleting_dest.c)
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x1800373AC (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 */

__int64 __fastcall CMultitaskingViewTaskCallback__lambda_83256061826219130c74760726d0f103___::_CMultitaskingViewTaskCallback__lambda_83256061826219130c74760726d0f103___(
        __int64 a1)
{
  std::_Ref_count_base *v2; // rcx

  v2 = *(std::_Ref_count_base **)(a1 + 56);
  if ( v2 )
    std::_Ref_count_base::_Decref(v2);
  *(_DWORD *)(a1 + 44) = -1073741823;
  return Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,0,Microsoft::WRL::Details::ImplementsMarker<Microsoft::WRL::FtmBase>,IImmersiveApplicationTransitionHelper>::~ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,0,Microsoft::WRL::Details::ImplementsMarker<Microsoft::WRL::FtmBase>,IImmersiveApplicationTransitionHelper>(a1);
}
