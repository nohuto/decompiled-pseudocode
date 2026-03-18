/*
 * XREFs of _lambda_eeef72b4b24c806838652c8dfe68f68f_::operator() @ 0x1402C0E98
 * Callers:
 *     WindowMargins::CWindowMarginProp::GetOverrideMargins @ 0x1402C0FD8 (WindowMargins--CWindowMarginProp--GetOverrideMargins.c)
 * Callees:
 *     <none>
 */

__int16 __fastcall lambda_eeef72b4b24c806838652c8dfe68f68f_::operator()(
        __int64 a1,
        __int16 *a2,
        __int16 *a3,
        __int16 a4)
{
  __int16 v4; // r10
  int v5; // r9d
  __int16 result; // ax

  v4 = 0;
  if ( a4 >= 0 )
    v4 = a4;
  v5 = *a2;
  result = v4;
  if ( v5 + *a3 > v4 )
  {
    result = v4;
    if ( (__int16)v5 < v4 )
      result = *a2;
    *a2 = result;
    *a3 = v4 - result;
  }
  return result;
}
