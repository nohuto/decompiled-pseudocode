/*
 * XREFs of ??$uninitialized_move@V?$move_iterator@PEAVCExpressionValue@@@std@@V?$checked_array_iterator@PEAVCExpressionValue@@@stdext@@@std@@YA?AV?$checked_array_iterator@PEAVCExpressionValue@@@stdext@@V?$move_iterator@PEAVCExpressionValue@@@0@0V12@@Z @ 0x1802881D0
 * Callers:
 *     ?ensure_extra_capacity@?$buffer_impl@VCExpressionValue@@$00$00Vliberal_expansion_policy@detail@@@detail@@QEAAX_K@Z @ 0x18010C69C (-ensure_extra_capacity@-$buffer_impl@VCExpressionValue@@$00$00Vliberal_expansion_policy@detail@@.c)
 * Callees:
 *     ??$_Get_unwrapped_n@AEAV?$checked_array_iterator@PEAVCExpressionValue@@@stdext@@_J@std@@YA?A_TAEAV?$checked_array_iterator@PEAVCExpressionValue@@@stdext@@_J@Z @ 0x18021D594 (--$_Get_unwrapped_n@AEAV-$checked_array_iterator@PEAVCExpressionValue@@@stdext@@_J@std@@YA-A_TAE.c)
 *     ??$_Uninitialized_move_unchecked@V?$move_iterator@PEAVCExpressionValue@@@std@@PEAVCExpressionValue@@@std@@YAPEAVCExpressionValue@@V?$move_iterator@PEAVCExpressionValue@@@0@V20@PEAV1@@Z @ 0x180288028 (--$_Uninitialized_move_unchecked@V-$move_iterator@PEAVCExpressionValue@@@std@@PEAVCExpressionVal.c)
 */

__int64 __fastcall std::uninitialized_move<std::move_iterator<CExpressionValue *>,stdext::checked_array_iterator<CExpressionValue *>>(
        __int64 a1,
        int *a2,
        int *a3,
        _QWORD *a4)
{
  __int64 v8; // rax
  const char *v9; // r9
  __int64 result; // rax
  __int64 v11; // xmm1_8

  v8 = std::_Get_unwrapped_n<stdext::checked_array_iterator<CExpressionValue *> &,__int64>(
         a4,
         0x8E38E38E38E38E39uLL * (((char *)a3 - (char *)a2) >> 3));
  a4[2] = 0x8E38E38E38E38E39uLL
        * ((std::_Uninitialized_move_unchecked<std::move_iterator<CExpressionValue *>,CExpressionValue *>(
              a2,
              a3,
              v8,
              v9)
          - *a4) >> 3);
  result = a1;
  v11 = a4[2];
  *(_OWORD *)a1 = *(_OWORD *)a4;
  *(_QWORD *)(a1 + 16) = v11;
  return result;
}
