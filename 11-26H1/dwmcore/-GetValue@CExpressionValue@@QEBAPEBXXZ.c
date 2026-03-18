/*
 * XREFs of ?GetValue@CExpressionValue@@QEBAPEBXXZ @ 0x18016B5A0
 * Callers:
 *     ?LogSetOutputValue@CBaseExpression@@AEAAXXZ @ 0x18016ADE0 (-LogSetOutputValue@CBaseExpression@@AEAAXXZ.c)
 *     ?LogCacheAccess@CExpression@@AEBAX_NIPEAVCExpressionValue@@@Z @ 0x18026ED54 (-LogCacheAccess@CExpression@@AEBAX_NIPEAVCExpressionValue@@@Z.c)
 * Callees:
 *     <none>
 */

CExpressionValue *__fastcall CExpressionValue::GetValue(CExpressionValue *this)
{
  if ( *((_DWORD *)this + 16) == 11 )
    return *(CExpressionValue **)this;
  else
    return this;
}
