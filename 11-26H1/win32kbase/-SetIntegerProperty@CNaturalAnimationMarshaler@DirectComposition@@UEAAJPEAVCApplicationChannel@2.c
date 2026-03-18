/*
 * XREFs of ?SetIntegerProperty@CNaturalAnimationMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@UDCOMPOSITION_PROPERTY_ID@@_JPEA_N@Z @ 0x140245360
 * Callers:
 *     <none>
 * Callees:
 *     ?SetIntegerProperty@CBaseExpressionMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@UDCOMPOSITION_PROPERTY_ID@@_JPEA_N@Z @ 0x1401BA610 (-SetIntegerProperty@CBaseExpressionMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@U.c)
 */

__int64 __fastcall DirectComposition::CNaturalAnimationMarshaler::SetIntegerProperty(
        _DWORD *a1,
        __int64 a2,
        int a3,
        unsigned __int64 a4,
        _BYTE *a5)
{
  __int64 result; // rax

  result = 0LL;
  *a5 = 0;
  if ( a3 != 19 )
  {
    if ( a3 != 29 )
      return DirectComposition::CBaseExpressionMarshaler::SetIntegerProperty((__int64)a1, a2, a3, a4, a5);
    if ( a4 <= 1 )
    {
      if ( a1[49] == (_DWORD)a4 )
        return result;
      a1[49] = a4;
      goto LABEL_11;
    }
    return 3221225485LL;
  }
  if ( a4 > 2 )
    return 3221225485LL;
  if ( a1[50] == (_DWORD)a4 )
    return result;
  a1[50] = a4;
LABEL_11:
  a1[4] |= 0x40000u;
  *a5 = 1;
  return result;
}
