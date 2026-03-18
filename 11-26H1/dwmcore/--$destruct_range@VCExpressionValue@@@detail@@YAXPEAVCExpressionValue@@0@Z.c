/*
 * XREFs of ??$destruct_range@VCExpressionValue@@@detail@@YAXPEAVCExpressionValue@@0@Z @ 0x1801B433C
 * Callers:
 *     ?ensure_extra_capacity@?$buffer_impl@VCExpressionValue@@$00$00Vliberal_expansion_policy@detail@@@detail@@QEAAX_K@Z @ 0x18010C69C (-ensure_extra_capacity@-$buffer_impl@VCExpressionValue@@$00$00Vliberal_expansion_policy@detail@@.c)
 * Callees:
 *     ?DestroyCurrent@CExpressionValue@@AEAAXXZ @ 0x18004CE40 (-DestroyCurrent@CExpressionValue@@AEAAXXZ.c)
 */

void __fastcall detail::destruct_range<CExpressionValue>(CExpressionValue *this, CExpressionValue *a2)
{
  CExpressionValue *v3; // rbx

  if ( this != a2 )
  {
    v3 = this;
    do
    {
      CExpressionValue::DestroyCurrent(v3);
      v3 = (CExpressionValue *)((char *)v3 + 72);
    }
    while ( v3 != a2 );
  }
}
