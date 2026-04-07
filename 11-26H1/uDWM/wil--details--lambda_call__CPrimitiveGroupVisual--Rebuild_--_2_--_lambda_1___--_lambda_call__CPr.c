/*
 * XREFs of wil::details::lambda_call__CPrimitiveGroupVisual::Rebuild_::_2_::_lambda_1___::_lambda_call__CPrimitiveGroupVisual::Rebuild_::_2_::_lambda_1___ @ 0x18008D8EC
 * Callers:
 *     _CPrimitiveGroupVisual::Rebuild_::_1_::dtor$1 @ 0x1800E7C23 (_CPrimitiveGroupVisual--Rebuild_--_1_--dtor$1.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall wil::details::lambda_call__CPrimitiveGroupVisual::Rebuild_::_2_::_lambda_1___::_lambda_call__CPrimitiveGroupVisual::Rebuild_::_2_::_lambda_1___(
        __int64 *a1)
{
  __int64 result; // rax

  if ( *((_BYTE *)a1 + 8) )
  {
    result = *a1;
    *((_BYTE *)a1 + 8) = 0;
    *(_BYTE *)(result + 257) = 0;
  }
  return result;
}
