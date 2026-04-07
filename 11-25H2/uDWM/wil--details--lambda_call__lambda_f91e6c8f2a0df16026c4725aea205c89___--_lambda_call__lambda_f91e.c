/*
 * XREFs of wil::details::lambda_call__lambda_f91e6c8f2a0df16026c4725aea205c89___::_lambda_call__lambda_f91e6c8f2a0df16026c4725aea205c89___ @ 0x1800DD8A0
 * Callers:
 *     _winrt::Udwm::Transitions::implementation::TransitionState::TransferJointResizeVisuals_::_1_::dtor$0 @ 0x1800ED865 (_winrt--Udwm--Transitions--implementation--TransitionState--TransferJointResizeVisu_ea_1800ED865.c)
 *     _winrt::Udwm::Transitions::implementation::TransitionState::TransferScreenVisualLive_::_1_::dtor$0 @ 0x1800ED8DD (_winrt--Udwm--Transitions--implementation--TransitionState--TransferScreenVisualLiv_ea_1800ED8DD.c)
 *     _winrt::Udwm::Transitions::implementation::TransitionState::TransferWindowVisuals_::_1_::dtor$0 @ 0x1800ED8EF (_winrt--Udwm--Transitions--implementation--TransitionState--TransferWindowVisuals_--_1_--dtor$0.c)
 * Callees:
 *     ?Complete@TransitionState@implementation@Transitions@Udwm@winrt@@QEAAXXZ @ 0x180086E2C (-Complete@TransitionState@implementation@Transitions@Udwm@winrt@@QEAAXXZ.c)
 */

void __fastcall wil::details::lambda_call__lambda_f91e6c8f2a0df16026c4725aea205c89___::_lambda_call__lambda_f91e6c8f2a0df16026c4725aea205c89___(
        __int64 a1)
{
  if ( *(_BYTE *)(a1 + 8) )
  {
    *(_BYTE *)(a1 + 8) = 0;
    winrt::Udwm::Transitions::implementation::TransitionState::Complete(*(winrt::Udwm::Transitions::implementation::TransitionState **)a1);
  }
}
