/*
 * XREFs of ??$move@V?$move_iterator@PEAVCExpressionValue@@@std@@V?$checked_array_iterator@PEAVCExpressionValue@@@stdext@@@std@@YA?AV?$checked_array_iterator@PEAVCExpressionValue@@@stdext@@V?$move_iterator@PEAVCExpressionValue@@@0@0V12@@Z @ 0x180288074
 * Callers:
 *     ?clear_region@?$vector_facade@VCExpressionValue@@V?$buffer_impl@VCExpressionValue@@$00$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAX_K0@Z @ 0x18010BBE4 (-clear_region@-$vector_facade@VCExpressionValue@@V-$buffer_impl@VCExpressionValue@@$00$00Vlibera.c)
 * Callees:
 *     ??4CExpressionValue@@QEAAAEAV0@$$QEAV0@@Z @ 0x18021B54C (--4CExpressionValue@@QEAAAEAV0@$$QEAV0@@Z.c)
 *     ??$_Get_unwrapped_n@AEAV?$checked_array_iterator@PEAVCExpressionValue@@@stdext@@_J@std@@YA?A_TAEAV?$checked_array_iterator@PEAVCExpressionValue@@@stdext@@_J@Z @ 0x18021D594 (--$_Get_unwrapped_n@AEAV-$checked_array_iterator@PEAVCExpressionValue@@@stdext@@_J@std@@YA-A_TAE.c)
 */

__int64 __fastcall std::move<std::move_iterator<CExpressionValue *>,stdext::checked_array_iterator<CExpressionValue *>>(
        __int64 a1,
        int *a2,
        int *a3,
        _QWORD *a4)
{
  int *v4; // rbx
  CExpressionValue *v8; // rsi
  __int64 v9; // r8
  const char *v10; // r9
  __int64 result; // rax
  __int64 v12; // xmm1_8

  v4 = a2;
  v8 = (CExpressionValue *)std::_Get_unwrapped_n<stdext::checked_array_iterator<CExpressionValue *> &,__int64>(
                             a4,
                             0x8E38E38E38E38E39uLL * (((char *)a3 - (char *)a2) >> 3));
  while ( v4 != a3 )
  {
    CExpressionValue::operator=(v8, v4, v9, v10);
    v8 = (CExpressionValue *)((char *)v8 + 72);
    v4 += 18;
  }
  result = a1;
  a4[2] = 0x8E38E38E38E38E39uLL * (((__int64)v8 - *a4) >> 3);
  v12 = a4[2];
  *(_OWORD *)a1 = *(_OWORD *)a4;
  *(_QWORD *)(a1 + 16) = v12;
  return result;
}
