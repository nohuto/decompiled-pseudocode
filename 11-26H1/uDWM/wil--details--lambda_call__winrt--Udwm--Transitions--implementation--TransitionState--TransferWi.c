/*
 * XREFs of wil::details::lambda_call__winrt::Udwm::Transitions::implementation::TransitionState::TransferWindowVisuals_::_2_::_lambda_1___::_lambda_call__winrt::Udwm::Transitions::implementation::TransitionState::TransferWindowVisuals_::_2_::_lambda_1___ @ 0x1800DA610
 * Callers:
 *     _winrt::Udwm::Transitions::implementation::TransitionState::TransferJointResizeVisuals_::_1_::dtor$0 @ 0x1800E97FE (_winrt--Udwm--Transitions--implementation--TransitionState--TransferJointResizeVisu_ea_1800E97FE.c)
 *     _winrt::Udwm::Transitions::implementation::TransitionState::TransferScreenVisual_::_1_::dtor$0 @ 0x1800E9876 (_winrt--Udwm--Transitions--implementation--TransitionState--TransferScreenVisual_--_1_--dtor$0.c)
 *     _winrt::Udwm::Transitions::implementation::TransitionState::TransferScreenVisualLive_::_1_::dtor$0 @ 0x1800E989A (_winrt--Udwm--Transitions--implementation--TransitionState--TransferScreenVisualLiv_ea_1800E989A.c)
 *     _winrt::Udwm::Transitions::implementation::TransitionState::TransferWindowVisuals_::_1_::dtor$0 @ 0x1800E98AC (_winrt--Udwm--Transitions--implementation--TransitionState--TransferWindowVisuals_--_1_--dtor$0.c)
 * Callees:
 *     ?Complete@TransitionState@implementation@Transitions@Udwm@winrt@@QEAAXXZ @ 0x180087E70 (-Complete@TransitionState@implementation@Transitions@Udwm@winrt@@QEAAXXZ.c)
 */

void __fastcall wil::details::lambda_call__winrt::Udwm::Transitions::implementation::TransitionState::TransferWindowVisuals_::_2_::_lambda_1___::_lambda_call__winrt::Udwm::Transitions::implementation::TransitionState::TransferWindowVisuals_::_2_::_lambda_1___(
        __int64 a1)
{
  if ( *(_BYTE *)(a1 + 8) )
  {
    *(_BYTE *)(a1 + 8) = 0;
    winrt::Udwm::Transitions::implementation::TransitionState::Complete(*(winrt::Udwm::Transitions::implementation::TransitionState **)a1);
  }
}
