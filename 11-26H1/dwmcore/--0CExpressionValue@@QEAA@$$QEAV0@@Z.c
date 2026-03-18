/*
 * XREFs of ??0CExpressionValue@@QEAA@$$QEAV0@@Z @ 0x1801DEB80
 * Callers:
 *     ?reserve_region@?$vector_facade@VCExpressionValue@@V?$buffer_impl@VCExpressionValue@@$00$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAPEAVCExpressionValue@@_K0@Z @ 0x18010C534 (-reserve_region@-$vector_facade@VCExpressionValue@@V-$buffer_impl@VCExpressionValue@@$00$00Vlibe.c)
 *     ??$_Uninitialized_move_unchecked@V?$move_iterator@PEAVCExpressionValue@@@std@@PEAVCExpressionValue@@@std@@YAPEAVCExpressionValue@@V?$move_iterator@PEAVCExpressionValue@@@0@V20@PEAV1@@Z @ 0x180288028 (--$_Uninitialized_move_unchecked@V-$move_iterator@PEAVCExpressionValue@@@std@@PEAVCExpressionVal.c)
 * Callees:
 *     ?SetValue@CExpressionValue@@QEAAXW4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z @ 0x180049AB0 (-SetValue@CExpressionValue@@QEAAXW4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z.c)
 */

__int64 __fastcall CExpressionValue::CExpressionValue(__int64 a1, int *a2, __int64 a3, const char *a4)
{
  *(_DWORD *)(a1 + 64) = 0;
  if ( a2[16] == 11 )
  {
    *(_DWORD *)(a1 + 64) = 11;
    *(_QWORD *)a1 = *(_QWORD *)a2;
    a2[16] = 0;
  }
  else
  {
    CExpressionValue::SetValue((int **)a1, a2[16], a2, a4);
  }
  return a1;
}
