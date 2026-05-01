/*
 * XREFs of wil::details::lambda_call__lambda_49f0d603c537ac1ec5e9185e8119d3f7___::_lambda_call__lambda_49f0d603c537ac1ec5e9185e8119d3f7___ @ 0x180438D90
 * Callers:
 *     _UwpWindowWrapperBase::RequestCloseAsync_::_1_::dtor$2 @ 0x1806EBFF3 (_UwpWindowWrapperBase--RequestCloseAsync_--_1_--dtor$2.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall wil::details::lambda_call__lambda_49f0d603c537ac1ec5e9185e8119d3f7___::_lambda_call__lambda_49f0d603c537ac1ec5e9185e8119d3f7___(
        __int64 *a1)
{
  __int64 result; // rax

  if ( *((_BYTE *)a1 + 8) )
  {
    result = *a1;
    *((_BYTE *)a1 + 8) = 0;
    *(_BYTE *)(result + 549) = 0;
  }
  return result;
}
