/*
 * XREFs of ??$_Get_unwrapped_n@AEAV?$checked_array_iterator@PEAVCExpressionValue@@@stdext@@_J@std@@YA?A_TAEAV?$checked_array_iterator@PEAVCExpressionValue@@@stdext@@_J@Z @ 0x18021D594
 * Callers:
 *     ??$move@V?$move_iterator@PEAVCExpressionValue@@@std@@V?$checked_array_iterator@PEAVCExpressionValue@@@stdext@@@std@@YA?AV?$checked_array_iterator@PEAVCExpressionValue@@@stdext@@V?$move_iterator@PEAVCExpressionValue@@@0@0V12@@Z @ 0x180288074 (--$move@V-$move_iterator@PEAVCExpressionValue@@@std@@V-$checked_array_iterator@PEAVCExpressionVa.c)
 *     ??$move_backward@V?$move_iterator@PEAVCExpressionValue@@@std@@V?$checked_array_iterator@PEAVCExpressionValue@@@stdext@@@std@@YA?AV?$checked_array_iterator@PEAVCExpressionValue@@@stdext@@V?$move_iterator@PEAVCExpressionValue@@@0@0V12@@Z @ 0x18028811C (--$move_backward@V-$move_iterator@PEAVCExpressionValue@@@std@@V-$checked_array_iterator@PEAVCExp.c)
 *     ??$uninitialized_move@V?$move_iterator@PEAVCExpressionValue@@@std@@V?$checked_array_iterator@PEAVCExpressionValue@@@stdext@@@std@@YA?AV?$checked_array_iterator@PEAVCExpressionValue@@@stdext@@V?$move_iterator@PEAVCExpressionValue@@@0@0V12@@Z @ 0x1802881D0 (--$uninitialized_move@V-$move_iterator@PEAVCExpressionValue@@@std@@V-$checked_array_iterator@PEA.c)
 * Callees:
 *     ?_Verify_offset@?$checked_array_iterator@PEAD@stdext@@QEBAX_J@Z @ 0x18000A774 (-_Verify_offset@-$checked_array_iterator@PEAD@stdext@@QEBAX_J@Z.c)
 */

__int64 __fastcall std::_Get_unwrapped_n<stdext::checked_array_iterator<CExpressionValue *> &,__int64>(
        _QWORD *a1,
        __int64 a2)
{
  stdext::checked_array_iterator<char *>::_Verify_offset((__int64)a1, a2);
  return *a1 + 72LL * a1[2];
}
