/*
 * XREFs of wil::details::lambda_call__lambda_1f5796afe4506c09e96203cfbd7509e5___::_lambda_call__lambda_1f5796afe4506c09e96203cfbd7509e5___ @ 0x1800C42D8
 * Callers:
 *     _CAudioResourceManager::RetryGetSaDeviceForExclusive_::_1_::dtor$2 @ 0x18016815F (_CAudioResourceManager--RetryGetSaDeviceForExclusive_--_1_--dtor$2.c)
 * Callees:
 *     _lambda_1f5796afe4506c09e96203cfbd7509e5_::operator() @ 0x1800C4548 (_lambda_1f5796afe4506c09e96203cfbd7509e5_--operator().c)
 */

__int64 __fastcall wil::details::lambda_call__lambda_1f5796afe4506c09e96203cfbd7509e5___::_lambda_call__lambda_1f5796afe4506c09e96203cfbd7509e5___(
        __int64 a1)
{
  __int64 result; // rax

  if ( *(_BYTE *)(a1 + 8) )
  {
    *(_BYTE *)(a1 + 8) = 0;
    return lambda_1f5796afe4506c09e96203cfbd7509e5_::operator()();
  }
  return result;
}
