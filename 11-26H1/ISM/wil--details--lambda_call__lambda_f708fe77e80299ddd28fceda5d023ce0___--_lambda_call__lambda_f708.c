/*
 * XREFs of wil::details::lambda_call__lambda_f708fe77e80299ddd28fceda5d023ce0___::_lambda_call__lambda_f708fe77e80299ddd28fceda5d023ce0___ @ 0x1800E66C0
 * Callers:
 *     _LampArrayDevice::ProcessLampState_::_1_::dtor$2 @ 0x1801DA207 (_LampArrayDevice--ProcessLampState_--_1_--dtor$2.c)
 * Callees:
 *     _lambda_f708fe77e80299ddd28fceda5d023ce0_::operator() @ 0x1800E6828 (_lambda_f708fe77e80299ddd28fceda5d023ce0_--operator().c)
 */

__int64 __fastcall wil::details::lambda_call__lambda_f708fe77e80299ddd28fceda5d023ce0___::_lambda_call__lambda_f708fe77e80299ddd28fceda5d023ce0___(
        __int64 a1)
{
  __int64 result; // rax

  if ( *(_BYTE *)(a1 + 8) )
  {
    *(_BYTE *)(a1 + 8) = 0;
    return lambda_f708fe77e80299ddd28fceda5d023ce0_::operator()(a1);
  }
  return result;
}
