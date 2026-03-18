/*
 * XREFs of ??_ECExpressionForce@@EEAAPEAXI@Z @ 0x18028E830
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@VCConditionalExpression@@@WRL@Microsoft@@IEAAKXZ @ 0x180050020 (-InternalRelease@-$ComPtr@VCConditionalExpression@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??3@YAXPEAX_K@Z @ 0x180220694 (--3@YAXPEAX_K@Z.c)
 */

CExpressionForce *__fastcall CExpressionForce::`vector deleting destructor'(CExpressionForce *this, char a2)
{
  Microsoft::WRL::ComPtr<CConditionalExpression>::InternalRelease((__int64 *)this + 12);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
