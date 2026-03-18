/*
 * XREFs of ??C?$checked_array_iterator@PEAVCExpressionValue@@@stdext@@QEBAPEAVCExpressionValue@@XZ @ 0x18028826C
 * Callers:
 *     ?reserve_region@?$vector_facade@VCExpressionValue@@V?$buffer_impl@VCExpressionValue@@$00$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAPEAVCExpressionValue@@_K0@Z @ 0x18010C534 (-reserve_region@-$vector_facade@VCExpressionValue@@V-$buffer_impl@VCExpressionValue@@$00$00Vlibe.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall stdext::checked_array_iterator<CExpressionValue *>::operator->(_QWORD *a1)
{
  unsigned __int64 v1; // rax

  if ( !*a1 || (v1 = a1[2], v1 >= a1[1]) )
    _invoke_watson(0LL, 0LL, 0LL, 0, 0LL);
  return *a1 + 72 * v1;
}
