/*
 * XREFs of _CManipulationContext::OnVisualPropertyChange_::_15_::_lambda_1_::operator() @ 0x180226D10
 * Callers:
 *     ?OnVisualPropertyChange@CManipulationContext@@SAXPEAVCVisual@@PEAVCDesktopTree@@@Z @ 0x1800A8060 (-OnVisualPropertyChange@CManipulationContext@@SAXPEAVCVisual@@PEAVCDesktopTree@@@Z.c)
 * Callees:
 *     ?GetInputHandle@CInteraction@@QEBAPEAXXZ @ 0x180097850 (-GetInputHandle@CInteraction@@QEBAPEAXXZ.c)
 */

void __fastcall CManipulationContext::OnVisualPropertyChange_::_15_::_lambda_1_::operator()(
        CInteraction ***a1,
        _QWORD *a2,
        int a3)
{
  CInteraction ***v3; // r9
  _QWORD *InputHandle; // rax
  _QWORD *v5; // rdx

  v3 = a1;
  if ( !*a2 )
  {
    if ( !a3 || (InputHandle = CInteraction::GetInputHandle(**a1), (*v5 = InputHandle) == 0LL) )
      *(_BYTE *)v3[1] = 0;
  }
}
