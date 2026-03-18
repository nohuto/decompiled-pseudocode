/*
 * XREFs of ?IsExpressionValueValid@CBaseExpression@@AEAA_NPEBVCExpressionValue@@@Z @ 0x180080FE0
 * Callers:
 *     ?CalculateValue@CBaseExpression@@IEAAJPEAVCExpressionValueStack@@_KPEAUCalculateValueResult@@@Z @ 0x180080910 (-CalculateValue@CBaseExpression@@IEAAJPEAVCExpressionValueStack@@_KPEAUCalculateValueResult@@@Z.c)
 * Callees:
 *     <none>
 */

char __fastcall CBaseExpression::IsExpressionValueValid(CBaseExpression *this, const struct CExpressionValue *a2)
{
  int v2; // eax
  float v5; // xmm0_4

  v2 = *((_DWORD *)a2 + 16);
  if ( v2 == 17 )
    return 1;
  if ( v2 != 35 )
  {
    switch ( v2 )
    {
      case 11:
        return 1;
      case 18:
      case 42:
        return _finite(*(float *)a2) != 0;
      case 52:
        if ( !_finite(*(float *)a2) || !_finite(*((float *)a2 + 1)) )
          return 0;
        v5 = *((float *)a2 + 2);
        return _finite(v5) != 0;
      case 69:
      case 70:
      case 71:
        if ( !_finite(*(float *)a2) || !_finite(*((float *)a2 + 1)) || !_finite(*((float *)a2 + 2)) )
          return 0;
        v5 = *((float *)a2 + 3);
        return _finite(v5) != 0;
      case 104:
        if ( !_finite(*(float *)a2)
          || !_finite(*((float *)a2 + 1))
          || !_finite(*((float *)a2 + 2))
          || !_finite(*((float *)a2 + 3))
          || !_finite(*((float *)a2 + 4)) )
        {
          return 0;
        }
        v5 = *((float *)a2 + 4);
        return _finite(v5) != 0;
      case 265:
        if ( !_finite(*(float *)a2)
          || !_finite(*((float *)a2 + 1))
          || !_finite(*((float *)a2 + 2))
          || !_finite(*((float *)a2 + 3))
          || !_finite(*((float *)a2 + 4))
          || !_finite(*((float *)a2 + 5))
          || !_finite(*((float *)a2 + 6))
          || !_finite(*((float *)a2 + 7))
          || !_finite(*((float *)a2 + 8))
          || !_finite(*((float *)a2 + 9))
          || !_finite(*((float *)a2 + 10))
          || !_finite(*((float *)a2 + 11))
          || !_finite(*((float *)a2 + 12))
          || !_finite(*((float *)a2 + 13))
          || !_finite(*((float *)a2 + 14)) )
        {
          return 0;
        }
        v5 = *((float *)a2 + 15);
        return _finite(v5) != 0;
      default:
        return 0;
    }
  }
  if ( !_finite(*(float *)a2) )
    return 0;
  v5 = *((float *)a2 + 1);
  return _finite(v5) != 0;
}
