/*
 * XREFs of wil::details::lambda_call__lambda_934a1d0f4d056113130076d2be65a98d___::_lambda_call__lambda_934a1d0f4d056113130076d2be65a98d___ @ 0x1800F994C
 * Callers:
 *     ?ConnectToRightSubmix@CStreamInstanceProxy@@UEAAJPEAUIAudioStreamInfo@@PEAUISubmixProxy@@H@Z @ 0x18006CDF0 (-ConnectToRightSubmix@CStreamInstanceProxy@@UEAAJPEAUIAudioStreamInfo@@PEAUISubmixProxy@@H@Z.c)
 * Callees:
 *     _lambda_934a1d0f4d056113130076d2be65a98d_::operator() @ 0x1800FA070 (_lambda_934a1d0f4d056113130076d2be65a98d_--operator().c)
 */

__int64 __fastcall wil::details::lambda_call__lambda_934a1d0f4d056113130076d2be65a98d___::_lambda_call__lambda_934a1d0f4d056113130076d2be65a98d___(
        __int64 a1)
{
  __int64 result; // rax

  if ( *(_BYTE *)(a1 + 24) )
  {
    *(_BYTE *)(a1 + 24) = 0;
    return lambda_934a1d0f4d056113130076d2be65a98d_::operator()();
  }
  return result;
}
